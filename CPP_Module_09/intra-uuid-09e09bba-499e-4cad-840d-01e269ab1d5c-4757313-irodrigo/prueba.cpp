#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    struct termios oldTerm, newTerm;
    tcgetattr(STDIN_FILENO, &oldTerm);
    newTerm = oldTerm;
    newTerm.c_lflag &= ~(ICANON | ECHO);  // Disable canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newTerm);

    int oldFlags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldFlags | O_NONBLOCK);


	float num = 0.0;
    char c;
    while (1) {
        int n = read(STDIN_FILENO, &c, 1);
        if (n > 0) {

            // Process the input character
            std::cout << "Received character: " << c << std::endl;
			break;
        }
        // Your other program logic here
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &oldTerm);
    fcntl(STDIN_FILENO, F_SETFL, oldFlags);

    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

template<typename K, typename V>
std::vector<std::pair<K, V>> mapToVector(const std::unordered_map<K, V> &map)
{
	std::vector<std::pair<K, V>> v;

	std::for_each(map.begin(), map.end(),
				[&v] (const std::pair<K, V> &entry) {
					v.push_back(entry);
				});

	return v;
}

int main()
{
	std::unordered_map<char,int> map = {
		{'A', 65}, {'B', 66}, {'C', 67}, {'D', 68}, {'E', 69}
	};

	std::vector<std::pair<char,int>> v = mapToVector(map);

	for (std::pair<char,int> p: v) {
		std::cout << '{' << p.first << ", " << p.second << '}' << std::endl;
	}

	return 0;
}

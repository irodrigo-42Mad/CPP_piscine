/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:52:32 by irodrigo          #+#    #+#             */
/*   Updated: 2023/09/07 10:19:00 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const std::string &mytokens)
{
   this->tokens = mytokens;
}

RPN::RPN(const RPN& elm)
{
   this->tokens = elm.tokens;
}

RPN& RPN::operator=(RPN const& elm)
{
   if (this != &elm)
       tokens = elm.tokens;
   return *this;
}

RPN::~RPN(){}

// public class functions
int RPN::evaluate() const
{
    std::stack<int> st;
    std::stringstream ss(tokens);
    std::string token;
    char tmp[25];
    int oper1 = 0;
    int oper2 = 0;
    int result = 0;

    // hay que cambiar stoi por el equivalente de cpp98
    while (getline(ss, token, ' '))
    {
        // if (std::isdigit(token[0]))
        // {
        //    st.push(std::stoi(token));
        //    std::cout << "pusheo el token: " << std::stoi(token) << std::endl;
        
        if (std::isdigit(token[0]) || (token.size() > 1 && std::isdigit(token[1])))
        {
            std::strcpy(tmp, &token[0]);
            st.push(std::atoi(tmp));
            //st.push(std::stoi(token));
        }
        else
        {
            if (st.size() < 2)
            {
                std::cout << "Invalid order or not enought operators" << std::endl;
                exit (-1);
                //throw RPNInvalidSize();
            }
            oper2 = st.top();
            st.pop();
            oper1 = st.top();
            st.pop();
            if(token[0] == '+')
                result = oper1 + oper2;
            else if(token[0] == '-')
                result = oper1 - oper2;
            else if(token[0] == '*')
                result = oper1 * oper2;
            else if(token[0] == '/')
            {
                if (oper2 == 0)
                {
                   std::cout << "Invalid division by zero" << std::endl;
                   exit (-1);
                   //throw RPNZeroException();
                }
                result = oper1 / oper2;
            }
            else
            {
                std::cout << "Invalid operator" << std::endl;
                exit(1);
                //break;
                //throw RPNException();
            }
            st.push(result);
        }
    }
    if (st.size() > 1)
    {
        std::cout << "Not enought operators or stack size incorrect" << std::endl;
        exit(1);
        //throw RPNSizeException();
    }
    return st.top();
}

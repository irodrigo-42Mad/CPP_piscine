/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:52:35 by irodrigo          #+#    #+#             */
/*   Updated: 2023/09/07 10:20:09 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef RPN_HPP
#define RPN_HPP

// #include <iostream>
// #include <string>
// #include <vector>

// class RPN
// {
// 	private:

// 	public:
// 		RPN();
// 		~RPN();
// };

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <exception>


class RPN{
   private:
       std::string tokens;
   public:
       RPN();
       RPN(const std::string& mytokens);
       RPN(const RPN& other);
       RPN &operator=(RPN const &);
       ~RPN();
    //    class RPNException : public std::exception {
    //     public:
    //         virtual const char* what(void) const throw()
    //         {
    //             return ("Invalid operator");
    //         }
    //    };
    //    class RPNInvalidSize : public std::exception {
    //     public:
    //         virtual const char* what(void) const throw()
    //         {
    //             return ("Invalid order or not enought operators");
    //         }
    //    };
    //    class RPNZeroException : public std::exception {
    //     public:
    //         virtual const char* what(void) const throw()
    //         {
    //             return ("Invalid division by zero");
    //         }
    //    };

    //    class RPNSizeException : public std::exception {
    //     public:
    //         virtual const char* what(void) const throw()
    //         {
    //             return ("Not enought operators or stack size incorrect");
    //         }
    //    };

       // public functions
       int evaluate() const;
};
std::string check_elm(std::string elm, int nbr);
#endif

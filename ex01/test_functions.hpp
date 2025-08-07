/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:48:04 by luifer            #+#    #+#             */
/*   Updated: 2025/08/07 23:52:33 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_FUNCTIONS_HPP
# define TEST_FUNCTIONS_HPP

#include <iostream>
#include <string>
#include <cstddef> // for size_t

template <typename T>
void increase(T &value){
    value++;
}

void decrease(T &value){
    value--;
}

void toUpper(std::string &str){
    for(size_t i = 0; i < std.length(); ++i){
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = std::toupper(static_cast<unsigned char>str[i]);
    }
}

#endif

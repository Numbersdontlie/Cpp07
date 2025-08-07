/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:54:22 by luifer            #+#    #+#             */
/*   Updated: 2025/08/07 23:59:25 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "test_functions.hpp"
#include <iostream>
#include <string>

int main() {
    int arr [] = {5, 8, 7, 12, 3, 10, 35};
    ::iter(arr, 7, ::increase<int>);
    for (int i = 0; i < 7; ++i){
        std::cout << arr[i] << "." << std::endl;
    }
    std::cout << std::endl;

    char arr2 [] = {'a', 'b', 'c', 'd', 'e'};
    ::iter(arr2, 5, ::increase<char>);
    for (int i = 0; i < 5; ++i){
        std::cout << arr2[i] << "." << std::endl;
    }
    std::cout << std::endl;

    std::string arr3 [] = {"hello", "world", "42", "school"};
    ::iter(arr3, 4, ::toUpper);
    for (int i = 0; i < 4; ++i){
        std::cout << arr3[i] << "." << std::endl;
    }
    std::cout << std::endl;
}
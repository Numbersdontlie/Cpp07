/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:10:52 by luifer            #+#    #+#             */
/*   Updated: 2025/08/08 23:44:24 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int main() {
    //Test 1
    Array<int> intArray(420);
    int *intPtr = new int[420];
    for(int i = 0; i < 420; ++i){
        const int value = i * 2;
        intArray[i] = value;
        intPtr[i] = value;
    }

    for(int i = 0; i < 420; i++){
        if(intArray[i] != intPtr[i]){
            std::cerr << "Error: values differs..." << std::endl;
            return(1);
        }
    }
    std::cout << "Test 1 passed: intArray and intPtr match" << std::endl;
    delete[] intPtr;

    //Test 2
    try{
        intArray[530] = 0;
    }
    catch(const std:;exception &e){
        std::cerr <<"Test 2 passed: " << e.what() << std::endl;
    }

    //Test 3
    Array<std::string> strArray(4);
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "42";
    strArray[3] = "School";
    Array<std::string> strArray2(4);
    strArray2[0] = "HELLO";
    strArray2[1] = "WORLD";
    strArray2[2] = "24";
    strArray2[3] = "SCHOOL";

    Array<std::string> test(strArray);
    for(int i = 0; i < 4; ++i){
        if(strArray[i] != test[i]){
            std::cerr << "Error: values differs..." << std::endl;
            return(1);
        }
    }
    std::cout << "Test 3 passed: strArray and test match" << std::endl;
    
    Array<std::string> test2 = strArray2;
    for(int i = 0; i < 4; i++){
        if(test2[i] != strArray2[i]){
            std::cerr << "Error: values differs..." << std::endl;
            return(1);
        }
    }
    std::cout << "Test 4 passed: strArray2 and test2 match" << std::endl;
    return(0);
}
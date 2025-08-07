/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:36:06 by luifer            #+#    #+#             */
/*   Updated: 2025/08/07 23:38:32 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main () {
    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "min(a, b): " << ::min(a, b) << std::endl;
    std::cout << "max(a, b): " << ::max(a, b) << std::endl;

    std::string c = "Chain1";
    std::string d = "Chain2";
    ::swap(c, d);
    std::cout << "c: " << c << ", d: " << d << std::endl;
    std::cout << "min(c, d): " << ::min(c, d) << std::endl;
    std::cout << "max(c, d): " << ::max(c, d) << std::endl;

    float e = 1.5f;
    float f = 2.5f;
    ::swap(e, f);
    std::cout << "e: " << e << ", f: " << f << std::endl;
    std::cout << "min(e, f): " << ::min(e, f) << std::endl;
    std::cout << "max(e, f): " << ::max(e, f) << std::endl;
    return(0);
}
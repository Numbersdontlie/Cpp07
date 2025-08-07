/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:41:14 by luifer            #+#    #+#             */
/*   Updated: 2025/08/07 23:46:37 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef> // for size_t
#include <iostream> // for std::cout, std::endl

template <typename T, typename F>
void iter(T *array, size_t length, F func){
    if(!array || !func || length == 0)
        return;
    for (size_t i = 0; i < length; ++i){
        func(array[i]);
    }
}

#endif
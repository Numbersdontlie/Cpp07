/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 00:08:39 by luifer            #+#    #+#             */
/*   Updated: 2025/08/08 19:10:31 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    private:
        T *ptr;
        unsigned int size;
    
    public:
        Array();
        Array(unsigned int size);
        Array(const Array<T> &other);
        Array<T> &operator=(const Array<T> &other);
        ~Array();

        //functions
        unsigned int getSize() const;

        //operator []
        T &operator[](unsigned int idx);

        //exceptions
        class OutLimits : public std::exception {
            public:
                const char *what() const throw() {
                    return "Index is out of limits";
                };
        }
};

#include "Array.tpp"

#endif
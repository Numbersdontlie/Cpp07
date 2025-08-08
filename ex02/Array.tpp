/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:57:56 by luifer            #+#    #+#             */
/*   Updated: 2025/08/08 19:09:28 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

//default constructor
template <typename T>
Array<T>::Array() : ptr(NULL), size(0) {}

//constructor with params
template <typename T>
Array<T>::Array(unsigned int size) : ptr(new T[size]()), size(size) {}

// copy operator
template <typename T>
Array<T>::Array(const Array<T> &other) : ptr(NULL), size(other.size) {
    if (this->size > 0) {
        this->ptr = new T[this->size];
        for (unsigned int i = 0; i < this->size; ++i) {
            this->ptr[i] = other.ptr[i];
        }
    }
}

//copy assign operator
template <typename T>
Array<T> &Array<T>::operator=(const Array &other){
    if (this != &other) {
        delete[] this->ptr; // free existing memory
        this->size = other.size;
        this->ptr = new T[this->size];
        for (unsigned int i = 0; i < this->size; ++i) {
            this->ptr[i] = other.ptr[i];
        }
    }
    return *this;
}

// destructor
template <typename T>
Array<T>::~Array() {
    delete[] this->ptr;
}

// getSize function
template <typename T>
unsigned int Array<T>::getSize() const {
    return this->size;
}

// operator []
T &Array<T>::operator[](unsigned int idx) {
    if(ptr == NULL || idx >= this->size)
        throw OutLimits();
    return this->ptr[idx];
}

#endif

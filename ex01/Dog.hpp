/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:18 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 15:32:32 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:
        Brain *br;
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& obj);
        ~Dog();
        Dog(std::string type);
        void makeSound() const;
};
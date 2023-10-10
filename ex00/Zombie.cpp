/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macair <macair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:31:02 by macair            #+#    #+#             */
/*   Updated: 2023/10/10 17:31:03 by macair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name <<": Braiiiiiiinnnzzz" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->_name <<": I'm dead" << std::endl;
}
void Zombie::randomChump(std::string name)
{
    Zombie *zombie = new Zombie(name);
    delete zombie;
}

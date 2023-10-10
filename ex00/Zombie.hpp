/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macair <macair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:31:08 by macair            #+#    #+#             */
/*   Updated: 2023/10/10 17:31:09 by macair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
class Zombie 
{
    private:
    std::string _name;
    public:
    Zombie(std::string name);
    ~Zombie();
    void randomChump(std::string name);
};

#endif
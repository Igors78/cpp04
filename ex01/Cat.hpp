/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:45:33 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/20 10:31:11 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public virtual Animal
{

public:
	Cat();
	Cat(Cat const &src);
	virtual ~Cat();

	Cat &operator=(Cat const &rhs);

	void makeSound() const;

private:
	Brain *_brain;
};

std::ostream &operator<<(std::ostream &o, Cat const &i);

#endif /* ************************************************************* CAT_H */
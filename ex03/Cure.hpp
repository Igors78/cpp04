/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:44:01 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/22 08:37:15 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(Cure const &src);
	~Cure();

	Cure &operator=(Cure const &rhs);

	Cure *clone() const;
};

#endif /* ************************************************************ CURE_H */
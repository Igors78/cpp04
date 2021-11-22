/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:58:06 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/22 08:37:01 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(Ice const &src);
	~Ice();

	Ice &operator=(Ice const &rhs);

	Ice *clone() const;
};

#endif /* ************************************************************* ICE_H */
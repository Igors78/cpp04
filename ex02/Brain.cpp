#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Brain copy called!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Brain const &i)
{
	(void)i;
	o << "Value is pointer to array of strings";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string *Brain::getIdeas()
{
	return (this->ideas);
}
/* ************************************************************************** */
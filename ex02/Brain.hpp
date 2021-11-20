#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{

public:
	Brain();
	Brain(Brain const &src);
	~Brain();

	Brain &operator=(Brain const &rhs);

	std::string *getIdeas();

protected:
	std::string ideas[100];
};

std::ostream &operator<<(std::ostream &o, Brain const &i);

#endif /* *********************************************************** BRAIN_H */
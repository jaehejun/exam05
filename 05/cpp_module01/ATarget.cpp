#include "ATarget.hpp"

ATarget::ATarget(const std::string &type) : type(type)
{
}

ATarget::~ATarget()
{
}

ATarget::ATarget(const ATarget &other) : type(other.type)
{
}

ATarget &ATarget::operator=(const ATarget &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

const std::string &ATarget::getType() const
{
	return type;
}

void ATarget::getHitBySpell(const ASpell &ASpell) const
{
	std::cout << type << " has been " << ASpell.getEffects() << "!" << std::endl;
}
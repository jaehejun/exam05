#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh()
{
}

Fwoosh::Fwoosh(const Fwoosh &other) : ASpell(other.name, other.effects)
{
}

Fwoosh &Fwoosh::operator=(const Fwoosh &other)
{
	if (this != &other)
	{
		name = other.name;
		effects = other.effects;
	}
	return *this;
}

ASpell *Fwoosh::clone() const
{
	return new Fwoosh(*this);
}
#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::~Polymorph()
{
}

Polymorph::Polymorph(const Polymorph &other) : ASpell(other.name, other.effects)
{
}

Polymorph &Polymorph::operator=(const Polymorph &other)
{
	if (this != &other)
	{
		name = other.name;
		effects = other.effects;
	}
	return *this;
}

ASpell *Polymorph::clone() const
{
	return new Polymorph(*this);
}
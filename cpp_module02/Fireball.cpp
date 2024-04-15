#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::~Fireball()
{
}

Fireball::Fireball(const Fireball &other) : ASpell(other.name, other.effects)
{
}

Fireball &Fireball::operator=(const Fireball &other)
{
	if (this != &other)
	{
		name = other.name;
		effects = other.effects;
	}
	return *this;
}

ASpell *Fireball::clone() const
{
	return new Fireball(*this);
}
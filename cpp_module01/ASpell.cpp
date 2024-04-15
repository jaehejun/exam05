#include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects) : name(name), effects(effects)
{
}

ASpell::~ASpell()
{
}

ASpell::ASpell(const ASpell &other) : name(other.name), effects(other.effects)
{
}

ASpell &ASpell::operator=(const ASpell &other)
{
	if (this != &other)
	{
		name = other.name;
		effects = other.effects;
	}
	return *this;
}

std::string ASpell::getName() const
{
	return name;
}

std::string ASpell::getEffects() const
{
	return effects;
}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
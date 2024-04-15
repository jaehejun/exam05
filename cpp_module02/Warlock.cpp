#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const
{
	return name;
}

const std::string &Warlock::getTitle() const
{
	return title;
}

void Warlock::setTitle(const std::string &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

// call those of the spell book

void Warlock::learnSpell(ASpell *spell)
{
	spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
	spellBook.forgetSpell(spellName);
}

//use the SpellBook to create the spell it's attempting to launch

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	ASpell *spell = spellBook.createSpell(spellName);
	if (spell)
	{
		spell->launch(target);
	}
}
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

void Warlock::learnSpell(ASpell *spell)
{
	for (std::vector<ASpell*>::iterator it = slot.begin(); it != slot.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
		{
			return ;
		}
	}
	slot.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spellName)
{
	for (std::vector<ASpell*>::iterator it = slot.begin(); it != slot.end(); it++)
	{
		if ((*it)->getName() == spellName)
		{
			delete *it;
			it = slot.erase(it);
			break ;
		}
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	for (std::vector<ASpell*>::iterator it = slot.begin(); it != slot.end(); it++)
	{
		if ((*it)->getName() == spellName)
		{
			(*it)->launch(target);
			break ;
		}
	}
}
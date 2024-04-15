#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
}

//copies a spell in the book
void SpellBook::learnSpell(ASpell *spell)
{
	for (std::vector<ASpell*>::iterator it = slot.begin(); it != slot.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			 return;
	}
	slot.push_back(spell->clone());
}

//deletes a spell from book except if it isn't there
void SpellBook::forgetSpell(std::string const &spell)
{
	for (std::vector<ASpell*>::iterator it = slot.begin(); it != slot.end(); it++)
	{
		if ((*it)->getName() == spell)
		{
			delete *it;
			it = slot.erase(it);
			break;
		}
	}
}

// create spell name (spell) and returns it
ASpell *SpellBook::createSpell(std::string const &spell)
{
	for (std::vector<ASpell*>::iterator it = slot.begin(); it != slot.end(); it++)
	{
		if ((*it)->getName() == spell)
			return (*it)->clone();
	}
	return NULL;
}
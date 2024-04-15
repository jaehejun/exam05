#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "SpellBook.hpp"
#include "ASpell.hpp"
#include <string>
#include <iostream>

class ASpell;
class SpellBook;

class Warlock
{
	private:
		std::string name;
		std::string title;
		SpellBook spellBook;

		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);

	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &title);
		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget &target);
};

#endif
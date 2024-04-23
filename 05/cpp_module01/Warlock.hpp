#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock
{
	private:
		std::vector<ASpell*> slot;
		std::string name;
		std::string title;

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
		void forgetSpell(const std::string &spellName);
		void launchSpell(const std::string &spellName, ATarget &ATarget);
};

#endif
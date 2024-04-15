#ifndef ASPELL_HPP
#define ASPELL_HPP

#include "ATarget.hpp"
#include <string>
#include <iostream>

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;

	public:
		ASpell(const std::string &name, const std::string &effects);
		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &other);
		virtual ~ASpell();

		std::string getName() const;
		std::string getEffects() const;

		virtual ASpell *clone() const = 0;
		void launch(const ATarget &target) const;
};

#endif
#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"
#include <string>
#include <iostream>

class ASpell;

class ATarget
{
	protected:
		std::string type;

	public:
		ATarget(const std::string &type);
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
		virtual ~ATarget();

		const std::string &getType() const;
		virtual ATarget *clone() const = 0;

		void getHitBySpell(const ASpell &spell) const;
};

#endif
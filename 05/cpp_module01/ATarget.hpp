#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string type;

	public:
		ATarget(const std::string &type);
		virtual ~ATarget();
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);

		const std::string &getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(const ASpell &ASpell) const;
};

#endif
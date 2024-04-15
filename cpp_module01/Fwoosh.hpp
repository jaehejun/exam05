#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell
{
	private:

	public:
		Fwoosh();
		virtual ~Fwoosh();
		Fwoosh(const Fwoosh &other);
		Fwoosh &operator=(const Fwoosh &other);

		virtual ASpell *clone() const;
};

#endif
#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell
{
	private:

	public:
		Polymorph();
		virtual ~Polymorph();
		Polymorph(const Polymorph &other);
		Polymorph &operator=(const Polymorph &other);

		virtual ASpell *clone() const;
};

#endif
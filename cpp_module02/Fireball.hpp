#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell
{
	private:

	public:
		Fireball();
		virtual ~Fireball();
		Fireball(const Fireball &other);
		Fireball &operator=(const Fireball &other);

		virtual ASpell *clone() const;
};

#endif
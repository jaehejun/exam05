#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
	private:

	public:
		Dummy();
		~Dummy();
		Dummy(const Dummy &other);
		Dummy &operator=(const Dummy &other);

		virtual ATarget *clone() const;

};

#endif
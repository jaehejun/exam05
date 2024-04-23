#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		virtual ~Dummy();
		Dummy(const Dummy &other);
		Dummy &operator=(const Dummy &other);

		virtual Dummy *clone() const;
};

#endif

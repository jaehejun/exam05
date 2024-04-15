#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy()
{
}

Dummy::Dummy(const Dummy &other) : ATarget(other.type)
{
}

Dummy &Dummy::operator=(const Dummy &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

ATarget *Dummy::clone() const
{
	return new Dummy(*this);
}

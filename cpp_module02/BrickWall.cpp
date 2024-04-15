#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuos Red-brick Wall")
{
}

BrickWall::~BrickWall()
{
}

BrickWall::BrickWall(const BrickWall &other) : ATarget(other.type)
{
}

BrickWall &BrickWall::operator=(const BrickWall &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

ATarget *BrickWall::clone() const
{
	return new BrickWall(*this);
}

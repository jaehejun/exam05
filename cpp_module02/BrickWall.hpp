#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"

class ATarget;

class BrickWall : public ATarget
{
	private:

	public:
		BrickWall();
		~BrickWall();
		BrickWall(const BrickWall &other);
		BrickWall &operator=(const BrickWall &other);

		virtual ATarget *clone() const;

};

#endif
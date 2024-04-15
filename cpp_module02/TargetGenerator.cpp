#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	for (std::vector<ATarget*>::iterator it = targets.begin(); it != targets.end(); it++)
	{
		if ((*it)->getType() == target->getType())
			return ;
	}
	targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
	for (std::vector<ATarget*>::iterator it = targets.begin(); it != targets.end(); it++)
	{
		if ((*it)->getType() == type)
		{
			delete *it;
			it = targets.erase(it);
			break ;
		}
	}
}

ATarget *TargetGenerator::createTarget(std::string const &target)
{
	for (std::vector<ATarget*>::iterator it = targets.begin(); it != targets.end(); it++)
	{
		if ((*it)->getType() == target)
			return (*it)->clone();
	}
	return NULL;
}
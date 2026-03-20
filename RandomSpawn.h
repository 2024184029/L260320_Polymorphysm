#pragma once
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

class ARandomSpawn : public AMonster
{
public:
	ARandomSpawn();
	~ARandomSpawn();

	class AWildBoar;
	class AGoblin;
	class ASlime;
};


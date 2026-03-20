#pragma once
#include <string>
#include "Monster.h"

class APlayer : public AMonster
{
public:
	APlayer();
	~APlayer();

	void Attack();
	void Collect();
	void Die();

	int Gold;
};


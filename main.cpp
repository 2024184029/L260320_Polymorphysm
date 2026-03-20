#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"
#include "RandomSpawn.h"

using namespace std;

// 10마리 안에서 랜덤으로 ?

int main()
{
	AWildBoar WildBoar[10];
	AGoblin Goblin[5];
	ASlime Slime[20];
	ARandomSpawn Spawn[10];

	for (int i = 0; i < 10; i++)
	{
		WildBoar[i].Move();
	}

	for (int i = 0; i < 5; i++)
	{
		Goblin[i].Move();
	}

	for (int i = 0; i < 20; i++)
	{
		Slime[i].Move();
	}

	//for (int i = 0; i < 10; i++)
	//{
	//	Spawn[i].
	//}


	return 0;
}
#pragma once
#include"BulletsSpawner.h"

class N_waySpawner:public BulletsSpawner
{
public:
	int numBullets;
	int baseAngle;
	int angleDiff;

private:
	//void Shoot() override;

};


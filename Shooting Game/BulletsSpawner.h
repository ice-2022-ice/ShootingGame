#pragma once
class BulletsSpawner
{
public:
	int speed;				//(速度)
	int angle;				//(角度)
	int acceleration;		//(速度の変化量)
	int angulVelocity;		//(角度の変化量)

private:
	void Shoot();

};


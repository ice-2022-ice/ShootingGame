#pragma once
#include "SphereCollider.h"

class CharaBase:public SphereCollider
{
private:
	int speed = 0;
	int image = 0;

public:
	CharaBase();
	static float playerX;
	static float playerY;


	virtual void Update();
	virtual void Draw()const;
	virtual void Hit();
};


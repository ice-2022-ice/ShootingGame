#pragma once
#include "SphereCollider.h"

class CharaBase:public SphereCollider
{
private:
	int speed = 0;
	int image = 0;

public:
	void Update();
	void Draw();
	void Hit();
};


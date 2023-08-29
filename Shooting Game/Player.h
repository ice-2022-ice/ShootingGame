#pragma once
#include "CharaBase.h"

class Player:public CharaBase
{
private:
	int stickX;				//�v���C���[��X���W
	int stickY;				//�v���C���[��Y���W
	int image;				//�v���C���[�摜
	int score = 0;			//�X�R�A
	int weapon = 0;			//����
	int speed;

public:
	static float playerX;
	static float playerY;

	Player();
	~Player();

	void Update () override;
	void Draw() const override;
	void Hit() override;
};


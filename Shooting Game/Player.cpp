#include "Player.h"
#include "InputKey.h"
#include "DxLib.h"
#include <math.h>

float Player::playerX;
float Player::playerY;

Player::Player()
{
	stickX;				//�v���C���[��X���W
	stickY;				//�v���C���[��Y���W
	image;				//�v���C���[�摜
	weapon = 0;			//����
	speed = 3;
}

Player::~Player()
{
}

void Player::Update()
{
	InputKey::Update();
	GetJoypadAnalogInput(&stickX, &stickY, DX_INPUT_KEY_PAD1);
	InputKey::GetJoyStickX(stickX);
	InputKey::GetJoyStickY(stickY);

	if (stickX < 0) 
	{
		if (playerX > 0)
			playerX -= 5;
	}
	if (stickX > 0)
	{
		if (playerX < 960)
			playerX += 5;
	}
	if (stickY < 0)
	{
		if (playerX > 0)
			playerX -= 5;
	}
	if (stickY > 0)
	{
		if (playerX > 960)
			playerX += 5;
	}
}

void Player::Draw() const
{
	DrawCircle(playerX, playerY, 50, 0xff00ff);
}

void Player::Hit()
{
}

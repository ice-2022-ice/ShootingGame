#pragma once
#include "CharaBase.h"

class Player:public CharaBase
{
private:
	int stickX;				//プレイヤーのX座標
	int stickY;				//プレイヤーのY座標
	int image;				//プレイヤー画像
	int score = 0;			//スコア
	int weapon = 0;			//武器
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


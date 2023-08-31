#include "DxLib.h"
#include "Gamemain.h"
#include "ResultScene.h"

GameMain::GameMain()
{
	
}

GameMain::~GameMain()
{

}

SceneBase* GameMain::Update()
{
	Player.Update();

	return this;
}

void GameMain::Draw() const
{
	//ƒƒCƒ“‚Ì•\¦
	SetFontSize(22);
	DrawString(0, 170, " MAIN ", 0xFFFFFF);

	Player.Draw();
}

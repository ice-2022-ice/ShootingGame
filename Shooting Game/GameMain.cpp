#include "DxLib.h"
#include "Gamemain.h"
#include "ResultScene.h"

GameMain::GameMain()
{
	
}

GameMain::~GameMain()
{

}

AbstractScene* GameMain::Update()
{
	return this;
}

void GameMain::Draw() const
{
	//メインの表示
	SetFontSize(22);
	DrawString(100, 170, " MAIN ", 0xFFFFFF);

}

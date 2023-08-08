#include "EndScene.h"
#include "SceneManeger.h"
#include "TitleScene.h"
#include "DxLib.h"

EndScene::EndScene()
{
}

EndScene::~EndScene()
{

}

AbstractScene* EndScene::Update()
{

	return this;
}

void EndScene::Draw() const
{
	//エンド画像の描画
	//DrawGraph(0, 0, EndImage, TRUE);

	//エンド
	SetFontSize(22);
	DrawString(100, 170, " END ", 0xFFFFFF);


}


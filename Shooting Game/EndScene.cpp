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
	//�G���h�摜�̕`��
	//DrawGraph(0, 0, EndImage, TRUE);

	//�G���h
	SetFontSize(22);
	DrawString(100, 170, " END ", 0xFFFFFF);


}


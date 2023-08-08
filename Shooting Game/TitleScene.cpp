#include "GameMain.h"
#include "TitleScene.h"
#include "EndScene.h"
#include "DxLib.h"
#include "InputKey.h"

TitleScene::TitleScene()
{
	/*try
	{
		TitleImage = LoadGraph("images/Title.bmp");
		if (TitleImage == -1)
		{
			throw "images/Title.bmp";
		}
	}
	catch (int& err)
	{
		printf("エラーコード%d\n", err);
	}*/

	MenuNumber = 0;
	MenuY = 0;
	Flg = 0;
}

AbstractScene* TitleScene::Update()
{
	//メニューカーソル移動処理
	if (InputKey::GetKey(PAD_INPUT_DOWN))
	{
		MenuNumber = 1;
	}
	if (InputKey::GetKey(PAD_INPUT_UP))
	{
		MenuNumber = 0;
	}

	// Ｚキーでメニュー選択
	if (InputKey::GetKey(PAD_INPUT_A))
	{
		if (MenuNumber == 0)
		{
			return new GameMain();
		}

		else if (MenuNumber == 1)
		{
			return new EndScene();
		}
	}

	//メニューカーソル（三角形）の表示
	MenuY = MenuNumber * 100;

	return this;
}

void TitleScene::Draw() const
{
	//タイトル画像の描画
	DrawString(0, 430, "　タイトル　", 0xFFFFFF);

	////説明
	//SetFontSize(20);
	//DrawString(250, 430, "　十字キー（↑、↓）で移動　", 0xFFFFFF);
	//DrawString(250, 450, "　Zボタンを押して選択してください　", 0xFFFFFF);

	// メニューカーソル（三角形）の表示
	DrawTriangle(240, 255 + MenuY, 260, 270 + MenuY, 240, 285 + MenuY, GetColor(255, 0, 0), TRUE);
}



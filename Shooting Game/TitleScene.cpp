#include "GameMain.h"
#include "TitleScene.h"
#include "EndScene.h"
#include "DxLib.h"
#include "InputKey.h"

TitleScene::TitleScene()
{
	MenuNumber = 0;
	MenuY = 0;
	Flg = 0;
}

SceneBase* TitleScene::Update()
{
	g_OldKye = g_NowKey;
	g_NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	g_keyFlg = g_NowKey & ~g_OldKye;

	//メニューカーソル移動処理
	if (g_keyFlg & (PAD_INPUT_DOWN))
	{
		if (++MenuNumber > 1) MenuNumber = 0;
	}

	if (g_keyFlg & (PAD_INPUT_UP))
	{
		if (--MenuNumber < 0) MenuNumber = 1;
	}

	// Ｚキーでメニュー選択
	if (g_keyFlg & (PAD_INPUT_A))
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
	DrawString(0, 20, "　Shoot Game　", 0xFFFFFF);

	//メニュー
	SetFontSize(30);
	DrawString(260,250 , "　すたーと　", 0xFFFFFF);			//すたーと
	DrawString(260, 350, "　らんきんぐ　", 0xFFFFFF);			//ランキング

	//説明
	SetFontSize(20);
	DrawString(250, 410, "　escキーで終了　", 0xFFFFFF);
	DrawString(250, 430, "　スティック（↑、↓）で移動　", 0xFFFFFF);
	DrawString(250, 450, "　Bボタンを押して選択してください　", 0xFFFFFF);

	// メニューカーソル（三角形）の表示
	DrawTriangle(240, 255 + MenuY, 260, 270 + MenuY, 240, 285 + MenuY, GetColor(255, 0, 0), TRUE);
}



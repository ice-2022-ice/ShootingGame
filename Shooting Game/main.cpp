#include "DxLib.h"
#include "SceneManeger.h"
#include "TitleScene.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{

	//描画先の指定（裏画面から開始する）
	SetDrawScreen(DX_SCREEN_BACK);

	// ウィンドウモードで起動
	(ChangeWindowMode(TRUE));

	// DXライブラリの初期化
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	//描画先画面を表にする（ダブルバッファリング）
	SetDrawScreen(DX_SCREEN_BACK);

	//変数定義
	SceneManager sceneMng(dynamic_cast<SceneBase*>(new TitleScene));

	while (sceneMng.Update() != nullptr && ProcessMessage() != -1)
	{
		//画面の初期化
		ClearDrawScreen();

		//キーの更新処理
		//InputKey::Update();

		sceneMng.Draw();

		//裏画面の内容を表画面に反映する
		ScreenFlip();

		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)
		{
			break;		//ESCKEYでゲーム終了

		}
	}

	// DXライブラリの終了処理
	DxLib_End();
	return 0;
}
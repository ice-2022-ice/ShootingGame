#include "ResultScene.h"
#include "TitleScene.h"
#include "SceneManeger.h"
#include "DxLib.h"
#include "InputKey.h"

ResultScene::ResultScene(int Score)
{
	Save_Score = Score;
}

ResultScene::~ResultScene()
{

}

SceneBase* ResultScene::Update()
{
	// スペースキーでメニュー選択
	if (InputKey::GetKey(PAD_INPUT_10))
	{
		return new TitleScene();
	}

	//更新処理
	return this;
}

void ResultScene::Draw() const
{
	//リザルト画面へ遷移しているかの確認
	SetFontSize(100);
	DrawFormatString(0, 0, 0xffffff, "Break Result");

	//プレイヤーへ一言コメント
	SetFontSize(50);
	DrawString(100, 200, "　おつかれー　", 0xffffff);

	//最終スコア
	SetFontSize(50);
	DrawFormatString(100, 250, 0xffffff, "　スコア:%d　", Save_Score);
}

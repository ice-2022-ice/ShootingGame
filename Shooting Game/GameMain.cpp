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
	// �y�L�[�Ń��j���[�I��
	if (g_keyFlg & (PAD_INPUT_A))
	{
		if (MenuNumber == 0)
		{
			return new Game();
		}

		else if (MenuNumber == 1)
		{
			return new ResultScene();
		}
	}

	return this;
}

void GameMain::Draw() const
{
	//���C���̕\��
	SetFontSize(22);
	DrawString(0, 170, " MAIN ", 0xFFFFFF);

}

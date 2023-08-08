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
		printf("�G���[�R�[�h%d\n", err);
	}*/

	MenuNumber = 0;
	MenuY = 0;
	Flg = 0;
}

AbstractScene* TitleScene::Update()
{
	//���j���[�J�[�\���ړ�����
	if (InputKey::GetKey(PAD_INPUT_DOWN))
	{
		MenuNumber = 1;
	}
	if (InputKey::GetKey(PAD_INPUT_UP))
	{
		MenuNumber = 0;
	}

	// �y�L�[�Ń��j���[�I��
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

	//���j���[�J�[�\���i�O�p�`�j�̕\��
	MenuY = MenuNumber * 100;

	return this;
}

void TitleScene::Draw() const
{
	//�^�C�g���摜�̕`��
	DrawString(0, 430, "�@�^�C�g���@", 0xFFFFFF);

	////����
	//SetFontSize(20);
	//DrawString(250, 430, "�@�\���L�[�i���A���j�ňړ��@", 0xFFFFFF);
	//DrawString(250, 450, "�@Z�{�^���������đI�����Ă��������@", 0xFFFFFF);

	// ���j���[�J�[�\���i�O�p�`�j�̕\��
	DrawTriangle(240, 255 + MenuY, 260, 270 + MenuY, 240, 285 + MenuY, GetColor(255, 0, 0), TRUE);
}



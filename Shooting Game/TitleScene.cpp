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

	//���j���[�J�[�\���ړ�����
	if (g_keyFlg & (PAD_INPUT_DOWN))
	{
		if (++MenuNumber > 1) MenuNumber = 0;
	}

	if (g_keyFlg & (PAD_INPUT_UP))
	{
		if (--MenuNumber < 0) MenuNumber = 1;
	}

	// �y�L�[�Ń��j���[�I��
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

	//���j���[�J�[�\���i�O�p�`�j�̕\��
	MenuY = MenuNumber * 100;

	return this;
}

void TitleScene::Draw() const
{
	//�^�C�g���摜�̕`��
	DrawString(0, 20, "�@Shoot Game�@", 0xFFFFFF);

	//���j���[
	SetFontSize(30);
	DrawString(260,250 , "�@�����[�Ɓ@", 0xFFFFFF);			//�����[��
	DrawString(260, 350, "�@��񂫂񂮁@", 0xFFFFFF);			//�����L���O

	//����
	SetFontSize(20);
	DrawString(250, 410, "�@esc�L�[�ŏI���@", 0xFFFFFF);
	DrawString(250, 430, "�@�X�e�B�b�N�i���A���j�ňړ��@", 0xFFFFFF);
	DrawString(250, 450, "�@B�{�^���������đI�����Ă��������@", 0xFFFFFF);

	// ���j���[�J�[�\���i�O�p�`�j�̕\��
	DrawTriangle(240, 255 + MenuY, 260, 270 + MenuY, 240, 285 + MenuY, GetColor(255, 0, 0), TRUE);
}



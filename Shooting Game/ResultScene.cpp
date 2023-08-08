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

AbstractScene* ResultScene::Update()
{
	// �X�y�[�X�L�[�Ń��j���[�I��
	if (InputKey::GetKey(PAD_INPUT_10))
	{
		return new TitleScene();
	}

	//�X�V����
	return this;
}

void ResultScene::Draw() const
{
	//���U���g��ʂ֑J�ڂ��Ă��邩�̊m�F
	SetFontSize(100);
	DrawFormatString(0, 0, 0xffffff, "Break Result");

	//�v���C���[�ֈꌾ�R�����g
	SetFontSize(50);
	DrawString(100, 200, "�@������[�@", 0xffffff);

	//�ŏI�X�R�A
	SetFontSize(50);
	DrawFormatString(100, 250, 0xffffff, "�@�X�R�A:%d�@", Save_Score);
}

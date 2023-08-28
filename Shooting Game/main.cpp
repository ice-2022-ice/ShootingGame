#include "DxLib.h"
#include "SceneManeger.h"
#include "TitleScene.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{

	//�`���̎w��i����ʂ���J�n����j
	SetDrawScreen(DX_SCREEN_BACK);

	// �E�B���h�E���[�h�ŋN��
	(ChangeWindowMode(TRUE));

	// DX���C�u�����̏�����
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	//�`����ʂ�\�ɂ���i�_�u���o�b�t�@�����O�j
	SetDrawScreen(DX_SCREEN_BACK);

	//�ϐ���`
	SceneManager sceneMng(dynamic_cast<SceneBase*>(new TitleScene));

	while (sceneMng.Update() != nullptr && ProcessMessage() != -1)
	{
		//��ʂ̏�����
		ClearDrawScreen();

		//�L�[�̍X�V����
		//InputKey::Update();

		sceneMng.Draw();

		//����ʂ̓��e��\��ʂɔ��f����
		ScreenFlip();

		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)
		{
			break;		//ESCKEY�ŃQ�[���I��

		}
	}

	// DX���C�u�����̏I������
	DxLib_End();
	return 0;
}
#pragma once
#include "DxLib.h"
#include "ResultScene.h"
#include "AbstractScene.h"

class GameMain : public SceneBase
{
private:
	int player;		//�ϐ�
	int life;		//�c�@
	int enemy;		//�|�C���^�z��
	int bullets;	//�|�C���^�z��
	int g_keyFlg;
	int MenuNumber;


public:
	void HitCheck();			//�e�A�v���C���[�A�G�̓����蔻��̃`�F�b�N���s��
	void SpawnBullet();			//�e�̔z��ɐV�����f�[�^���쐬����
	GameMain();					//�R���X�g���N�^
	~GameMain();				//�f�X�g���N�^
	SceneBase* Update();	//�X�V
	void Draw()const;			//�`��
};


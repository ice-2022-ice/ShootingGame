#pragma once
#include "SceneBase.h"

class ResultScene :public SceneBase
{
private:
	int Save_Score;		//�ŏI�X�R�A�p�̕ϐ�
	int MenuNumber;		//��


public:
	ResultScene(int Score);		//�X�R�A

	~ResultScene();				//�f�X�g���N�^

	virtual SceneBase* Update() override;	//�X�V

	virtual void Draw()const override;			//�`��
};

#pragma once
#include "AbstractScene.h"

class ResultScene :public AbstractScene
{
private:
	int Save_Score;		//�ŏI�X�R�A�p�̕ϐ�
	int MenuNumber;		//��


public:
	ResultScene(int Score);		//�X�R�A

	~ResultScene();				//�f�X�g���N�^

	virtual AbstractScene* Update() override;	//�X�V

	virtual void Draw()const override;			//�`��
};

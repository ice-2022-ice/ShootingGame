#pragma once
#include "AbstractScene.h"

class EndScene :public AbstractScene
{
private:
	

public:
	EndScene();		//�R���X�g���N�^
	~EndScene();	//�f�X�g���N�^
	virtual AbstractScene* Update() override;	//�X�V
	virtual void Draw()const override;			//�`��
};


#pragma once
#include "SceneBase.h"

class EndScene :public SceneBase
{
private:
	

public:
	EndScene();		//�R���X�g���N�^
	~EndScene();	//�f�X�g���N�^
	virtual SceneBase* Update() override;	//�X�V
	virtual void Draw()const override;			//�`��
};


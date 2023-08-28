#pragma once
#include "SceneBase.h"

class EndScene :public SceneBase
{
private:
	

public:
	EndScene();		//コンストラクタ
	~EndScene();	//デストラクタ
	virtual SceneBase* Update() override;	//更新
	virtual void Draw()const override;			//描画
};


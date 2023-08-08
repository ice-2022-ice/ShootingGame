#pragma once
#include "AbstractScene.h"

class EndScene :public AbstractScene
{
private:
	

public:
	EndScene();		//コンストラクタ
	~EndScene();	//デストラクタ
	virtual AbstractScene* Update() override;	//更新
	virtual void Draw()const override;			//描画
};


#pragma once
#include "AbstractScene.h"

class ResultScene :public AbstractScene
{
private:
	int Save_Score;		//最終スコア用の変数
	int MenuNumber;		//数


public:
	ResultScene(int Score);		//スコア

	~ResultScene();				//デストラクタ

	virtual AbstractScene* Update() override;	//更新

	virtual void Draw()const override;			//描画
};

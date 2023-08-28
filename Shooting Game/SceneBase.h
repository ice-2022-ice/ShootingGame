#pragma once

class SceneBase
{
public:
	virtual ~SceneBase() {};	//デストラクタ

	virtual void Draw()const = 0;	//描画に関することを実装する

	virtual SceneBase* Update() = 0;	//描画以外の更新を実装する
};


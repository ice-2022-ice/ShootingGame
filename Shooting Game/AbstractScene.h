#pragma once

class AbstractScene
{
public:
	virtual ~AbstractScene() {};	//デストラクタ

	virtual void Draw()const = 0;	//描画に関することを実装する

	virtual AbstractScene* Update() = 0;	//描画以外の更新を実装する
};

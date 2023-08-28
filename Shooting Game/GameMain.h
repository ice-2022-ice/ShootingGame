#pragma once
#include "DxLib.h"
#include "ResultScene.h"
#include "AbstractScene.h"

class GameMain : public SceneBase
{
private:
	int player;		//変数
	int life;		//残機
	int enemy;		//ポインタ配列
	int bullets;	//ポインタ配列
	int g_keyFlg;
	int MenuNumber;


public:
	void HitCheck();			//弾、プレイヤー、敵の当たり判定のチェックを行う
	void SpawnBullet();			//弾の配列に新しくデータを作成する
	GameMain();					//コンストラクタ
	~GameMain();				//デストラクタ
	SceneBase* Update();	//更新
	void Draw()const;			//描画
};


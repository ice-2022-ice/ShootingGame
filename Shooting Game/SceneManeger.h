#pragma once
#include"SceneBase.h"

class SceneManager :public SceneBase
{
private:
	SceneBase* now_scene;		//現在のシーン

	SceneBase* next_scene;		//次のシーン

public:
	//
	SceneManager();
	//
	SceneManager(SceneBase* scene);/* : now_scene(scene) {}*/

	~SceneManager();

	//
	void Draw()const override;

	//
	SceneBase* Update()override;
};
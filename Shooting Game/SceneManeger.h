#pragma once
#include"AbstractScene.h"

class SceneManager :public AbstractScene
{
private:
	AbstractScene* now_scene;		//現在のシーン

	AbstractScene* next_scene;		//次のシーン

public:
	//
	SceneManager();
	//
	SceneManager(AbstractScene* scene);/* : now_scene(scene) {}*/

	~SceneManager();

	//
	void Draw()const override;

	//
	AbstractScene* Update()override;
};
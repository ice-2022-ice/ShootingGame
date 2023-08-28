#pragma once
#include"SceneBase.h"

class SceneManager :public SceneBase
{
private:
	SceneBase* now_scene;		//���݂̃V�[��

	SceneBase* next_scene;		//���̃V�[��

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
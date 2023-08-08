#pragma once
#include"AbstractScene.h"

class SceneManager :public AbstractScene
{
private:
	AbstractScene* now_scene;		//���݂̃V�[��

	AbstractScene* next_scene;		//���̃V�[��

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
#include "SceneManeger.h"
#include "DxLib.h"

SceneManager::SceneManager()
{
	now_scene = nullptr;
	next_scene = now_scene;
}

SceneManager::SceneManager(AbstractScene* scene)
{
	now_scene = scene;
	next_scene = now_scene;
}

SceneManager::~SceneManager()
{
	now_scene = nullptr;
	delete next_scene;
}

void SceneManager::Draw() const
{
	ClearDrawScreen();
	now_scene->Draw();
	ScreenFlip();

}

AbstractScene* SceneManager::Update()
{
	next_scene = now_scene->Update();
	if (next_scene != now_scene)
	{
		delete now_scene;
		now_scene = next_scene;
	}
	return next_scene;
}


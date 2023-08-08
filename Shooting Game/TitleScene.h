#pragma once
#include "AbstractScene.h"
#include "DxLib.h"

class TitleScene :public AbstractScene
{
public:
    int TitleImage;

    int MenuNumber;
    int MenuY;
    int Flg;

public:
    TitleScene();
    virtual ~TitleScene() {};
    virtual AbstractScene* Update() override;
    virtual void Draw() const override;
};




#pragma once
#include "SceneBase.h"
#include "DxLib.h"

class TitleScene :public SceneBase
{
public:
    int TitleImage;

    int MenuNumber;
    int MenuY;
    int Flg;

    int g_OldKye;
    int g_NowKey;
    int g_keyFlg;

public:
    TitleScene();
    virtual ~TitleScene() {};
    virtual SceneBase* Update() override;
    virtual void Draw() const override;
};




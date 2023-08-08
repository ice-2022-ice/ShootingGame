#pragma once
#include "DxLib.h"

class InputKey
{
private:
	static int key_flg;
	static int now_key;
	static int old_key;

	static int MouseX;
	static int MouseY;

public:
	InputKey()
	{
		//‰Šú‰»
		key_flg = 0;
		now_key = 0;
		old_key = 0;
	}

	int KeyFlg();
	static int ReturnMouseX();

	static void Update();
	static int GetKey(int key);
	static int GetKeyDown(int key);

	static bool OnKey(bool key);
};


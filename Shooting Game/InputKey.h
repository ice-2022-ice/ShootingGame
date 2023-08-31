#pragma once
#include "DxLib.h"
class InputKey
{
private:
	static int key_flg;
	static int now_key;
	static int old_key;

public:
	static int X_buf;
	static int Y_buf;
	static int X_flg;
	static int X_now;
	static int X_old;
	static int Y_flg;
	static int Y_now;
	static int Y_old;
public:
	InputKey()
	{
		key_flg = 0;
		now_key = 0;
		old_key = 0;
		X_buf = 0;
		Y_buf = 0;
		X_flg = 0;
		X_now = 0;
		X_old = 0;
		Y_flg = 0;
		Y_now = 0;
		Y_old = 0;
	}

	static void Update();

	//押している間信号を送る
	static int GetKey(int key);

	//押した瞬間信号を送る
	static int GetKeyDown(int key);
	static int GetJoyStickX(int X);
	static int GetJoyStickY(int Y);
	static int GetJoyStickXOnes(int X);
	static int GetJoyStickYOnes(int Y);
};
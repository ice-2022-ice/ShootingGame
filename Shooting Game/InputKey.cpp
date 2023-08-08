#include "InputKey.h"

int InputKey::key_flg;
int InputKey::now_key;
int InputKey::old_key;

int InputKey::MouseX;
int InputKey::MouseY;

void InputKey::Update()
{
	old_key = now_key;
	now_key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	key_flg = now_key & ~old_key;

	//マウスから座標を読み取る
	GetMousePoint(&MouseX, &MouseY);
}

int InputKey::KeyFlg()
{
	return key_flg;
}

//MouseXを返す
int InputKey::ReturnMouseX()
{
	return MouseX;
}

//キーが押された時
int InputKey::GetKey(int key)
{
	if (now_key & key)
	{
		return TRUE;
	}

	return FALSE;
}

//キーが離された時
int InputKey::GetKeyDown(int key)
{
	if (key_flg & key)
	{
		return TRUE;
	}

	return FALSE;
}

//キーが押された瞬間
bool InputKey::OnKey(bool key)
{
	bool ret = (now_key == 1 && old_key == 0);
	return ret;
}

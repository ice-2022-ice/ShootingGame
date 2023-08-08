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

	//�}�E�X������W��ǂݎ��
	GetMousePoint(&MouseX, &MouseY);
}

int InputKey::KeyFlg()
{
	return key_flg;
}

//MouseX��Ԃ�
int InputKey::ReturnMouseX()
{
	return MouseX;
}

//�L�[�������ꂽ��
int InputKey::GetKey(int key)
{
	if (now_key & key)
	{
		return TRUE;
	}

	return FALSE;
}

//�L�[�������ꂽ��
int InputKey::GetKeyDown(int key)
{
	if (key_flg & key)
	{
		return TRUE;
	}

	return FALSE;
}

//�L�[�������ꂽ�u��
bool InputKey::OnKey(bool key)
{
	bool ret = (now_key == 1 && old_key == 0);
	return ret;
}

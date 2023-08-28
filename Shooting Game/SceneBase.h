#pragma once

class SceneBase
{
public:
	virtual ~SceneBase() {};	//�f�X�g���N�^

	virtual void Draw()const = 0;	//�`��Ɋւ��邱�Ƃ���������

	virtual SceneBase* Update() = 0;	//�`��ȊO�̍X�V����������
};


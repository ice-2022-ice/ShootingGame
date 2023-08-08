#pragma once

class AbstractScene
{
public:
	virtual ~AbstractScene() {};	//�f�X�g���N�^

	virtual void Draw()const = 0;	//�`��Ɋւ��邱�Ƃ���������

	virtual AbstractScene* Update() = 0;	//�`��ȊO�̍X�V����������
};

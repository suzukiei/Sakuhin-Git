#include "define.h"

//�摜
class STRUCT_IMAGE
{
	char path[PATH_MAX];
	int handle;
	int x;
	int y;
	int width;
	int height;
};

//�^�C�g���w�i
class STRUCT_IMAGE_BACK
{
	IMAGE image;
	BOOL IsDraw;

};

//����
class STRUCT_MUSIC
{
	char path[PATH_MAX];
	int handle;
	int handle2;
};

//�v���C���[
class STRUCT_CHARA
{
	IMAGE image;
	int speed;
	int CenterX;
	int CenterY;

	RECT coll;
	iPOINT collBeforePt;
};

//�G�l�~�[
class STRUCT_ENEMY
{
	IMAGE image;
	int speed;
	int CenterX;
	int CenterY;

	RECT coll;
	iPOINT collBeforePt;
};

//�}�b�v�����i�M�~�b�N�j
class MAP_ROOM
{

};

//�}�b�v�ʘH
class MAP_PASS
{

};












;

#define WINDOW_WIDTH 960
#define WINDOW_HEIGHT 560
#define GAME_WIDTH 960
#define GAME_HEIGHT 560
#define GAME_COLOR 32

#define GAME_WINDOW_BAR 0
//GAME_NAME
#define GAME_WINDOW_NAME "���ł̊�"

//FPS
#define GAME_FPS	60

#define KEY_BUTTON_CODE 129

//PATH
#define PATH_MAX	255
#define NAME_MAX	255
#define MENU_WIDTH_POSITION 280 //���j���[�w�i
#define MENU_HEIGHT_POSITION 180 //���j���[�w�i
#define MENU_BUTTON_TITLE_WIDTH_POSITION 380 //�^�C�g���֖߂�{�^���̈ʒu
#define MENU_BUTTON_TITLE_HEIGHT_POSITION 280 //�^�C�g���֖߂�{�^���̈ʒu
#define MENU_BUTTON_SAVE_WIDTH_POSITION 380 //�Z�[�u�{�^���̈ʒu
#define MENU_BUTTON_SAVE_HEIGHT_POSITION 380 //�Z�[�u�{�^���̈ʒu
#define MENU_BUTTON_SELECT_TITLE_WIDTH_POSITION 370 //�^�C�g���I�����̈ʒu
#define MENU_BUTTON_SELECT_TITLE_HEIGHT_POSITION 270 //�^�C�g���I�����̈ʒu
#define MENU_BUTTON_SELECT_SAVE_WIDTH_POSITION 370 //�Z�[�u�I�����̈ʒu
#define MENU_BUTTON_SELECT_SAVE_HEIGHT_POSITION 370 //�Z�[�u�I�����̈ʒu

//FONT
//#define FONT_PATH_MAX			255
//#define FONT_ _PATH			TEXT(".ttf")
//#define FONT_ _NAME			TEXT("font���O")
//#define FONT_INSTALL_ERR_TITLE	TEXT("�t�H���g�C���X�g�[���G���[")
//#define FONT_CREATE_ERR_TITLE	TEXT("�t�H���g�쐬�G���[")

//�摜�ǂݍ��݃G���[
#define IMAGE_LOAD_ERR_TITLE TEXT("�摜�ǂݍ��݃G���[")

//�摜�p�X
//#define IMAGE_TITLE_BK_PATH				TEXT(".png")
//#define IMAGE_TITLE_ROGO_PATH			TEXT(".png")
//#define IMAGE_TITLE_BUTTON_PLAY_PATH		TEXT(".png")
//#define IMAGE_TITLE_BUTTON_RULE_PATH		TEXT(".png")
//#define IMAGE_TITLE_BUTTON_END_PATH		TEXT(".png")
//#define IMAGE_TITLE_BUTTON_NOW_PATH		TEXT(".png")
//#define IMAGE_TITLE_BUTTON_SPAN		30

//#define IMAGE_RULE_PATH	TEXT(".png")

//����	
//#define IMAGE_END_COMP_PATH	TEXT(".png")
//#define IMAGE_END_COMP_CNT	1
//#define IMAGE_END_COMP_CNT_MAX	30

//���s	
//#define IMAGE_END_FAIL_PATH	TEXT(".png")
//#define IMAGE_END_FAIL_CNT	1
//#define IMAGE_END_FAIL_CNT_MAX	30

//�w�i	
//#define IMAGE_END_BACK_PATH	TEXT(".png")
//#define IMAGE_END_BACK_CNT	1
//#define IMAGE_END_BACK_CNT_MAX	30

//#define IMAGE_BACK_PATH_END	TEXT(".png")

//player
//#define IMAGE_PLAYER_PATH

//enemy
//#define IMAGE_ENEMY_PATH

//���y
#define MUSIC_LOAD_ERR_TITLE	TEXT("���y�ǂݍ��݃G���[")

//TITLE_BGM
//#define MUSIC_BGM_PATH_TITLE		TEXT(".mp3")
//PLEY_BGM
//#define MUSIC_BGM_PATH			TEXT(".mp3")
//COMP_BGM
//#define MUSIC_BGM_COMP_PATH		TEXT(".mp3")
//END_BGM
//#define MUSIC_BGM_FAIL_PATH		TEXT(".mp3")

//MAP
//#define GAME_MAP_TATE_MAX
//#define GAME_MAP_YOKO_MAX
//#define GAME_MAP_KIND_MAX
//#define GAME_MAP_KAISO_MAX

//MAP�摜PATH
//#define GAME_MAP_PATH(".png")
#define GAME_MENU_DEMO TEXT(".\\image\\menu_demo.png")

//��������
#define GAME_TIME_LIMIT	60

#define MAP_DIV_WIDTH		32
#define MAP_DIV_HEIGHT		32
#define MAP_DIV_TATE		30
#define MAP_DIV_YOKO		29
#define MAP_DIV_NUM	MAP_DIV_TATE * MAP_DIV_YOKO

#define START_ERR_TITLE	TEXT("�X�^�[�g�ʒu�G���[")
#define START_ERR_CAPTION	TEXT("�X�^�[�g�ʒu�����܂��Ă��܂���")

#define GOAL_ERR_TITLE	TEXT("�S�[���ʒu�G���[")
#define GOAL_ERR_CAPTION	TEXT("�S�[���ʒu�����܂��Ă��܂���")

#define MOUSE_R_CLICK_TITLE	TEXT("�Q�[�����f")
#define MOUSE_R_CLICK_CAPTION	TEXT("�Q�[���𒆒f���A�^�C�g����ʂɖ߂�܂����H")


typedef struct STRUCT_IPOINT
{
	int x = -1;
	int y = -1;
}IPOINT;

//FONT
typedef struct STRUCT_FONT
{
	char path[FONT_PATH_MAX];
	char name[FONT_PATH_MAX];
	int handle;
	int size;
	int bold;
	int type;
}FONT;

typedef struct STRUCT_MAP_IMAGE
{
	char path[PATH_MAX];
	int handle[MAP_DIV_NUM];
	int kind[MAP_DIV_NUM];
	int width;
	int height;
}MAPCHIP;

typedef struct STRUCT_MAP
{
	GAME_MAP_KIND kind;
	int x;
	int y;
	int width;
	int height;
}MAP;

#include "Dxlib.h"
#include "movement.h"
#include "enum.h"
#include "define.h"
#include "menu.h"
#include "class.h"

VOID MENU(VOID)
{
	DrawGraph(MENU_WIDTH_POSITION, MENU_HEIGHT_POSITION, /*.handle*/, TRUE); //���j���[��ʔw�i�摜
	//���j���[�̃^�C�g���֖߂�{�^���̈ʒu
	DrawGraph(MENU_BUTTON_TITLE_WIDTH_POSITION, MENU_BUTTON_TITLE_HEIGHT_POSITION,/*.handle*/, TRUE);
	//�Z�[�u�{�^���̈ʒu
	DrawGraph(MENU_BUTTON_SAVE_WIDTH_POSITION, MENU_BUTTON_SAVE_HEIGHT_POSITION,/*.handle*/, TRUE);

	while (true)
	{
		switch (SELECT)
		{
		case MENU_TITLE:

			//�����ɑI�����̈͂���\��
			if (MY_KEY_DOWN(KEY_INPUT_RETURN) == TRUE)
			{
				GAME_SCENE = GAME_SCENE_START;
			}

			if (MY_KEY_DOWN(KEY_INPUT_DOWN) == TRUE)
			{

				SELECT = MENU_SAVE;

			}

			if (MY_KEY_DOWN(KEY_INPUT_UP) == TRUE)
			{

				SELECT = MENU_SAVE;
			}

			break;


		case MENU_SAVE:
			//�����ɑI�����̈͂���\��
			if (MY_KEY_DOWN(KEY_INPUT_RETURN) == TRUE)
			{
				//�����ɃZ�[�u�@�\
				break;
			}

			if (MY_KEY_DOWN(KEY_INPUT_DOWN) == TRUE)
			{

				SELECT = MENU_TITLE;

			}

			if (MY_KEY_DOWN(KEY_INPUT_UP) == TRUE)
			{

				SELECT = MENU_TITLE;
			}
		}

		break;
	}


}
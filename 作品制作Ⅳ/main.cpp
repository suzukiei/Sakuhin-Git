#include "DxLib.h"
#include "define.h"
#include "enum.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//--------------------------------�����ݒ�ݒ�---------------------------------
	ChangeWindowMode(TRUE);	
	SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, GAME_COLOR);
	SetWindowStyleMode(GAME_WINDOW_BAR);
	SetMainWindowText(TEXT(GAME_WINDOW_NAME));

	//SetWindowIconID(IDI_ICON1);

	if (DxLib_Init() == -1) { return(-1); }
	//if (MY_LOAD_IMAGE() == -1) { return(-1); }
	//if (MY_LOAD_MUSIC() == -1) { return(-1); }

	SetMouseDispFlag(FALSE);

	SetDrawScreen(DX_SCREEN_BACK);


	/*--------------------------------�Q�[�����[�v---------------------------------
	while (GameLoop)
	{
		if (ProcessMessage() != 0) { break; }

		if (ClearDrawScreen() != 0) { break; }

		MY_ALL_KEYDOWN_UPDATE();

		MY_MOUSE_UPDATE();

		MY_FPS_UPDATE();

		switch (GameScene)
		{
		case GAME_SCENE_START:
			MY_START();
			break;
		case GAME_SCENE_PLAY:
			MY_PLAY();
			break;
		case GAME_SCENE_END:
			MY_END();
			break;
		case GAME_SCENE_RULE:
			MY_RULE();
			break;
		}

		ScreenFlip();

		MY_FPS_WAIT();
	}
	*/
	ScreenFlip();

	//--------------------------------�I������---------------------------------


	//MY_DELETE_IMAGE();
	//MY_DELETE_MUSIC();

	DxLib_End();

	return 0;
}

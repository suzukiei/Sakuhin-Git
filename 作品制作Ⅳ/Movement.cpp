/*��i����W_���ł̊�*/
#include "DxLib.h"
#include "movement.h"



VOID MOVEMENT(VOID)
{
	/*

	BOOL IsMove = TRUE; //�ړ��\


	//��Ɉړ�����Ƃ�
	if (MY_KEY_DOWN(KEY_INPUT_W) == TRUE
		&& MY_KEY_DOWN(KEY_INPUT_D) == FALSE
		&& MY_KEY_DOWN(KEY_INPUT_S) == FALSE
		&& MY_KEY_DOWN(KEY_INPUT_A) == FALSE
		&& IsMove == TRUE)
	{
		//player.IsMoveNaname = FALSE;	//�΂߈ړ����Ă��Ȃ�

		if (player.kind1 >= U_1 && player.kind1 < U_4)
		{
			//�摜�ύX�J�E���^
			if (player.imgChangeCnt < player.imgChangeCntMAX)
			{
				player.imgChangeCnt++;
			}
			else //�摜��ς���^�C�~���O�ɂȂ�����
			{
				player.kind1++;			//���̉摜�ɂ���
				player.imgChangeCnt = 0;	//�ύX�J�E���^������
			}
		}
		else
		{
			player.kind1 = U_1;	//�ŏ��̉摜�ɂ���
		}

		player.image.y -= CharaSpeed;	//�ړ�
	}

	//�E�Ɉړ�����Ƃ�
	if (MY_KEY_DOWN(KEY_INPUT_W) == FALSE
		&& MY_KEY_DOWN(KEY_INPUT_D) == TRUE
		&& MY_KEY_DOWN(KEY_INPUT_S) == FALSE
		&& MY_KEY_DOWN(KEY_INPUT_A) == FALSE
		&& IsMove == TRUE)
	{
		player.IsMoveNaname = FALSE;	//�΂߈ړ����Ă��Ȃ�

		if (player.kind1 >= R_1 && player.kind1 < R_4)
		{
			//�摜�ύX�J�E���^
			if (player.imgChangeCnt < player.imgChangeCntMAX)
			{
				player.imgChangeCnt++;
			}
			else //�摜��ς���^�C�~���O�ɂȂ�����
			{
				player.kind1++;			//���̉摜�ɂ���
				player.imgChangeCnt = 0;	//�ύX�J�E���^������
			}
		}
		else
		{
			player.kind1 = R_1;	//�ŏ��̉摜�ɂ���
		}
		player.image.x += CharaSpeed;	//�ړ�
	}

	//���Ɉړ�����Ƃ�
	if (MY_KEY_DOWN(KEY_INPUT_W) == FALSE
		&& MY_KEY_DOWN(KEY_INPUT_D) == FALSE
		&& MY_KEY_DOWN(KEY_INPUT_S) == FALSE
		&& MY_KEY_DOWN(KEY_INPUT_A) == TRUE
		&& IsMove == TRUE)
	{
		player.IsMoveNaname = FALSE;	//�΂߈ړ����Ă��Ȃ�

		if (player.kind1 >= L_1 && player.kind1 < L_4)
		{
			//�摜�ύX�J�E���^
			if (player.imgChangeCnt < player.imgChangeCntMAX)
			{
				player.imgChangeCnt++;
			}
			else //�摜��ς���^�C�~���O�ɂȂ�����
			{
				player.kind1++;			//���̉摜�ɂ���
				player.imgChangeCnt = 0;	//�ύX�J�E���^������
			}
		}
		else
		{
			player.kind1 = L_1;	//�ŏ��̉摜�ɂ���
		}
		player.image.x -= CharaSpeed;	//�ړ�
	}

	//���Ɉړ�����Ƃ�
	if (MY_KEY_DOWN(KEY_INPUT_W) == FALSE
		&& MY_KEY_DOWN(KEY_INPUT_D) == FALSE
		&& MY_KEY_DOWN(KEY_INPUT_S) == TRUE
		&& MY_KEY_DOWN(KEY_INPUT_A) == FALSE
		&& IsMove == TRUE)
	{
		player.IsMoveNaname = FALSE;	//�΂߈ړ����Ă��Ȃ�

		if (player.kind1 >= D_1 && player.kind1 < D_4)
		{
			//�摜�ύX�J�E���^
			if (player.imgChangeCnt < player.imgChangeCntMAX)
			{
				player.imgChangeCnt++;
			}
			else //�摜��ς���^�C�~���O�ɂȂ�����
			{
				player.kind1++;			//���̉摜�ɂ���
				player.imgChangeCnt = 0;	//�ύX�J�E���^������
			}
		}
		else
		{
			player.kind1 = D_1;	//�ŏ��̉摜�ɂ���
		}
		player.image.y += CharaSpeed;	//�ړ�
	}
	*/

	if (MY_KEY_DOWN(KEY_INPUT_ESCAPE) == TRUE)
	{
	   //�����Ƀ��j���[�\���̊֐��𐧍삷��B
		IsMove = FALSE;

		MENU();

	}


}
	

//�L�[�������グ�����A�L�[�R�[�h�Ŕ��f����
extern BOOL MY_KEY_UP(int KEY_INPUT_)
{
	if (OldAllKeyState[KEY_INPUT_] >= 1	//���O�͉����Ă���
		&& AllKeyState[KEY_INPUT_] == 0)	//���͉����Ă��Ȃ��Ƃ�
	{
		return TRUE;	//�L�[�������グ�Ă���
	}
	else
	{
		return FALSE;	//�L�[�������グ�Ă��Ȃ�
	}
}

//�L�[�������Ă��邩�A�L�[�R�[�h�Ŕ��f����
extern BOOL MY_KEY_DOWN(int KEY_INPUT_)
{
	//�L�[�R�[�h�̃L�[�������Ă��鎞
	if (AllKeyState[KEY_INPUT_] != 0)
	{
		return TRUE;	//�L�[�������Ă���
	}
	else
	{
		return FALSE;	//�L�[�������Ă��Ȃ�
	}
}

//########## �L�[�̓��͏�Ԃ��X�V����֐� ##########
extern VOID MY_ALL_KEYDOWN_UPDATE(VOID)
{

	//�ꎞ�I�ɁA���݂̃L�[�̓��͏�Ԃ��i�[����
	char TempKey[KEY_CODE_KIND];

	//���O�̃L�[���͂��Ƃ��Ă���
	for (int i = 0; i < KEY_CODE_KIND; i++)
	{
		OldAllKeyState[i] = AllKeyState[i];
	}

	GetHitKeyStateAll(TempKey); // �S�ẴL�[�̓��͏�Ԃ𓾂�

	for (int i = 0; i < KEY_CODE_KIND; i++)
	{
		if (TempKey[i] != 0)	//������Ă���L�[�̃L�[�R�[�h�������Ă���Ƃ�
		{
			AllKeyState[i]++;	//������Ă���
		}
		else
		{
			AllKeyState[i] = 0;	//������Ă��Ȃ�
		}
	}
	return;
}

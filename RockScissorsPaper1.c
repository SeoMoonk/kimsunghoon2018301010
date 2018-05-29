#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockScissorsPaper();
int winLoseDraw(int player,int opponent);

int main(void)
{
	int me, result, com;

	srand((unsigned int) time (0));

	do{
		do{
			printf("����(1), ����(2), ��(3)�Է�, �������� 0 :");
			scanf("%d",&me);
		}while(me<0||me>3);

		if (me!=0)
		{
			com = rockScissorsPaper();
			result = winLoseDraw(me, com);

			printf("��� = %d, ��ǻ�� = %d : ",me, com);

			if (result==1)
				printf("�̰���ϴ�.\n");
			else if (result==-1)
				printf("�����ϴ�. \n");
			else if (result==0)
				printf("�����ϴ�.\n");

		}

	}while(me!=0);

	return 0;
}

int winLoseDraw(int player,int opponent)
{
	if (player==opponent)
		return 0;
	else if (player==1&&opponent==3)
		return 1;
	else if (player==2&&opponent==1)
		return 1;
	else if (player==3&&opponent==2)
		return 1;
	else if (player==1&&opponent==2)
		return -1;
	else if (player==2&&opponent==3)
		return -1;
	else if (player==3&&opponent==1)
		return -1;
}

int rockScissorsPaper() 
{
	int lower=1, upper=3;

	return rand()% upper + lower;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int lower, int upper);

int main()
{
	int roll,result ;
	int first=0, second=0, third=0, fourth=0, fifth=0, sixth= 0;

	srand(		( unsigned int)	 time (0)	 );		//���� seed ����

	printf("�ֻ��� ���� Ƚ�� : ");
	scanf("%d", &roll);

	do{

		result = random(1,6);

		if (result == 1)
			first ++;
		else if (result == 2)
			second ++;
		else if (result == 3)
			third ++;
		else if (result == 4)
			fourth ++;
		else if (result == 5)
			fifth ++;
		else if (result == 6)
			sixth ++;

			roll --;
	}
	while(roll != 0);


	printf("1 : %dȸ\n",first);
	printf("2 : %dȸ\n",second);
	printf("3 : %dȸ\n",third);
	printf("4 : %dȸ\n",fourth);
	printf("5 : %dȸ\n",fifth);
	printf("6 : %dȸ\n",sixth);

	return 0;
}

int random(int lower, int upper)
{
	return  rand() % upper + lower;		//���Ѱ��� 1, ���Ѱ��� 6
}
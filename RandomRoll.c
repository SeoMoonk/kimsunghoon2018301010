#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int lower, int upper);

int main()
{
	int roll,result ;
	int first=0, second=0, third=0, fourth=0, fifth=0, sixth= 0;

	srand(		( unsigned int)	 time (0)	 );		//난수 seed 지정

	printf("주사위 던질 횟수 : ");
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


	printf("1 : %d회\n",first);
	printf("2 : %d회\n",second);
	printf("3 : %d회\n",third);
	printf("4 : %d회\n",fourth);
	printf("5 : %d회\n",fifth);
	printf("6 : %d회\n",sixth);

	return 0;
}

int random(int lower, int upper)
{
	return  rand() % upper + lower;		//하한값이 1, 상한값이 6
}
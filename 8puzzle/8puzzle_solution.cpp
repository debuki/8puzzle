#define  _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"stdlib.h"
#include"arr.h"
#include"the_four.h"

//已经产生过的图，以及其总数
int used_ones[362880][3][3], total_number = 0;
int goal[3][3];
int wanshi = 0;

int main()
{
	int a[3][3];
	printf("please input the initial puzzle\n");
	input_print(a);
	printf("\n");
	printf("please input the goal puzzle\n");
	input_print(goal);
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d（%d，%d）  ", a[i][j], i, j);
		}
		printf("\n");
	}
	printf("\n***************************************************\n");
	create_four(a);
	printf("\n***************************************************\n");
	printf("\nyou have created %d map(s)\n", total_number);
	print_all(a);
	printf("\n");
	print_all(goal);
	printf("\n");
	system("pause");
	return 0;
}
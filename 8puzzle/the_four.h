#pragma once
#include"stdio.h"
#include"stdlib.h"
#include"arr.h"
#include"used_one.h"
extern int total_number;
extern int wanshi;
extern int used_ones[362880][3][3];

void create_four(int[3][3]);
void find_space(int[3][3], int &, int &);
void left(int a[3][3], int &, int &);
void right(int a[3][3], int &, int &);
void up(int a[3][3], int &, int &);
void down(int a[3][3], int &, int &);

//创造一个向左移动一次后的图
void left(int a[3][3], int &i, int &j)
{
	printf("\nleft\n");
	if (j != 0 && !(compare_two(a)))
	{
		record_in(a);
		printf("\ntotal_number:%d\n", total_number);
		swch(a[i][j], a[i][j - 1]);
		print_all(a);
		printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		i = j = 0;
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		left(a, i, j);
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		down(a, i, j);
	}
}

//创造一个向右移动一次后的图
void right(int a[3][3], int &i, int &j)
{
	printf("\nright\n");
	if (j != 2 && !(compare_two(a)))
	{
		record_in(a);
		printf("\ntotal_number:%d\n", total_number);
		swch(a[i][j], a[i][j + 1]);
		print_all(a);
		printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		i = j = 0;
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		right(a, i, j);
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		up(a, i, j);
	}
}

//创造一个向上移动一次后的图
void up(int a[3][3], int &i, int &j)
{
	printf("\nup\n");
	if (i != 0 && !(compare_two(a)))
	{
		record_in(a);
		printf("\ntotal_number:%d\n", total_number);
		swch(a[i][j], a[i - 1][j]);
		print_all(a);
		printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		i = j = 0;
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		up(a, i, j);
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		left(a, i, j);
	}
}

//创造一个向下移动一次后的图
void down(int a[3][3], int &i, int &j)
{
	printf("\ndown\n");
	if (i != 2 && !(compare_two(a)))
	{
		record_in(a);
		printf("\ntotal_number:%d\n", total_number);
		swch(a[i][j], a[i + 1][j]);
		print_all(a);
		printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		i = j = 0;
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		down(a, i, j);
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		right(a, i, j);
	}
}

//找到空格
void find_space(int a[3][3], int &i, int &j)
{
	int flag = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0) j = 0;
		if (a[i][j] == 0)break;
	}
}

//创造四个移动过一次的图
void create_four(int a[3][3])
{

	int i=0, j=0;
	if (!(finish_goal(a)))
	{
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		left(a, i, j);
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		down(a, i, j);
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		right(a, i, j);
		find_space(a, i, j);
		printf("\nwhat you found is %d（%d，%d）\n", a[i][j], i, j);
		up(a, i, j);
	}
}
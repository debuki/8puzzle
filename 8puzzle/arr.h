#pragma once
#include"stdio.h"
#include"stdlib.h"
extern int wanshi;
extern int goal[3][3];

//将两数调换
void swch(int &a, int &b)
{
	int c;
	c = a; a = b; b = c;
}

//输出一个二维数组
void print_all(int a[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

//输入二维数组
void input_print(int a[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}

//是否遍历完事
int finish_goal(int a[3][3])
{
	int i, j, count = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] == goal[i][j])count++;
		}
	}
	if (count == 9)wanshi = 1;
	return wanshi;
}
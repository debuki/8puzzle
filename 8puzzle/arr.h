#pragma once
#include"stdio.h"
#include"stdlib.h"
extern int wanshi;
extern int goal[3][3];

//����������
void swch(int &a, int &b)
{
	int c;
	c = a; a = b; b = c;
}

//���һ����ά����
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

//�����ά����
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

//�Ƿ��������
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
#pragma once
#include"stdio.h"
#include"stdlib.h"
#include"arr.h"
extern int used_ones[362880][3][3];
extern int total_number;


//输出这个三维数组
void print3(int a[362880][3][3])
{
	int e, i, j;
	for (e = 0; e < total_number; e++)
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d ", a[e][i][j]);
			}
			printf("\n");
		}
	}
}

//将新的图记录进入used_ones数组中
void record_in(int a[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			used_ones[total_number][i][j] = a[i][j];
		}
	}
	/*printf("\nyou have recorded this map:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", used_ones[total_number][i][j]);
		}
		printf("\n");
	}*/
	total_number++;
}

//将新的数组与used_ones数组进行比对
int compare_two(int a[3][3])
{
	int i, j, e, count=0;
	int judgment=0;
	for (e = 0; e < total_number; e++)
	{
		count = 0;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (used_ones[e][i][j] == a[i][j])count++; 
			}
		}
		if (count == 9)
		{
			printf("\n                count:%d", count);

			judgment = 1;
		}
	}
	printf("\n                judement:%d", judgment);
	return judgment;
}
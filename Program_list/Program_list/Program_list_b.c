#define _CRT_SECURE_NO_WARNINGS 1

/*程序清单12.6--与程序清单12.5一起编译*/
//#include<stdio.h>
//extern int count;//引用式声明，外部链接
//static int total = 0;//静态定义，内部链接
//void accumulate(int k);
//void accumulate(int k)
//{
//	static int subtotal = 0;
//	if (k <= 0)
//	{
//		printf("loop cycle:%d\n", count);
//		printf("subtotal: %d; total: %d\n", subtotal, total);
//		subtotal = 0;
//	}
//	else
//	{
//		subtotal += k;
//		total += k;
//	}
//}


/*程序清单12.7--生成随机数和12.8一起编译*/
//static unsigned long int next = 1;//种子
//unsigned int rand0(void)
//{
//	//生成随机数的魔术公式
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}

/*程序清单--生成随机数和12.9一起编译*/
//static unsigned long int next = 1;/* 种子 */
//int rand1(void)
//{
//	/*生成伪随机数的魔术公式*/
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}
//void srand1(unsigned int seed)
//{
//	next= seed;
//}


/*程序清单12.11--掷骰子模拟程序*/
//#include"program_list.h"
//#include<stdio.h>
//#include<stdlib.h>
//
//int roll_count = 0;
//
//static int rollem(int sides)
//{
//	int roll;
//	roll = rand() % sides + 1;
//	++roll_count;
//
//	return roll;
//}
//
//int roll_n_dice(int dice, int sides)
//{
//	int d;
//	int total = 0;
//	if (sides < 2)
//	{
//		printf("Need at least 1 die.\n");
//		return -1;
//	}
//	for (d = 0; d < dice; d++)
//		total += rollem(sides);
//
//	return total;
//}
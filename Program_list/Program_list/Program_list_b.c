#define _CRT_SECURE_NO_WARNINGS 1

/*�����嵥12.6--������嵥12.5һ�����*/
//#include<stdio.h>
//extern int count;//����ʽ�������ⲿ����
//static int total = 0;//��̬���壬�ڲ�����
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


/*�����嵥12.7--�����������12.8һ�����*/
//static unsigned long int next = 1;//����
//unsigned int rand0(void)
//{
//	//�����������ħ����ʽ
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}

/*�����嵥--�����������12.9һ�����*/
//static unsigned long int next = 1;/* ���� */
//int rand1(void)
//{
//	/*����α�������ħ����ʽ*/
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}
//void srand1(unsigned int seed)
//{
//	next= seed;
//}


/*�����嵥12.11--������ģ�����*/
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
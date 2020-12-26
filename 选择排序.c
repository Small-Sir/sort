//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define LEN 20
////交换
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////老师给的代码
///*
//void select_sort(int *a)
//{
//	int max;
//
//	for(int i = 0;i < 10;i++)
//	{
//		max = i;
//
//		for(int j = i;j < 10;j++)
//		{
//			if(a[max] < a[j])
//			{
//				max = j;
//			}
//		}
//
//		int temp = a[i];
//		a[i] = a[max];
//		a[max] = temp;
//	}
//}
//
//int main(int argc,char* argv[])
//{
//	int a[10] = {1,7,2,5,3,4,10,8,9,6};
//
//	select_sort(a);
//
//	for(int i = 0;i < 10;i++)
//	{
//		printf("a[%d]:%d\n",i,a[i]);
//	}
//
//	return 0;
//}
//*/
//
//
////选择排序
//void select_sort1(int* a)
//{
//	int count = 0;//用来给数组a当下标的
//	while (count < LEN)
//	{
//		int min = a[count], j = 0;
//		for (int i = count; i < LEN; i++)
//		{
//			if (min >= a[i])
//			{
//				min = a[i];
//				j = i;
//			}
//		}
//		swap(&a[count++], &a[j]);
//	}
//}
//
//
//int main()
//{
//	static int a[LEN];
//	srand(time(0));//srand(time(NULL));加上time()函数后，后面每次运行的随机值会随着时间变化而变化。
//	for (int i = 0; i < LEN; i++)
//		a[i] = rand() % LEN;
//	clock_t start, end;
//	start = clock();
//	select_sort1(a);
//	end = clock();
//	for (int i = 0; i < 20; i++)
//		printf("a[%d]:%d\n", i, a[i]);
//	printf("运行的时间：%lfs\n", ((double)end - start) / CLOCKS_PER_SEC);///1s中的计算机的时间单位
//	return 0;
//}

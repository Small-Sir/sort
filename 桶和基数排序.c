//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define LEN 10000
////交换
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////桶排序
//void count_sort(int* a, int len)
//{
//	static count_arr[LEN];///定义一个数组，长度是数组a中最大值(类似一个桶，可以装相同的数)
//	for (int i = 0; i < len; i++)
//		count_arr[a[i]]++;//将数组a中的数值作为下标，将数组count_arr的a[i]下标+1；
//	int count = 0;//作为输出数组的下标
//	for (int i = 0; i < len; i++)
//	{
//		while (count_arr[i])
//		{
//			a[count++] = i;
//			count_arr[i]--;
//		}
//	}
//}
//
//
///*
//get_lastnum函数用来  得到一个数的第n位数
//arg1:传入的是一个数
//arg2:传入的是10的n次方
//return:返回的是一个数a的第n位的数。
//*/
//int get_lastnum(int a, int t)
//{
//	for (int i = t; i > 1; i /= 10)
//	{
//		a /= 10;
//	}
//	return a % 10;
//}
////老师的代码
//void radix_sort(int* a)
//{
//	static int b[LEN][10];
//	int c[10];
//	int t = 1;
//
//	while (1)
//	{
//		int temp;
//		memset(c, 0x00, sizeof(c));
//		memset(b, 0x00, sizeof(b));
//
//		for (int i = 0; i < LEN; i++)
//		{
//			temp = get_lastnum(a[i], t);
//
//			b[c[temp]][temp] = a[i];
//
//			c[temp]++;
//		}
//		int n = 0;
//		for (temp = 0; temp < 10; temp++)
//		{
//			for (int j = 0; j < c[temp]; j++)
//			{
//				a[n] = b[j][temp];
//				n++;
//			}
//		}
//		if (c[0] == LEN)
//		{
//			return;
//		}
//		t *= 10;
//	}
//}
//
////基数排序 (类似于哈希表的管理，这个用的是一个一维数组和一个二维数组)
//void radix_sort1(int *a)
//{
//	static int b[10][LEN],c[10];//数组b是用来存储数组a中的数的，
//								//数组c是用来记录二维数组中每一行所储存的数的个数的
//	int t = 1;//先从个位开始排序
//	while (1)
//	{
//		//每次循环都需要将数组b和数组c都初始化
//		memset(b,0x00,sizeof(b));
//		memset(c, 0x00, sizeof(c));
//		//先将数组a中的数装到二维数组b中，根据一定的规律。
//		int temp = 0;
//		for (int i = 0; i < LEN; i++)
//		{
//			temp = get_lastnum(a[i],t);
//			b[temp][c[temp]] = a[i];
//			c[temp]++;
//		}
//		int count = 0;
//		//逐个的将二维数组中的数装回到数组a中
//		for (temp = 0; temp < 10; temp++)
//		{
//			for (int i = 0; i < c[temp]; i++)
//			{
//				a[count++] = b[temp][i];
//			}
//		}
//		if (c[0] == LEN)
//			return;
//		t *= 10;
//	}
//}
//
//int main()
//{
//	static int a[LEN];
//	srand(time(NULL));//srand(time(NULL));加上time()函数后，后面每次运行的随机值会随着时间变化而变化。
//	for (int i = 0; i < LEN; i++)
//		a[i] = rand() % LEN;
//	clock_t start, end;
//	start = clock();
//	//count_sort(a, LEN);
//	radix_sort1(a);
//	end = clock();
//	for (int i = 0; i < 150; i++)
//		printf("a[%d]:%d\n", i, a[i]);
//	printf("运行的时间：%lfs\n", ((double)end - start) / CLOCKS_PER_SEC);///1s钟的
//	return 0;
//}
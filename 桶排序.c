//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define LEN 10
////交换
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
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
//int main()
//{
//	static int a[LEN];
//	srand(time(0));//srand(time(NULL));加上time()函数后，后面每次运行的随机值会随着时间变化而变化。
//	for (int i = 0; i < LEN; i++)
//		a[i] = rand() % LEN;
//	clock_t start, end;
//	start = clock();
//	count_sort(a, LEN);
//	end = clock();
//	for (int i = 0; i < 10; i++)
//		printf("a[%d]:%d\n", i, a[i]);
//	printf("运行的时间：%lfs\n", ((double)end - start) / CLOCKS_PER_SEC);///1s钟的
//	return 0;
//}
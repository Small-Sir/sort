#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LEN 200

//交换
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//老师给的代码
void insertion_sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int temp = arr[i];
		int j = i;
		for (; j - 1 >= 0; j--)
		{
			if (temp < arr[j - 1])
			{
				arr[j] = arr[j - 1];
			}
			else
			{
				break;
			}
		}
		arr[j] = temp;
	}
}


//插入排序
void insert_sort1(int* a)
{
	//定义两个变量 i 和 j ，i 遍历无序的数组部分，j 遍历有序的部分。
	int i, j;
	for (i = 0; i < LEN; i++)
	{
		int temp = a[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > temp)
			{
				a[j + 1] = a[j];
			}
			else
				break;
		}
		a[j+1] = temp;
	}
}

//希尔排序
void shell_sort(int* a)
{
	for (int gap = LEN / 2; gap > 0; gap /= 2)
	{
		//定义两个变量 i 和 j ，i 遍历无序的数组部分，j 遍历有序的部分。
		int i, j;
		for (i = 0; i < LEN; i++)
		{
			int temp = a[i];
			for (j = i - 1; j >= 0; j--)
			{
				if (a[j] > temp)
				{
					a[j + 1] = a[j];
				}
				else
					break;
			}
			a[j + 1] = temp;
		}
	}
}

int main()
{
	static int a[LEN];
	srand(time(NULL));//srand(time(NULL));加上time()函数后，后面每次运行的随机值会随着时间变化而变化。
	for (int i = 0; i < LEN; i++)
		a[i] = rand() % LEN;
	clock_t start, end;
	start = clock();
	//insert_sort1(a);
	shell_sort(a);
	end = clock();
	for (int i = 0; i < 20; i++)
		printf("a[%d]:%d\n", i, a[i]);
	printf("运行的时间：%lfs\n", ((double)end - start) / CLOCKS_PER_SEC);///1s中的计算机的时间单位
	return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LEN 200

//����
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//��ʦ���Ĵ���
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


//��������
void insert_sort1(int* a)
{
	//������������ i �� j ��i ������������鲿�֣�j ��������Ĳ��֡�
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

//ϣ������
void shell_sort(int* a)
{
	for (int gap = LEN / 2; gap > 0; gap /= 2)
	{
		//������������ i �� j ��i ������������鲿�֣�j ��������Ĳ��֡�
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
	srand(time(NULL));//srand(time(NULL));����time()�����󣬺���ÿ�����е����ֵ������ʱ��仯���仯��
	for (int i = 0; i < LEN; i++)
		a[i] = rand() % LEN;
	clock_t start, end;
	start = clock();
	//insert_sort1(a);
	shell_sort(a);
	end = clock();
	for (int i = 0; i < 20; i++)
		printf("a[%d]:%d\n", i, a[i]);
	printf("���е�ʱ�䣺%lfs\n", ((double)end - start) / CLOCKS_PER_SEC);///1s�еļ������ʱ�䵥λ
	return 0;
}




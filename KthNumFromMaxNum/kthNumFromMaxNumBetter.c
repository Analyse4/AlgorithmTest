/*
 *Purpose:找出N个数中第k大的数
 *Book:Data Structures and Algorithm Analysis in C
 */







#include<stdio.h>

void PrintArr(int *arr, int size)
{
	printf("arr{");
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1 )
		{
			printf("%d}\n", arr[i]);
			break;
		}
		printf("%d, ", arr[i]);
	}
}

void BubbleSort(int *arr, int size)
{
	for (int i = size; i > 0; i--)
	{
		for(int j = 0; j < i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int KthMaxNum(int *arr, int size, int k)
{
	int arr_tmp_front_k[k];
	int arr_tmp_end[size - k];
	int  switch_tmp = 1;
	for (int i = 0;i < size; i++)
	{
		if (i < 3)
		{
			arr_tmp_front_k[i] = arr[i];
		}
		else
		{
			if (switch_tmp)
			{
				BubbleSort(arr_tmp_front_k, k);
				switch_tmp = 0;
			}
			
			arr_tmp_end[i] = arr[i];

			if (arr_tmp_front_k[k - 1] < arr_tmp_end[i])
			{
				arr_tmp_front_k[k - 1] = arr_tmp_end[i];
				BubbleSort(arr_tmp_front_k, k);
			}
			
		}
	}
	return arr_tmp_front_k[k - 1];
}


int main()
{
	int arr[10] = {3,1,6,2,7,9,8,4,2,0};
	PrintArr(arr, 10);
	printf("The 4th from max num is %d\n", KthMaxNum(arr, 10, 4));
	return 0;
}

/*
 *Purpose:找出N个数中第k大的数
 *book:Data Structures and Algorithm Analysis in C
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
	BubbleSort(arr, 10);
	return arr[k-1];
}


int main()
{
	int arr[10] = {3,1,6,2,7,9,8,4,2,0};
	PrintArr(arr, 10);
	printf("The 3th from max num is %d\n", KthMaxNum(arr, 10, 3));
	return 0;
}

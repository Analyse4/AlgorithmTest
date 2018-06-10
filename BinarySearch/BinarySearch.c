/*
 *Purpose:二分查找
 *Book:Data Structures and Algorithm Analysis in C
 */







#include<stdio.h>


#define bool    char;
#define TRUE    1;
#define FALSE   0;
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

bool BinarySearch(int *arr, int size, int num)
{
    int low = 0;
    int high = size - 1;
    int mid = 0;

    while(low <= high)
    {
        mid = (low + high)/2;
        if (num < arr[mid])
        {
            high = mid - 1;
        }
        else if (num > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            return TRUE;
        }
    }
    return FALSE;
}


int main()
{
	int arr[10] = {3,1,6,2,7,9,8,4,2,0};
	//PrintArr(arr, 10);
    BubbleSort(arr, 10);
    BinarySearch(arr, 10, 4) ? printf("The number is found\n") : printf("The number is not found\n");
	return 0;
}

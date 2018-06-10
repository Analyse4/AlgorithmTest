#include<stdio.h>

void sortThreeNum(int a, int b, int c, int *pMin, int *pMid, int *pMax)
{
	if (a > b){
		if (b > c){
			*pMin = c;
			*pMid = b;
			*pMax = a;
		}
		else{
			*pMin = b;
			if (a > c){
				*pMax = a;
				*pMid = c;
			}
			else{
				*pMax = c;
				*pMid = a;
			}
		}
	}
	else{
		if (a < c){
			*pMin = a;
			if (b > c){
				*pMax = b;
				*pMid = c;
			}
			else{
				*pMax = c;
				*pMid = b;
			}
		}
		else{
			*pMin = c;
			*pMid = a;
			*pMax = b;
		}
	}
}

int main()
{
	int a = 0, b = 0, c = 0; 
	int min = 0, mid = 0, max = 0;
	printf("Please input three numbers: \n");
	scanf("%d, %d, %d", &a, &b, &c);
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
	sortThreeNum(a, b, c, &min, &mid, &max);
	printf("Min = %d\nMid = %d\nMax = %d\n", min, mid, max);
	return 0;
}

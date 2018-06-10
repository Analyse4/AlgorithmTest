#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
	int numC;
	int numR;
}NumCR;

int numCRFunc(int heads, int legs, NumCR *pNumCR)
{
	int numC = 0;
	for (; numC <= heads; numC++)
	{
		if (2 * numC + 4 * (heads - numC) == legs)
		{
			pNumCR->numC = numC;
			pNumCR->numR = heads - numC;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int heads = 0;
	int legs = 0;
	int ret = 0;
	NumCR *pNumCR = (NumCR *)malloc(sizeof(NumCR));
	memset(pNumCR, 0, sizeof(NumCR));
	printf("Please input total number of chicken and rabbits and the number of their legs: \n");
	scanf("%d, %d", &heads, &legs);
	ret = numCRFunc(heads, legs, pNumCR);
	ret ? printf("chicken: %d\nrabbit: %d\n", pNumCR->numC, pNumCR->numR) : printf("No answer\n");
	free(pNumCR);
	return 0;
}

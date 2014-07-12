#include <stdio.h>

void shellsort(char A[],int max);

int main(int argc, char *argv[])
{
	int i;
	char numbers[] = {0x01, 0x05, 0x02, 0x03, 0x09, 0x07};
	for(i=0; i<sizeof(numbers); i++)
		printf("%d ", numbers[i]);
	printf("\n");
	shellsort((char *)&numbers, sizeof(numbers));

	for(i=0; i<sizeof(numbers); i++)
		printf("%d ", numbers[i]);
	printf("\n");

	return 0;		
}


void shellsort(char A[],int max)
{
	int stop,swap,limit,temp;
	int x=(int)(max/2)-1;
	int k;

	while(x>0)
	{
		stop=0;
		limit=max-x;
		while(stop==0)
		{
			swap=0;
			for(k=0;k<limit;k++)
			{
				if(A[k]>A[k+x])
				{
					temp=A[k];
					A[k]=A[k+x];
					A[k+x]=temp;
					swap=k;
				}
			}
			limit=swap-x;
			if(swap==0)
				stop=1;
		}
		x=(int)(x/2);
	}
}
 
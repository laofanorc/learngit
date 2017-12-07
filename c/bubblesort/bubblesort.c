#include <stdio.h>
#include <stdlib.h>

void bubblesort(int a[],int length);

int main(int argc,char *argv[])
{
	int a[1000] = {0};

	int i = 0;
	
	for(i=0;i<1000;i++)
	{
		a[i] = 5000-i;
	}


	bubblesort(a,1000);


	for(i=0;i<1000;i++)
	{
		printf("%d\n",a[i]);
	}

	return 0;
}


void bubblesort(int a[],int length)
{
	int l = 0;
	int h = length;

	int i=0;
	int j=0;

	int tmp = 0;

	for(i=0;i<h;i=l)
	{
		l = h;

		for(j=h-1;j>i;j--)
		{
			if(a[j] < a[j-1])
			{
				tmp = a[j];

				a[j] = a[j-1];

				a[j-1] = tmp;
			
				l = j;
			}

		}
	}
}

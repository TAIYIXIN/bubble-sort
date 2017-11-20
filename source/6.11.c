#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(void)
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	
	int pass;
	int hold;
	size_t i;
	int b=0;
	puts("Data items in original order");
	for (i = 0; i <=SIZE-1; i++)
	{
		printf("%4d",a[i]);
	}
	for (pass = 1; pass <= SIZE-1; pass++)
	{
		for (i = 0; i <=(SIZE-1)-pass; i++)
		{
			if (a[i]>a[i + 1])
			{
				b = 0;
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
			else
			{
				b++;
			}
		}
		if (b ==10-pass) { break; }
	}
	puts("\nData items in original order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
}
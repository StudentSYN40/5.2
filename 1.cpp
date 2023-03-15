#include<stdio.h>
#include<math.h>

int main()
{
	int rows,cols;
	printf("rows = ");
	scanf("%d",&rows);
	
	printf("cols = ");
	scanf("%d",&cols);
	
	int **mas = new int* [rows];
	
	for (int i=0; i<rows; i++)
	{
		mas[i] = new int[cols];
	}
	
	for(int j=0;j<rows;j++)
	{
		for(int i=0;i<cols;i++)
		{
			printf("rows[%i] cols[%i] = ", j+1,i+1);
			scanf("%i",&mas[j][i]);	
		}
	}
	
		for(int j=0;j<rows;j++)
	{
		for(int i=0;i<cols;i++)
		{
			printf("%3i",mas[j][i]);	
		}
		printf("\n");
	}
	
	for (int i=0;i<rows;i++)
	{
		delete[] mas[i];
	}
	
	delete[] mas;
}
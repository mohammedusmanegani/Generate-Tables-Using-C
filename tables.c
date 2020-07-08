#include <stdio.h>
#define TRUE 1
int main()
{
	int tableNum, tableLimit, i;
	while (TRUE)
	{
		printf("\n Enter the table number: ");
		scanf("%d", &tableNum);
		printf("\n Enter the table Limit: ");
		scanf("%d", &tableLimit);
		for (i = 1; i <= tableLimit; i++)
		{
			printf("\n %d X %d = %d", tableNum, i, i * tableNum);
		}
		printf("\n");
	}
	return 0;
}

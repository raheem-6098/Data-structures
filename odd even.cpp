#include<stdio.h>
int main()
{
	int array[100],search,c,number;
	printf("Enter number of element in array\n");
	scanf("%d",&number);
	printf("Enter element %d number\n",number);
	for(c=0;c<number;c++)
	scanf("%d",& array[c]);
	printf("Enter number to search: \n");
	scanf("%d", &search);
	for (c=0;c<number;c++)
	{
		if (array[c] == search)
		{
			printf("%d is present at location %d/n.",search,c+1);
			break;
		}
	}
	if (c == number)
	printf("%d is not present array.\n",search);
	return 0;
}

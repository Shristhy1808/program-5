#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s;
	int arr[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter new id:");
		scanf("%d",&arr[i]);

	}
	printf("\nscanning finished now printing the scanned values \n");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	s=s+arr[i];
	printf("\n%d",s);
	getch();
}
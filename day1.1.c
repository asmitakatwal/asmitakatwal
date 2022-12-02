#include <stdio.h>
#include <conio.h>
void sum();
void main()
{
	sum();
	getch();
}

void sum()
{
	int a,b,s;
	printf("Enter two Numbers:\n");
	scanf("%d %d",&a,&b);
	s=a+b;
	printf("sum is %d",s);
}

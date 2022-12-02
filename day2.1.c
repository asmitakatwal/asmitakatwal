//without  argument and with return value

#include <stdio.h>
#include <conio.h>
int sum();
void main()
{

int s;
	
	s=sum();
	printf("sum is %d",s);
	getch();
}

int sum()
{
	int a,b,s;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	s=a+b;
	return s;
}

//with argument and no return value

#include <stdio.h>
#include <conio.h>
void sum(int,int);
void main()
{
	int a,b;
	printf("Enter 2 number:\n");
	scanf("%d %d",&a,&b);
	sum(a,b);
	
	getch();
}
void sum(a,b)
{
	int s;
	s=a+b;
	printf("sum is %d",s);
}

#include <stdio.h>
#include <conio.h>
int main()
{
	int a=4,*p;
	p=&a;
	printf("%d \n",a);
	printf("%u \n",p);	
	printf("%d",*p);
	
	return 0;
}

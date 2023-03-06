#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER ANY THREE NUMBERS :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		printf("A IS GREATER %d",a);
	if(b>a && b>c)
		printf("B IS GREATER %d",b);
	if(c>b && c>a)
		printf("C IS GREATER %d",c);	
return 0;
}



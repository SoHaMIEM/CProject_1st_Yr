#include <stdio.h>
#include <conio.h>
int fact();
int main()
{
	int n,f;
	printf("Enter a number");
	scanf("%d",n);
	printf(fact(n));
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	f=f*fact(n);	
}

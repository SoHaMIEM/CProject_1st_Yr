#include <stdio.h>
#include <string.h>
#include <math.h>
void a9()
{
	char string[100];
	printf("Enter a string");
	gets(string);
	printf("Length of the given string is %d",strlen(string));
}
int main()
{
	a9();
	return 0;
}

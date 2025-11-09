#include <stdio.h>

int main( )
{
	int a = 7;
	int b = 3;
	int const *aPtr = &a;
	printf("%p\n", aPtr);
	*aPtr = &b;
	printf("%p\n", aPtr);
}

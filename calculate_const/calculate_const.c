#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
int main()
{
	//printf("char=%d\n", sizeof(char));       //1¸ö×Ö½Ú 8Î»

	printf("minimum value of signed char=%d\n", SCHAR_MIN);     //-128 (-2^7+1)
	printf("maximum value of signed char=%d\n", SCHAR_MAX);     //127
	printf("minimum value of signed short=%d\n", SHRT_MIN);     //-32768
	printf("maximum value of signed short=%d\n", SHRT_MAX);     //32767
	printf("minimum value of signed int=%d\n", INT_MIN);
	printf("maximum value of signed int=%d\n", INT_MAX);
	printf("minimum value of signed long=%d\n", LONG_MIN);
	printf("maximum value of signed long=%d\n", LONG_MAX);
	return 0;
}
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
	va_list args;
	va_start(args, count);

	int s = 0;
	while (count--)
		s += va_arg(args, int);
	va_end(args);
	return s;
}

int main()
{
	printf("%i\n", sum(5, 4, 2, 4, 3, 2));
}
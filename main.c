#include "libftprintf.h"
//#include <stdio.h>
int main()
{
	char c = 'k';
	//ft_printf("%s to %c-%d\nGo to %p\n----Loading %i%%\nTest: %u\nBegin at: %X\n", "Welcome", 'w', 69, &c, 98, 4196699669, 28045);
	
	//printf("%i\n", ft_printf("%i", -55));
	//for (int i = 0; i <= 100; i++)
	//cspdiuxX%

		printf("%i\n", printf("%010c", c));
	printf("%i\n", ft_printf("%010c", c));
	printf("\n");
	printf("%i\n", printf("%-10c", c));
	printf("%i\n", ft_printf("%-10c", c));
	printf("\n");
	printf("%i\n", printf("%010-9c", c));
	printf("%i\n", ft_printf("%010-9c", c));
	printf("\n");
	printf("%i\n", printf("%010-0c", c));
	printf("%i\n", ft_printf("%010-0c", c));
	printf("\n");
	printf("%i\n", printf("%010-1c", c));
	printf("%i\n", ft_printf("%010-1c", c));
	printf("\n");
	printf("%i\n", printf("%010-2c", c));
	printf("%i\n", ft_printf("%010-2c", c));
	printf("\n");
	printf("%i\n", printf("%00-0c", c));
	printf("%i\n", ft_printf("%00-0c", c));
	printf("\n");
	printf("%i\n", printf("%2-0c", c));
	printf("%i\n", ft_printf("%2-0c", c));
	printf("\n");
	printf("%i\n", printf("%.0c", c));
	printf("%i\n", ft_printf("%.0c", c));
printf("\n");printf("\n");

	printf("%i\n", printf("%010s", "hello"));
	printf("%i\n", ft_printf("%010s", "hello"));
	printf("\n");
	printf("%i\n", printf("%-10s", "hello"));
	printf("%i\n", ft_printf("%-10s", "hello"));
	printf("\n");
	printf("%i\n", printf("%010-9s", "hello"));
	printf("%i\n", ft_printf("%010-9s", "hello"));
	printf("\n");
	printf("%i\n", printf("%10-0s", "hello"));
	printf("%i\n", ft_printf("%10-0s", "hello"));
	printf("\n");
	printf("%i\n", printf("%010-1s", "hello"));
	printf("%i\n", ft_printf("%010-1s", "hello"));
	printf("\n");
	printf("%i\n", printf("%010-2s", "hello"));
	printf("%i\n", ft_printf("%010-2s", "hello"));
	printf("\n");
	printf("%i\n", printf("%00-3s", "hello"));
	printf("%i\n", ft_printf("%00-3s", "hello"));
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
	printf("%i\n", printf("%09.9s", "hello"));
	printf("%i\n", ft_printf("%09.9s", "hello"));
		printf("\n");
	printf("%i\n", printf("%-9.9s", "hello"));
	printf("%i\n", ft_printf("%-9.9s", "hello"));
		printf("\n");
	printf("%i\n", printf("%099-9.9s", "hello"));
	printf("%i\n", ft_printf("%099-9.9s", "hello"));
			printf("\n");
	printf("%i\n", printf("%099.99-15s", "hello"));
	printf("%i\n", ft_printf("%099.99-15s", "hello"));
			printf("\n");//00
	printf("%i\n", printf("%099.0-15s", "hello"));
	printf("%i\n", ft_printf("%099.0-15s", "hello"));
		printf("\n");
	printf("%i\n", printf("%.3s", "hello"));
	printf("%i\n", ft_printf("%.3s", "hello"));
		printf("\n");
	printf("%i\n", printf("%10-0.3s", "hello"));
	printf("%i\n", ft_printf("%10-0.3s", "hello"));
	printf("\n");
	printf("%i\n", printf("%010-1.3s", "hello"));
	printf("%i\n", ft_printf("%010-1.3s", "hello"));
		printf("\n");
	printf("%i\n", printf("%010-15.3s", "hello"));
	printf("%i\n", ft_printf("%010-15.3s", "hello"));
	printf("\n");
	printf("%i\n", printf("%010-15.5s", "hello"));
	printf("%i\n", ft_printf("%010-15.5s", "hello"));
	printf("\n");
	printf("%i\n", printf("%010-2.3s", "hello"));
	printf("%i\n", ft_printf("%010-2.3s", "hello"));
	printf("\n");
	printf("%i\n", printf("%00-3.3s", "hello"));
	printf("%i\n", ft_printf("%00-3.3s", "hello"));

	printf("\n");
	printf("%i\n", printf("%.3s", "hello"));
	printf("%i\n", ft_printf("%.3s", "hello"));
	//ft_printf("%%", 77);
}
//cspdiuxX%
//# +

// %04-1i
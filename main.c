#include "libftprintf.h"
//#include <stdio.h>
int main()
{
	char c = 'k';
	//ft_printf("%s to %c-%d\nGo to %p\n----Loading %i%%\nTest: %u\nBegin at: %X\n", "Welcome", 'w', 69, &c, 98, 4196699669, 28045);
	
	//printf("%i\n", ft_printf("%i", -55));
	//for (int i = 0; i <= 100; i++)
	//cspdiuxX%
	printf("%i\n", printf("%22p", &c));
	printf("%i\n", ft_printf("%22p", &c));
	//ft_printf("%%", 77);
}
//cspdiuxX%
//# +

// %04-1i
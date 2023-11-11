#include "ft_printf.h"
//#include <stdio.h>
int main()
{
	char c = 'k';
	int test = 0;

	printf("%Test: %i Return: %i\n", test, printf("%010c", c));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010c", c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%-10c", c));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%-10c", c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-9c", c));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-9c", c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-0c", c));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-0c", c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-1c", c));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-1c", c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-2c", c));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-2c", c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%00-0c", c));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%00-0c", c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%2-0c", c));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%2-0c", c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%.0c", c));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%.0c", c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%-10s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%-10s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-9s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-9s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%10-0s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%10-0s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-1s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-1s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-2s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-2s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%00-3s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%00-3s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%09.9s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%09.9s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%-9.9s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%-9.9s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%099-9.9s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%099-9.9s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%099.99-15s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%099.99-15s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%099.0-15s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%099.0-15s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%.3s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%.3s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%10-0.3s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%10-0.3s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-1.3s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-1.3s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-15.3s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-15.3s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-15.5s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-15.5s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-2.3s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-2.3s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%00-3.3s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%00-3.3s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%.3s", "hello"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%.3s", "hello"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%22k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%22k"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%022k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%022k"));	
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%22-9k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%22-9k"));	
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%22.99k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%22.99k"));	
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%.0k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%.0k"));	
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%-0k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%-0k"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-9k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-9k"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-0k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-0k"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-1k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-1k"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-2k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-2k"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%00-0k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%00-0k"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%2-0k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%2-0k"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%.0k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%.0k"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%22%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%22%"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%022%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%022%"));	
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%22-9%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%22-9%"));	
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%22.99%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%22.99%"));	
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%.0%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%.0%"));	
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%-0%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%-0%"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-9%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-9%"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-0%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-0%"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-1%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-1%"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%010-2%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%010-2%"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%00-0%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%00-0%"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%2-0%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%2-0%"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%.0%"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%.0%"));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("%%k"));
	printf("%Test: %i Return: %i\n", test++, ft_printf("%%k"));
	printf("\n");
	
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("8: %0100+30d$\n", 383));// last one
	printf("%Test: %i Return: %i\n", test, ft_printf("8: %0100+30d$\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("9: %0100+30-20d$\n", 383));
	printf("%Test: %i Return: %i\n", test, ft_printf("9: %0100+30-20d$\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("10: %010+$\n", 383));
	printf("%Test: %i Return: %i\n", test, ft_printf("10: %010+$\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12: %.20+010d\n", 383));
	printf("%Test: %i Return: %i\n", test, ft_printf("12: %.20+010d\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.1: %010++01d\n", 383)); //d
	printf("%Test: %i Return: %i\n", test, ft_printf("12.1: %010++01d\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.2: %-10++-0dl\n", 383)); //d
	printf("%Test: %i Return: %i\n", test, ft_printf("12.2: %-10++-0dl\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3: %10++0dl\n", 383)); //d
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3: %10++0dl\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3.1: %10++0+10dl\n", 383)); //d
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3.1: %10++0+10dl\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3.2: %10+01+0dl\n", 383)); //d
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3.2: %10+01+0dl\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.4: %10++01dl\n", 383)); //d
	printf("%Test: %i Return: %i\n", test, ft_printf("12.4: %10++01dl\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.5: %10++1dl\n", 383)); //d
	printf("%Test: %i Return: %i\n", test, ft_printf("12.5: %10++1dl\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.6: %.10++.0dl\n", 383)); //d
	printf("%Test: %i Return: %i\n", test, ft_printf("12.6: %.10++.0dl\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.6: %.10++.dl\n", 383)); //d
	printf("%Test: %i Return: %i\n", test, ft_printf("12.6: %.10++.dl\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("13: %.10+020d$\n", 383));
	printf("%Test: %i Return: %i\n", test, ft_printf("13: %.10+020d$\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("13: %020+.10d$\n", 383));
	printf("%Test: %i Return: %i\n", test, ft_printf("13: %020+.10d$\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("14: %010+\n", 383));
	printf("%Test: %i Return: %i\n", test, ft_printf("14: %010+\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("15: %.10+020d$\n", -383));// same as 13
	printf("%Test: %i Return: %i\n", test, ft_printf("15: %.10+020d$\n", -383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("16: {%010-20+15++++   5d}\n",-12));// same as 13
	printf("%Test: %i Return: %i\n", test, ft_printf("16: {%010-20+15++++   5d}\n",-12));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("16.0: {%0+++10+++5d}\n",-12));// same as 13
	printf("%Test: %i Return: %i\n", test, ft_printf("16.0: {%0+++10+++5d}\n",-12));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("16.1: {%010-20+15++++   .5d}\n",-12));// same as 13
	printf("%Test: %i Return: %i\n", test, ft_printf("16.1: {%010-20+15++++   .5d}\n",-12));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("16.5: {%010.20 30d}\n",-12));;// same as 13
	printf("%Test: %i Return: %i\n", test, ft_printf("16.5: {%010.20 30d}\n",-12));;
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("16.7: {%010.20+30d}\n",-12));;// same as 13
	printf("%Test: %i Return: %i\n", test, ft_printf("16.7: {%010.20+30d}\n",-12));;
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("17: {%010-20+20d}\n",-12));;
	printf("%Test: %i Return: %i\n", test, ft_printf("17: {%010-20+20d}\n",-12));;
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("20: %02+$\n", 383));
	printf("%Test: %i Return: %i\n", test, ft_printf("20: %02+$\n", 383));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("21: %2+$\n", 383));
	printf("%Test: %i Return: %i\n", test, ft_printf("21: %2+$\n", 383));

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12: %.20+010c\n", 'k'));
	printf("%Test: %i Return: %i\n", test, ft_printf("12: %.20+010c\n", 'k'));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.1: %010++01c\n", 'k')); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.1: %010++01c\n", 'k'));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.2: %-10++-0cl\n", 'k')); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.2: %-10++-0cl\n", 'k'));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3: %10++0cl\n", 'k')); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3: %10++0cl\n", 'k'));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3.1: %10++0+10cl\n", 'k')); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3.1: %10++0+10cl\n", 'k'));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3.2: %10+01+0cl\n", 'k')); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3.2: %10+01+0cl\n", 'k'));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.4: %10++01cl\n", 'k')); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.4: %10++01cl\n", 'k'));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.5: %10++1cl\n", 'k')); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.5: %10++1cl\n", 'k'));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.6: %.10++.0cl\n", 'k')); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.6: %.10++.0cl\n", 'k'));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.6: %.10++.cl\n", 'k')); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.6: %.10++.cl\n", 'k'));

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12: %.55+099p\n", &c));
	printf("%Test: %i Return: %i\n", test, ft_printf("12: %.55+099p\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.1: %055++01p\n", &c)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.1: %055++01p\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.2: %-55++-0pl\n", &c)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.2: %-55++-0pl\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3: %55++0pl\n", &c)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3: %55++0pl\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3.1: %55++0+33pl\n", &c)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3.1: %55++0+33pl\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3.2: %55+01+0pl\n", &c)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3.2: %55+01+0pl\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.4: %55++033pl\n", &c)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.4: %55++033pl\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.5: %55++1pl\n", &c)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.5: %55++1pl\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.6: %.55++.0pl\n", &c)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.6: %.55++.0pl\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.6: %.55++.pl\n", &c)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.6: %.55++.pl\n", &c));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.6: %pl\n", NULL)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.6: %pl\n", NULL));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12: %.55+099x\n", 55));
	printf("%Test: %i Return: %i\n", test, ft_printf("12: %.55+099x\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.1: %055++01x\n", 55)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.1: %055++01x\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.2: %-55++-0xl\n", 55)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.2: %-55++-0xl\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3: %55++0xl\n", 55)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3: %55++0xl\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3.1: %55++0+33xl\n", 55)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3.1: %55++0+33xl\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.3.2: %55+01+0xl\n", 55)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.3.2: %55+01+0xl\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.4: %55++033xl\n", 55)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.4: %55++033xl\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.5: %55++1xl\n", 55)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.5: %55++1xl\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.6: %.55++.0xl\n", 55)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.6: %.55++.0xl\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("12.6: %.55++.xl\n", 55)); //c
	printf("%Test: %i Return: %i\n", test, ft_printf("12.6: %.55++.xl\n", 55));
	printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%022.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("[|%022.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%0.100s.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%0.100s.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%.022.1500s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%.022.1500s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%22.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%22.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%100s.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%100s.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%22.1500s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%22.1500s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%.s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%.s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%5s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%5s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%100s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%100s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%-22.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%-22.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%-100s.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%-100s.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%-100s.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%-100s.15s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%-22.s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%-22.s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%-.s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%-.s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%-5s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%-5s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("[|%-225s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("[|%-225s|]\n", "Hello  *"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\t%s\n", "coucou, ca va?"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("  Or\t:\t%s\n", "coucou, ca va?"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf ("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe string \"%s%s%s\" is visible.\n", "TRALALA", "TRALALA", "TRALALA"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe string \"%s%s%s\" is visible.\n", "TRALALA", "TRALALA", "TRALALA"));printf("\n");
	char *null_s = NULL;
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%s\" is visible.\n", null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%s\" is visible.\n", null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%s%s%s\" is visible.\n", null_s, null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%s%s%s\" is visible.\n", null_s, null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%s%s%s%s\" is visible.\n", null_s, null_s, null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%s%s%s%s\" is visible.\n", null_s, null_s, null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%-s%-s%-s%-s\" is visible.\n", null_s, null_s, null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%-s%-s%-s%-s\" is visible.\n", null_s, null_s, null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%0-s%-0s\" is visible.\n", null_s, null_s, null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%-0s%-0s%0-s%-0s\" is visible.\n", null_s, null_s, null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", null_s, null_s));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%-0.s%-0.s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%-0.s%-0.s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%-.0s%-.0s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%-.0s%-.0s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%-.000s%-.000s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%-.000s%-.000s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%-000.000s%00-0.000s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%-000.000s%00-0.000s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("  Or\t:\tThe Null string \"%-985.000s%159-0.000s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, printf("  Or\t:\tThe Null string \"%-985.000s%159-0.000s\" is visible.\n", "hellos", "Ezz"));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("%090#x\n", -66));
	printf("%Test: %i Return: %i\n", test, printf("%090#x\n", -66));printf("\n");
	printf("%Test: %i Return: %i\n", test, ft_printf("%-90#xl\n", -66));
	printf("%Test: %i Return: %i\n", test, printf("%-90#xl\n", -66));printf("\n");

}
//cspdiuxX%
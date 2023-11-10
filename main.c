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
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("%i\n", printf("%22k"));
	printf("%i\n", ft_printf("%22k"));
		printf("\n");
	printf("%i\n", printf("%022k"));
	printf("%i\n", ft_printf("%022k"));	
	printf("\n");
	printf("%i\n", printf("%22-9k"));
	printf("%i\n", ft_printf("%22-9k"));	
	printf("\n");
	printf("%i\n", printf("%22.99k"));
	printf("%i\n", ft_printf("%22.99k"));	
	printf("\n");
	printf("%i\n", printf("%.0k"));
	printf("%i\n", ft_printf("%.0k"));	
	printf("\n");
	printf("%i\n", printf("%-0k"));
	printf("%i\n", ft_printf("%-0k"));
			
	printf("\n");
	printf("\n");
	printf("%i\n", printf("%010-9k"));
	printf("%i\n", ft_printf("%010-9k"));
	printf("\n");
	printf("%i\n", printf("%010-0k"));
	printf("%i\n", ft_printf("%010-0k"));
	printf("\n");
	printf("%i\n", printf("%010-1k"));
	printf("%i\n", ft_printf("%010-1k"));
	printf("\n");
	printf("%i\n", printf("%010-2k"));
	printf("%i\n", ft_printf("%010-2k"));
	printf("\n");
	printf("%i\n", printf("%00-0k"));
	printf("%i\n", ft_printf("%00-0k"));
	printf("\n");
	printf("%i\n", printf("%2-0k"));
	printf("%i\n", ft_printf("%2-0k"));
	printf("\n");
	printf("%i\n", printf("%.0k"));
	printf("%i\n", ft_printf("%.0k"));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("%i\n", printf("%22%"));
	printf("%i\n", ft_printf("%22%"));
		printf("\n");
	printf("%i\n", printf("%022%"));
	printf("%i\n", ft_printf("%022%"));	
	printf("\n");
	printf("%i\n", printf("%22-9%"));
	printf("%i\n", ft_printf("%22-9%"));	
	printf("\n");
	printf("%i\n", printf("%22.99%"));
	printf("%i\n", ft_printf("%22.99%"));	
	printf("\n");
	printf("%i\n", printf("%.0%"));
	printf("%i\n", ft_printf("%.0%"));	
	printf("\n");
	printf("%i\n", printf("%-0%"));
	printf("%i\n", ft_printf("%-0%"));
	printf("\n");
	printf("%i\n", printf("%010-9%"));
	printf("%i\n", ft_printf("%010-9%"));
	printf("\n");
	printf("%i\n", printf("%010-0%"));
	printf("%i\n", ft_printf("%010-0%"));
	printf("\n");
	printf("%i\n", printf("%010-1%"));
	printf("%i\n", ft_printf("%010-1%"));
	printf("\n");
	printf("%i\n", printf("%010-2%"));
	printf("%i\n", ft_printf("%010-2%"));
	printf("\n");
	printf("%i\n", printf("%00-0%"));
	printf("%i\n", ft_printf("%00-0%"));
	printf("\n");
	printf("%i\n", printf("%2-0%"));
	printf("%i\n", ft_printf("%2-0%"));
	printf("\n");
	printf("%i\n", printf("%.0%"));
	printf("%i\n", ft_printf("%.0%"));
		printf("\n");
	printf("%i\n", printf("%%k"));
	printf("%i\n", ft_printf("%%k"));
			printf("\n");
	
	  puts("\n");
	  puts("\n");
	  puts("\n");
	  puts("\n");
	  puts("\n");
  printf("8: %0100+30d$\n", 383);// last one
  ft_printf("8: %0100+30d$\n", 383);
  puts("\n");
  printf("9: %0100+30-20d$\n", 383);
  ft_printf("9: %0100+30-20d$\n", 383);
  puts("\n");
  printf("10: %010+$\n", 383);
  ft_printf("10: %010+$\n", 383);
  puts("\n");
  printf("12: %.20+010d\n", 383);
  ft_printf("12: %.20+010d\n", 383);
    puts("\n");
  printf("12.1: %010++01d\n", 383); //d
  ft_printf("12.1: %010++01d\n", 383);
  puts("\n");
  printf("12.2: %-10++-0dl\n", 383); //d
  ft_printf("12.2: %-10++-0dl\n", 383);
    puts("\n");
  printf("12.3: %10++0dl\n", 383); //d
  ft_printf("12.3: %10++0dl\n", 383);
   puts("\n");
  printf("12.3.1: %10++0+10dl\n", 383); //d
  ft_printf("12.3.1: %10++0+10dl\n", 383);
  puts("\n");
  printf("12.3.2: %10+01+0dl\n", 383); //d
  ft_printf("12.3.2: %10+01+0dl\n", 383);
      puts("\n");
  printf("12.4: %10++01dl\n", 383); //d
  ft_printf("12.4: %10++01dl\n", 383);
        puts("\n");
  printf("12.5: %10++1dl\n", 383); //d
  ft_printf("12.5: %10++1dl\n", 383);
  puts("\n");
  printf("12.6: %.10++.0dl\n", 383); //d
  ft_printf("12.6: %.10++.0dl\n", 383);
  puts("\n");
  printf("12.6: %.10++.dl\n", 383); //d
  ft_printf("12.6: %.10++.dl\n", 383);
  puts("\n");
  printf("13: %.10+020d$\n", 383);
  ft_printf("13: %.10+020d$\n", 383);
    puts("\n");
  printf("13: %020+.10d$\n", 383);
  ft_printf("13: %020+.10d$\n", 383);
  puts("\n");
  printf("14: %010+\n", 383);
  ft_printf("14: %010+\n", 383);
  puts("\n");
  printf("15: %.10+020d$\n", -383);// same as 13
  ft_printf("15: %.10+020d$\n", -383);
  puts("\n");
  printf("16: {%010-20+15++++   5d}\n",-12);// same as 13
  ft_printf("16: {%010-20+15++++   5d}\n",-12);
   puts("\n");
  printf("16.0: {%0+++10+++5d}\n",-12);// same as 13
  ft_printf("16.0: {%0+++10+++5d}\n",-12);
    puts("\n");
  printf("16.1: {%010-20+15++++   .5d}\n",-12);// same as 13
  ft_printf("16.1: {%010-20+15++++   .5d}\n",-12);
    puts("\n");
  printf("16.5: {%010.20 30d}\n",-12);;// same as 13
  ft_printf("16.5: {%010.20 30d}\n",-12);;
      puts("\n");
  printf("16.7: {%010.20+30d}\n",-12);;// same as 13
  ft_printf("16.7: {%010.20+30d}\n",-12);;
  puts("\n");
  printf("17: {%010-20+20d}\n",-12);;
  ft_printf("17: {%010-20+20d}\n",-12);;
  puts("\n");
  printf("20: %02+$\n", 383);
  ft_printf("20: %02+$\n", 383);
  puts("\n");
  printf("21: %2+$\n", 383);
  ft_printf("21: %2+$\n", 383);

  puts("\n");
  puts("\n");
  puts("\n");
  puts("\n");
  puts("\n");
  printf("12: %.20+010c\n", 'k');
  ft_printf("12: %.20+010c\n", 'k');
    puts("\n");
  printf("12.1: %010++01c\n", 'k'); //c
  ft_printf("12.1: %010++01c\n", 'k');
  puts("\n");
  printf("12.2: %-10++-0cl\n", 'k'); //c
  ft_printf("12.2: %-10++-0cl\n", 'k');
    puts("\n");
  printf("12.3: %10++0cl\n", 'k'); //c
  ft_printf("12.3: %10++0cl\n", 'k');
   puts("\n");
  printf("12.3.1: %10++0+10cl\n", 'k'); //c
  ft_printf("12.3.1: %10++0+10cl\n", 'k');
  puts("\n");
  printf("12.3.2: %10+01+0cl\n", 'k'); //c
  ft_printf("12.3.2: %10+01+0cl\n", 'k');
      puts("\n");
  printf("12.4: %10++01cl\n", 'k'); //c
  ft_printf("12.4: %10++01cl\n", 'k');
        puts("\n");
  printf("12.5: %10++1cl\n", 'k'); //c
  ft_printf("12.5: %10++1cl\n", 'k');
  puts("\n");
  printf("12.6: %.10++.0cl\n", 'k'); //c
  ft_printf("12.6: %.10++.0cl\n", 'k');
  puts("\n");
  printf("12.6: %.10++.cl\n", 'k'); //c
  ft_printf("12.6: %.10++.cl\n", 'k');

  puts("\n");
  puts("\n");
  puts("\n");
  puts("\n");
  puts("\n");
  printf("12: %.55+099p\n", &c);
  ft_printf("12: %.55+099p\n", &c);
    puts("\n");
  printf("12.1: %055++01p\n", &c); //c
  ft_printf("12.1: %055++01p\n", &c);
  puts("\n");
  printf("12.2: %-55++-0pl\n", &c); //c
  ft_printf("12.2: %-55++-0pl\n", &c);
    puts("\n");
  printf("12.3: %55++0pl\n", &c); //c
  ft_printf("12.3: %55++0pl\n", &c);
   puts("\n");
  printf("12.3.1: %55++0+33pl\n", &c); //c
  ft_printf("12.3.1: %55++0+33pl\n", &c);
  puts("\n");
  printf("12.3.2: %55+01+0pl\n", &c); //c
  ft_printf("12.3.2: %55+01+0pl\n", &c);
      puts("\n");
  printf("12.4: %55++033pl\n", &c); //c
  ft_printf("12.4: %55++033pl\n", &c);
        puts("\n");
  printf("12.5: %55++1pl\n", &c); //c
  ft_printf("12.5: %55++1pl\n", &c);
  puts("\n");
  printf("12.6: %.55++.0pl\n", &c); //c
  ft_printf("12.6: %.55++.0pl\n", &c);
  puts("\n");
  printf("12.6: %.55++.pl\n", &c); //c
  ft_printf("12.6: %.55++.pl\n", &c);
    puts("\n");
  printf("12.6: %pl\n", NULL); //c
  ft_printf("12.6: %pl\n", NULL);
puts("\n");
  puts("\n");
  puts("\n");
  puts("\n");
  puts("\n");
  printf("12: %.55+099x\n", 55);
  ft_printf("12: %.55+099x\n", 55);
    puts("\n");
  printf("12.1: %055++01x\n", 55); //c
  ft_printf("12.1: %055++01x\n", 55);
  puts("\n");
  printf("12.2: %-55++-0xl\n", 55); //c
  ft_printf("12.2: %-55++-0xl\n", 55);
    puts("\n");
  printf("12.3: %55++0xl\n", 55); //c
  ft_printf("12.3: %55++0xl\n", 55);
   puts("\n");
  printf("12.3.1: %55++0+33xl\n", 55); //c
  ft_printf("12.3.1: %55++0+33xl\n", 55);
  puts("\n");
  printf("12.3.2: %55+01+0xl\n", 55); //c
  ft_printf("12.3.2: %55+01+0xl\n", 55);
      puts("\n");
  printf("12.4: %55++033xl\n", 55); //c
  ft_printf("12.4: %55++033xl\n", 55);
        puts("\n");
  printf("12.5: %55++1xl\n", 55); //c
  ft_printf("12.5: %55++1xl\n", 55);
  puts("\n");
  printf("12.6: %.55++.0xl\n", 55); //c
  ft_printf("12.6: %.55++.0xl\n", 55);
  puts("\n");
  printf("12.6: %.55++.xl\n", 55); //c
  ft_printf("12.6: %.55++.xl\n", 55);
    puts("\n");

//   	printf("\n");
// 	printf("%i\n", printf("%22-99"));
// 	printf("%i\n", ft_printf("%22-99"));

}
//cspdiuxX%
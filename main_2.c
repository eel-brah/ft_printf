#include "ft_printf.h"

int main(void)
{
  char i = 'A';
  char *str = "hello world";
  int j = -3830;

  ft_printf("hello world %c and str = '%s', ptr = %p\n", i, str, &str);
  printf("hello world %c and str = '%s', ptr = %p\n", i, str, &str);
  printf("\n");
  ft_printf("j = %d, j = %i\n", j, j);
  printf("j = %d, j = %i\n", j, j);

  puts("\n");

  ft_printf("j = %u\n", -3939);
  printf("j = %u\n", -3939);

  ft_printf( "2: % % % % % % % % %\n");
  printf( "2: % % % % % % % % %\n");

  puts("\n");

  ft_printf("j = %x\n", -3939);
  printf("j = %x\n", -3939);

  puts("\n");

  ft_printf("j = %X\n", -3939);
  printf("j = %X\n", -3939);

  puts("\n");

  ft_printf("%%\n");
  printf("%%\n");

  puts("\n");

  ft_printf("dot flag: %.20s\n", "hello world");
  printf("dot flag: %.20s\n", "hello world");

  puts("\n"); // zero flag

  ft_printf("zero flag: %010d\n", 39383);
  printf("zero flag: %010d\n", 39383);

  puts("\n");

  ft_printf("zero flag: %010d\n", -39383);
  printf("zero flag: %010d\n", -39383);

  puts("\n");

  ft_printf("zero flag: %05d\n", 39383);
  printf("zero flag: %05d\n", 39383);

  puts("\n");

  ft_printf("zero flag: %05x\n", 39383);
  printf("zero flag: %05x\n", 39383);

  puts("\n");

  ft_printf("zero flag: %-30x\n", -1);
  printf("zero flag: %-30x\n", -1);

  puts("\n");

  ft_printf("zero flag: %10-30d$\n", 383);
  printf("zero flag: %10-30d$\n", 383);

  puts("\n");

  ft_printf("zero flag: %10-30d$\n", 383);
  printf("zero flag: %10-30d$\n", 383);

  puts("\n");

  ft_printf("6: %010-30d$\n", 383);
  printf("6: %010-30d$\n", 383);

  puts("\n");

  ft_printf("7: %0100.10-30d$\n", 383);
  printf("7: %0100.10-30d$\n", 383);

  puts("\n");

  ft_printf("8: %0100+30d$\n", 383);
  printf("8: %0100+30d$\n", 383);

  puts("\n");

  ft_printf("9: %0100+30-20d$\n", 383);
  printf("9: %0100+30-20d$\n", 383);

  puts("\n");

  ft_printf("10: %010+$\n", 383);
  printf("10: %010+$\n", 383);


  puts("\n");

  ft_printf("11: %010.20d$\n", 383);
  printf("11: %010.20d$\n", 383);

  puts("\n");

  ft_printf("12: %.20+010d$\n", 383);
  printf("12: %.20+010d$\n", 383);

  puts("\n");

  ft_printf("13: %.10+020d$\n", 383);
  printf("13: %.10+020d$\n", 383);

  puts("\n");

  ft_printf("14: %010+\n", 383);
  printf("14: %010+\n", 383);

  puts("\n");

  ft_printf("15: %.10+020d$\n", -383);
  printf("15: %.10+020d$\n", -383);

  puts("\n");

  ft_printf("16: {%010-20+15d}\n",-12);;
  printf("16: {%010-20+15d}\n",-12);;

  puts("\n");

  ft_printf("17: {%010-20+20d}\n",-12);;
  printf("17: {%010-20+20d}\n",-12);;

  puts("\n");

  ft_printf("18: %01k\n", 383);
  printf("18: %01k\n", 383);
  
  puts("\n");

  ft_printf("19: %02k\n", 383);
  printf("19: %02k\n", 383);

  puts("\n");

  ft_printf("20: %02+$\n", 383);
  printf("20: %02+$\n", 383);

  puts("\n");

  ft_printf("21: %2+$\n", 383);
  printf("21: %2+$\n", 383);

  puts("\n");

  ft_printf("22: %2-k\n", 383);
  printf("22: %2-k\n", 383);

  puts("\n");

  ft_printf("23: %099.10d\n", 383);
  printf("23: %099.10d\n", 383);

  puts("\n");

  ft_printf("24: %99.10d\n", 383);
  printf("24: %99.10d\n", 383);

  puts("\n");

  ft_printf("25: %-2 k\n", 383);
  printf("25: %-2 k\n", 383);

  puts("\n");

  ft_printf("26: %-2k\n", 383);
  printf("26: %-2k\n", 383);

  puts("\n");

  ft_printf("27: %-2k\n", 383);
  printf("27: %-2k\n", 383);

  puts("\n");

  ft_printf("27: %20-dl\n", 383);
  printf("27: %20-dl\n", 383);

  puts("\n");

  ft_printf("28:%22-1.88c\n", 'p');
  printf("28:%22-1.88c\n", 'p');

  puts("\n");

  ft_printf("29:%-22+66+33+.99d\n", 10);
  printf("29:%-22+66+33+.99d\n", 10);

  puts("\n");

  ft_printf("30:%099-d$\n", 10);
  printf("30:%099-d$\n", 10);

  puts("\n");

  ft_printf("31:%-099dl\n", 10);
  printf("31:%-099dl\n", 10);

  puts("\n");

  ft_printf("32: %99.10-1d\n", 383);
  printf("32: %99.10-1d\n", 383);

  puts("\n");

  ft_printf("33: %k\n");
  printf("33: %k\n");

  puts("\n");

  ft_printf("34: %\055\038\0100\n");
  printf("34: %\055\038\0100\n");

  puts("\n");

  ft_printf("35: %20s\n", "hello world");
  printf("35: %20s\n", "hello world");

  puts("\n");

  ft_printf("36: %-20s$\n", "hello world");
  printf("36: %-20s$\n", "hello world");

  puts("\n");

  ft_printf("37: %015s$\n", "hello world");
  printf("37: %015s$\n", "hello world");

  puts("\n");

  ft_printf("38: %015.5s$\n", "hello world");
  printf("38: %015.5s$\n", "hello world");

  puts("\n");

  ft_printf("39: %015.5d$\n", 383);
  printf("39: %015.5d$\n", 383);

  puts("\n");

  ft_printf("40: % k\n");
  printf("40: % k\n");

  puts("\n");

  ft_printf("41: %+k\n");
  printf("41: %+k\n");

  puts("\n");

  printf("%d\n", ft_printf("42: %% |"));
  printf("%d\n", printf("42: %% |"));

  puts("\n");

  printf("%d\n", ft_printf(" %-2c |", '0'));
  printf("%d\n", printf(" %-2c |", '0'));

  puts("\n");

  printf("%d\n", ft_printf("%1s|", ""));
  printf("%d\n", printf("%1s|", ""));

  puts("\n");

#include <limits.h>
  printf("%d\n", ft_printf(" %-11p %-12p |", INT_MIN, INT_MAX));
  printf("%d\n", printf(" %-11p %-12p |", INT_MIN, INT_MAX));

  puts("\n");

  printf("%d\n", ft_printf(" %.s |", "-"));
  printf("%d\n", printf(" %.s |", "-"));

  puts("\n");

  printf("%d\n", ft_printf(" %#x |", 0));
  printf("%d\n", printf(" %#x |", 0));

  puts("\n");

  printf("%d\n", ft_printf(" % d |", 0));
  printf("%d\n", printf(" % d |", 0));

  puts("\n");

  printf("%d\n", ft_printf("^.^/%47.42s^.^/|", ""));
  printf("%d\n", printf("^.^/%47.42s^.^/|", ""));

  puts("\n");

  printf("%d\n", ft_printf("\\!/%48.16s\\!/|", NULL));
  printf("%d\n", printf("\\!/%48.16s\\!/|", NULL));

  puts("\n");

  printf("%d\n", ft_printf("^.^/%36.2s^.^/|", NULL));
  printf("%d\n", printf("^.^/%36.2s^.^/|", NULL));

  puts("\n");

  printf("%d\n", ft_printf("!%9p!", 0x0));
  printf("%d\n", printf("!%9p!", 0x0));
  
  puts("\n");

  printf("%d\n", ft_printf("^.^/%0 50d^.^/|", 0));
  printf("%d\n", printf("^.^/%0 50d^.^/|", 0));
  
  puts("\n");

  printf("%d\n", ft_printf("^.^/%50 0d^.^/|", 0));
  printf("%d\n", printf("^.^/%50 0d^.^/|", 0));

  puts("\n");

  printf("%d\n", ft_printf("^.^/%50 05d^.^/|", 0));
  printf("%d\n", printf("^.^/%50 05d^.^/|", 0));

  puts("\n");

  printf("%d\n", ft_printf("\\!/%032.26u\\!/|", 0));
  printf("%d\n", printf("\\!/%032.26u\\!/|", 0));

  puts("\n");

  printf("%d\n", ft_printf("^.^/%#48.58x^.^/", 591262848));
  printf("%d\n", printf("^.^/%#48.58x^.^/", 591262848));

  puts("\n");

  printf("%d\n", ft_printf("42%#42.8x42|", 0));
  printf("%d\n", printf("42%#42.8x42|", 0));

  puts("\n");

  printf("%d\n", ft_printf("42%#48.22x42|", -1738917244));
  printf("%d\n", printf("42%#48.22x42|", -1738917244));

  puts("\n");

  printf("%d\n", ft_printf("42%0#57x42|", -190809888));
  printf("%d\n", printf("42%0#57x42|", -190809888));

  puts("\n");

  printf("%d\n", ft_printf("42%022.2X42", 0));
  printf("%d\n", printf("42%022.2X42", 0));

  puts("\n");

  printf("%d\n", ft_printf("%5%|"));
  printf("%d\n", printf("%5%|"));

  puts("\n");

  printf("%d\n", ft_printf("%-05%|"));
  printf("%d\n", printf("%-05%|"));

  puts("\n");

  printf("%d\n", ft_printf("%.03s", "hi low\0don't print me lol\0|"));
  printf("%d\n", printf("%.03s", "hi low\0don't print me lol\0|"));

  puts("\n");

  printf("%d\n", ft_printf("%.03d", 3838));
  printf("%d\n", printf("%.03d", 3838));

  puts("\n");

  printf("%d\n", ft_printf("%.0i", 0));
  printf("%d\n", printf("%.0i", 0));

  puts("\n");

  printf("%d\n", ft_printf("%.i", 0));
  printf("%d\n", printf("%.i", 0));

  puts("\n");

  printf("%d\n", ft_printf("%.i", 1));
  printf("%d\n", printf("%.i", 1));

  puts("\n");

  printf("%d\n", ft_printf("%.x", 0));
  printf("%d\n", printf("%.x", 0));

  puts("\n");

  printf("%d\n", ft_printf("%#.x", 0));
  printf("%d\n", printf("%#.x", 0));

  puts("\n");

  printf("%d\n", ft_printf("%.p", 0));
  printf("%d\n", printf("%.p", 0));

  puts("\n");

  printf("%d\n", ft_printf("%+.d", 0));
  printf("%d\n", printf("%+.d", 0));

  puts("\n");

  printf("%d\n", ft_printf("%+.u", 0));
  printf("%d\n", printf("%+.u", 0));

  puts("\n");

  printf("%d\n", ft_printf("%+u|", 3838));
  printf("%d\n", printf("%+u|", 3838));

  puts("\n");

  printf("%d\n", ft_printf("% u|", 3838));
  printf("%d\n", printf("% u|", 3838));

  puts("\n");

  printf("%d\n", ft_printf("^.^/% 48.28d^.^/|", 0));
  printf("%d\n", printf("^.^/% 48.28d^.^/|", 0));

  puts("\n");

  printf("%d\n", ft_printf("^.^/%+48.28d^.^/|", 0));
  printf("%d\n", printf("^.^/%+48.28d^.^/|", 0));

  puts("\n");

  printf("%d\n", ft_printf("^.^/%+48.28d^.^/|", 1));
  printf("%d\n", printf("^.^/%+48.28d^.^/|", 1));

  puts("\n");

  printf("%d\n", ft_printf("%01.0d, %01.0d, %01.0d, %01.0d, %01.0d, %01.0d, %01.0d, %01.0d|", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX));
  printf("%d\n", printf("%01.0d, %01.0d, %01.0d, %01.0d, %01.0d, %01.0d, %01.0d, %01.0d|", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX));

  puts("\n");

  printf("%d\n", ft_printf("%01.0d|", 0));
  printf("%d\n", printf("%01.0d|", 0));

  puts("\n");

  printf("%d\n", ft_printf(" %%"));
  printf("%d\n", printf(" %%"));

  puts("\n");

  printf("%d\n", ft_printf("%%c|"));
  printf("%d\n", printf("%%c|"));

  puts("\n");

  printf("%d\n", ft_printf("%%%%%%|"));
  printf("%d\n", printf("%%%%%%|"));

}
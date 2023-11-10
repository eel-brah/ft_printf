#include "libftprintf.h"

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

//   puts("\n");

//   ft_printf("8: %0100+30d$\n", 383);
//   printf("8: %0100+30d$\n", 383);

//   puts("\n");

//   ft_printf("9: %0100+30-20d$\n", 383);
//   printf("9: %0100+30-20d$\n", 383);

//   puts("\n");

//   ft_printf("10: %010+$\n", 383);
//   printf("10: %010+$\n", 383);


  puts("\n");

  ft_printf("11: %010.20d$\n", 383);
  printf("11: %010.20d$\n", 383);

  puts("\n");

//   ft_printf("12: %.20+010d$\n", 383);
//   printf("12: %.20+010d$\n", 383);

//   puts("\n");

//   ft_printf("13: %.10+020d$\n", 383);
//   printf("13: %.10+020d$\n", 383);

//   puts("\n");

//   ft_printf("14: %010+\n", 383);
//   printf("14: %010+\n", 383);

//   puts("\n");

//   ft_printf("15: %.10+020d$\n", -383);
//   printf("15: %.10+020d$\n", -383);

//   puts("\n");

//   ft_printf("16: {%010-20+15d}\n",-12);;
//   printf("16: {%010-20+15d}\n",-12);;

//   puts("\n");

//   ft_printf("17: {%010-20+20d}\n",-12);;
//   printf("17: {%010-20+20d}\n",-12);;

//   puts("\n");

  ft_printf("18: %01$\n", 383);
  printf("18: %01$\n", 383);
  
  puts("\n");

  ft_printf("19: %02lllllll$l\n", 383);
  printf("19: %-5llllll$-5l\n", 383);

  puts("\n");

//   ft_printf("20: %02+$\n", 383);
//   printf("20: %02+$\n", 383);

//   puts("\n");

//   ft_printf("21: %2+$\n", 383);
//   printf("21: %2+$\n", 383);

//   puts("\n");

  ft_printf("22: %2-$\n", 383);
  printf("22: %2-$\n", 383);

  puts("\n");

  ft_printf("23: %099.10d\n", 383);
  printf("23: %099.10d\n", 383);

  puts("\n");

  ft_printf("24: %99.10dl\n", 383);
  printf("24: %99.10dl\n", 383);

   puts("\n");

   ft_printf("24: %99.10-1dl\n", 383);
  printf("24: %99.10-1dl\n", 383);

   puts("\n");

  ft_printf("24: %-99.10d\n", 383);
  printf("24: %-99.10d\n", 383);

  puts("\n");

  ft_printf("25: %-2 $\n", 383);
  printf("25: %-2 $\n", 383);

  puts("\n");

  ft_printf("26: %-2$\n", 383);
  printf("26: %-2$\n", 383);

  puts("\n");

  ft_printf("27: %-2k\n");
  printf("27: %-2k\n");

  puts("\n");

  ft_printf("27: %20-d$\n", 383);
  printf("27: %20-d$\n", 383);

  puts("\n");

  ft_printf("30:%099-d$\n", 10);
  printf("30:%099-d$\n", 10);

  puts("\n");

  ft_printf("31:%-099d$\n", 10);
  printf("31:%-099d$\n", 10);
}
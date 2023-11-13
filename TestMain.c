#include "ft_printf.h"

void	conversion_s_tests(int is_mine);

void	basic_string_conversion_test()
{
	// Redirect standard output to a file
    freopen("Ft_My_Output.txt", "w", stdout);
    conversion_s_tests(1);
    fclose(stdout);

	freopen("Ft_Real_Output.txt", "w", stdout);
    conversion_s_tests(0);
    fclose(stdout);
	
	//restore the default stdout
	freopen("/dev/tty", "w", stdout);
}

#pragma region New 000

void new_000(int is_mine)
{
	int c = 0;
	int i = 0;
	
	if (is_mine == 1)
	{
		c = 0;
		i = ft_printf("[|%022.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%0.100s.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%.022.1500s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%22.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%100s.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%22.1500s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%.s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%5s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%100s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-22.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-100s.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-22.1500s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-22.s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-.s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-5s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-225s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\t%s\n", "coucou, ca va?");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%s%s%s\" is visible.\n", "TRALALA", "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		char null_s = NULL;
		i = ft_printf("  Or\t:\tThe Null string \"%s\" is visible.\n", null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%s%s%s\" is visible.\n", null_s, null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%s%s%s%s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%36s%s%98.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%s%s%s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-s%-s%-s%-s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%36s%-s%-98.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-s%-s%-s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%0-s%-0s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0.s%-0.s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-.0s%-.0s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-.000s%-.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-000.000s%00-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-985.000s%159-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%$-0.s$%-0.s\" $is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %-10.2-20.3-0s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %-10-5-9-300s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %0-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %0\-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %0\-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %0\-10-5-9-3.00s is\n", "9999999999999999");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %\-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %\-10-5-9-3.00s is\n", "9999999999999999");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		
		

		///
		i = ft_printf("%080....  88ste\n","test");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("%080....  \88ste\n","test");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("%080....  \88ste\n", NULL);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("%080....  88cte\n", 'h');
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("%080....  \88cte\n", 'c');
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("%080....  \88cte\n", NULL);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		int h = 1;
		i = ft_printf("%080....  88pte\n", &h);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("%080....  \88pte\n", &h);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("%080....  \88pte\n", NULL);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
	}
	else
	{
		c = 0;
		i = printf("[|%022.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%0.100s.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%.022.1500s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%22.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%100s.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%22.1500s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%.s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%5s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%100s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%-22.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%-100s.15s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%-22.1500s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%-22.s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%-.s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%-5s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("[|%-225s|]\n", "Hello  ");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\t%s\n", "coucou, ca va?");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%s%s%s\" is visible.\n", "TRALALA", "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		char null_s = NULL;
		i = printf("  Or\t:\tThe Null string \"%s\" is visible.\n", null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%s%s%s\" is visible.\n", null_s, null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%s%s%s%s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%36s%s%98.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%s%s%s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-s%-s%-s%-s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%36s%-s%-98.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-s%-s%-s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0s%-0s%0-s%-0s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", null_s, null_s);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0.s%-0.s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-.0s%-.0s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-.000s%-.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-000.000s%00-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-985.000s%159-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%$-0.s$%-0.s\" $is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %-10.2-20.3-0s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %-10-5-9-300s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %0-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %0\-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %0\-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %0\-10-5-9-3.00s is\n", "9999999999999999");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %\-10-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %\-10-5-9-3.00s is\n", "9999999999999999");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);


		i = printf("%080....  88ste\n","test");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);

		i = printf("%080....  \88ste\n","test");
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);

		i = printf("%080....  \88ste\n", NULL);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);

		i = printf("%080....  88cte\n", 'h');
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);

		i = printf("%080....  \88cte\n", 'c');
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);

		i = printf("%080....  \88cte\n", NULL);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
		
		int h = 1;
		i = printf("%080....  88pte\n", &h);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);

		i = printf("%080....  \88pte\n", &h);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);

		i = printf("%080....  \88pte\n", NULL);
		c++;
		printf("\nNew 000: I= %d, TestN: %d\n", i, c);
	}
}

#pragma endregion

#pragma region New 001

void new_001(int is_mine)
{
	int c = 0;
	int i = 0;
	
	if (is_mine == 1)
	{
		///### New 001
		i = ft_printf("  Or\t:\tThe [%.s]\n", 1, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  Or\t:\tThe [%.2s]\n", 1, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  Or\t:\tThe [%.s]\n", 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  Or\t:\tThe [%..s]\n", 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  Or\t:\tThe [%...s]\n", 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  Or\t:\tThe [%...s]\n",5, 8, 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  Or\t:\tThe [%...s]\n",5, 8, 1, 2, 10, 20, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  Or\t:\tThe [%.-..s]\n", 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  Or\t:\tThe [%-...s]\n",5, 8, 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  Or\t:\tThe [%...-s]\n",5, 8, 1, 2, 10, 20, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		///### End New 001
	}
	else
	{
		///### New 001
		i = printf("  Or\t:\tThe [%.s]\n", 1, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe [%.2s]\n", 1, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe [%.s]\n", 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe [%..s]\n", 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe [%...s]\n", 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe [%...s]\n",5, 8, 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe [%...s]\n",5, 8, 1, 2, 10, 20, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe [%.-..s]\n", 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe [%-...s]\n",5, 8, 1, 2, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe [%...-s]\n",5, 8, 1, 2, 10, 20, "heloo");
		c++;
		printf("\nNew 001: I= %d, TestN: %d\n", i, c);
		///### End New 001
	}
}

#pragma endregion

#pragma region New 002

void new_002(int is_mine)
{
	int c = 0;
	int i = 0;
	
	if (is_mine == 1)
	{
		i = ft_printf("  Or\t:\tThe %.0s===\n", 2, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.0s===\n", -2, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.0s===\n", 295, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.0s===\n", -295, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.0s===\n", -0, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.0s===\n", 0, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.s===\n", 2, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.s===\n", -2, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.s===\n", 20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.0s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.14s===\n", -20, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.14s===\n", -20, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %.970s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %974.970s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  Or\t:\tThe %097.970s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
	}
	else
	{
		i = printf("  Or\t:\tThe %.0s===\n", 2, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.0s===\n", -2, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.0s===\n", 295, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.0s===\n", -295, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.0s===\n", -0, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.0s===\n", 0, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.s===\n", 2, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.s===\n", -2, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.s===\n", 20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.0s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);

		i = printf("  Or\t:\tThe %.14s===\n", -20, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %.14s===\n", -20, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %.970s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %974.970s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
		
		i = printf("  Or\t:\tThe %097.970s===\n", -20000, "15900000000");
		c++;
		printf("\nNew002: I= %d, TestN: %d\n", i, c);
	}
}

#pragma endregion

#pragma region New 003

void new_003(int is_mine)
{
	int c = 0;
	int i = 0;
	
	if (is_mine == 1)
	{
		i = ft_printf("  [%.s]===\n", -20, 10, -0, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("  [%.ss]===\n", -20, 10, -0, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("  [%.\ss]===\n", -20, 10, -0, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("Or\t:\tThe %.s===\n", 99999999999999999, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("   Or\t:\tThe %.s===\n", -2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("   Or\t:\tThe %s===\n", -2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("   Or\t:\tThe %.s===\n",10, -2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("   Or\t:\tThe %.s===\n", 10, 12,-2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("   Or\t:\tThe %-.s===\n", 10, 12,-2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("   Or\t:\tThe %.----s===\n", 10, 12,-2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("   Or\t:\tThe %-.----s===\n", 10, 12,-2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);


		i = ft_printf("[%.2-50s]", NULL);
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("   Or\t:\tThe %-.----s===\n", 10, 12,-2, NULL);
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("[%.2+  -- ++  ++ --++98.3215.321- 51.2-50s]", NULL);
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		
		i = ft_printf("   Or\t:\tThe %-.--  --s===\n", 10, 12,-2, NULL);
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
	}
	else
	{
		i = printf("  [%.s]===\n", -20, 10, -0, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		
		i = printf("  [%.ss]===\n", -20, 10, -0, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("  [%.\ss]===\n", -20, 10, -0, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);


		i = printf("Or\t:\tThe %.s===\n", 99999999999999999, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("   Or\t:\tThe %.s===\n", -2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("   Or\t:\tThe %s===\n", -2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("   Or\t:\tThe %.s===\n",10, -2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("   Or\t:\tThe %.s===\n", 10, 12,-2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("   Or\t:\tThe %-.s===\n", 10, 12,-2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("   Or\t:\tThe %.----s===\n", 10, 12,-2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("   Or\t:\tThe %-.----s===\n", 10, 12,-2, "15900000000");
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("[%.2-50s]", NULL);
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		
		i = printf("   Or\t:\tThe %-.----s===\n", 10, 12,-2, NULL);
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);

		i = printf("[%.2+  -- ++  ++ --++98.3215.321- 51.2-50s]", NULL);
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
		
		i = printf("   Or\t:\tThe %-.--  --s===\n", 10, 12,-2, NULL);
		c++;
		printf("\nNew003: I= %d, TestN: %d\n", i, c);
	}
}

#pragma endregion

#pragma region New 004

void new_004(int is_mine)
{
	char null_s = NULL;
	int c = 0;
	int i = 0;
	
	if (is_mine == 1)
	{
		c = 0;
		i = ft_printf("  Or\t:\tThe string \"%s%###s%s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-s%##-s%-s%-s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%- #s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%3###6s%-s%-98#.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-s%-s%-s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%0-s%-0s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", null_s, null_s);
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0.s%-0.s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-.0s%-.0s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-.00 0s%-. 000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-00 0.000s%00-0. 000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-98  5.0#00s%159-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%$-0.s$%-0#.#s\" $is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %-10.##  ##2-20.3-0s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %-10-5-##  ## 9-300s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %-1   ###0-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %0-10-   5###  -9-3.00s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %0\-10-5-9-#3. 0 0s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %0  #\-10-5-9-3.0#0s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %0 \###   -10-5-9-3.00s is\n", "9999999999999999");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %\-10-5  ++++######-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe %\-10-5  +++++   -9-3.00s is\n", "9999999999999999");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
	}
	else
	{
		c = 0;
		i = printf("  Or\t:\tThe string \"%s%###s%s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-s%##-s%-s%-s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%- #s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%3###6s%-s%-98#.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-s\" is visible.\n", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-s%-s%-s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0s%-0s%0-s%-0s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", null_s, null_s);
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0.s%-0.s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-.0s%-.0s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-.00 0s%-. 000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-00 0.000s%00-0. 000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-98  5.0#00s%159-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%$-0.s$%-0#.#s\" $is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %-10.##  ##2-20.3-0s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %-10-5-##  ## 9-300s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %-1   ###0-5-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %0-10-   5###  -9-3.00s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %0\-10-5-9-#3. 0 0s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %0  #\-10-5-9-3.0#0s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %0 \###   -10-5-9-3.00s is\n", "9999999999999999");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %\-10-5  ++++######-9-3.00s is\n", "12345666");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe %\-10-5  +++++   -9-3.00s is\n", "9999999999999999");
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
	}
}

#pragma endregion

#pragma region New 005

void new_005(int is_mine)
{
	int c = 0;
	int i = 0;
	
	if (is_mine == 1)
	{
		i = ft_printf("[%c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-.c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-.0c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-0.0c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-0#.  #0c,%\\\50#c]", 'h', 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-0#.  #0c]", 30, 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-0#.  #0c%c]", 30, 'y', 95, 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-0#.  #0c%.c]", 30, 'o', 95, 69, -5, 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-0#.  #0c%.c]", 30, 65, 95, 69, -5, 15);
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-0#.  #0c%.s]", 30, 65, 95, 69, -5, "hello");
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%c%###c%c\" is visible.\n", 's', 0, 15, 'p');
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[%-.0c]", NULL);
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		fflush(stdout);
	}

	else
	{
		i = printf("[%c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-.c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-.0c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-0.0c]", 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-0#.  #0c,%\\\50#c]", 'h', 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-0#.  #0c]", 30, 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-0#.  #0c%c]", 30, 'y', 95, 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-0#.  #0c%.c]", 30, 'o', 95, 69, -5, 'h');
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-0#.  #0c%.c]", 30, 65, 95, 69, -5, 15);
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("[%-0#.  #0c%.s]", 30, 65, 95, 69, -5, "hello");
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%c%###c%c\" is visible.\n", 's', 0, 15, 'p');
		c++;
		printf("\nNew004: I= %d, TestN: %d\n", i, c);
		i = printf("[%-.0c]", NULL);
		c++;
		printf("\nNew005_characters: I= %d, Test Number: %d\n", i, c);
	}
}

#pragma endregion

#pragma region New 006 Pointer Adress

void new_006_pointer_adress(int is_mine)
{
	int c = 0;
	int i = 0;
	int my_value1 = 42;
    void *my_pointer1 = &my_value1;
	int my_value2 = 42;
    void *my_pointer2 = &my_value2;
	
	if (is_mine == 1)
	{
		i = ft_printf("--->[%-.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%050.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%0-50.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%-.21p], [%-98p]", my_pointer1, 200, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%050.21p], [%00225p]", my_pointer1, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%0-50.21p], [%0.0p]", my_pointer1, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%-+++---.21p], [%-9  8p]", my_pointer1, 200, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%0++--+  50.21p], [%002  +++25p]", my_pointer1, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%0-5  +-0.21p], [%0.098p]", my_pointer1, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%-.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%050.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%0-50.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%-.21p], [%-98p]", NULL, 200, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%050.21p], [%00225p]", NULL, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%0-50.21p], [%0.0p]", NULL, NULL);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%-+++---.21p], [%-9  8p]", NULL, 200, NULL);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%0++--+  50.21p], [%002  +++25p]", NULL, NULL);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("--->[%0-5  +-0.21p], [%0.098p]", NULL, NULL);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

	}
	else
	{
		i = printf("--->[%-.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%050.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%0-50.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%-.21p], [%-98p]", my_pointer1, 200, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%050.21p], [%00225p]", my_pointer1, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%0-50.21p], [%0.0p]", my_pointer1, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%-+++---.21p], [%-9  8p]", my_pointer1, 200, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%0++--+  50.21p], [%002  +++25p]", my_pointer1, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%0-5  +-0.21p], [%0.098p]", my_pointer1, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%-.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%050.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%0-50.21p]", my_pointer1);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%-.21p], [%-98p]", NULL, 200, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%050.21p], [%00225p]", NULL, my_pointer2);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%0-50.21p], [%0.0p]", NULL, NULL);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%-+++---.21p], [%-9  8p]", NULL, 200, NULL);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%0++--+  50.21p], [%002  +++25p]", NULL, NULL);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);

		i = printf("--->[%0-5  +-0.21p], [%0.098p]", NULL, NULL);
		c++;
		printf("\new_006_pointer_adress: I= %d, TestN: %d\n", i, c);
	}
}

#pragma endregion

#pragma region New 007 more cahracter

void new_007_more_cahracter(int is_mine)
{
	int c = 0;
	int i = 0;
	int my_value1 = 42;
    void *my_pointer1 = &my_value1;
	int my_value2 = 42;
    void *my_pointer2 = &my_value2;
	
	if (is_mine == 1)
	{
		i = ft_printf("12: %.20+010c\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("12.1: %010++01c\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("12.2: %-10++-0cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("12.3: %10++0cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("12.3.1: %10++0+10cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("12.3.2: %10+01+0cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("12.4: %10++01cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("12.5: %10++1cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("12.6: %.10++.0cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);

		i = ft_printf("12.6: %.10++.cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
		fflush(stdout);
	}
	else
	{
		i = printf("12: %.20+010c\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);

		i = printf("12.1: %010++01c\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);

		i = printf("12.2: %-10++-0cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);

		i = printf("12.3: %10++0cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);

		i = printf("12.3.1: %10++0+10cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);

		i = printf("12.3.2: %10+01+0cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);

		i = printf("12.4: %10++01cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);

		i = printf("12.5: %10++1cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);

		i = printf("12.6: %.10++.0cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);

		i = printf("12.6: %.10++.cl\n", 'k');
		c++;
		printf("\nnew_007_more_cahracter: I= %d, TestN: %d\n", i, c);
	}
}

#pragma endregion

#pragma region New 008 more pointer Adress

void new_008_more_pointer_adress(int is_mine)
{
	char c = 'k';
	int test_n = 0;
	int i = 0;
	int my_value1 = 42;
    void *my_pointer1 = &my_value1;
	int my_value2 = 42;
    void *my_pointer2 = &my_value2;
	
	if (is_mine == 1)
	{
		i = ft_printf("12: %.55+099p\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.1: %055++01p\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.2: %-55++-0pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.3: %55++0pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.3.1: %55++0+33pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.3.2: %55+01+0pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.4: %55++033pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.5: %55++1pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.6: %.55++.0pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.6: %.55++.pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);

		i = ft_printf("12.6: %pl\n", NULL);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
		fflush(stdout);
	}
	else
	{
		i = printf("12: %.55+099p\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.1: %055++01p\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.2: %-55++-0pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.3: %55++0pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.3.1: %55++0+33pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.3.2: %55+01+0pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.4: %55++033pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.5: %55++1pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.6: %.55++.0pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.6: %.55++.pl\n", &c);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);

		i = printf("12.6: %pl\n", NULL);
		test_n++;
		printf("\new_008_more_pointer_adress: I= %d, TestN: %d\n", i, test_n);
	}
}

#pragma endregion

void	conversion_s_tests(int is_mine)
{
	int c = 0;
	int i = 0;
	if (is_mine == 1)
	{

		////### New 000
		new_000(is_mine);
		////### New 000
		
		////### New 001
		new_001(is_mine);
		////### New 001

		////### New 002
		new_002(is_mine);
		////### New 002

		////### New 003
		new_003(is_mine);
		////### New 003

		////### New 004
		new_004(is_mine);
		////### New 004

		////### New 005
		new_005(is_mine);
		////### New 005

		////### New 006 adress (p)
		new_006_pointer_adress(is_mine);
		////### New 006 adress (p)

		////### New 007 more character
		new_007_more_cahracter(is_mine);
		////### New 007 more character

		////### New 008 more pointer adress
		new_008_more_pointer_adress(is_mine);
		////### New 008 more pointer adress
	}
	else
	{
		////### New 000
		new_000(is_mine);
		////### New 000

		////### New 001
		new_001(is_mine);
		////### New 001

		////### New 002
		new_002(is_mine);
		////### New 002

		////### New 003
		new_003(is_mine);
		////### New 003

		////### New 004
		new_004(is_mine);
		////### New 004

		////### New 005
		new_005(is_mine);
		////### New 005

		////### New 006 adress (p)
		new_006_pointer_adress(is_mine);
		////### New 006 adress (p)

		////### New 007 more character
		new_007_more_cahracter(is_mine);
		////### New 007 more character

		////### New 008 more pointer adress
		new_008_more_pointer_adress(is_mine);
		////### New 008 more pointer adress
	}
	
}

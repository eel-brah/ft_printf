/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestMain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzirri <yzirri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:34:42 by yzirri            #+#    #+#             */
/*   Updated: 2023/11/10 23:16:04 by yzirri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	conversion_s_tests(int is_mine);
void	basic_string_conversion_test();
//void	test_s(void);
int main()
{
	basic_string_conversion_test();
}
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

void	conversion_s_tests(int is_mine)
{
	int c = 0;
	int i = 0;
	if (is_mine == 1)
	{
		c = 0;
		i = ft_printf("[|%022.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%0.100s.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%.022.1500s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%22.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%100s.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%22.1500s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%.s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%5s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%100s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-22.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-100s.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-22.1500s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-22.s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-.s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-5s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("[|%-225s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\t%s\n", "coucou, ca va?");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%s%s%s\" is visible.\n", "TRALALA", "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		char *null_s = NULL;
		i = ft_printf("  Or\t:\tThe Null string \"%s\" is visible.\n", null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%s%s%s\" is visible.\n", null_s, null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%s%s%s%s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%*s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%*s\" is visible.\n", 985, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%36s%*s%98.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%*s\" is visible.\n", 985, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%s%*s%s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-s%-s%-s%-s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-*s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-*s\" is visible.\n", 985, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%36s%-*s%-98.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-*s\" is visible.\n", 985, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe string \"%-s%-*s%-s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%0-s%-0s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-0.s%-0.s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-.0s%-.0s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-.000s%-.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-000.000s%00-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%-985.000s%159-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
		i = ft_printf("  Or\t:\tThe Null string \"%$-0.s$%-0.s\" $is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		fflush(stdout);
	}
	else
	{
		c = 0;
		i = printf("[|%022.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%0.100s.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%.022.1500s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%22.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%100s.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%22.1500s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%.s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%5s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%100s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%-22.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%-100s.15s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%-22.1500s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%-22.s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%-.s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%-5s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("[|%-225s|]\n", "Hello  *");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\t%s\n", "coucou, ca va?");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%s%s%s\" is visible.\n", "TRALALA", "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		char *null_s = NULL;
		i = printf("  Or\t:\tThe Null string \"%s\" is visible.\n", null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%s%s%s\" is visible.\n", null_s, null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%s%s%s%s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%*s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%*s\" is visible.\n", 985, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%36s%*s%98.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%*s\" is visible.\n", 985, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%s%*s%s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-s%-s%-s%-s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-*s\" is visible.\n", 0, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-*s\" is visible.\n", 985, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%36s%-*s%-98.5s\" is visible.\n", "TRALALA", 30, "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-*s\" is visible.\n", 985, "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe string \"%-s%-*s%-s\" is visible.\n", "TRALALA", 0, "TRALALA", "TRALALA");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0s%-0s%0-s%-0s\" is visible.\n", null_s, null_s, null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", null_s, null_s);
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0s%-0s%\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-0.s%-0.s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-.0s%-.0s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-.000s%-.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-000.000s%00-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%-985.000s%159-0.000s\" is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
		i = printf("  Or\t:\tThe Null string \"%$-0.s$%-0.s\" $is visible.\n", "hellos", "Ezz");
		c++;
		printf("\nI= %d, TestN: %d\n", i, c);
	}
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:48:33 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 16:49:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/user42/Projects/Printf/printf.h"

void	u_tests(void)
{
	int len;

	ft_printf(" ---------- U TESTS -----------\n");
	ft_printf("Simple (no flags) :\n");
	len = ft_printf("|%u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width :\n");
	len = ft_printf("|%8u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and 0 :\n");
	len = ft_printf("|%010u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision (width bigger) :\n");
	len = ft_printf("|%12.6u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision (precision bigger) :\n");
	len = ft_printf("|%6.12u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision (precision 0) :\n");
	len = ft_printf("|%6.u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and minus :\n");
	len = ft_printf("|%-12u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, minus and 0 :\n");
	len = ft_printf("|%-12u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, minus and precision (precision bigger) :\n");
	len = ft_printf("|%-6.12u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, minus and precision (width bigger) :\n");
	len = ft_printf("|%-12.6u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, 0 and precision (precision bigger) :\n");
	len = ft_printf("|%06.12u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, 0 and precision (width bigger) :\n");
	len = ft_printf("|%012.6u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision :\n");
	len = ft_printf("|%.6u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision = 0 :\n");
	len = ft_printf("|%.u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision and 0 :\n");
	len = ft_printf("|%0.6u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision and minus :\n");
	len = ft_printf("|%-.6u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision, minus and zero :\n");
	len = ft_printf("|%-.6u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith only minus :\n");
	len = ft_printf("|%-u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith only zero :\n");
	len = ft_printf("|%0u|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width as argument :\n");
	len = ft_printf("|%*u|\n", 12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width = 0 as argument :\n");
	len = ft_printf("|%*u|\n", 0, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith negative width as argument :\n");
	len = ft_printf("|%*u|\n", -12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision as argument :\n");
	len = ft_printf("|%.*u|\n", 12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision = 0 as argument :\n");
	len = ft_printf("|%.*u|\n", 0, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith negative precision as argument :\n");
	len = ft_printf("|%.*u|\n", -12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision as argument :\n");
	len = ft_printf("|%*.*u|\n", 12, 6, 158);
	ft_printf("[Length = %i]\n", len);
}

void	u_adv_tests(void)
{
	int len;

	ft_printf("\nSpecial case of printing 0 (no flags) :\n");
	len = ft_printf("|%u|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width) :\n");
	len = ft_printf("|%12u|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width and zero flag) :\n");
	len = ft_printf("|%012u|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width = 0) :\n");
	len = ft_printf("|%*u|\n", 0, 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with precision) :\n");
	len = ft_printf("|%.6u|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with precision = 0) :\n");
	len = ft_printf("|%.u|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width and precision) :\n");
	len = ft_printf("|%12.6u|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an unsigned int beyond INT_MAX (no flags):\n");
	len = ft_printf("|%u|\n", 21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an unsigned int below INT_MIN (no flags):\n");
	len = ft_printf("|%u|\n", -21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an int beyond INT_MAX (with width):\n");
	len = ft_printf("|%20u|\n", 21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an int beyond INT_MAX (with width and precision):\n");
	len = ft_printf("|%20.15u|\n", 21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (no flags) :\n");
	len = ft_printf("|%u|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width) :\n");
	len = ft_printf("|%12u|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with precision) :\n");
	len = ft_printf("|%.15u|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width and precision) :\n");
	len = ft_printf("|%20.15u|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width and 0 flag) :\n");
	len = ft_printf("|%020u|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width, precision and minus) :\n");
	len = ft_printf("|%-20.15u|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (no flags) :\n");
	len = ft_printf("|%u|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (with width) :\n");
	len = ft_printf("|%8u|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (with precision) :\n");
	len = ft_printf("|%.6u|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (with width and precision) :\n");
	len = ft_printf("|%12.6u|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (no flags) :\n");
	len = ft_printf("|%u|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (with width) :\n");
	len = ft_printf("|%20u|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (with precision) :\n");
	len = ft_printf("|%.20u|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (with width and precision) :\n");
	len = ft_printf("|%25.20u|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of negative number with zeros at the end (with width, precision and minus) :\n");
	len = ft_printf("|%-25.20u|\n", -12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the beginning (no flags) :\n");
	len = ft_printf("|%u|\n", 000012000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of negative number with zeros at the beginning and at the end (with width, precision and minus) :\n");
	len = ft_printf("|%-25.20u|\n", -000012000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing multiple zeros (no flags) :\n");
	len = ft_printf("|%u|\n", 00000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing multiple negative zeros (with width, precision and minus) :\n");
	len = ft_printf("|%-25.20u|\n", -00000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of UNSIGNED INT MAX (no flags) :\n");
	len = ft_printf("|%u|\n", 4294967295);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of a number beyond UNSIGNED INT MAX (precision flag) :\n");
	len = ft_printf("|%.15u|\n", 42949672950);
	ft_printf("[Length = %i]\n", len);
}

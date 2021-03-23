/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:18:50 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 17:07:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/user42/Projects/Printf/printf.h"

void	x_tests(void)
{
	int len;

	ft_printf(" ---------- x TESTS -----------\n");
	ft_printf("Simple (no flags) :\n");
	len = ft_printf("|%x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width :\n");
	len = ft_printf("|%8x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and 0 :\n");
	len = ft_printf("|%010x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision (width bigger) :\n");
	len = ft_printf("|%12.6x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision (precision bigger) :\n");
	len = ft_printf("|%6.12x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision (precision 0) :\n");
	len = ft_printf("|%6.x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and minus :\n");
	len = ft_printf("|%-12x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, minus and 0 :\n");
	len = ft_printf("|%-12x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, minus and precision (precision bigger) :\n");
	len = ft_printf("|%-6.12x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, minus and precision (width bigger) :\n");
	len = ft_printf("|%-12.6x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, 0 and precision (precision bigger) :\n");
	len = ft_printf("|%06.12x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, 0 and precision (width bigger) :\n");
	len = ft_printf("|%012.6x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision :\n");
	len = ft_printf("|%.6x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision = 0 :\n");
	len = ft_printf("|%.x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision and 0 :\n");
	len = ft_printf("|%0.6x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision and minus :\n");
	len = ft_printf("|%-.6x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision, minus and zero :\n");
	len = ft_printf("|%-.6x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith only minus :\n");
	len = ft_printf("|%-x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith only zero :\n");
	len = ft_printf("|%0x|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width as argument :\n");
	len = ft_printf("|%*x|\n", 12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width = 0 as argument :\n");
	len = ft_printf("|%*x|\n", 0, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith negative width as argument :\n");
	len = ft_printf("|%*x|\n", -12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision as argument :\n");
	len = ft_printf("|%.*x|\n", 12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision = 0 as argument :\n");
	len = ft_printf("|%.*x|\n", 0, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith negative precision as argument :\n");
	len = ft_printf("|%.*x|\n", -12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision as argument :\n");
	len = ft_printf("|%*.*x|\n", 12, 6, 158);
	ft_printf("[Length = %i]\n", len);
}

void	x_adv_tests(void)
{
	int len;

	ft_printf("\nSpecial case of printing 0 (no flags) :\n");
	len = ft_printf("|%x|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width) :\n");
	len = ft_printf("|%12x|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width and zero flag) :\n");
	len = ft_printf("|%012x|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width = 0) :\n");
	len = ft_printf("|%*x|\n", 0, 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with precision) :\n");
	len = ft_printf("|%.6x|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with precision = 0) :\n");
	len = ft_printf("|%.x|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width and precision) :\n");
	len = ft_printf("|%12.6x|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an unsigned int beyond INT_MAX (no flags):\n");
	len = ft_printf("|%x|\n", 21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an unsigned int below INT_MIN (no flags):\n");
	len = ft_printf("|%x|\n", -21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an int beyond INT_MAX (with width):\n");
	len = ft_printf("|%20x|\n", 21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an int beyond INT_MAX (with width and precision):\n");
	len = ft_printf("|%20.15x|\n", 21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (no flags) :\n");
	len = ft_printf("|%x|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width) :\n");
	len = ft_printf("|%12x|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with precision) :\n");
	len = ft_printf("|%.15x|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width and precision) :\n");
	len = ft_printf("|%20.15x|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width and 0 flag) :\n");
	len = ft_printf("|%020x|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width, precision and minus) :\n");
	len = ft_printf("|%-20.15x|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (no flags) :\n");
	len = ft_printf("|%x|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (with width) :\n");
	len = ft_printf("|%8x|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (with precision) :\n");
	len = ft_printf("|%.6x|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (with width and precision) :\n");
	len = ft_printf("|%12.6x|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (no flags) :\n");
	len = ft_printf("|%x|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (with width) :\n");
	len = ft_printf("|%20x|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (with precision) :\n");
	len = ft_printf("|%.20x|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (with width and precision) :\n");
	len = ft_printf("|%25.20x|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of negative number with zeros at the end (with width, precision and minus) :\n");
	len = ft_printf("|%-25.20x|\n", -12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the beginning (no flags) :\n");
	len = ft_printf("|%x|\n", 000012000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of negative number with zeros at the beginning and at the end (with width, precision and minus) :\n");
	len = ft_printf("|%-25.20x|\n", -000012000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing multiple zeros (no flags) :\n");
	len = ft_printf("|%x|\n", 00000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing multiple negative zeros (with width, precision and minus) :\n");
	len = ft_printf("|%-25.20x|\n", -00000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of UNSIGNED INT MAX (no flags) :\n");
	len = ft_printf("|%u|\n", 4294967295);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of a number beyond UNSIGNED INT MAX (precision flag) :\n");
	len = ft_printf("|%.15u|\n", 42949672950);
	ft_printf("[Length = %i]\n", len);
}

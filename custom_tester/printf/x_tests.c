/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:18:50 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 17:08:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	x_tests(void)
{
	int len;

	printf(" ---------- x TESTS -----------\n");
	printf("Simple (no flags) :\n");
	len = printf("|%x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width :\n");
	len = printf("|%8x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width and 0 :\n");
	len = printf("|%010x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width and precision (width bigger) :\n");
	len = printf("|%12.6x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width and precision (precision bigger) :\n");
	len = printf("|%6.12x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width and precision (precision 0) :\n");
	len = printf("|%6.x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width and minus :\n");
	len = printf("|%-12x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width, minus and 0 :\n");
	len = printf("|%-12x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width, minus and precision (precision bigger) :\n");
	len = printf("|%-6.12x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width, minus and precision (width bigger) :\n");
	len = printf("|%-12.6x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width, 0 and precision (precision bigger) :\n");
	len = printf("|%06.12x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width, 0 and precision (width bigger) :\n");
	len = printf("|%012.6x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith precision :\n");
	len = printf("|%.6x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith precision = 0 :\n");
	len = printf("|%.x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith precision and 0 :\n");
	len = printf("|%0.6x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith precision and minus :\n");
	len = printf("|%-.6x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith precision, minus and zero :\n");
	len = printf("|%-.6x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith only minus :\n");
	len = printf("|%-x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith only zero :\n");
	len = printf("|%0x|\n", 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width as argument :\n");
	len = printf("|%*x|\n", 12, 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width = 0 as argument :\n");
	len = printf("|%*x|\n", 0, 158);
	printf("[Length = %i]\n", len);

	printf("\nWith negative width as argument :\n");
	len = printf("|%*x|\n", -12, 158);
	printf("[Length = %i]\n", len);

	printf("\nWith precision as argument :\n");
	len = printf("|%.*x|\n", 12, 158);
	printf("[Length = %i]\n", len);

	printf("\nWith precision = 0 as argument :\n");
	len = printf("|%.*x|\n", 0, 158);
	printf("[Length = %i]\n", len);

	printf("\nWith negative precision as argument :\n");
	len = printf("|%.*x|\n", -12, 158);
	printf("[Length = %i]\n", len);

	printf("\nWith width and precision as argument :\n");
	len = printf("|%*.*x|\n", 12, 6, 158);
	printf("[Length = %i]\n", len);
}


void	x_adv_tests(void)
{
	int len;

	printf("\nSpecial case of printing 0 (no flags) :\n");
	len = printf("|%x|\n", 0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing 0 (with width) :\n");
	len = printf("|%12x|\n", 0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing 0 (with width and zero flag) :\n");
	len = printf("|%012x|\n", 0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing 0 (with width = 0) :\n");
	len = printf("|%*x|\n", 0, 0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing 0 (with precision) :\n");
	len = printf("|%.6x|\n", 0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing 0 (with precision = 0) :\n");
	len = printf("|%.x|\n", 0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing 0 (with width and precision) :\n");
	len = printf("|%12.6x|\n", 0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing an unsigned int beyond INT_MAX (no flags):\n");
	len = printf("|%x|\n", 21474836490);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing an unsigned int below INT_MIN (no flags):\n");
	len = printf("|%x|\n", -21474836490);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing an int beyond INT_MAX (with width):\n");
	len = printf("|%20x|\n", 21474836490);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing an int beyond INT_MAX (with width and precision):\n");
	len = printf("|%20.15x|\n", 21474836490);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing a negative int (no flags) :\n");
	len = printf("|%x|\n", -158);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing a negative int (with width) :\n");
	len = printf("|%12x|\n", -158);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing a negative int (with precision) :\n");
	len = printf("|%.15x|\n", -158);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing a negative int (with width and precision) :\n");
	len = printf("|%20.15x|\n", -158);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing a negative int (with width and 0 flag) :\n");
	len = printf("|%020x|\n", -158);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing a negative int (with width, precision and minus) :\n");
	len = printf("|%-20.15x|\n", -158);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing negative 0 (no flags) :\n");
	len = printf("|%x|\n", -0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing negative 0 (with width) :\n");
	len = printf("|%8x|\n", -0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing negative 0 (with precision) :\n");
	len = printf("|%.6x|\n", -0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing negative 0 (with width and precision) :\n");
	len = printf("|%12.6x|\n", -0);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of number with zeros at the end (no flags) :\n");
	len = printf("|%x|\n", 12000000);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of number with zeros at the end (with width) :\n");
	len = printf("|%20x|\n", 12000000);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of number with zeros at the end (with precision) :\n");
	len = printf("|%.20x|\n", 12000000);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of number with zeros at the end (with width and precision) :\n");
	len = printf("|%25.20x|\n", 12000000);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of negative number with zeros at the end (with width, precision and minus) :\n");
	len = printf("|%-25.20x|\n", -12000000);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of number with zeros at the beginning (no flags) :\n");
	len = printf("|%x|\n", 000012000000);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of negative number with zeros at the beginning and at the end (with width, precision and minus) :\n");
	len = printf("|%-25.20x|\n", -000012000000);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing multiple zeros (no flags) :\n");
	len = printf("|%x|\n", 00000);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of printing multiple negative zeros (with width, precision and minus) :\n");
	len = printf("|%-25.20x|\n", -00000);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of UNSIGNED INT MAX (no flags) :\n");
	len = printf("|%u|\n", 4294967295);
	printf("[Length = %i]\n", len);

	printf("\nSpecial case of a number beyond UNSIGNED INT MAX (precision flag) :\n");
	len = printf("|%.15u|\n", 42949672950);
	printf("[Length = %i]\n", len);
}

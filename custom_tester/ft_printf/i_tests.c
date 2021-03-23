/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:15:55 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 17:14:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/user42/Projects/Printf/printf.h"

void	i_tests(void)
{
	int len;

	len = 0;

	ft_printf("Simple (no flags) :\n");
	len = ft_printf("|%i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width :\n");
	len = ft_printf("|%8i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and 0 :\n");
	len = ft_printf("|%010i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision (width bigger) :\n");
	len = ft_printf("|%12.6i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision (precision bigger) :\n");
	len = ft_printf("|%6.12i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision (precision 0) :\n");
	len = ft_printf("|%6.i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and minus :\n");
	len = ft_printf("|%-12i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, minus and 0 :\n");
	len = ft_printf("|%-12i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, minus and precision (precision bigger) :\n");
	len = ft_printf("|%-6.12i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, minus and precision (width bigger) :\n");
	len = ft_printf("|%-12.6i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, 0 and precision (precision bigger) :\n");
	len = ft_printf("|%06.12i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width, 0 and precision (width bigger) :\n");
	len = ft_printf("|%012.6i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision :\n");
	len =ft_printf("|%.6i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision = 0 :\n");
	len = ft_printf("|%.i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision and 0 :\n");
	len = ft_printf("|%0.6i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision and minus :\n");
	len = ft_printf("|%-.6i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision, minus and zero :\n");
	len =ft_printf("|%-.6i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith only minus :\n");
	len =ft_printf("|%-i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith only zero :\n");
	len = ft_printf("|%0i|\n", 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width as argument :\n");
	len = ft_printf("|%*i|\n", 12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width = 0 as argument :\n");
	len = ft_printf("|%*i|\n", 0, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith negative width as argument :\n");
	len = ft_printf("|%*i|\n", -12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision as argument :\n");
	len = ft_printf("|%.*i|\n", 12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith precision = 0 as argument :\n");
	len = ft_printf("|%.*i|\n", 0, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith negative precision as argument :\n");
	len = ft_printf("|%.*i|\n", -12, 158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nWith width and precision as argument :\n");
	len = ft_printf("|%*.*i|\n", 12, 6, 158);
	ft_printf("[Length = %i]\n", len);
}

void	i_adv_tests(void)
{
	int len;
	ft_printf("\nSpecial case of printing 0 (no flags) :\n");
	len = ft_printf("|%i|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width) :\n");
	len = ft_printf("|%12i|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width and zero flag) :\n");
	len = ft_printf("|%012i|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width = 0) :\n");
	len = ft_printf("|%*i|\n", 0, 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with precision) :\n");
	len = ft_printf("|%.6i|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with precision = 0) :\n");
	len = ft_printf("|%.i|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing 0 (with width and precision) :\n");
	len = ft_printf("|%12.6i|\n", 0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an int beyond INT_MAX (no flags):\n");
	len = ft_printf("|%i|\n", 21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an int below INT_MIN (no flags):\n");
	len = ft_printf("|%i|\n", -21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an int beyond INT_MAX (with width):\n");
	len = ft_printf("|%20i|\n", 21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing an int below INT_MIN (with width and precision):\n");
	len = ft_printf("|%20.15i|\n", -21474836490);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (no flags) :\n");
	len = ft_printf("|%i|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width) :\n");
	len = ft_printf("|%12i|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with precision) :\n");
	len = ft_printf("|%.6i|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing a negative int (with width and precision) :\n");
	len = ft_printf("|%12.6i|\n", -158);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (no flags) :\n");
	len = ft_printf("|%i|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (with width) :\n");
	len = ft_printf("|%8i|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (with precision) :\n");
	len = ft_printf("|%.6i|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing negative 0 (with width and precision) :\n");
	len = ft_printf("|%12.6i|\n", -0);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (no flags) :\n");
	len = ft_printf("|%i|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (with width) :\n");
	len = ft_printf("|%20i|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (with precision) :\n");
	len = ft_printf("|%.20i|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the end (with width and precision) :\n");
	len = ft_printf("|%25.20i|\n", 12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of negative number with zeros at the end (with width, precision and minus) :\n");
	len = ft_printf("|%-25.20i|\n", -12000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of number with zeros at the beginning (no flags) :\n");
	len = ft_printf("|%i|\n", 000012000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of negative number with zeros at the beginning and at the end (with width, precision and minus) :\n");
	len = ft_printf("|%-25.20i|\n", -000012000000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing multiple zeros (no flags) :\n");
	len = ft_printf("|%i|\n", 00000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing multiple negative zeros (with width, precision and minus) :\n");
	len = ft_printf("|%-25.20i|\n", -00000);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing precisely INT MAX (with width and precision) :\n");
	len = ft_printf("|%20.15i|\n", 2147483647);
	ft_printf("[Length = %i]\n", len);

	ft_printf("\nSpecial case of printing precisely INT MIN (with width and precision) :\n");
	len = ft_printf("|%20.15i|\n", -2147483648);
	ft_printf("[Length = %i]\n", len);
}

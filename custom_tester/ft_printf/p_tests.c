/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:22:44 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 17:43:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/user42/Projects/Printf/printf.h"
#include <stdio.h>

void	p_tests(void)
{
	int len;
	int ft_len;
	char a = 'A';
	char *char_ptr = &a;

	printf("Simple char pointer (no flags) :\n");
	len = printf("|%p|\n", char_ptr);
	ft_len = ft_printf("|%p|\n", char_ptr);
	printf("len --> %i  %i <-- ft_len\n", len, ft_len);

	printf("Simple char pointer (with width) :\n");
	len = printf("|%20p|\n", char_ptr);
	ft_len = ft_printf("|%20p|\n", char_ptr);
	printf("len --> %i  %i <-- ft_len\n", len, ft_len);

	printf("Simple char pointer (with width and minus) :\n");
	len = printf("|%-20p|\n", char_ptr);
	ft_len = ft_printf("|%-20p|\n", char_ptr);
	printf("len --> %i  %i <-- ft_len\n", len, ft_len);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:09:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/07 14:19:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		is_flag(char c)
{
	if (c == '-' || c == '0' || c == '*' || c == '.')
		return (1);
	return (0);
}

int		is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p'
		|| c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X')
		return (1);
	return (0);
}

t_attr	new_attr(void)
{
	t_attr new;

	new.minus = 0;
	new.zeros = 0;
	new.dot = -1;
	new.width = 0;
	new.type = 0;
	new.star = 0;
	return(new);
}

int		itoa_size_base(long n, int base_size)
{
	int count;

	count = 0;
	while (n)
	{
		n /= base_size;
		count++;
	}
	return (count);
}

int		itoa_un_size_base(unsigned int n, int base_size)
{
	int count;

	count = 0;
	while (n)
	{
		n /= base_size;
		count++;
	}
	return (count);
}

void			print_attr(t_attr tmp)
{
	ft_putstr_fd("[Left_aligned : ", 1);
	ft_putnbr_fd(tmp.minus, 1);
	ft_putstr_fd(" - Zeros : ", 1);
	ft_putnbr_fd(tmp.zeros, 1);
	ft_putstr_fd(" - Width : ", 1);
	ft_putnbr_fd(tmp.width, 1);
	ft_putstr_fd(" - dot : ", 1);
	ft_putnbr_fd(tmp.dot, 1);
	ft_putstr_fd(" - Type : ", 1);
	ft_putchar_fd(tmp.type, 1);
	ft_putchar_fd(']', 1);
}

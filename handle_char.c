/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:33:59 by user42            #+#    #+#             */
/*   Updated: 2020/12/07 16:01:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char			*create_result(t_attr tmp)
{
	char *result;

	if (tmp.width == 0)
	{
		if (!(result = malloc(2 * sizeof(char))))
			return (0);
	}
	else
	{
		if (!(result = malloc((tmp.width + 1) * sizeof(char))))
			return (0);
	}
	return (result);
}

static void			fill(char c, char *result)
{
	result[0] = c;
	result[1] = '\0';
}

static void			fill_right(char c, char *result, t_attr tmp)
{
	int i;

	i = 0;
	while(i < (tmp.width - 1))
		{
			result[i] = ' ';
			i++;
		}
		result[i] = c;
		i++;
		result[i] = '\0';
}

static void			fill_left(char c, char *result, t_attr tmp)
{
	int i;

	i = 0;
	if (c)
	{
		result[i] = c;
		while (++i < tmp.width)
			result[i] = ' ';
		result[i] = '\0';
	}
	else
		fill_right(c, result, tmp);
}

int				handle_char(char c, t_attr tmp)
{
	char	*result;
	int		str_len;

	if (!(result = create_result(tmp)))
		return (0);
	if (tmp.width <= 1)
		fill(c, result);
	else
	{
		if (tmp.minus == 0)
			fill_right(c, result, tmp);
		if (tmp.minus == 1)
			fill_left(c, result, tmp);
	}
	ft_putstr_fd(result, 1);
	str_len = (int)ft_strlen(result);
	free(result);
	return (str_len);
}

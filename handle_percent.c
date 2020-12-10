/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:59:05 by user42            #+#    #+#             */
/*   Updated: 2020/12/10 12:11:50 by user42           ###   ########.fr       */
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

static void			fill(char *result)
{
	result[0] = '%';
	result[1] = '\0';
}

static void			fill_right(char *result, t_attr tmp)
{
	int i;

	i = 0;
	while(i < (tmp.width - 1))
		{
			if (tmp.zeros == 1)
				result[i] = '0';
			if (tmp.zeros == 0)
				result[i] = ' ';
			i++;
		}
		result[i] = '%';
		i++;
		result[i] = '\0';
}

static void			fill_left(char *result, t_attr tmp)
{
	int i;

	i = 0;

	result[i] = '%';
	while (++i < tmp.width)
		result[i] = ' ';
	result[i] = '\0';
}

int				handle_percent(t_attr tmp)
{
	char	*result;
	int		str_len;

	if (!(result = create_result(tmp)))
		return (0);
	if (tmp.width <= 1)
		fill(result);
	else
	{
		if (tmp.minus == 0)
			fill_right(result, tmp);
		if (tmp.minus == 1)
			fill_left(result, tmp);
	}
	ft_putstr_fd(result, 1);
	str_len = (int)ft_strlen(result);
	free(result);
	return (str_len);
}

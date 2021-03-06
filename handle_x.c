/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:51:53 by user42            #+#    #+#             */
/*   Updated: 2020/12/10 19:08:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char		*create_result(t_attr tmp, int nb_len)
{
	char *result;

	if (tmp.width > nb_len && tmp.width > tmp.dot)
	{
		if (!(result = malloc((tmp.width + 1) * sizeof(char))))
			return (0);
	}
	else if (tmp.dot > nb_len && tmp.dot > tmp.width)
	{
		if (!(result = malloc((tmp.dot + 1) * sizeof(char))))
			return (0);
	}
	else
	{
		if (!(result = malloc((nb_len + 1) * sizeof(char))))
			return (0);
	}
	return (result);
}

static void		fill_right(char *nb_str, char *result, t_attr tmp, int nb_len)
{
	int i;

	i = 0;
	while (i < tmp.width - nb_len)
	{
		if (tmp.zeros == 0)
			result[i] = ' ';
		if (tmp.zeros == 1)
			result[i] = '0';
		i++;
	}
	ft_strlcpy(result + i, nb_str, nb_len + 1);
}

static void		fill_left(char *nb_str, char *result, t_attr tmp)
{
	int i;

	i = 0;
	while (nb_str[i])
	{
		result[i] = nb_str[i];
		i++;
	}
	while (i < tmp.width)
	{
		if (tmp.zeros == 0)
			result[i] = ' ';
		if (tmp.zeros == 1)
			result[i] = '0';
		i++;
	}
	result[i] = '\0';
}

int				handle_x(unsigned int nb, t_attr tmp)
{
	char	*result;
	char	*nb_str;
	int		nb_len;

	if (!(nb_str = ft_un_itoa_base_dot(nb, tmp)))
		return (0);
	nb_len = (int)ft_strlen(nb_str);
	if (!(result = create_result(tmp, nb_len)))
		return (0);
	if (tmp.width <= nb_len)
		ft_strlcpy(result, nb_str, nb_len + 1);
	else
	{
		if (tmp.minus == 0)
			fill_right(nb_str, result, tmp, nb_len);
		if (tmp.minus == 1)
			fill_left(nb_str, result, tmp);
	}
	ft_putstr_fd(result, 1);
	nb_len = (int)ft_strlen(result);
	free(nb_str);
	free(result);
	return (nb_len);
}

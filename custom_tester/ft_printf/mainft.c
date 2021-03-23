/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:17:06 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 17:28:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/user42/Projects/Printf/printf.h"

void	i_tests(void);
void 	i_adv_tests(void);
void	u_tests(void);
void	u_adv_tests(void);
void	x_tests(void);
void	x_adv_tests(void);
void	p_tests(void);

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		i_tests();
		i_adv_tests();
		u_tests();
		u_adv_tests();
	}
	if (!ft_strncmp(argv[1], "i_basic", 7))
		i_tests();
	if (!ft_strncmp(argv[1], "i_special", 9))
		i_adv_tests();
	if (!ft_strncmp(argv[1], "u_basic", 7))
		u_tests();
	if (!ft_strncmp(argv[1], "u_special", 9))
		u_adv_tests();
	if (!ft_strncmp(argv[1], "x_basic", 7))
		x_tests();
	if (!ft_strncmp(argv[1], "x_special", 9))
		x_adv_tests();
	if (!ft_strncmp(argv[1], "p_tests", 7))
		p_tests();


	return (0);
}

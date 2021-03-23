/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:38:18 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 16:53:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int             ft_strncmp(const char *s1, const char *s2, size_t n)
{
        size_t i;

        i = 0;
        if (n == 0)
                return (0);
        while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
                i++;
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	i_tests(void);
void 	i_adv_tests(void);
void	u_tests(void);
void	u_adv_tests(void);
void	x_tests(void);
void	x_adv_tests(void);

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

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:36:29 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 11:36:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
#include "libft/libft.h"

typedef struct		s_attr
{
	int		minus;
	int		zeros;
	int		width;
	int		dot;
	int		star;
	char	type;
}					t_attr;

void			print_attr(t_attr tmp);													// To delete
t_attr			new_attr(void);
void			get_attr(t_attr *tmp, const char *format, int *i, va_list argmt);
void			extr_zeros_flag(t_attr *tmp);
void			extr_minus_flag(t_attr *tmp);
void			extr_width_flag(t_attr *tmp, const char *format, int *i, va_list argmt);
void			extr_dot_flag(t_attr *tmp, const char *format, int *i, va_list argmt);
int				ft_printf(const char *format, ...);
int				is_flag(char c);
int				is_type(char c);
int				print_conv(t_attr tmp, va_list argmt);
int				handle_char(char c, t_attr tmp);
int				handle_str(char *str, t_attr tmp);
int				handle_int(int nb, t_attr tmp);
int				itoa_size_base(long n, int base_size);
int				itoa_un_size_base(unsigned int n, int base_size);
char			*ft_itoa_dot(int n, t_attr tmp);
char			*ft_un_itoa_dot(unsigned int n, t_attr tmp);
char			*ft_un_itoa_base_dot(unsigned int n, t_attr tmp);
char			*ft_ptr_itoa_dot(long n, t_attr tmp);
int				handle_u(unsigned int nb, t_attr tmp);
int				handle_x(unsigned int nb, t_attr tmp);
int				handle_p(long nb, t_attr tmp);
int				handle_percent(t_attr tmp);

#endif

/* To do :
 - Mettre les fonctions des handlers en statique

  - AJouter dans les tests : nombre finissant par 0 ; nombre commençant par 0 ; nombre négatif finissant par 0 ; nombre négatif commençant par 0
  - Bien vérifier que tout marche avec INT_MIN et INT_MAX;
  - Essayer unsigned int max pour type u.

 */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_file_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:25:55 by jcao              #+#    #+#             */
/*   Updated: 2016/01/25 15:04:53 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	second_file_test(char *str, t_var var)
{
	while (str[var.i] != '\0')
	{
		while (str[var.i] != '\n' && var.ret < 5 && str[var.i] != '\0')
		{
			if (str[var.i] == '#')
				var.hash++;
			var.i++;
		}
		if (str[var.i++] == '\n')
			var.ret++;
		if (var.ret == 5)
		{
			if (var.hash != 4)
				return (0);
			var.hash = 0;
			var.ret = 0;
		}
	}
	if (str[var.i - 2] == '\n')
		return (0);
	if (!(var.ret == 4 && var.hash == 4))
		return (0);
	return (1);
}

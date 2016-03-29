/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   third_file_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 11:20:36 by jcao              #+#    #+#             */
/*   Updated: 2016/01/23 00:27:57 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	parcours_line(char *str, t_var *var)
{
	while (str[var->i] != '\n' && var->ret < 5 && str[var->i] != '\0')
	{
		var->i++;
		var->line++;
		var->mark = 1;
	}
}

int			third_file_test(char *str, t_var var)
{
	while (str[var.i] != '\0')
	{
		var.line = 0;
		var.mark = 0;
		parcours_line(str, &var);
		if (var.line != 4 && var.mark == 1)
			return (0);
		if (str[var.i++] == '\n')
			var.ret++;
		if (var.ret == 4)
		{
			if (str[var.i] == '.' || str[var.i] == '#')
				return (0);
		}
		if (var.ret == 5)
		{
			if (str[var.i - 2] == '\n')
				var.ret = 0;
			else
				return (0);
		}
	}
	return (1);
}

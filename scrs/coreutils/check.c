/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:07:59 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 16:35:09 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check(char **res, int tab, t_var var, int k)
{
	if (tab == 1)
	{
		if (k + 3 >= var.size)
			return (0);
		if (res[var.i + 1][var.j] == '.' && res[var.i + 2][var.j] == '.' &&
res[var.i + 3][var.j] == '.')
			return (1);
	}
	if (tab == 2)
	{
		if (res[var.i][var.j + 1] == '.' && res[var.i][var.j + 2] == '.' &&
res[var.i][var.j + 3] == '.')
			return (1);
	}
	if (tab == 3)
	{
		if (k + 2 >= var.size || var.j == 0)
			return (0);
		if (res[var.i + 1][var.j] == '.' && res[var.i + 2][var.j - 1] == '.' &&
res[var.i + 2][var.j] == '.')
			return (1);
	}
	return (check2(res, tab, var, k));
}

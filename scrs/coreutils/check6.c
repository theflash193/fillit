/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:03:55 by jcao              #+#    #+#             */
/*   Updated: 2016/01/12 17:33:48 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check6(char **res, int tab, t_var var, int k)
{
	if (tab == 16)
	{
		if (k + 2 >= var.size)
			return (0);
		if (res[var.i + 1][var.j - 1] == '.' &&
res[var.i + 1][var.j] == '.' && res[var.i + 2][var.j] == '.')
			return (1);
	}
	if (tab == 17)
	{
		if (k + 1 >= var.size)
			return (0);
		if (res[var.i + 1][var.j - 1] == '.' && res[var.i + 1][var.j] == '.' &&
res[var.i + 1][var.j + 1] == '.')
			return (1);
	}
	if (tab == 18)
	{
		if (k + 1 >= var.size)
			return (0);
		if (res[var.i][var.j + 1] == '.' && res[var.i + 1][var.j + 1] == '.' &&
res[var.i + 1][var.j + 2] == '.')
			return (1);
	}
	return (check7(res, tab, var, k));
}

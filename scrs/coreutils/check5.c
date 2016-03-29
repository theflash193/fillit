/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 12:55:56 by jcao              #+#    #+#             */
/*   Updated: 2016/01/19 17:41:47 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check5(char **res, int tab, t_var var, int k)
{
	if (tab == 13)
	{
		if (k + 2 >= var.size)
			return (0);
		if (res[var.i + 1][var.j] == '.' &&
res[var.i + 1][var.j + 1] == '.' && res[var.i + 2][var.j + 1] == '.')
			return (1);
	}
	if (tab == 14)
	{
		if (k + 2 >= var.size)
			return (0);
		if (res[var.i + 1][var.j] == '.' && res[var.i + 1][var.j + 1] == '.' &&
res[var.i + 2][var.j] == '.')
			return (1);
	}
	if (tab == 15)
	{
		if (k + 1 >= var.size)
			return (0);
		if (res[var.i][var.j + 1] == '.' && res[var.i][var.j + 2] == '.' &&
res[var.i + 1][var.j + 1] == '.')
			return (1);
	}
	return (check6(res, tab, var, k));
}

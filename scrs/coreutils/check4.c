/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 12:46:20 by jcao              #+#    #+#             */
/*   Updated: 2016/01/14 14:27:29 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check4(char **res, int tab, t_var var, int k)
{
	if (tab == 10)
	{
		if (k + 1 >= var.size)
			return (0);
		if (res[var.i + 1][var.j - 2] == '.' &&
res[var.i + 1][var.j - 1] == '.' && res[var.i + 1][var.j] == '.')
			return (1);
	}
	if (tab == 11)
	{
		if (k + 1 >= var.size)
			return (0);
		if (res[var.i][var.j + 1] == '.' && res[var.i + 1][var.j] == '.' &&
res[var.i + 1][var.j + 1] == '.')
			return (1);
	}
	if (tab == 12)
	{
		if (k + 1 >= var.size)
			return (0);
		if (res[var.i][var.j + 1] == '.' && res[var.i + 1][var.j - 1] == '.' &&
res[var.i + 1][var.j] == '.')
			return (1);
	}
	return (check5(res, tab, var, k));
}

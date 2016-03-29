/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 18:10:21 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 16:35:28 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check2(char **res, int tab, t_var var, int k)
{
	if (tab == 4)
	{
		if (k + 1 >= var.size)
			return (0);
		if (res[var.i + 1][var.j] == '.' && res[var.i + 1][var.j + 1] == '.' &&
res[var.i + 1][var.j + 2] == '.')
			return (1);
	}
	if (tab == 5)
	{
		if (k + 2 >= var.size)
			return (0);
		if (res[var.i][var.j + 1] == '.' && res[var.i + 1][var.j] == '.' &&
res[var.i + 2][var.j] == '.')
			return (1);
	}
	if (tab == 6)
	{
		if (k + 1 >= var.size)
			return (0);
		if (res[var.i][var.j + 1] == '.' && res[var.i][var.j + 2] == '.' &&
res[var.i + 1][var.j + 2] == '.')
			return (1);
	}
	return (check3(res, tab, var, k));
}

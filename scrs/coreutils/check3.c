/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 18:25:44 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 16:35:40 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check3(char **res, int tab, t_var var, int k)
{
	if (tab == 7)
	{
		if (k + 2 >= var.size)
			return (0);
		if (res[var.i + 1][var.j] == '.' && res[var.i + 2][var.j] == '.' &&
res[var.i + 2][var.j + 1] == '.')
			return (1);
	}
	if (tab == 8)
	{
		if (k + 1 >= var.size)
			return (0);
		if (res[var.i][var.j + 1] == '.' && res[var.i][var.j + 2] == '.' &&
res[var.i + 1][var.j] == '.')
			return (1);
	}
	if (tab == 9)
	{
		if (k + 2 >= var.size)
			return (0);
		if (res[var.i][var.j + 1] == '.' && res[var.i + 1][var.j + 1] == '.' &&
res[var.i + 2][var.j + 1] == '.')
			return (1);
	}
	return (check4(res, tab, var, k));
}

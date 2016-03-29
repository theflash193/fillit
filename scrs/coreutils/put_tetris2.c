/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetris2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 18:45:13 by jcao              #+#    #+#             */
/*   Updated: 2016/01/12 13:24:54 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	put_tetris2(char **res, int tab, t_var var)
{
	if (tab == 4)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 1][var.j + 1] = var.alpha + 1;
		res[var.i + 1][var.j + 2] = var.alpha + 1;
	}
	if (tab == 5)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i][var.j + 1] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 2][var.j] = var.alpha + 1;
	}
	if (tab == 6)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i][var.j + 1] = var.alpha + 1;
		res[var.i][var.j + 2] = var.alpha + 1;
		res[var.i + 1][var.j + 2] = var.alpha + 1;
	}
	return (put_tetris3(res, tab, var));
}

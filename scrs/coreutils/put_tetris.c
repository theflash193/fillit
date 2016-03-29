/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetris.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:18:49 by jcao              #+#    #+#             */
/*   Updated: 2016/01/12 13:24:56 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	put_tetris(char **res, int tab, t_var var)
{
	if (tab == 1)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 2][var.j] = var.alpha + 1;
		res[var.i + 3][var.j] = var.alpha + 1;
	}
	if (tab == 2)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i][var.j + 1] = var.alpha + 1;
		res[var.i][var.j + 2] = var.alpha + 1;
		res[var.i][var.j + 3] = var.alpha + 1;
	}
	if (tab == 3)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 2][var.j] = var.alpha + 1;
		res[var.i + 2][var.j - 1] = var.alpha + 1;
	}
	return (put_tetris2(res, tab, var));
}

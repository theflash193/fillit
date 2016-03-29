/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetris3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:13:09 by jcao              #+#    #+#             */
/*   Updated: 2016/01/12 13:24:51 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	put_tetris3(char **res, int tab, t_var var)
{
	if (tab == 7)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 2][var.j] = var.alpha + 1;
		res[var.i + 2][var.j + 1] = var.alpha + 1;
	}
	if (tab == 8)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i][var.j + 1] = var.alpha + 1;
		res[var.i][var.j + 2] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
	}
	if (tab == 9)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i][var.j + 1] = var.alpha + 1;
		res[var.i + 1][var.j + 1] = var.alpha + 1;
		res[var.i + 2][var.j + 1] = var.alpha + 1;
	}
	return (put_tetris4(res, tab, var));
}

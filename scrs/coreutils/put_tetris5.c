/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetris5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:13:19 by jcao              #+#    #+#             */
/*   Updated: 2016/01/12 13:30:34 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	put_tetris5(char **res, int tab, t_var var)
{
	if (tab == 13)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 1][var.j + 1] = var.alpha + 1;
		res[var.i + 2][var.j + 1] = var.alpha + 1;
	}
	if (tab == 14)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 1][var.j + 1] = var.alpha + 1;
		res[var.i + 2][var.j] = var.alpha + 1;
	}
	if (tab == 15)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i][var.j + 1] = var.alpha + 1;
		res[var.i][var.j + 2] = var.alpha + 1;
		res[var.i + 1][var.j + 1] = var.alpha + 1;
	}
	return (put_tetris6(res, tab, var));
}

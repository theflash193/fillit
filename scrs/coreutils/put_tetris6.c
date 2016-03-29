/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetris6.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:13:24 by jcao              #+#    #+#             */
/*   Updated: 2016/01/12 13:34:27 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	put_tetris6(char **res, int tab, t_var var)
{
	if (tab == 16)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j - 1] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 2][var.j] = var.alpha + 1;
	}
	if (tab == 17)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j - 1] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 1][var.j + 1] = var.alpha + 1;
	}
	if (tab == 18)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i][var.j + 1] = var.alpha + 1;
		res[var.i + 1][var.j + 1] = var.alpha + 1;
		res[var.i + 1][var.j + 2] = var.alpha + 1;
	}
	return (put_tetris7(res, tab, var));
}

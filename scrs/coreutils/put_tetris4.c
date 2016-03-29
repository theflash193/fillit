/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetris4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:13:14 by jcao              #+#    #+#             */
/*   Updated: 2016/01/12 13:26:43 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	put_tetris4(char **res, int tab, t_var var)
{
	if (tab == 10)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j - 2] = var.alpha + 1;
		res[var.i + 1][var.j - 1] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
	}
	if (tab == 11)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i][var.j + 1] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 1][var.j + 1] = var.alpha + 1;
	}
	if (tab == 12)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i][var.j + 1] = var.alpha + 1;
		res[var.i + 1][var.j - 1] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
	}
	return (put_tetris5(res, tab, var));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetris7.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:13:28 by jcao              #+#    #+#             */
/*   Updated: 2016/01/12 13:45:22 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	put_tetris7(char **res, int tab, t_var var)
{
	if (tab == 19)
	{
		res[var.i][var.j] = var.alpha + 1;
		res[var.i + 1][var.j - 1] = var.alpha + 1;
		res[var.i + 1][var.j] = var.alpha + 1;
		res[var.i + 2][var.j - 1] = var.alpha + 1;
	}
	return (var.alpha);
}

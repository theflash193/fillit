/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 19:43:33 by jcao              #+#    #+#             */
/*   Updated: 2016/01/25 15:24:24 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			resolve(char **res, int pos, t_var var, int b)
{
	if (var.tab[var.k] == 0)
		return (1);
	if ((b > 10000) || (var.k == 0 && pos == var.size * var.size))
		return (0);
	if (var.k != 0 && pos == var.size * var.size)
	{
		var.mark = 0;
		pos = 0;
		return (remove_tetris(res, var, pos, b));
	}
	var.i = pos / var.size;
	var.j = pos % var.size;
	if (res[var.i][var.j] != '.')
		return (resolve(res, pos + 1, var, b + 1));
	if (check(res, var.tab[var.k], var, var.i) != 0)
	{
		var.alpha = put_tetris(res, var.tab[var.k], var) + 1;
		var.k++;
		pos = 0;
		if (resolve(res, pos, var, b + 1))
			return (1);
	}
	else
		return (resolve(res, pos + 1, var, b + 1));
	return (0);
}

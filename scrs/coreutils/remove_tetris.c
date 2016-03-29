/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_tetris.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:47:41 by jcao              #+#    #+#             */
/*   Updated: 2016/01/21 15:20:01 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	remove_tetris(char **res, t_var var, int pos, int b)
{
	int i;
	int j;

	if (pos == var.size * var.size)
	{
		var.alpha--;
		var.k--;
		pos = (var.remi * var.size) + var.remj;
		return (resolve(res, pos + 1, var, b + 1));
	}
	i = pos / var.size;
	j = pos % var.size;
	while (res[i][j] != var.alpha)
		return (remove_tetris(res, var, pos + 1, b));
	res[i][j] = '.';
	if (var.mark == 0)
	{
		var.remi = i;
		var.remj = j;
		var.mark = 1;
	}
	return (remove_tetris(res, var, pos + 1, b));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_tetris.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 15:23:54 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:14:30 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*stock_tetris(char *str)
{
	int	i;
	int	index;
	int	mark;
	int	*res;

	i = 0;
	index = 0;
	mark = 0;
	res = ft_stock_tetris(str, i, index, mark);
	return (res);
}

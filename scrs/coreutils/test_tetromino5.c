/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tetromino5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:52:10 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:24:08 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_tetromino5(char *str, int index)
{
	int	res;

	res = test_i1(str, index);
	if (res != 0)
		return (res);
	else
		res = test_j1(str, index);
	if (res != 0)
		return (res);
	else
		res = test_z2(str, index);
	if (res != 0)
		return (res);
	else
		return (0);
}

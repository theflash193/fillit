/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 14:55:24 by jcao              #+#    #+#             */
/*   Updated: 2016/01/19 16:35:58 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_tetromino1(char *str, int index)
{
	int	res;

	res = test_t4(str, index);
	if (res != 0)
		return (res);
	else
		res = test_i2(str, index);
	if (res != 0)
		return (res);
	else
		res = test_z1(str, index);
	if (res != 0)
		return (res);
	else
		res = test_j2(str, index);
	if (res != 0)
		return (res);
	else
		res = test_tetromino2(str, index);
	if (res != 0)
		return (res);
	else
		return (0);
}

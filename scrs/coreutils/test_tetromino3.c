/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tetromino3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:23:55 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:21:49 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_tetromino3(char *str, int index)
{
	int	res;

	res = test_j3(str, index);
	if (res != 0)
		return (res);
	else
		res = test_l4(str, index);
	if (res != 0)
		return (res);
	else
		res = test_l3(str, index);
	if (res != 0)
		return (res);
	else
		res = test_s1(str, index);
	if (res != 0)
		return (res);
	else
		res = test_tetromino4(str, index);
	if (res != 0)
		return (res);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tetromino2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:33:05 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:21:36 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_tetromino2(char *str, int index)
{
	int	res;

	res = test_o(str, index);
	if (res != 0)
		return (res);
	else
		res = test_j4(str, index);
	if (res != 0)
		return (res);
	else
		res = test_l1(str, index);
	if (res != 0)
		return (res);
	else
		res = test_l2(str, index);
	if (res != 0)
		return (res);
	else
		res = test_tetromino3(str, index);
	if (res != 0)
		return (res);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tetromino4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:52:04 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:24:05 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_tetromino4(char *str, int index)
{
	int	res;

	res = test_s2(str, index);
	if (res != 0)
		return (res);
	else
		res = test_t1(str, index);
	if (res != 0)
		return (res);
	else
		res = test_t2(str, index);
	if (res != 0)
		return (res);
	else
		res = test_t3(str, index);
	if (res != 0)
		return (res);
	else
		res = test_tetromino5(str, index);
	if (res != 0)
		return (res);
	else
		return (0);
}

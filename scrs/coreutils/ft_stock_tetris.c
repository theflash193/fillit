/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_tetris.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:54:31 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 16:54:33 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	count_mark(int num, int mark)
{
	if (num == '#')
		mark++;
	if (mark == 4)
		mark = 0;
	return (mark);
}

int			*ft_stock_tetris(char *str, int i, int index, int mark)
{
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 26);
	if (tab == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] == '#' && mark == 0)
		{
			tab[index] = test_tetromino1(str, i);
			if (tab[index] != 0)
				index++;
			else
			{
				tab[index] = 40;
				index++;
			}
			i++;
			mark++;
		}
		mark = count_mark(str[i], mark);
		i++;
	}
	tab[index] = 0;
	return (tab);
}

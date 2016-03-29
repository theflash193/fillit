/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 13:16:04 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 16:44:54 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_square(t_var var)
{
	char	**tab;
	int		index;

	index = 0;
	tab = (char **)malloc(sizeof(char *) * var.size);
	if (tab == NULL)
		return (NULL);
	tab[var.size] = NULL;
	while (index < var.size)
	{
		tab[index] = (char *)malloc(sizeof(char) * var.size + 1);
		if (tab[index] == NULL)
			return (NULL);
		index++;
	}
	tab = draw_square(tab, var.size);
	return (tab);
}

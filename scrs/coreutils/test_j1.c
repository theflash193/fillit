/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_j1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:16:34 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:16:56 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_j1(char *str, int index)
{
	if (str[index + 5] == '#' && str[index + 9] == '#'
	&& str[index + 10] == '#')
		return (3);
	else
		return (0);
}
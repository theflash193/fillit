/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_l1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:18:27 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:18:57 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_l1(char *str, int index)
{
	if (str[index + 5] == '#' && str[index + 10] == '#'
	&& str[index + 11] == '#')
		return (7);
	else
		return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_j4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:18:10 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:18:54 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_j4(char *str, int index)
{
	if (str[index + 1] == '#' && str[index + 2] == '#'
	&& str[index + 7] == '#')
		return (6);
	else
		return (0);
}

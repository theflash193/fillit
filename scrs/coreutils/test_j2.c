/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_j2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:17:48 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:17:52 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_j2(char *str, int index)
{
	if (str[index + 5] == '#' && str[index + 6] == '#'
	&& str[index + 7] == '#')
		return (4);
	else
		return (0);
}
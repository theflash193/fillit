/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_t2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:20:21 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:20:23 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_t2(char *str, int index)
{
	if (str[index + 1] == '#' && str[index + 2] == '#'
	&& str[index + 6] == '#')
		return (15);
	else
		return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_i2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:15:59 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:16:04 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_i2(char *str, int index)
{
	if (str[index + 1] == '#' && str[index + 2] == '#'
	&& str[index + 3] == '#')
		return (2);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_t3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:20:33 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:20:34 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_t3(char *str, int index)
{
	if (str[index + 4] == '#' && str[index + 5] == '#'
	&& str[index + 10] == '#')
		return (16);
	else
		return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_l4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:19:20 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:19:21 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_l4(char *str, int index)
{
	if (str[index + 3] == '#' && str[index + 4] == '#'
	&& str[index + 5] == '#')
		return (10);
	else
		return (0);
}

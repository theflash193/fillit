/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:19:31 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:19:34 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_o(char *str, int index)
{
	if (str[index + 1] == '#' && str[index + 5] == '#'
	&& str[index + 6] == '#')
		return (11);
	else
		return (0);
}

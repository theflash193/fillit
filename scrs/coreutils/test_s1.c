/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:19:46 by jcao              #+#    #+#             */
/*   Updated: 2016/01/20 17:19:47 by jcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	test_s1(char *str, int index)
{
	if (str[index + 1] == '#' && str[index + 4] == '#'
	&& str[index + 5] == '#')
		return (12);
	else
		return (0);
}
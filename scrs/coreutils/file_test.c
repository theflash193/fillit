/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 11:06:33 by jcao              #+#    #+#             */
/*   Updated: 2016/01/23 00:14:47 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	file_test(char *str)
{
	t_var	var;

	var.i = 0;
	var.ret = 0;
	var.hash = 0;
	if (first_file_test(str) == 0)
		return (0);
	if ((var.test = second_file_test(str, var)) == 0)
		return (0);
	if (third_file_test(str, var) == 0)
		return (0);
	return (1);
}

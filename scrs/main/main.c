/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:55:07 by jcao              #+#    #+#             */
/*   Updated: 2016/01/25 15:22:49 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	init(t_var *var)
{
	var->b = 0;
	var->pos = 0;
	var->alpha = 64;
}

static void	resolve_tetris(char **res, t_var var)
{
	res = ft_square(var);
	while (resolve(res, var.pos, var, var.b) != 1)
	{
		ft_free(res, var);
		var.size++;
		res = ft_square(var);
		var.b = 0;
	}
	ft_puttab(res, var);
}

int			main(int argc, char **argv)
{
	char	**res;
	t_var	var;
	char	buf[BUF_SIZE + 1];

	res = NULL;
	init(&var);
	if (argc != 2)
		return (write(1, "error\n", 6));
	else
	{
		var.fd = open(argv[1], O_RDONLY);
		read(var.fd, buf, BUF_SIZE);
		if (file_test(buf) == 0)
			return (write(1, "error\n", 6));
		var.tab = stock_tetris(buf);
		if (check_tab(var.tab) == 0)
			return (write(1, "error\n", 6));
		var.size = square_size(var.tab);
		resolve_tetris(res, var);
	}
	return (0);
}

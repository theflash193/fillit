/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/27 20:25:41 by grass-kw          #+#    #+#             */
/*   Updated: 2016/01/23 00:10:48 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE (1000)
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft.h"

typedef struct	s_var
{
	int	i;
	int	j;
	int	k;
	int	size;
	int	alpha;
	int	mark;
	int	mark2;
	int	remi;
	int	remj;
	int	pos;
	int	b;
	int	*tab;
	int	fd;
	int hash;
	int	test;
	int ret;
	int line;
}				t_var;

int				test_tetromino1(char *str, int index);
int				test_tetromino2(char *str, int index);
int				test_tetromino3(char *str, int index);
int				test_tetromino4(char *str, int index);
int				test_tetromino5(char *str, int index);
int				test_i1(char *str, int index);
int				test_i2(char *str, int index);
int				test_j1(char *str, int index);
int				test_j2(char *str, int index);
int				test_j3(char *str, int index);
int				test_j4(char *str, int index);
int				test_l1(char *str, int index);
int				test_l2(char *str, int index);
int				test_l3(char *str, int index);
int				test_l4(char *str, int index);
int				test_o(char *str, int index);
int				test_s1(char *str, int index);
int				test_s2(char *str, int index);
int				test_t1(char *str, int index);
int				test_t2(char *str, int index);
int				test_t3(char *str, int index);
int				test_t4(char *str, int index);
int				test_z1(char *str, int index);
int				test_z2(char *str, int index);
char			*alpha_square(char *str, int alpha);
int				file_test(char *str);
int				second_file_test(char *str, t_var var);
int				first_file_test(char *str);
int				third_file_test(char *str, t_var var);
int				*stock_tetris(char *str);
int				*ft_stock_tetris(char *str, int i, int index, int mark);
char			**ft_square(t_var var);
int				square_size(int *str);
char			**draw_square(char **str, int size);
int				resolve(char **res, int pos, t_var var, int b);
int				check(char **res, int tab, t_var var, int k);
int				check2(char **res, int tab, t_var var, int k);
int				check3(char **res, int tab, t_var var, int k);
int				check4(char **res, int tab, t_var var, int k);
int				check5(char **res, int tab, t_var var, int k);
int				check6(char **res, int tab, t_var var, int k);
int				check7(char **res, int tab, t_var var, int k);
int				put_tetris(char **res, int tab, t_var var);
int				put_tetris2(char **res, int tab, t_var var);
int				put_tetris3(char **res, int tab, t_var var);
int				put_tetris4(char **res, int tab, t_var var);
int				put_tetris5(char **res, int tab, t_var var);
int				put_tetris6(char **res, int tab, t_var var);
int				put_tetris7(char **res, int tab, t_var var);
void			ft_free(char **res, t_var var);
int				remove_tetris(char **res, t_var var, int pos, int b);
int				put_remove(char **res, int *tab, t_var var, int pos);
void			ft_puttab(char **res, t_var var);
int				check_tab(int *tab);

#endif

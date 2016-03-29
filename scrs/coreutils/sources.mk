
MAIN	:= check.c check2.c check3.c check4.c check5.c check6.c check7.c \
			check_tab.c draw_square.c file_test.c first_file_test.c ft_free.c \
			ft_puttab.c ft_square.c ft_stock_tetris.c put_tetris.c \
			put_tetris2.c put_tetris3.c put_tetris4.c put_tetris5.c \
			put_tetris6.c put_tetris7.c remove_tetris.c resolve.c \
			second_file_test.c square_size.c stock_tetris.c \
			test_i1.c test_i2.c test_j1.c test_j2.c test_j3.c test_j4.c \
			test_l1.c test_l2.c test_l3.c test_l4.c test_o.c test_s1.c \
			test_s2.c test_t1.c test_t2.c test_t3.c test_t4.c \
			test_tetromino1.c test_tetromino2.c test_tetromino3.c \
			test_tetromino4.c test_tetromino5.c test_z1.c test_z2.c \
			third_file_test.c

OBJ	:= $(OBJ) $(MAIN:.c=.o)

$(DIROBJ)/%.o: $(DIRCOREUTILS)/%.c $(HEAD)
	$(COMPIL)

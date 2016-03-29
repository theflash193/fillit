# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/14 11:01:22 by grass-kw          #+#    #+#              #
#    Updated: 2016/01/22 23:50:28 by grass-kw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = fillit
DEBUG= no
### DIRECTORIES ###
DIRSRC	:= scrs
DIROBJ	:= obj
DIRINC	:= includes
DIRFT	:= libft

DIRMAIN 		:= $(DIRSRC)/main
DIRCOREUTILS 	:= $(DIRSRC)/coreutils
### FILES ###
HEAD	:= $(DIRINC)/$(NAME).h

include $(DIRMAIN)/sources.mk
include $(DIRCOREUTILS)/sources.mk

POBJ	:= $(addprefix $(DIROBJ)/, $(OBJ))

PFT	:= $(DIRFT).a

### compilation variable ###
CC	:= gcc
ifeq ($(DEBUG),yes)
	C_FLAG	:= -Wall -Werror -Wextra -g
else
	C_FLAG	:= -Wall -Werror -Wextra
endif
C_INC	:= -I $(DIRINC) \
	-I $(DIRFT)/$(DIRINC)
L_FLAG	:= -L $(DIRFT) -lft

COMPIL	= @$(CC) -o $@ -c $< $(C_INC) $(C_FLAG)
LINK	= @$(CC) -o $@ $^ $(L_FLAG)

### RULES ###
.PHONY: all clean fclean re lldb

all: $(PFT) $(NAME)
ifeq ($(DEBUG),yes)
	@echo "generated in DEBUG mode"
else
	@echo "generated in RELEASE mode"
endif

$(POBJ): |$(DIROBJ)

$(DIROBJ):
	mkdir $(DIROBJ)

$(NAME): $(POBJ)
	$(LINK)

### LIBS ###
$(PFT):
	@make -C $(DIRFT)

### MICS ###

clean:
	@rm -rf $(DIROBJ)
fclean: clean
	@rm -f $(NAME)
	@make -C $(DIRFT) fclean
re: fclean all

gdb: $(NAME)
	lldb $(NAME)

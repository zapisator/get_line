# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/01 10:04:16 by ftothmur          #+#    #+#              #
#    Updated: 2019/05/31 21:52:12 by ftothmur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------MISC--------------------------------------#
.PHONY:				all checkdir clean cleanm fclean re
NAME =				libft.a
#---------------------------------DIRECTIRIES----------------------------------#
LIB_DIR =			./
HDR_DIR =			./includes/
SRC_DIR =			./srcs/
OBJ_DIR =			./objs/
vpath				%.c $(SRC_DIR)
#---------------------------------SOURCE_FILES---------------------------------#
OBJ = 				$(addprefix $(OBJ_DIR), $(SRC:.c=.o))
SRC =     			$(PART_1) \
					$(PART_2) \
					$(BONUS) \
	 				$(EXPANSION) \
					$(FORBIDDEN)
PART_1 =    		ft_strcat.c \
					ft_strrchr.c \
					ft_strstr.c \
					ft_strncmp.c \
					ft_memcpy.c \
					ft_strcpy.c \
					ft_memcmp.c \
					ft_memccpy.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_strnstr.c \
					ft_bzero.c \
					ft_strncat.c \
					ft_strlen.c \
					ft_strncpy.c \
					ft_strchr.c \
					ft_isascii.c \
					ft_strcmp.c \
					ft_strlcat.c \
					ft_toupper.c \
					ft_strdup.c \
					ft_isalpha.c \
					ft_isprint.c \
					ft_tolower.c \
					ft_memchr.c \
					ft_atoi.c \
					ft_memmove.c \
					ft_memset.c
PART_2 =    		ft_memalloc.c \
					ft_putchar_fd.c \
					ft_strmapi.c \
					ft_memdel.c \
					ft_putstr_fd.c \
					ft_strtrim.c \
					ft_putnbr_fd.c \
					ft_putendl_fd.c \
					ft_putstr.c \
					ft_putnbr.c \
					ft_strsub.c \
					ft_strequ.c \
					ft_strdel.c \
					ft_itoa.c \
					ft_strjoin.c \
					ft_strmap.c \
					ft_strnequ.c \
					ft_putchar.c \
					ft_putendl.c \
					ft_striteri.c \
					ft_striter.c \
					ft_strsplit.c \
					ft_strnew.c\
					ft_strclr.c
BONUS =				ft_lstdel.c \
					ft_lstiter.c \
					ft_lstnew.c \
					ft_lstadd.c \
					ft_lstdelone.c \
					ft_lstmap.c 
EXPANSION =			ft_isspace.c \
					ft_isupper.c \
					ft_islower.c \
					ft_strnlen.c \
					ft_power.c \
					ft_itostr.c \
					ft_strchr_no.c \
					ft_strnchr.c \
					ft_realloc.c \
					ft_memjoin.c \
					ft_abs.c \
					ft_powerof2roundup.c \
					ft_ispowerof2.c \
					ft_set_nth_bit.c \
					ft_unset_nth_bit.c \
					ft_toggle_nth_bit.c \
					ft_lstfind.c \
					ft_lstrev.c \
					ft_lstcontentdel.c \
					ft_lstforeach.c \
					ft_lstforeach_if.c \
					ft_lstremove.c \
					ft_lstcmp_next.c \
					ft_swap.c \
					ft_strrev.c \
					ft_reverse.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstat.c \
					ft_lstaddtip.c \
					ft_isbinary.c \
					ft_imin.c \
					ft_imax.c \
					ft_error.c \
					ft_error_ptr.c \
					ft_delim.c \
					ft_fit_size.c
FORBIDDEN = 		ft_read_file.c

#---------------------------------COMPILER_OPTIONS-----------------------------#
DEBUG ?= 			1
ifeq ($(DEBUG), 1)
	CC_FLAGS = 		-Wall -Wextra -Werror
else
	CC_FLAGS = 		-Wall -Wextra -Werror -g
endif
LIB_FLAGS =			-L $(LIB_DIR) -lft
I_FLAGS =			-I	 $(HDR_DIR)
#--------------------------------------RULES-----------------------------------#
all:				checkdir $(NAME)

checkdir:
					if test -d $(OBJ_DIR);\
	then : ;\
	else mkdir -p $(OBJ_DIR);\
fi
					
$(NAME):			$(OBJ)
					ar rc $@ $^
					ranlib $@ 

$(OBJ_DIR)%.o:		%.c 
					gcc $(CC_FLAGS) -o $@ -c $< $(I_FLAGS)

clean:
					/bin/rm -rf $(OBJ_DIR)*.o

cleanm:
					/usr/bin/find . \
						\( \
							-name "*~" -o \
							-name "#*#" -o \
							-name "a.out" -o \
							-name "*.swp" -o \
							-name "*.swo" \
						\) \
						-print -delete

fclean: 			clean cleanm
					/bin/rm -f $(NAME)

re:					fclean all

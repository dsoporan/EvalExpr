# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 14:53:02 by dsoporan          #+#    #+#              #
#    Updated: 2016/07/23 18:52:23 by dsoporan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

OUT = eval_expr

all: $(OUT)

$(OUT):
	gcc -c -Wall -Wextra -Werror *.c 
	gcc -o $(NAME) -Wall -Wextra -Werror *.o
clean:
	/bin/rm -f *.o
fclean:clean
	/bin/rm -f $(OUT)
re: fclean all

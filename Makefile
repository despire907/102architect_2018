##
## EPITECH PROJECT, 2018
## 102architect_2018
## File description:
## makefile
##

EXEC_NAME = 102architect

TEST_EXEC_NAME = cr_test

MAIN =		104.c   \
            tmp.c

SRCS =

TEST_SRCS =

C_FLAGS = -fno-builtin -W -Wall -lm

all	:
		make $(EXEC_NAME)

$(EXEC_NAME):	$(OBJS)
		gcc $(C_FLAGS) -o $(EXEC_NAME) $(addprefix source/, $(MAIN) $(SRCS))

test_run:
		gcc -o $(TEST_EXEC_NAME) $(SRCS) $(TEST_SRCS) $(LIB) --coverage -lcriterion

clean:
		rm -f $(OBJS) $(MAIN:.c=.o)

fclean:		clean
		rm -f $(EXEC_NAME)

cclean:		fclean
		rm -f *.gcda *.gcno

re:		fclean all

test_re:	cclean test_run

SRCS = *.c
OBJS = $(SRCS:.c=.o)

$(OBJS): $(SRCS)
	gcc -c $(FLAGS) $(SRCS) $(LIBS)

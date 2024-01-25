subdir = src/backend/parser
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

SRCS = *.c
OBJS = $(SRCS:.c=.o)

$(OBJS): $(SRCS)
	flex  --header-file=sql.h -o sql.c sql.l
	bison -vd sql.y
	gcc -c $(FLAGS) $(SRCS) $(LIBS)


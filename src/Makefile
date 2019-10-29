CC      = gcc
LEX     = flex
YACC    = yacc
CFLAGS  = -Wall -std=c11
LIBS    = -lfl -ly

SCANNER = scanner
PARSER  = parser
EXEC    = $(PARSER)
OBJS    = $(SCANNER) \
	      $(PARSER)

# Substitution reference
DEPS := $(OBJS:=.d)
OBJS := $(OBJS:=.o)

all: $(EXEC)

# Static pattern rule
$(SCANNER).c: %.c: %.l
	$(LEX) -o $@ $<

$(PARSER).c: %.c: %.y
	$(YACC) -o $@ -v $<

%.o: %.c
	$(CC) -o $@ $(CFLAGS) -c -MMD $<

$(EXEC): $(OBJS)
	$(CC) -o $@ $^ $(LIBS)

clean:
	$(RM) $(DEPS) $(SCANNER:=.c) $(PARSER:=.c) $(OBJS) $(EXEC)

-include $(DEPS)

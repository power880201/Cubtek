include ../Dragons.mak

all: $(patsubst %.c, ../out/%.o, $(wildcard *.c))

../out/%.o: %.c
	$(CC) -c $(CFLAGS) $(MATLAB_INC) -I. -o $@ $<

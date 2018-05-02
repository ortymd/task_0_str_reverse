CFLAGS = -g3 -Wall -I./include
LDLIBS = -l:func.o

.PHONY: func 

main: main.o func
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ main.o $(LDLIBS)

export LDFLAGS = -L./src

func:
	$(MAKE) -C src/

clean:
	rm *.o src/*.o

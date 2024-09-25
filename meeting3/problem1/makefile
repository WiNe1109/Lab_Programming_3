all:
	g++ -o Problem1 Problem1.cpp

dump:
	objdump -d Problem1 > Problem1.asm

clean:
	rm -f Problem1.o Problem1

run: Problem1
	./Problem1

test: $(Problem1)
	./$(Problem1) test

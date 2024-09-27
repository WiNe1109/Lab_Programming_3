all:
	g++ -o Problem2 Problem2.cpp

dump:
	objdump -d Problem2 > Problem2.asm

clean:
	rm -f Problem2.o Problem2

run: Problem2
	./Problem2

test: $(Problem2)
	./$(Problem2) test

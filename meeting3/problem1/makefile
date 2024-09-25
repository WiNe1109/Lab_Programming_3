all:
	g++ -o problem1 problem1.cpp

dump:
	objdump -d problem1 > problem1.asm

clean:
	rm -f problem1.o problem1

run: problem1
	./problem1

test: $(problem1)
	./$(problem1) test

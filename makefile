test: strxng.c
	gcc strxng.c -o test
clean:
	rm *~
run: test
	./test

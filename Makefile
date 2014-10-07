homework5: hmk5.o triangle.o distance.o
	clang -o homework5 hmk5.o triangle.o distance.o -lm
hmk5.o: hmk5.c shapes.h
	clang -g -O0 -c hmk5.c
triangle.o: triangle.c shapes.h
	clang -g -O0 -c triangle.c
distance.o: distance.c shapes.h
	clang -g -O0 -c distance.c

a.out : random.o initialize.o makeF0_GA.o
	clang initialize.o makeF0_GA.o random.o

initialize.o : initialize.c
	clang -c initialize.c

makeF0_GA.o : makeF0_GA.c
	clang -c makeF0_GA.c

random.o : random.c
	clang -c random.c

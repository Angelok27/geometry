all: test
	gcc -Wall  geom.c tezt.c per.c main.c -lm 

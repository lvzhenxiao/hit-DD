main:main.o welcome.o choose.o eat.o drink.o sleep.o hitdoudou.o
	gcc main.o welcome.o choose.o eat.o drink.o sleep.o hitdoudou.o -o main
main.o:main.c welcome.h choose.h eat.h drink.h sleep.h hitdoudou.h
	gcc -c main.c -o main.o
welcome.o:welcome.c
	gcc -c welcome.c -o welcome.o
choose.o:choose.c
	gcc -c choose.c -o choose.o
eat.o:eat.c
	gcc -c eat.c -o eat.o
drink.o:drink.c
	gcc -c drink.c -o drink.o
sleep.o:sleep.c
	gcc -c sleep.c -o sleep.o
hitdoudou.o:hitdoudou.c
	gcc -c hitdoudou.c -o hitdoudou.o
clean:
	rm *.o main

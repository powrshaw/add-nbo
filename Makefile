add-nbo: add-nbo.o
	gcc -o add-nbo add-nbo.o

add-nbo.o: add-nbo.cpp 
	gcc -c -o add-nbo.o add-nbo.cpp

clean:
	rm add-nbo.o

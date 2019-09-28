all:hello

hello:	makefn1.o factfn1.o storyfn1.o
	g++ makefn1.o factfn1.o storyfn1.o -o hello

makefn1.o:	makefn1.o
		g++ -c makefn1.cpp

factfn1.o:	factfn1.cpp
		g++ -c factfn1.cpp

storyfn1.o:	storyfn1.cpp
		g++ -c storyfn1.cpp

clean:
		rm -rf *o hello
	

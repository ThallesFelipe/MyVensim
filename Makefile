functional and unit tests:
	g++ src/*.cpp test/functional/*.cpp -o bin/funcexe
	g++ src/*.cpp test/unit/*.cpp -o bin/unitexe

clean: 
	rm -f *.o main

run:
	./main
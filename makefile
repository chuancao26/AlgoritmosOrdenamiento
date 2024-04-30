test: sort2.o estadisticas.o
	g++ -o test sort2.o estadisticas.o
sort2.o estadisticas.o: sort2.cpp estadisticas.cpp
	g++ -c sort2.cpp estadisticas.cpp

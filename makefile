test: sort2.o estadisticas.o SortAlgorithms.o:
	g++ -o test sort2.o estadisticas.o SortAlgorithms.o
sort2.o estadisticas.o SortAlgorithms.o: sort2.cpp estadisticas.cpp SortAlgorithms.cpp
	g++ -c sort2.cpp estadisticas.cpp SortAlgorithms.cpp

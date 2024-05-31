# Regla para compilar el ejecutable
test: Sorting.o estadisticas.o SortAlgorithms.o
	g++ -o test Sorting.o estadisticas.o SortAlgorithms.o

# Regla para compilar Sorting.o
Sorting.o: Sorting.cpp
	g++ -c Sorting.cpp

# Regla para compilar estadisticas.o
estadisticas.o: estadisticas.cpp estadisticas.h
	g++ -c estadisticas.cpp

# Regla para compilar SortAlgorithms.o
SortAlgorithms.o: SortAlgorithms.cpp SortAlgorithms.hpp
	g++ -c SortAlgorithms.cpp

# Limpiar los archivos generados
clean:
	rm -f *.o test

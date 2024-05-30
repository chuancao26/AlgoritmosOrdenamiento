#include <iostream>
#include <vector>
#include <cstdio>
#include <ctime>
#include <unistd.h>
#include <string>
#include "estadisticas.h"
#include "SortAlgorithms.hpp" 
using namespace std;

void insertionSort(int arr[], int size) 
{
  for (int i = 1; i < size; i++) 
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) 
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}
int main(int argc, char *argv[])
{
  SortAlgorithms sa;
  Stats stat;
  int registros = 15;
  if (argc < 2) 
  {
    fprintf(stderr, "Debe haber un argumento para poder compilar\n");
    return 1;
  }
  int n = atoi(argv[1]);
  for (int k = 100; k < n; k = k + 100)
  {
    string ruta = "./generador " + to_string(k);
    FILE *pipe = popen(ruta.c_str(), "r");
    if (!pipe) 
    {
      cerr << "Error al abrir el proceso generador" << endl;
      return 1;
    }

    vector<double> tiempos;
    for (int i = 0; i < registros; i++) 
    {
      int arr[k];
      for (int j = 0; j < k; j++) 
      {
        if (fscanf(pipe, "%d", &arr[j]) != 1) 
        {
          cerr << "Error al leer desde el proceso generador" << endl;
          pclose(pipe);
          return 1;
        }
      }
      clock_t start = clock();
      insertionSort(arr, k);
      clock_t fin = clock();
      double elapsed_time = static_cast<double>(fin - start) / CLOCKS_PER_SEC;
      tiempos.push_back(elapsed_time);
    }
    pclose(pipe);
    double media = stat.average(tiempos);
    double std = stat.stdeviation(media, tiempos);
    vector<double> registroCorregido = {};
    for (double i : tiempos)
    {
      if(i >= media - 2 * std && i <= media + 2 * std) 
      {
	registroCorregido.push_back(i);
      }
    }
    cout << k << ' ' << stat.average(registroCorregido) << endl;
  }
    return 0;
}


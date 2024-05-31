#include <iostream>
#include <fstream>
#include <vector>
#include <time.h>
#include <string>
#include <iomanip>
#include "SortAlgorithms.hpp"
using namespace std;
void insertionSort(int arr[], int size)
{
  for(int i = 1; i < size; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}
double media(vector<double> numbers)
{
  double sum = 0;
  for(double i : numbers)
  {
    sum += i;
  }
  return sum / numbers.size();
}
void printArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
int main()
{
  SortAlgorithms sa;
  int cantidad;
  cin >> cantidad;
  cin.ignore();
  for(int k = 100; k < cantidad; k = k + 100)
  {
    int size;
    string entradaGenerador = "./generador " + to_string(k) + " > input";
    system(entradaGenerador.c_str());
    vector<double> registros = {};
    ifstream archivo("./input");
    archivo >> size;
    for (int i = 0; i < 15; i++)
    {
      vector<int> arr(size);
      for(int j = 0; j < size; j++)
      {
        int a;
        archivo >> arr[j];
      }
      clock_t start = clock();
      sa.quickSort(arr);
      clock_t fin = clock();
      double elapsed_time = (double)(fin - start) / CLOCKS_PER_SEC;
      registros.push_back(elapsed_time);
    }
    cout << size << ' ' << media(registros) << endl;
    /*
    double media = stat.average(registros);
    double std = stat.std(media, registros);
    vector<double> registroCorregido = {};
    for (double i : registros)
    {
      if(i >= media - 2 * std && i <= media + 2 * std) 
      {
	registroCorregido.push_back(i);
      }
    }
    cout << stat.average(registroCorregido) << endl;
    */
    
  }
  return 0;
}

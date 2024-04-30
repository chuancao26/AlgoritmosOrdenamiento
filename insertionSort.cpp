#include <iostream>
#include <fstream>
#include <vector>
#include <time.h>
#include <iomanip>
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
  for(int k = 10; k < 51; k = k + 10)
  {
    int size;
    system("./generador 50 >> input");
    vector<double> registros = {};
    ifstream archivo("./input");
    getline(archivo, size);
    for (int i = 0; i < 15; i++)
    {
      int arr[size];
      for(int j = 0; j < size; j++)
      {
	getline(archivo, arr[j]);
      }
      clock_t start = clock();
      insertionSort(arr, size);
      clock_t fin = clock();
      double elapsed_time = (double)(fin - start) / CLOCKS_PER_SEC;
      registros.push_back(elapsed_time);
    }
    cout << media(registros) << endl;
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

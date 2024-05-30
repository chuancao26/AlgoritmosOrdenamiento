#include "SortAlgorithms.hpp"
void SortAlgorithms::bubbleSort(vector<int> arr)
{
  clock_t start = clock();
  for(int j = 0; j < arr.size(); j++)
  {
    for(int i = 0; i < arr.size()- j - 1; i++)
    {
      if(arr[i] > arr[i + 1])
      {
        swap(arr[i], arr[i + 1]);
      }
    }
  }
}

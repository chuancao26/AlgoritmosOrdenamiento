#include <iostream>
#include <vector>
#include "SortAlgorithms.hpp" 
using namespace std;
void printArray(vector<int> arr)
{
  for(int i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> arr = {9,1,6,3,2,7,2,1,2,4,12312,12,5212,31,51,21,23,1245,15,435,3463,463,42,34,234,234,234,25,344,6,456,4};
  SortAlgorithms sa;
  sa.quickSort(arr);
  printArray(arr);
  return 0;
}


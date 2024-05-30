#include <iostream>
#include <vector>
using namespace std;
void swap(int& a, int& b)
{
  int tmp = a;
  a = b;
  b = tmp;
}
void bubbleSort(vector<int>& arr)
{
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
void printArr(vector<int> arr)
{
  for(int i = 0; i < arr.size() - 1; i++)
  {
    cout << arr[i] << " "; 
  }
  cout << endl;
}
int main()
{
  vector<int> arr = {2,9,5,3,6,7,1,9};
  bubbleSort(arr);
  printArr(arr);
  return 0;
}

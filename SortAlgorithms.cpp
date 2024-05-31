#include "SortAlgorithms.hpp"
void SortAlgorithms::swap(int& a, int&b)
{
  int tmp = a;
  a = b;
  b = tmp;
}
void SortAlgorithms::bubbleSort(vector<int>& arr)
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
void SortAlgorithms::selectionSort(vector<int>& arr)
{
  int minPos = 0;
  for(int i = 0; i < arr.size(); i++)
  {
    for(int j = i; j < arr.size(); j++)
    {
      if(arr[minPos] > arr[j])
      {
        minPos = j;
      }
    }
    swap(arr[minPos], arr[i]);
  }
}
void SortAlgorithms::mergeSort(vector <int>& arr)
{
  vector<int> helper(arr.size());
  mergeSort(arr, helper, 0, arr.size() - 1);
}
void SortAlgorithms::mergeSort(vector<int>& arr, vector<int>& helper, int low, int high)
{
  if(low < high)
  {
    int mid = (high + low) / 2;
    mergeSort(arr, helper, low, mid);
    mergeSort(arr, helper, mid + 1, high);
    merge(arr, helper, low, mid, high);
  }
}
void SortAlgorithms::merge(vector<int>& arr, vector<int>& helper, int low, int mid, int high)
{
  for(int i = low; i <= high; i++)
  {
    helper[i] = arr[i];
  }
  int helperLeft = low;
  int helperRight = mid + 1;
  int current = low;
  while(helperLeft <= mid && helperRight <= high)
  {
    if(helper[helperLeft] <= helper[helperRight])
    {
      arr[current] = helper[helperLeft];
      helperLeft++;
    }
    else
    {
      arr[current] = helper[helperRight];
      helperRight++;
    }
    current++;
  }
  int remaining = mid - helperLeft;
  for(int i = 0; i <= remaining; i++)
  {
    arr[current + i] = helper[helperLeft + i];
  }
}
void SortAlgorithms::quickSort(vector<int>& arr)
{
  quickSort(arr, 0, arr.size() - 1);
}
void SortAlgorithms::quickSort(vector<int>& arr, int low, int high)
{
  if(low < high)
  {
    int k = partition(arr, low, high);
    quickSort(arr, low, k - 1);
    quickSort(arr, k + 1, high);
  }
}
int SortAlgorithms::partition(vector<int>& arr, int low, int high)
{
  int pivot = arr[high];
  int i = low - 1;
  for(int j = low; j <= high; j++)
  {
    if(arr[j] < pivot)
    {
      i++;
      swap(arr[j], arr[i]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return i + 1;
}
void SortAlgorithms::countingSort(vector<int>& arr)
{
  int k = max_element(arr.begin(), arr.end()) + 1;
  // creando C 
  vector<int> c(k);
  for(int i = 0; i < k; i++)
  {
    c[i] = 0;
  }
  for(int j = 0; j < arr.size(); j++)
  {
    c[arr[j]] = c[arr[j]] + 1;
  }

}










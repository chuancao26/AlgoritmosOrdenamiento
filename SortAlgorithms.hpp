#include <vector>
#include <iostream>
using namespace std;
class SortAlgorithms
{
  private:
    void swap(int&, int&);
    // Merge
    void mergeSort(vector<int>&, vector<int>&, int, int);
    void merge(vector<int>&, vector<int>&, int, int, int);
    int partition(vector<int>&, int, int);
    void quickSort(vector<int>&, int, int);
  public:
    void bubbleSort(vector<int>&);
    void selectionSort(vector<int>&);
    void mergeSort(vector<int>&);
    void quickSort(vector<int>&);
    void countingSort(vector<int>&);
};

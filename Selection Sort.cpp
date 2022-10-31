#include <iostream>
using namespace std;

//swapping the elements 
void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
       // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    swap(&array[min_idx], &array[step]);  // put min at the correct position
  }
}
int main(){
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  cout<<"Entered Array "<<endl;
  printArray(data,size);
  selectionSort(data,size);
  cout << "Sorted array in Acsending Order:"<<endl;
  printArray(data, size);
}
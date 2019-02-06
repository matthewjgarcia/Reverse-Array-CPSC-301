#include <iostream>


using namespace std;

void reverseArray(int arr[], int start, int end)
{
  while (start > end)
  {
    int temp = arr[start];
    arr[start]= arr[end];
    arr[end] = temp;
    start++;
    end++;
  }
}

void printArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout<< arr[i] << " " << endl;
  }
}

int main()
{

  int arr* = (1,2,3,4);
  printArray(arr,6);
  reverseArray(arr,0,5);
  cout << "The reversed array is ";
  reverseArray(arr,0,5);
  return 0;
}

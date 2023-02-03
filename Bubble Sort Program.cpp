#include <stdio.h>
void printarray(int *arr,int n)
{
  for(int i =0; i<n; i++)
  {
    printf("%d  ",arr[i]);
  }
  printf("\n");
}
void bubbleSort(int *arr,int n)
{
  int isSorted = 1;
  for(int i =0; i<n;i++)
  {
    printf("pass = %d \n",i);
    for(int j=0; j<n-i-1; j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        isSorted = 0;
      }
    }
    if(isSorted)
    {
      return;
    }
  }
}
int main(void) 
{
  // int A[] = {24,34,89,79,79,70,23,11};
  int A[] = {1,2,3,4,5,6,7,8,24,34,89,79,79,70,23,11};
  int n = 16;
  printarray(A,n);
  bubbleSort(A,n);
  printarray(A,n);
  return 0;
}

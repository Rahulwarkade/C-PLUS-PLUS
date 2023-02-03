#include <stdio.h>
void arrTreversal(int *arr,int size)
{
  for(int i=0; i<size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void insertionSort(int *arr,int size)
{ 
  int key,j=1;
  for(int i =1; i<=size-1; i++)
  {
    key = arr[i];
    j = i-1;
    while(j>=0 && arr[j]>key)
    {
      arr[j+1] = arr[j];
      arr[j] = key;
      j--;
    }
  }
}
int main(void) 
{
  int arr[] = {24,3,42,2,11,12,22,8};
  int size =8;
  arrTreversal(arr,size);
  insertionSort(arr,size);
  printf("Insertion sort\n");
  arrTreversal(arr,size);

  return 0;
}

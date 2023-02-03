#include <stdio.h>
void printarray(int *arr, int size)
{
  for(int i=0; i<size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int partition(int *arr,int low,int high)
{
  int pivot = arr[low];
   int i = low+1;
   int j = high;
   int temp;
   do{
   while(arr[i]<=pivot)
   {
     i++;
   }
  while(arr[j]>pivot)
   {
     j--;
   }
   if(i<j)
   {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   }
 }while(i<j);
 temp = arr[low];
 arr[low] = arr[j];
 arr[j] = temp;
 return j;
}


void quiqSort(int *arr,int low,int high)
{
  int partitionIndex;
  if(low<high){
  partitionIndex = partition(arr,low,high);
  quiqSort(arr,low,partitionIndex-1);
  quiqSort(arr,partitionIndex+1,high);
  }
}
int main(void) 
{
 int A[] = {2,1,23,99,23,34,29,84,79,60,10};
 int size = 11;
 printarray(A,size);
 quiqSort(A,0,size-1);
 printarray(A,size);
 return 0;
}

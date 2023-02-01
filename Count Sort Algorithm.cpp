#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
void printArray(int arr[],int n)
{
  for(int i=0; i<n; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int maximum(int arr[],int n)
{
int max = INT_MIN; 
for(int i=0; i<n; i++)
{
  if(max<arr[i])
  {
    max = arr[i];
  }
}
return max;
}
void countSort(int arr[],int n)
{ int i,j;
  int max = maximum(arr,n);
  int *count = (int *)malloc((max+1)*sizeof(int));
  for( i =0; i<max+1; i++)
  {
    count[i] = 0;
  }
  for( i =0; i<n; i++)
  {
    count[arr[i]]++;
  }
  i = 0;
  j = 0;
  while(i<max+1)
  {
    if(count[i]>0)
    {
      arr[j] = i;
      j++;i++;
    }
    else
    {
      i++;
    }
  }
}
int main(void) 
{
  int A[] = {50,23,10,9,8,7,6,5,4,3,2,1};
  int n = 12;
  printArray(A,n);
  countSort(A,n);
  printArray(A,n);
  return 0;
}

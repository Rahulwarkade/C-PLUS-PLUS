#include <stdio.h>
int linearS(int *arr,int el,int si){
  for(int i=0; i<si; i++){
    if(el == arr[i]){
      return i;
    }
  }
    return -1;
}
int binaryS(int *arr,int el,int si){
 int low,mid,high;
 low=0,high=si-1;
 while(low<=high){
 mid = (low+high)/2;
 if(arr[mid] == el){
   return mid;
 }
 else if(arr[mid] < el){
   low = mid-1;
 }
 else{
   high = mid+1;
 } 
 }
 return -1;
}
int main(){
  int arr[] = {1,2,3,4,8,9,10,73,88,95,104};
  int size = sizeof(arr)/sizeof(int);
  int element = 4;
int result = binaryS(arr,element,size);
printf("The element %d is found at index = %d ",element,result);
return 0;
}

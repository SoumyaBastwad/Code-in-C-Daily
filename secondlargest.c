#include<stdio.h>
int main(){
  int arr[5]={10,25,30,5,6]
  int large=arr[0];
  int second=arr[0];
for(i=1:i<=5:i++){
if(arr[i]>large){
large=arr[i];
second=large;
}
else if (arr[i]>second && arr[i]!=large){
  second=arr[i];
}
}
printf("second largest number is :%d",second);
}

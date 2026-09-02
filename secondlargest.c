#include<stdio.h>
int main(){
  int arr[5]={10,25,30,5,6};
  int largest=arr[0];
  int second=arr[0];
for(int i=1;i<5;i++){
if(arr[i]> largest){
second=largest;
largest=arr[i];

}
else if (arr[i]>second && arr[i] != largest){
  second=arr[i];
}
}
printf("second largest number is :%d",second);
return 0;

}



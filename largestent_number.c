#include<stdio.h>
void main(){
  int a,b,c;
printf("enter the 3 numbers:",);
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
printf("a is larger number that is %d",a);
}
if(b>a && b>c){
printf("b is larger number that is %d",b);
}
else{
printf("c is larger number that is %d ",c);
}
}

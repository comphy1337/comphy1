#include<stdio.h>
int main(){
  int a,b,c;
  printf("define a range of an array of the prime number : ");
  scanf("%d",&a);
  printf("the array of between 1 to %d is : ",a);
  for(b=3;b<=a;b++){
    for(c=2;c<b;c++){
      if(b%c==0){
        break;
      }
      if(c==b-1){
        printf("%d  ",b);
      }
    }
  }
}

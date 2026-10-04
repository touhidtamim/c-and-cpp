#include<stdio.h>
int main(){
  int a;
  scanf("%d", &a);

  if(a%5 == 0 && a%3 == 0){
    printf("The number is divisible by both 5 and 3");
  } else{
    printf("The number is not divisible by both 5 and 3");
  }

  return 0;
}
#include <stdio.h>

int main(){
  int num;
  printf("Enter the term you want to see\n");
  scanf("%d", &num);
  // Fibonacci function using recursion
  int fibo(int a){
    if(a<=2) return 1;
    return fibo(a-1) + fibo(a-2);
  }
  printf("The %dth term of the fibonacci series is: %d", num, fibo(num));
  return 0;
}

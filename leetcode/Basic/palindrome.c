#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x) {
  if(x<0)
  return false;
  long original = x;
  long reversed = 0;
  long s = 0;
  while(x){
      s = x % 10;
      reversed = s + reversed*10;
      x/=10;
  }
  return reversed==original;
}
int main(){
  long x ;
  printf("Enter a number: ");
  scanf("%ld",&x);
  if(isPalindrome(x)){
    printf("It is palindrome");
  }
  else
      printf("It is not palindrome");
}
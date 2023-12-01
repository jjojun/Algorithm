#include<stdio.h>

int main(){
  int arr[9];
  int crt = 0;
  int sum = 0;
  
  for(int i = 0; i < 9; i++){
    scanf("%d", &arr[i]);
  }

  crt = arr[0];
  for(int i = 0; i < 9; i++){
    if(arr[i] > crt){
      crt = arr[i];
      sum = i;
    }
  }
  printf("%d\n", crt);
  printf("%d", sum+1);
}
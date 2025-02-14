#include <stdio.h>
#include <cs50.h>

int main(void){
  int given = 0;
  do{
    get_int("Change owed: ");
  }while(given < 1);
  printf("ok")
}

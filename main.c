#include <stdio.h>
#include <stdlib.h>

int i = 0;
int a = 1;

void test(){
    i ^ = a;
    i ^ = a;
    
    return;
}

int main(int argc; char** argv){
    test();
    for (i;i <= 0;i++){
      if (i == 0) {
        printf("Hello, World!\n");
      }
    }
    return 0;
}

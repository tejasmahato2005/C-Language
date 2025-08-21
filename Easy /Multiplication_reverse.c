#include <stdio.h>

int main(){
    //Multiplication table of 10 in reverse
     int n;
    scanf("%d", &n);
    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i );
    }
   
    return 0;
}
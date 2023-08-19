#include <stdio.h>
long int MultiplyNumbers(int y);
        int main() {
        int y;
        printf("Enter a positive integer:");
        scanf("%d",&y);
        printf("Factorial of %d=%ld\n",y,MultiplyNumbers(y));
        return 0;
        }
        long int MultiplyNumbers(int y) {
        if(y>=1)
        return y* MultiplyNumbers(y-1);
        else
        return 1;
}

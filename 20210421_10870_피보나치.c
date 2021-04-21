#include <stdio.h>

int Fibonacci(int n){
    
    if (n > 1)
        return Fibonacci(n-1) + Fibonacci(n-2);
    else if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
        

}
int main(){
    int n;

    scanf("%d",&n);

    printf("%d\n",Fibonacci(n));

    return 0;
}

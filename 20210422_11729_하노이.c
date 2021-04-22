#include <stdio.h>
#include <math.h>
void hanoi(int n, int from, int to, int stay);
void move(int n, int from, int to);

void hanoi(int n, int from, int to, int stay){
// 3 1 3 2
    if(n==1)
        move(n,from,to);

    hanoi(n-1,from,stay,to);
    move(n,from,to);
    hanoi(n-1,stay,to,from);


}
void move(int n, int from, int to){
    printf("%d %d",from, to);
}
int main(){
    int n;

    scanf("%d",&n);
    //printf("%d", (int)(pow(2,n)-1));
    hanoi(n,1,3,2);


    return 0;
}

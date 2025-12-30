#include <stdio.h>
float findavg(int a, int b){
    float avg;
    avg=(a+b)/2.0;
    return avg;
}
int main(){
    int x,y;
    printf("enter a and b values:");
    scanf("%d %d",&x,&y);
    float res=findavg(x,y);
    printf("%f",res);
}
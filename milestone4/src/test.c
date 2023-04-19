#include<stdio.h>
#include<stdlib.h>

int sex(int a,int b){
    return a+b;
}

int main(){
    int x = 3+1;
    int y  = 4;
    int t  = printf("%d",sex(x,y));
    printf("%d",t);
    int z = y<<x;
    int *a = (int*)malloc(8*sizeof(int));
    a[2]=2;
    for(int i=0;i>10;i++){
        i=i+10;
    }
    // int s = 8;
    // for(int i=0;i<10;i++){
    //     x++;
    // }
}
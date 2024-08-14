#include <stdio.h>
#include <stdlib.h>

int func1(int n){
    if(n == 0) return(0);
    return(n + func1(n-1));
}

void func2(int n){
    if(n == 0) printf("fim");

    else{
        printf("\n%d",n);
        func2(n-1);
        printf("%d\n",n);
    }
}

int func3(int n){
    if (n == 0) return(1);
    if (n == 1) return(1);
    else return(func3(n-1) + 2 * func3(n-2));
}

int func4(int n){
    if(n == 1 || n == 2) return 2;
    return (func4(n-1) + func4(n-2));
}

int main(){
    int n = 7,aux;

    /*aux = func1(n);
    printf("\n\n\t%d",aux);
    getchar();
    getchar();
    system("clear");

    func2(n);
    getchar();
    getchar();
    system("clear");

    aux = func3(n);
    printf("\n\n\t%d",aux);
    getchar();
    getchar();
    system("clear");*/

    aux = func4(n);
    printf("\n\n\t%d",aux);
    getchar();
    getchar();
    system("clear");

    return 0;
}
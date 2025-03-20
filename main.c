#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int m, int b[], int n, int c[]){

    for(int i = 0; i < m; i++){
        c[i] = a[i];
    }
    for (int j = 0; j < n; j++){
        c[m + j] = b[j];
    }
}

int main(){
    int a[] = {1,2,3};
    int b[] = {7,8,9};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    int c [m + n];

    merge(a,m,b,n,c);
    printf("merged array: ");
    for(int i = 0; i < m + n; i++){
        printf("%d", c[i]);
    }

    return 0;


}




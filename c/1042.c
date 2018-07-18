#include <stdio.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int mergesort(int *a, int num){
    int i, j;
    for(i = 0; i < num; i++){
        for(j = 0; j < num; j++){
            if(a[i] < a[j]) swap(&a[i], &a[j]);
        }
    }
}

void printList(int *a, int num){
    int i;
    for(i = 0; i < num; i++){
        printf("%d\n", a[i]);
    }
    
}

int main(){
    
    int a[3], b[3];
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
    mergesort(a, 3);
    printList(a, 3);
    printf("\n");
    printList(b, 3);
    return 0;
}





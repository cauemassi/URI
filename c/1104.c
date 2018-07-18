#include <stdio.h>

void preencheLista(int *a, int num){
    int i;
    for(i = 0; i < num; i++){
        scanf("%d", &a[i]);
    }
    
}

void printList(int *a, int num){
    int i;
    for(i = 0; i < num; i++){
        printf("%d\n", a[i]);
    }
    
}

int contaTroca(int *a, int num1, int *b, int num2){
    int i, j, result1 = 0, result2 = 0;
    
    for(i = 0; i < num1; i++){
        for(j = 0; j < num1; j++){
            if(i != j && a[i] == a[j]) continue;
        }
        for(j = 0; j < num2; j++){
            if(a[i] == b[j]) continue;
        }
        result1 ++;
    }
    
    for(i = 0; i < num2; i++){
        for(j = 0; j < num2; j++){
            if(i != j && b[i] == b[j]) i++;
        }
        for(j = 0; j < num1; j++){
            if(a[i] == b[j]) i++;
        }
        result2 ++;
    }
    
    if(result1 < result2) return result1;
    return result2;
    
}

int main(){
    int a = 1, b = 1; 
    while(a != 0 && b != 0){
        scanf("%d", &a);
        scanf("%d", &b);
        int c[a];
        int d[b];
        preencheLista(c, a);
        preencheLista(d, b);
        if(a != 0 && b != 0) printf("%d", contaTroca(c,a,d,b));
    }
    return 0;
}
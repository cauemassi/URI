#include <stdio.h>
#include <string.h>

#define MAX 50

int compara(char *s1, char *s2){
	int valor = 0, aux = 0;
	char *a, *b;
	a = s2;
	for(; *s1 != '\0'; s1++){
		for(; *s2 != '\0'; s2++){
			printf("Vamos comparar %c e %c dando %d\n", *s1, *s2, *s1 == *s2);
			if(*s1 == *s2){
				s1++;
				aux ++;
				if(*s1 == '\0') break;
			} 
		}
		s2 = a;
		if(aux > valor) valor = aux;
		aux = 0;
	}
	
	return valor;

}


int main(){
	char s1[MAX], s2[MAX];
	scanf("%[^\n]s", s1);
	scanf("%[^\n]s", s2);

	printf("%s\n", s1);
	setbuf(stdin, NULL);
	printf("%s\n", s2);
	
	printf("%d\n",compara(s1, s2));

	return 0;
}
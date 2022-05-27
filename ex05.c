#include <stdio.h>
#include <stdlib.h>


int main(){

    int *v;
    int tam = 5;

    v = (int*) malloc(tam * sizeof(int));

    if(v == NULL){
        printf("Erro ao alocar memoria \n");
        return 1;
    }

    //lendo os valores do vetor
    for(int i = 0; i < tam; i++){
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("\n");

    //imprimindo o vetor
    for(int i = 0; i < tam; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }

    //*() -> imprimir o conteudo que esta dentro da posicao x.

    free(v);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){

    int linha, coluna, i, j;

    scanf("%d %d", &linha, &coluna);

    if (linha == 0 || coluna == 0) {
        printf("[matriz vazia]\n");
        return 0;
    }

    int** matriz = (int**) malloc(linha * sizeof(int));

    for (i = 0; i < linha; i++){
        matriz[i] = (int*) malloc(coluna * sizeof(int));
       
    }

    for (i = 0; i < linha; i++){  
        for (j = 0; j < coluna; j++){    
            scanf("%d", &matriz[i][j]);
        }    
    }
    
    printf("'");
    for (i = 0; i < linha; i++){ 
        for (j = 0; j < coluna; j++){  
            printf("%d", matriz[i][j]);

            if (j < coluna - 1){
                printf(" ");
            }
            
            if (i == linha - 1 && j == coluna - 1){
                printf("'");
            }
        
        }
        
        printf("\n");
    }

    for (int i = 0; i < linha; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
#include <stdio.h>

int main(){

    int linha, coluna, i, j;

    scanf("%d %d", &linha, &coluna);

    int** matriz = (int**) malloc(linha * sizeof(int));
    if (matriz == NULL) {
        return 1;
    }

    for (i = 0; i < linha; i++){
        matriz[i] = (int*) malloc(coluna * sizeof(int));
        if (matriz[i] == NULL) {
            return 1;
        }
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
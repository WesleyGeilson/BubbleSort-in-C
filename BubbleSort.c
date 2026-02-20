#include <stdio.h>

int comparacoes = 0;  // Contador global
int trocas = 0;       // Contador global
 
void bubbleSort(int v[], int n) {
    int temp = 0;
    // int flag = 0;

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n-i-1; j++){
            comparacoes++;
            if(v[j] > v[j+1]){
                temp = v[j+1];
                v[j+1] = v[j];
                v[j] = temp;
                trocas++;
                //flag = 0;
            }
            // if(flag == 1){
            //     break;
            // }
        }
    }
}
 
void imprimirVetor(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
 
int main() {
    int dados[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    
    printf("Vetor original: ");
    imprimirVetor(dados, n);
    
    bubbleSort(dados, n);
    
    printf("Vetor ordenado: ");
    imprimirVetor(dados, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);
    
    return 0;
}
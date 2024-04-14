#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "portuguese");
    int n, m;
    printf("Digite o número de linhas (n): ");
    scanf("%d", &n);
    printf("Digite o número de colunas (m): ");
    scanf("%d", &m);

    int A[n][m], B[n][m];

    printf("Digite os elementos da matriz A:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
            B[i][j] = A[i][j] * 3;
        }
    }

    printf("\nMatriz B:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}

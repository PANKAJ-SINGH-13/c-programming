//////////// matrix multiplication


 #include <stdio.h>

int main() {
    int m, n, p;
    
    ////////////////////////////////////////////////////// Input matrix dimensions
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter columns of matrix B: ");
    scanf("%d", &p);
    
    int A[m][n], B[n][p], C[m][p];
    
    // //////////////////////////////////////////////////////////////Input matrix A
    printf("\nEnter elements of matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // ////////////////////////////////////////////////////////////////////Input matrix B
    printf("\nEnter elements of matrix B (%d x %d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    /////////////////////////////////////////////////////////////// Initialize result matrix C to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    ///////////////////////////////////////////////////////////////////////// Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // /////////////////////////////////////////////////////////////////////////Output result
    printf("\nResultant Matrix C (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

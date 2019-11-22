#include<stdio.h>

void mmultiplication(int matrix1[][50], int matrix2[][50], int matrixmul[][50], int row1, int col1, int row2, int col2)
{
    int i, j,l=0, k = 0;
    for(i = 0; i < row1; i++){//for(l = 0; l < row1; l++)
            for(k = 0; k < col2; k++)
                for(j = 0; j < col1; j++)
                    matrixmul[i][k] += (matrix1[i][j] * matrix2[j][k]);
        }

}

int main()
{
    int matrix1[50][50], matrix2[50][50], matrixmul[50][50] = {(0,0)}, row1, col1, row2, col2, i, j;

    printf("Enter the first matrix of row and column: \n");
    scanf("%d %d", &row1, &col1);
    printf("Enter the second matrix of row and column: \n");
    scanf("%d %d", &row2, &col2);

    if(col1 == row2){
        printf("Enter the first array of element: \n");
        for(i = 0; i < row1; i++)
            for(j = 0; j < col1; j++)
                scanf("%d", &matrix1[i][j]);
        printf("Enter the second array of element: \n");
        for(i = 0; i < row2; i++)
            for(j = 0; j < col2; j++)
                scanf("%d", &matrix2[i][j]);

        printf("\nFirst array elements: \n");
        for(i = 0; i < row1; i++){
            for(j = 0; j < col2; j++){
                printf("%d\t", matrix1[i][j]);
            }
            printf("\n");
        }
        printf("\nFirst array elements: \n");
        for(i = 0; i < row1; i++){
            for(j = 0; j < col2; j++){
                printf("%d\t", matrix1[i][j]);
            }
            printf("\n");
        }

        mmultiplication(matrix1, matrix2, matrixmul, row1, col1, row2, col2);

        printf("\nAfter multiplication: \n");
        for(i = 0; i < row1; i++){
            for(j = 0; j < col2; j++){
                printf("%d\t", matrixmul[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("There matrix are not posible multiplication.\n");

    return 0;
}

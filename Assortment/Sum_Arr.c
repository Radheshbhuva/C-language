#include <stdio.h>

main()
{
    int row, col, i, j;

    printf("Enter a row size :");
    scanf("%d", &row);
    printf("Enter a col size :");
    scanf("%d", &col);

    printf("\n");

    int a[row][col]
    ;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int row_sum = 0;
    int rowc, colr;
    printf("\nEnter a row number: ");
    scanf("%d", &rowc);
    printf("Elements of row: %d > ", rowc);

    for (j = 0; j < col; j++)
    {
        printf("%d ", a[rowc][j]);
        row_sum += a[rowc][j];
    }
    printf("\nThe sum of row %d: %d\n", rowc, row_sum);

    printf("\n\n");

    int col_sum = 0;
    printf("\nEnter a coloumn number: ");
    scanf("%d", &colr);
    printf("Elements of coloumn: %d > ", colr);

    for (i = 0; i < row; i++)
    {
        printf("%d ", a[i][colr]);
        col_sum += a[i][colr];
    }
    printf("\nThe sum of col %d: %d\n", colr, col_sum);
}
int col_sum = 0;
    printf("\nEnter column number: ");
    scanf("%d", &col);
    printf("Elements of column %d:  ", col);
    
    for (i = 0; i < row; i++) 
    {
        printf("%d ", a[i][col]);
        col_sum += a[i][col];
        
    }
    printf("\nThe sum of column %d: %d\n", col,col_sum);
    
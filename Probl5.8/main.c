/*

    CH-230-A
    a5p8.c
    Idris Mouji
    imouji@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>


void read_matrix(int** matr,int n, int m)
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<m ; j++)
            scanf("%d", &matr[i][j]);
}
void print_matrix(int** matr, int n, int m)
{
     int i, j;
     for(i=0; i<n; i++){
        for(j=0; j<m ; j++)
            {printf("%d", matr[i][j]);}
        printf("\n");}
}
void mult_matrix(int** matr, int** matri1,
                 int** matri2,int  n, int p,
                 int m)
{
    int i, j, k;
    for(i=0; i<n; i++){
        for(j=0; j<p ; j++){
            matr[i][j] = 0;
            for(k=0;k < m; k++)
                matr[i][j] += matri1[i][k] * matri2[k][j];}
    }
}

int main()
{


    int **matr1, **matr2, **matr3;
    int n, m, p, i;

    //Reading the matrix dimensions
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    //dynamic Allocation of memory for matrices
    matr1 =  (int **) malloc(sizeof(int *)* n);
    if (matr1 == NULL)
        exit(1);
    for(i=0; i<n; i++)
        matr1[i]= (int *)malloc(sizeof(int)*m);
    if(matr1[n]== NULL)
        exit(1);
    matr2 =  (int **) malloc(sizeof(int *)* m);
    if (matr2 == NULL)
        exit(1);
    for(i=0; i<m; i++)
        matr2[i]= (int *)malloc(sizeof(int)*p);
    if(matr2[m]== NULL)
        exit(1);
    matr3 =  (int **) malloc(sizeof(int *)* n);
    if (matr2 == NULL)
        exit(1);
    for(i=0; i<n; i++)
        matr3[i]= (int *)malloc(sizeof(int)*p);
    if(matr3[n]== NULL)
        exit(1);

    //Formula for reading the matrix values
    read_matrix(matr1, n, m);
    read_matrix(matr2, m, p);

    //Formula for printing the matrices
    printf("Matrix A:\n");
    print_matrix(matr1, n, m);


    printf("Matrix B:\n");
    print_matrix(matr2, m, p);

    printf("The multiplication result AxB:\n");

    mult_matrix(matr3, matr1, matr2, n, p, m);
    print_matrix(matr3, n, p);

    //Freeing the allocated memory
    for(i=0; i<n; i++)
        free(matr1[i]);
    free(matr1);

    for(i=0; i<m; i++)
        free(matr2[i]);
    free(matr2);

    for(i=0; i<m; i++)
        free(matr3[i]);
    free(matr3);
    return 0;
}

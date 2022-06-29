#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    char **matrix = malloc(sizeof(char *) * m);
    for (int i = 0; i < m; i++) {
      matrix[i] = malloc(sizeof(char) * (n + 1));
    }
    for (int i = 0; i < m; i++) {
      scanf("%s", matrix[i]);
    }

printf("\n결과\n");
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (matrix[i][j] == '*')
          printf("*");
        else {
            int count = 0;
            if (i-1 >= 0 && matrix[i-1][j] == '*') 
              count++;
            if (i+1 < m && matrix[i+1][j] == '*') 
              count++;
            if (j-1 >= 0 && matrix[i][j-1] == '*') 
              count++;
            if (j+1 < n && matrix[i][j+1] == '*') 
              count++;
            if (i-1 >= 0 && j-1 >= 0 && matrix[i-1][j-1] == '*')
              count++;
            if (i+1 < m && j+1 < n && matrix[i+1][j+1] == '*') 
              count++;
            if (i+1 < m && j-1 >= 0 && matrix[i+1][j-1] == '*') 
              count++;
            if (i-1 >= 0 && j+1 < n && matrix[i-1][j+1] == '*') 
              count++;
            printf("%d", count);
        }
      }
      printf("\n");
    }

    for (int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);

 return 0;
}

#include <stdio.h>
#define SIZE 100

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()  
{
   int data[SIZE][SIZE];
   int i,j;
   int rowSize, colSize;
   printf("Enter the array size (rowSize, colSize): \n");
   scanf("%d %d", &rowSize, &colSize);  
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &data[i][j]);      
   printf("compress2D(): \n");
   compress2D(data, rowSize, colSize);
   return 0;
}

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)  
{
    for (int i = 0; i < colSize; i++) {
        int cur = data[i][0];
        int streak = 1;
        int j;
        for (j = 1; j < rowSize - 1; j++) { //stop just before
            if (cur == data[i][j]) 
            {
                streak++;
                continue;
            }
            
            printf("%d %d ", cur, streak);
            cur = data[i][j];
            streak = 1;
        }
        
        if (data[i][j] == cur) {
            printf("%d %d ", cur, streak + 1);
        }
        else {
            printf("%d %d ", cur, streak);
            printf("%d %d ", data[i][j], 1);
        }
        
        
        printf("\n");
    }
}


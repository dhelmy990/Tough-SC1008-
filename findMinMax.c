#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int size);
int main()
{
   char word[SIZE][40];
   char first[40], last[40];
   int i, size;  
    
   printf("Enter size: \n");
   scanf("%d", &size);
   printf("Enter %d words: \n", size);
   for (i=0; i<size; i++)
      scanf("%s", word[i]);  
   findMinMaxStr(word, first, last, size);   
   printf("First word = %s, Last word = %s\n", first, last);         
   return 0;
}
void findMinMaxStr(char word[][40], char *first, char *last, int size)
{
    if (size == 0) return; // Edge case: No words given

    // Initialize first and last with the first word
    strcpy(first, word[0]);
    strcpy(last, word[0]);

    // Iterate through the words to find min and max
    for (int i = 1; i < size; i++) {
        if (strcmp(word[i], first) < 0) {
            strcpy(first, word[i]);
        }
        if (strcmp(word[i], last) > 0) {
            strcpy(last, word[i]);
        }
    }
}


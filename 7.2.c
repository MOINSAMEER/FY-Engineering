include <stdio.h>
void scanArray(int x[][],int rows,int cols){
 
   for(int i = 0; i < rows; i++) {
       for(int j = 0; j < cols; j++) {
           scanf("%d", &x[i][j]);
}
int main() {
   int rows, cols;
   int a[2][2], b[2][2], sum[2][2];
 
   printf("Enter number of rows:\n");
   scanf("%d", &rows);
   printf("Enter number of columns:\n");
   scanf("%d", &cols);
 
   printf("Enter values for the second array:\n");
   for(int i = 0; i < 2; i++) {
       for(int j = 0; j < 2; j++) {
           scanf("%d", &b[i][j]);
       }
   }
 
   for(int i = 0; i < 2; i++) {
       for(int j = 0; j < 2; j++) {
           sum[i][j] = a[i][j] + b[i][j];
       }
   }
 
   printf("First array:\n");
   for(int i = 0; i < 2; i++) {
       for(int j = 0; j < 2; j++) {
           printf("%d ", a[i][j]);
       }
       printf("\n");
   }
 
   printf("Second array:\n");
   for(int i = 0; i < 2; i++) {
       for(int j = 0; j < 2; j++) {
           printf("%d ", b[i][j]);
       }
       printf("\n");
   }
 
   printf("Sum of the two arrays:\n");
   for(int i = 0; i < 2; i++) {
       for(int j = 0; j < 2; j++) {
           printf("%d ", sum[i][j]);
       }
       printf("\n");
   }
 
   return 0;
}
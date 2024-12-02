/* Exp No.:10
UIN:241P059
Title:WAP to add two numbers using pointers
*/
#include <stdio.h>
int main() {
int a,b,sum;
int *p=&a;
int *q=&b;
int *r=&sum;
printf("Enter Number 1:");
scanf("%d"
,p);
printf("Enter Number 2:");
scanf("%d"
,q);
*r=*p+*q;
printf("%d"
,
*r);
return 0;
}
/*OUTPUT
Enter Number 1:55
Enter Number 2:45
100
=== Code Execution Successful === */

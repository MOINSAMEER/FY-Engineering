/*Exp No.:8.2
UIN:241P059
Title:WAP to check if the entered string is palindrome or not.
*/
#include <stdio.h>
#include <string.h>
int main() {
char name[20], copy[20];
printf("Enter a string:");
scanf("%s"
, name);
strcpy(copy, name);
strrev(copy);
if (strcmp (name,copy)==0) {
printf("It's a Palindrome");
}
else {
printf("It's not a Palindrome");
}
return 0;
}
/*OUTPUT
Enter a string:level
It's a Palindrome
=== Code Execution Successful ===
*/

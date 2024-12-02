/*
Exp No.:8.1
UIN:241P059
Title:WAP to find the length of a string without using library function.
*/
#include <stdio.h>
int main() {
char name[20];
int length=0;
printf("Enter Name:");
gets(name);
printf("%s\n"
, name);
while (1) {
if (name[length]=='\0') {
break;
}
else {
length++;
}
}
printf("Length is %d"
, length);
return 0;
}
/*OUTPUT
Enter Name:Moin
Moin
Length is 4
=== Code Execution Successful === */

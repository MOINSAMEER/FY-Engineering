/*Exp. No.:9
UIN:241P059
Title:Design a structure student_record to contain name, roll_number and total marks obtained. Write a program to read 5 Students data from the user and then display the topper on the screen.
*/
#include <stdio.h>
struct Student { char name[30]; int roll_no; int total_marks;
};
int main() {
struct Student rcd[5];
int highest_marks=0, highest_index=0;
for (int i=0; i<5; i++) {
printf("Enter Student Data: %d\n", i+1); printf("Enter Name:"); gets(rcd[i].name); printf("Enter Roll No.:"); scanf("%d", &rcd[i].roll_no); printf("Enter Total Marks:"); scanf("%d", &rcd[i].total_marks); printf("\n");
if(rcd[i].total_marks > highest_marks) {
highest_marks=rcd[i].total_marks; highest_index=i;
}
getchar ();
}
printf("Topper Detail\n"); printf("Name: %s\n", rcd[highest_index].name); printf("Roll No.: %d\n", rcd[highest_index].roll_no); printf("Marks: %d\n", rcd[highest_index].total_marks);
return 0;
}
/*OUTPUT
Enter Student Data: 1
Enter Name:Neha
Enter Roll No.:21
Enter Total Marks:50
Enter Student Data: 2
Enter Name:Sneha
Enter Roll No.:22
Enter Total Marks:68
Enter Student Data: 3
Enter Name:Sakshi
Enter Roll No.:23
Enter Total Marks:45
Enter Student Data: 4
Enter Name:Riya Enter Roll No.:24
Enter Total Marks:89
Enter Student Data: 5
Enter Name:Priya
Enter Roll No.:25
Enter Total Marks:76
Topper Detail
Name: Riya Roll No.: 24
Marks: 89
=== Code Execution Successful ===
*/

/*Name      :Moin
  UIN       :241P059
  Roll no   :53
  Topic     :WAP to define a counter function to print how
             many times the function is called. use storage classes.
  */


#include <stdio.h>

void counter(){
    static int c=1;
    printf("function is called %d times\n\n", c);
    c++;

}
int main(){
    printf("\t\t***Program to show number of times a function is called***\n\n\n");
        int n;
        printf("Enter how many times you want to call counter function:\n\n");
        scanf("%d",&n);
        printf("\n\n");
    for (int i = 0; i < n; i++) {
        counter();
    }


return 0;
}
/*Output:
                ***Program to show number of times a function is called***


Enter how many times you want to call counter function:

7


function is called 1 times

function is called 2 times

function is called 3 times

function is called 4 times

function is called 5 times

function is called 6 times

function is called 7 times


#include <stdio.h>

int main() {
    char EmployessID [ 10 ] ;
    int workinghrs ;
    float Salaryamount ;
    float Salarytotal ;

    printf( "Input the Employees ID(Max. 10 chars) :  \n" ) ;
    scanf( "%s", EmployessID ) ;
    printf( "Input the working hrs : \n" ) ;
    scanf( "%d", &workinghrs ) ;
    printf( "salary amount/hr : \n" ) ;
    scanf( "%f", &Salaryamount ) ;

    Salarytotal = workinghrs * Salaryamount * 22 ;

    printf( "EmployessID = %s\n", EmployessID ) ;
    printf( "Salary THB = %.0f", Salarytotal ) ;

    return 0 ;
}//end main 







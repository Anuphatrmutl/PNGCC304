#include <stdio.h>
int main() {
    float score1 ;
    int Grade ;
    printf( "Enter your score : " ) ;
    scanf("%f", &score1) ;
    Grade = (int)(score1/5) ;
    switch(Grade) {

        case 20 :
            printf( " A " ) ;
            break ;
        case 19 :
            printf( " A ") ;
            break ;
        case 18 :
            printf( " A ") ;
            break ;
        case 17 :
            printf( " A " ) ;
            break ;
        case 16 : 
            printf ( " A ") ;
            break ;
        case 15 :
            printf ( " B+ " ) ;
            break ;
        case 14 :
            printf ( " B " ) ;
            break ;
        case 13 :
            printf ( " C+ " ) ;
            break ;
        case 12 :
            printf ( " C " ) ;
            break ;
        case 11 :
            printf ( " D+ " ) ;
            break ;
        case 10 :
            printf ( " D " ) ;
            break ;
        default :
            printf( " F " ) ;
            break ;
        }//end switch
        return 0 ;
}//end function



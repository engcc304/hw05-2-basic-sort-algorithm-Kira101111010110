/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>

int main() {
    int a, b, c ;
    printf( "Input[1]:\n" ) ;
    scanf( "%d", &a ) ;
    printf( "Input[2]:\n" ) ;
    scanf( "%d", &b ) ;
    printf( "Input[3]:\n" ) ;
    scanf( "%d", &c ) ;

    if ( a > b && a > c ) {
        if (b > c) {
            printf( "%d %d %d", a, b, c ) ;
        } else {
            printf( "%d %d %d", a, c, b ) ;
        } //end else
    } else if ( b > a && b > c ) {
        if (a > c) {
            printf( "%d %d %d", b, a, c ) ;
        } else {
            printf( "%d %d %d", b, c, a ) ;
        } //end else
    } else {
        if ( a > b ) {
            printf( "%d %d %d", c, a, b ) ;
        } else {
            printf( "%d %d %d", c, b, a ) ;
        } //end else
    } //end else
    return 0 ;
} //end main function 
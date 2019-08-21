#include<stdio.h>
int main()
{
    int x=10,y=20,z=5;
    //find largest
    if( x>y && x>z){
        printf("&d x is greatest",x);

    }
    else if( y>x && y>z){
        printf("%d y is greatest",y);
    }
    else if(z>x && z>y){
        printf("%d z is greatest",z);
    }

    //find smallest


    if( x<y && x<z){
        printf("&d x is smallest",x);

    }
    else if( y<x && y<z){
        printf("%d y is smallest",y);
    }
    else if(z<x && z<y){
        printf("%d z is smallest",z);
    }

    return 0;
}
#include <stdio.h>

int main (){
int x,y,z ;
    x=10,y=20;
    z=x;
    x=y;
    y=z;

    printf ("x value is %d\n",x);
    printf ("y value is %d",y);

    return 0;

}

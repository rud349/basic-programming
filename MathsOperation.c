#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declare
    int num1=10,num2=20;
    float result;

    result=num1+num2;
    printf("Addition of two number is :%f\n",result);

    result=num1-num2;
    printf ("Subtraction of two number is :%f\n",result);

    result=num1*num2;
    printf("Multiplication of two number is :%f\n",result);

    result=num1%num2;
    printf("Modulus of two numbers is :%f\n",result);

    result=num1/num2;
    printf("Division of two  numbers is :%f\n",result);

    return 0;
}



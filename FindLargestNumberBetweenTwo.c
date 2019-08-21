#include <stdio.h>

int main() {
    int num1,num2;
    /* Inputs from user */
    scanf("%d %d",&num1,&num2);
    if (num1<num2){
        printf ("%d num2 is greater",num2);
    }else{
        printf("%d num1 is greatest",num1);
    }

	return 0;
}

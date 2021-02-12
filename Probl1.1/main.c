/*

    CH-230-A
    a1_p1.c
    Idris Mouji
    i.mouji@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double result;
    result = (float)(3+1)/5;/* When the computation is done, the compiler assumes that the numbers
    being computed are integers losing any significant numbers after the decimal point, and thus
    assigns the output of the computation an integer data type before setting the output to the
    "result" variable,. And since the compiler prints the "result" var as a double, it is given
    those extra 0s after the decimal point. To fix this, I casted the float data type to the equation,
    which promotes all the data types in the equation to a float, which preserves the decimal points.*/

    printf("The value of 4/5 is %.2lf\n", result);
    return 0;
}

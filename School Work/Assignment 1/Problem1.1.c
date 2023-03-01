#include <stdio.h>
int main() {
double result; /* The result of our calculation */
result = (3.0 + 1.0) / 5.0;
printf("The value of 4/5 is %lf\n", result);
return 0;
}

/*  The reason the result is 0.000 is because of the way
the compiler goes through the calculation in line 4.
First, the compiler would add the 3 and 4 and assign that value
to a temporary variable that safekeeps the value so far while the
compiler is loading the accumulator. Once that is done, it divides the
temp by the number 5, giving the result of 0. This value is zero because
the type of the temp variable is infered from the numbers  in the
equation, which are all integers. As an integer type, the value
cannot have a decimal part, thus dropping it. Once this temp value
is assigned to the result variable, the decimal point with the
three zeros show up because the type for result is float. */

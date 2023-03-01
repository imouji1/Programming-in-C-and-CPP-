#include <stdio.h>
int main() {
int result; /* The result of our calculation */
result = (2 + 7) * 9 / 3;
printf("The result is %d\n", result);
return 0;
}
/*the reasons for incorrect output was because we did not specify where from the compiler
needed to fetch the value to print. We just told it that the result to print is an int 
however did not pass the name of the variable or the address to fetch the value. */

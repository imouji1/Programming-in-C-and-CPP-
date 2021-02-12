/*

    CH-230-A
    a5p6.c
    Idris Mouji
    imouji@jacobs-university.de

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, neg = -1, i;
    float *arr;

    //input for number of elements
    scanf("%d", &n);

    //dyn memory allocation
    arr= (float*) malloc(sizeof(float) * n);

    /*What i did here was determine how many elements are inputted
    before the first negative number is inputted while assigning the
    inputs to the array. I used an if statement to stop the count
    when the first negative elements/number is inputted.*/
    for(i=0; i < n; i++)
    {
        scanf("%f", &*(arr+i));
        if(*(arr+i)< 0 && neg < 0)
           neg = neg +i;

    }

    printf("Before the first negative value: %d elements", neg +1);

    //dyn memory release for array
    free(arr);

    return 0;
}

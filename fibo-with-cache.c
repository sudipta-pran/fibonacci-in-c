#include <stdio.h>
#include <stdlib.h>

int count = 0, i;
int *dynamic_array = NULL;

int fibonacci(int n){
    count++;
    if(n < 0)
        printf("Term can't be negative");

    // Check cache
    if(dynamic_array[n] != -1)
        return dynamic_array[n];

    dynamic_array[n] = fibonacci(n-1) + fibonacci(n-2);

    return dynamic_array[n];
}
 
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);

    // Create the cache
    dynamic_array =(int *) calloc(num+1, sizeof(int));
    for (i = 0; i <= num; i++) dynamic_array[i] = -1;

    //initial conditions
    dynamic_array[0] = 0; //zeroth term
    dynamic_array[1] = 1; //first term

    printf("The fibonacci term at %d th place is %d", num, fibonacci(num));
    printf("\nNumber of times fibonacci function is called %d\n", count);

    //Print the list
    printf("The list is:");
    for (i = 0; i <= num; i++) printf(" %d", dynamic_array[i]);

    //free the space
    free(dynamic_array);
    return 0;
}

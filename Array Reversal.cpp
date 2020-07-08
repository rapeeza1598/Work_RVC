#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    // test case input
    // 5
    // 1 2 3 4 5
    scanf("%d", &num); 
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    for(i = num; i > 0; i--)
        printf("%d ", *(arr + (i-1)));
    // output
    // 5 4 3 2 1
    return 0;
}
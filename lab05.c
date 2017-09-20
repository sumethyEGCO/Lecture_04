#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int n_1 = 1; // n-1
    int n_2 = 0; // n-2
    int n;
    printf("Enter N: ");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++){
        if (i == 1)
            printf("%d, ", n_2); // print 0
        else if (i == 2)
            printf("%d, ", n_1); // print 1
        else{
            n = n_1 + n_2;
            if (i == N)
                printf("%d ", n); // don't print , for last one
            else
                printf("%d, ", n);
            n_2 = n_1;
            n_1 = n;
        }
    }
    return 0;
}
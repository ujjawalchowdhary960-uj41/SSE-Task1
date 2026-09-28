#include <stdio.h>

int main()
{
    int a[50], b[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++){
        b[i] = a[i];
    }
    printf("Copied array: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
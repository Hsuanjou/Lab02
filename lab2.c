
#include <stdio.h>
void InsertionSort(int array[], int n)
{
    int a, b, temp;
    for (a = 1; a < n; a++)
    {
        temp = array[a];
        b = a - 1;
        while ((temp < array[b]) && (b >= 0))
        {
            array[b + 1] = array[b];
            b--;
        }
        array[b + 1] = temp;
    }
}

int main(int argc, char **argv)
{
    int n, array[n];
    printf("Please enter number of elements in array: ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}

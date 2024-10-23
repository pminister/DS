#include <stdio.h>

void merge(int a[], int low, int mid, int high);
void mergeSort(int a[], int low, int high);

int main()
{
    int n, i;
    printf("Enter the count of numbers: ");
    scanf("%d", &n);

    int a[n];
    printf("\nEnter the numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    mergeSort(a, 0, n - 1);

    printf("\nThe Sorted list is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int b[high - low + 1]; 

    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }

    while (i <= mid)
    {
        b[k++] = a[i++];
    }

    while (j <= high)
    {
        b[k++] = a[j++];
    }

    for (i = low, k = 0; i <= high; i++, k++)
    {
        a[i] = b[k];
    }
}

void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

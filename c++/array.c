#include<stdio.h>
/*void missing(int a[],int n);
int main()
{
    int a[100],n;
    printf("Enter no. of elements in array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    missing(a,n);
    return 0;
}

void missing(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    int total=(n+1)*(n+2)/2;
    int missing=total-sum;
    printf("Missing number is %d",missing);
}*/

/*void odd_one(int a[],int n);
int main()
{
    int a[100],n;
    printf("Enter no. of elements in array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    odd_one(a,n);
    return 0;
}

void odd_one(int a[],int n)
{
    int i,odd=0;
    for(i=0;i<n;i++)
    {
        odd=odd^a[i];
    }
    printf("Odd one is %d",odd);
}*/

/*#include <stdio.h>

void mergeSortedArrays(int a[], int n, int b[], int m, int c[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    
    while (i < n) {
        c[k++] = a[i++];
    }

    
    while (j < m) {
        c[k++] = b[j++];
    }
}

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int c[n + m];
    
    mergeSortedArrays(a, n, b, m, c);

    printf("Merged sorted array: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
} 000000000000000000000000000000000000000000000000000000000000000000000000000
  111111111111111111111111111111111111111111111111111111111111111111111111111
  222222222222222222222222222222222222222222222222222222222222222222222222222
  333333333333333333333333232332323233222322333323333333333333333333333333333
  545455554554558555888/29/*2441849*/

#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



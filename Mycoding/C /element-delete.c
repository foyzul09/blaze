#include<stdio.h>

int main ()
{

    int n,i;

    int newSize=0;

    printf("Enter the numbers of the elements:");
    scanf("%d",&n);

    int arr[n];

    for(i=0; i<n; i++)
    {

        printf("Element %d :",i+1);
        scanf("%d",&arr[i]);
    }

    int del;
    printf("Enter the number you want to delete:");
    scanf("%d",&del);
    for(i=0; i<n; i++)
    {

        if(arr[i]!=del)
        {

            arr[newSize] = arr[i];
            newSize++;
        }
    }

    if(newSize==n)
    {

        printf("Not Found!\n");
    }


    else
    {

        printf("Array after deleting the element\n");

        for(i=0; i<newSize; i++)
        {

            printf("%d",arr[i]);
        }
    }


    printf("\n");

    return 0;
}

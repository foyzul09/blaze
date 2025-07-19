

#include<stdio.h>

int main ()
{

    int n,i,del,index=-1;

    printf("Enter the number of the element:");
    scanf("%d",&n);

    int arr[n];

    for(i=0; i<n; i++)
    {

        printf("Element %d :",i+1);
        scanf("%d",&arr[i]);

    }

    printf("Enter the number you want to delete :");
    scanf("%d",&del);

    for(i=0; i<n; i++)
    {

        if(arr[i]==del)
        {

            index=i;

            break;
        }

        else
        {
            index=-1;
        }


    }

    if(index==-1)
    {

        printf("Not found!");
    }

    else
    {

        for(i=index; i<n-1; i++)
        {

            arr[i]=arr[i+1];
        }
        n--;
    }

    printf("The elements are now \n");


    for(i=0; i<n; i++)
    {

        printf("%d",arr[i]);
¬¬

¬¬

    }


    return 0;

}


#include <stdio.h>

int main(void)
{

    int i,j;
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,4,5};

    for (i=0;i<5;i++)

    for (j=i;j<5;j++)
    {

        if (arr1[i] == arr2[i])
        {
            printf("%d is equal to %d \n" ,arr1[i], arr2[j]);
        }
        else {
            printf("%d is not equal to %d \n", arr1[i], arr2[j]);
            break;
        }
    }
}
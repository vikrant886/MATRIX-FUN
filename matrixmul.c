#include <stdio.h>

int main()
{
    int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
    int pr[3][3];
    int a[3][3] ;
    int b[3][3] ;
    printf("*******elements for the first matrix**********\n");

    for (int d = 0; d < 3; d++)
    {
        for (int e = 0; e < 3; e++)
        {
            printf("ENTER THE ELEMENT OF COLUMN %d AND ROW %d : ",d,e);
            scanf("%d",&a[d][e]);
        }
    }
    printf("*******elements for the second matrix**********\n");
    for (int d = 0; d < 3; d++)
    {
        for (int e = 0; e < 3; e++)
        {
            printf("ENTER THE ELEMENT OF COLUMN %d AND ROW %d : ",d,e);
            scanf("%d",&b[d][e]);
        }
    }
    for (int d = 0; d < 3; d++)
    {
        for (int e = 0; e < 3; e++)
        {
            while (d == 0 && e < 3)
            {
                sum = sum + (a[d][e] * b[e][d]);
                sum1 = sum1 + (a[d][e] * b[e][1]);
                sum2 = sum2 + (a[d][e] * b[e][2]);
                e++;
            }
            pr[d][0] = sum;
            pr[d][1] = sum1;
            pr[d][2] = sum2;
        }
    }
    sum = 0;
    sum1 = 0;
    sum2 = 0;
    for (int d = 0; d < 3; d++)
    {
        for (int e = 0; e < 3; e++)
        {
            while (d == 1 && e < 3)
            {
                sum = sum + (a[d][e] * b[e][0]);
                sum1 = sum1 + (a[d][e] * b[e][1]);
                sum2 = sum2 + (a[d][e] * b[e][2]);
                e++;
            }
            pr[1][0] = sum;
            pr[1][1] = sum1;
            pr[1][2] = sum2;
        }
    }
    sum = 0;
    sum1 = 0;
    sum2 = 0;
    for (int d = 0; d < 3; d++)
    {
        for (int e = 0; e < 3; e++)
        {
            while (d == 2 && e < 3)
            {
                sum = sum + (a[d][e] * b[e][0]);
                sum1 = sum1 + (a[d][e] * b[e][1]);
                sum2 = sum2 + (a[d][e] * b[e][2]);
                e++;
            }
            pr[2][0] = sum;

            pr[2][1] = sum1;
            pr[2][2] = sum2;
        }
    }
    printf("THE MULTIPLICATION OF THESE TWO MATRIX ARE :\n");
    for(int i=0;i<3;i++){
        for(int x=0;x<3;x++){
            printf("%d ",pr[i][x]);
        }printf("\n");
    }

    return 0;
}

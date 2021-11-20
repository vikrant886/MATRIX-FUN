#include <stdio.h>
#include<math.h>
void deter(int a[2][2], int *y);
int main()
{
    int a=2;
    int l;
    int b[2][2]={{l,2},{3,l}};
    int i[2][2]={{l,0},{0,l}};
    printf("*********ENTER A TWO ORDER MATRIX*********\n");
    for(int c=0;c<2;c++){
        for(int d=0; d<2; d++){
            printf("enter the element for  %d and %d : ",c,d);
            scanf("%d",&b[c][d]);
        }
    }
    for(int c=0;c<2;c++){
        for(int d=0; d<2; d++){
           
        }
    }
    deter(b,&l);
    

    
    return 0;
}
void deter(int a[2][2],int *y){ 
    int x;
    *y=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    printf("the detrminant of the matrix is : %d",*y);
}
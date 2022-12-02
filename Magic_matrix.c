#include<stdio.h>
int main ()
{
    int a[3][3];
    int i,j, sum_digonal_1=0, sum_digonal_2=0 ,flag=0,sum_row=0,sum_col=0;

    for (i=0 ; i<3 ; i++)
    {
        for (j=0; j<3 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            if (i==j)
            {
                sum_digonal_1+=a[i][j];
            }
            if (i+j==3-1)
            {
                sum_digonal_2+= a[i][j];
            }
        }
    }

    if (sum_digonal_1!=sum_digonal_2)
    {
        flag=1;
    }

    else
    {
        for (i=0 ; i<3 ; i++)
        {
            sum_col=0;
            sum_row=0;
            for (j=0 ; j<3 ; j++)
            {
                sum_col += a[j][i];
                sum_row += a[i][j];
            }
            if (sum_col!=sum_digonal_1)
            {
                flag=1;
            }
            else if (sum_row !=sum_digonal_1) flag=1;

            else flag=0;

        }
    }

    if (flag==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }


    return 0;
}

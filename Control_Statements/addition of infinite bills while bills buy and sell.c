#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, bill_count=0;
    float bill_amt=0;
    double bill_sum=0;
    while (1)
    {
        printf("\n Enter Bill Number %d= ",i+1);
        scanf("%f",&bill_amt);
        if (bill_amt==0)
        {
            break;
        }
        bill_sum = bill_sum + bill_amt;

        i++;
    }
    printf("\n Addition of Given Bills= %lf",bill_sum);
    getch();
    return 0;
}

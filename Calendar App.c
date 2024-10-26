#include<stdio.h>

int fdayyear(int year){
 int day=((year*365)+((year-1)/4)- ((year-1)/100)+ ((year-1)/400)) %7;
 return day;
}

int main()
{
    while(1)
    {
        char *months[]= {"January", "February", "March"," April", "May", "June", "July", "August", "September"," October", "November", "December"};
    int dayinmonths[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i,j,totaldays,weekday,scount=0,year;
    printf("\n\nEnter the year : ");
    scanf("%d",&year);
    printf("\n\n************welcome to %d ***************\n\n",year);

    if((year % 4==0 &&  year % 100 !=0) || (year %400==0)){
        dayinmonths[1]=29;
    }

    weekday=fdayyear(year);


    for(i=0; i<12 ; i++)
    {
        printf("\n\n\n---------------------%s  ----------------------\n", months[i]);
        printf("\n   Sun   Mon   Tues   Wed   Thu   Fri   Sat \n\n");
        for(scount=1; scount<=weekday; scount++)
        {
            printf("      ");
        }
        totaldays=dayinmonths[i];
        for(j=1; j<=totaldays; j++)
        {
            printf("%6d", j);
            weekday++;
            //break;
            if(weekday>6){
                weekday=0;
                printf("\n");
            }
        }
    }
    }

    return 0;
}

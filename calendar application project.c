#include<stdio.h>
#include<string.h>
#include<conio.h>
int firstday(int year)
{
    int refyear=2012;
    int diff,leapyear,nonleapyear,totaldays,weekday,tempday;

    if(year>refyear)
    {
        diff=year-refyear;
        if(year%400==0 || year%4==0&&year%100!=0)
        {
            leapyear=(diff/4);
        }
        else
        {
            leapyear=(diff/4)+1;
        }

        nonleapyear=diff-leapyear;
        totaldays=(leapyear*366)+(nonleapyear*365);
        weekday=totaldays%7;

    }

    else if(year<refyear)
    {
        diff=refyear-year;
        leapyear=(diff/4);
        nonleapyear=diff-leapyear;
        totaldays=(leapyear*366)+(nonleapyear*365);
        tempday=totaldays%7;
        weekday=(tempday*6)%7;
    }

    else if(year==refyear)
    {
        weekday=0;
    }

    return weekday;

}



int main()

{
    system("color E2");

    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};

    int i,j,weekday=0,spaceCount,year;

    {
    printf("\nEnter the Year: ");}
    scanf("%d",&year);               //input year

    printf("\n\n******** Welcome to %d ********\n",year);
    printf("\nThe days with * mark are indicate the HOLIDAYS\n");

    if(year%4==0 && year%100!=0 || year%400==0)  //checking leap year
    {
        daysInMonth[1]=29;
    }

    weekday=firstday(year);

    for(i=0;i<12;i++)
    {
        printf("\n\n%20s\n\n",month[i]);      //print Name of months
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat \n\n");      // print name of every weeks

        for(spaceCount=1;spaceCount<=weekday;spaceCount++)
        {
            printf("     ");
        }

        for(j=1;j<=daysInMonth[i];j++)        //print days in month
        {
            if(year==2022)
            {
                if(i==0)
                {
                if(j==9||j==10||j==11){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                else if(i==1)
                {
                if(j==21){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                else if(i==2)
                {
                if(j==17){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                else if(i==3)
                {
                if(j==17 || j==14 || j>=24&&j<=28){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                else if(i==4)
                {
                if(j>=1&&j<=5 || j==15){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                if(i==5)
                {
                if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                if(i==6)
                {
                if(j>=5&&j<=7 || j>=10&&j<=14){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                if(i==7)
                {
                if(j==9||j==15||j==18){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                if(i==8)
                {
                if(j==21){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                if(i==9)
                {
                if(j>=4&&j<=6 || j==9 || j==24){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                if(i==10)
                {
                if(j==7){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

                if(i==11)
                {
                if(j==14|| j==25){
                    printf("%4d*",j);
                }
                else if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
                }

            }




            else
            {
                if(weekday==5||weekday==6)
                {
                    printf("%4d*",j);
                }
                else
                printf("%5d",j);

                weekday++;

                if(weekday>6)
                {
                 printf("\n");              //print newline for new weekday
                 weekday=0;
                }
            }


        }


    }


    return 0;

}


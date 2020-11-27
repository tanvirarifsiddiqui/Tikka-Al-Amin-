#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a,s,v,v1,sum1=0,sum2=0;
char w[10],e[10],r[10],t[10];
int cc()
{
    system("cls");
    time_t mytime=time(NULL);
    printf("\n\t\033[36;1mCurret Time=> %s",ctime(&mytime));
    sleep(5);
}

int ct ()
{
    system("cls");
    printf("\nChoice Your Tram");
    printf("\n+-----------------+---------------------");
    printf("\n| Tram Name       |       Pass         |");
    printf("\n+-----------------+---------------------");
    printf("\n| Kersapon        |        1           |");
    printf("\n+-----------------+---------------------");
    printf("\n| Horton          |        2           |");
    printf("\n+-----------------+---------------------");
    printf("\n| Chira           |        3           |");
    printf("\n+-----------------+---------------------");
    printf("\n| Ruiton          |        4           |");
    printf("\n+-----------------+---------------------");
    printf("\n| Jocker          |        5           |");
    printf("\n+-----------------+---------------------");
    printf("\n| Luck            |        6           |");
    printf("\n+-----------------+---------------------");
    printf("\n\nPress>>");
    scanf("%d",&a);
    tt();


}


int tt ()
{
    system("cls");
    printf("\nChoice Option");
    printf("\n\t\t**Tram show----(Press)---1");
    printf("\n\t\t**Tram Reset---(Press)---2");
    printf("\n\t\t**show point---(Press)---3");
    printf("\n\t\t**point Add----(Press)---4");
    printf("\n\n\t\tPass>>");
    scanf("%d",&s);
    switch (s)
    {
    case 1:
        sh();
        break;
    case 2:
        ct();
        break;
    case 3:
        hh();
        break;
    case 4:
        ap();
        break;

    default:
        printf("\nWrong Choice**__**");
        tt();
        break;
    }
}

int sh()
{
    system("cls");
    switch (a)
    {
    case 1:
        Kirsapon ();
        break;
    case 2:
        Love();
        break;
    case 3:
        Chira ();
        break;
    case 4:
        Ruiton ();
        break;

    default:
        break;
    }
}


int Ruiton ()
{
    system("cls");
    printf("\033[31;1m");
    printf("\n                  /\\                ");
    printf("\n                 /||\\               ");
    printf("\n                /||||\\              ");
    printf("\n               /||||||\\             ");
    printf("\n              /||||||||\\            ");
    printf("\n             /||||||||||\\           ");
    printf("\n            /||||||||||||\\          ");
    printf("\n            \\||||||||||||/          ");
    printf("\n             \\||||||||||/           ");
    printf("\n              \\||||||||/            ");
    printf("\n               \\||||||/             ");
    printf("\n                \\||||/              ");
    printf("\n                 \\||/               ");
    printf("\n                  \\/                ");
    sleep(10);
    ap();
}
int Love()
{
    system("cls");
    printf("\033[31;1m");
    printf("\n          ______         ______");
    printf("\n          ||||||||\\      /||||||||");
    printf("\n         ||||||||||\\    /||||||||||");
    printf("\n        ||||||||||||\\  /||||||||||||");
    printf("\n        |||||||||||||||||||||||||||||");
    printf("\n        |||||||||||||||||||||||||||||");
    printf("\n        |||||||||||||||||||||||||||||");
    printf("\n         |||||||||||||||||||||||||||");
    printf("\n          |||||||||||||||||||||||||");
    printf("\n          \\||||||||||||||||||||||/");
    printf("\n           \\||||||||||||||||||||/");
    printf("\n            \\||||||||||||||||||/");
    printf("\n             \\||||||||||||||||/");
    printf("\n              \\||||||||||||||/");
    printf("\n               \\||||||||||||/");
    printf("\n                \\||||||||||/");
    printf("\n                 \\||||||||/");
    printf("\n                  \\||||||/");
    printf("\n                   \\||||/");
    sleep(10);
    ap();
}
int Kirsapon ()
{
    system("cls");
    printf("\033[33;1m");
    printf("\n                  _______         ");
    printf("\n                 |---------|        ");
    printf("\n                 |---------|        ");
    printf("\n                  --------        ");
    printf("\n          _______--------_______");
    printf("\n          ||||||||\\------/||||||||");
    printf("\n         ||||||||||\\----/||||||||||");
    printf("\n        ||||||||||||\\--/||||||||||||");
    printf("\n        |||||||||||||||||||||||||||||");
    printf("\n        |||||||||||||||||||||||||||||");
    printf("\n        |||||||||||||||||||||||||||||");
    printf("\n         |||||||||||||||||||||||||||");
    printf("\n          |||||||||||||||||||||||||");
    printf("\n          \\||||||||||||||||||||||/");
    printf("\n           \\||||||||||||||||||||/");
    printf("\n            \\||||||||||||||||||/");
    printf("\n             \\||||||||||||||||/");
    printf("\n              \\||||||||||||||/");
    printf("\n               \\||||||||||||/");
    printf("\n                \\||||||||||/");
    printf("\n                 \\||||||||/");
    printf("\n                  \\||||||/");
    printf("\n                   \\||||/");
    sleep(10);
    ap();
}
int Chira()
{
    system("cls");

    printf("\033[33;1m");
    printf("\n                          *");
    printf("\n                        ******");
    printf("\n                     **********");
    printf("\n                    **************");
    printf("\n                      **********");
    printf("\n                        ******");
    printf("\n                          *");
    printf("\n             *                         *");
    printf("\n           ******                    ******");
    printf("\n         **********                **********");
    printf("\n       ************** )         (**************");
    printf("\n         **********    )       (    **********");
    printf("\n           ******       )     (       ******");
    printf("\n             *           )   (         *");
    printf("\n                          ______");
    printf("\n                         |________|");




    sleep(10);
    ap();



}

int aa()
{
    printf("\nEnter 1st  Group 1st Member name :");
    scanf("%s",&w);
    printf("\nEnter 1st  Group 2nd Member name :");
    scanf("%s",&e);

    printf("\nEnter 2nd  Group 1st Member name :");
    scanf("%s",&r);

    printf("\nEnter 2nd  Group 2nd  Member name :");
    scanf("%s",&t);
    ct();

}
int hh()
{
    system("cls");
    printf("\n+-----------------+---------------------");
    printf("\n|     Name        |       Point        |");
    printf("\n+-----------------+---------------------");
    printf("\n| %s +%s          =         %d         |",w,e,sum1);
    printf("\n+-----------------+---------------------");
    printf("\n| %s +%s          =         %d         |",r,t,sum2);
    printf("\n+-----------------+---------------------");
    sleep(10);
    tt();
}

int ap()
{
    system("cls");
    printf("\n Group 1 :");
    scanf("%d",&v);
    if (v>0)
    {
        sum1=sum1+v;
        if (sum1==6)
        {
            printf("Group one Win");
        }
    }
    else
    {
        sum1=sum1-v;
        if (sum1==-6)
        {
            printf("Group one Win");
        }
    }


    printf("\n Group 2 :");
    scanf("%d",&v1);
    if (v>0)
    {
        sum2=sum2+v1;
        if (sum2==6)
        {
            printf("Group one Win");
        }

    }
    else
    {
        sum2=sum2-v1;
        if (sum2==-6)
        {
            printf("Group Two Win");
        }
    }
    ct();
}

int main ()
{
    cc();
    aa();
    getchar();
    return 0;
}

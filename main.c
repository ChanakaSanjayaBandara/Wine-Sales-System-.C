
//ALL RIGHT RECIEVED || copyright2021 || NIBM_MA_DSE_202_002 ||


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

// All Shops in one Array
char* shop[5] =
{
    "Matara Wine Store",
    "Wikramasinghe Wine Store",
    "Cylone Wine Store",
    "Zahir  Wine Store",
    "Indian Wine Store"
};

//////////////////////////////////////////////

// All Beer items in one Array
char* brand[5] =
{
    "Lion Strong",
    "Lion Lager",
    "Sando Power Extra Strong",
    "Kings Lager",
    "Lion Coffee Stout"
};

///////////////////////////////////////////////

//Variables
int i,k,j,a,items,numItems,bar,qut,emptyBottle;
double total=0,total_1[10],total_2[10],total_3[10],emptyTotal=0,discount=0,billAmount=0;

double totalOfOneItem[10];
double totalOfEmpty[10];
double fullTotal[10];

double discount_1 = 100000;
double discount_2 = 250000;

double reportTotal[10];
double reportEmptyTotal[10];

int choose_1,choose_2,exitProgram;

///////////////////////////////////////////////

//Functions
void login();
void printOurName();
void welcomePage();
void aboutUs();
void choosen();
void sale();
void selectedShop();
void displayItems();
void selectItems();
void printPrices();
void Discount();
void table();
void ExitProgram();

///////////////////////////////////////////////

//Main
int main()
{
    login();
    system("color F4");
    welcomePage();
    menu();
}

///////////////////////////////////////////////

//Login Form
void login()
{
    system ("color 0A");
    int a=0,i=0;
    char uname[10],c=' ';
    char pword[10];
    char user[10]="user";
    char pass[10]="pass";
    do
    {
        printf("\n\n\n\t\t\t========================================\n\t\t\t------> SYSTEM LOGIN FORM\n\t\t\t========================================\n ");

        printf(" \n\n\t                       ~ ENTER USERNAME:-");
        scanf("%s", &uname);
        printf(" \n\t                       ~ ENTER PASSWORD:-");
        while(i<10)
        {
            pword[i]=getch();
            c=pword[i];
            if(c==13) break;
            else printf("*");
            i++;
        }
        pword[i]='\0';
        //char code=pword;
        i=0;
        //scanf("%s",&pword);
        if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
        {
            printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

            break;
        }
        else
        {
            printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
            a++;

            getch();

        }
    }
    while(a<=2);
    if (a>2)
    {
        printf("\nSorry you have entered the wrong username and password for four times!!!");

        getch();

    }
    system("cls");
}


///////////////////////////////////////////////

//Welcome Page
void welcomePage()
{
    system ("color 0");
    printf("\n\n\n\t\t\t\t==================================================================================================\n");
    printf("\n\n\t\t\t\t*            *   **********   *            **********   ***********   **           **   ********** \n");
    printf("\t\t\t\t*            *   *            *            *            *         *   * *         * *   *          \n");
    printf("\t\t\t\t*            *   *            *            *            *         *   *  *       *  *   *          \n");
    printf("\t\t\t\t*     **     *   *            *            *            *         *   *   *     *   *   *          \n");
    printf("\t\t\t\t*    *  *    *   **********   *            *            *         *   *    *   *    *   ********** \n");
    printf("\t\t\t\t*   *    *   *   *            *            *            *         *   *     * *     *   *          \n");
    printf("\t\t\t\t*  *      *  *   *            *            *            *         *   *             *   *          \n");
    printf("\t\t\t\t* *        * *   *            *            *            *         *   *             *   *          \n");
    printf("\t\t\t\t**          **   **********   **********   **********   ***********   *             *   ********** \n");
    printf("\n\t\t\t\t===================================================================================================\n\n\n");
    printf("\n\n\n\t\t\t\t\t\t** THIS IS THE NIBM PROGRAMMING OF FUNDAMENTALS COURSE WORK 2 PROJECT **\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t~~BY :- \n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t==>>   Ishitha   --- MA_DSE_202_F_001\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t==>>   Chanaka   --- MA_DSE_202_F_002\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t==>>   Nilashen  --- MA_DSE_202_F_003\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t==>>   Milani    --- MA_DSE_202_F_005\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t==>>   Sewmini   --- MA_DSE_202_F_018\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t==>>   Dasun     --- MA_DSE_202_F_045\n");
    printf("\n-Press any key to go to main menu : \n");
    getch();
    system("cls");
}


///////////////////////////////////////////////

//System Name
void printOurName()
{
    time_t t;
    time(&t);
        for(i=0; i<45; i++)
        printf("-");
    printf("\n Date And Time : %s",ctime(&t));
    for(i=0; i<45; i++)
        printf("-");
    printf("\n\n\n\t\t======================================================================================================================================\n\n\n");
    printf("\t\t *     *  ******* **    *  *******     *******      **      *        *******     *******  *   *  *******  *******  *******  **    **  \n");
    printf("\t\t *     *     *    * *   *  *           *           *  *     *        *           *         * *   *           *     *        * *  * *  \n");
    printf("\t\t *  *  *     *    *  *  *  *******     *******    ******    *        *******     *******    *    *******     *     *******  *  **  *  \n");
    printf("\t\t * * * *     *    *   * *  *                 *   *      *   *        *                 *    *          *     *     *        *      *  \n");
    printf("\t\t **   **  ******* *    **  *******     *******  *        *  *******  *******     *******    *    *******     *     *******  *      *  \n");
    printf("\n\t\t======================================================================================================================================\n\n\n");
    printf("\t\t\t\t\t\t\t****CYLONE WINE STORE DELEVARY AND SALES SYSTEM****\n\n\n");

}


///////////////////////////////////////////////

//Main Menu
void menu()
{
    system("color F1");
    printOurName();

    printf("\n\n\n\t\t\t\t\t\t\t\t\t  -----> [01] Sale\n");
    printf("\t\t\t\t\t\t\t\t\t  -----> [02] About Us\n");
    printf("\t\t\t\t\t\t\t\t\t  -----> [03] Exit\n\n");

    printf("\nSelect : ");
    scanf("%d",&choose_1);

    system("cls");

    switch(choose_1)
    {
    case 1:
        sale();
        break;
    case 2:
        aboutUs();
        break;
    case 3:
        printOurName();
        ExitProgram();
        break;
    default:
        printOurName();
        printf(" Invalid Value!\n\n");
        menu();
        break;
    }
}


///////////////////////////////////////////////

//About
void aboutUs()
{
    printf("\t\tCeylon Wine Distributors Team - 1 \n\n");
    printf(" Address : Ceylon Wine Distributors\n");
    printf("\t  20.2 Road\n");
    printf("\t  Colombo 7\n");
    printf(" Phone   : +94112022022\n");
    printf(" Email   : ceylonwinedistributors@gmail.com\n\n");
    printf(" Objectives :\n");
    printf("  We are Hard-working, dedicated, and experienced salesteam with a positive outlook, friendly personality also good physical fit.\n\n");
    printf(" Skills :");
    printf("\t More than 4+ years experience.\n");
    printf("\t\t Computer skills : Word processing, Exel spreadsheet.\n");
    printf("\t\t Can understand about product key points quickly.\n");
    printf("\t\t Sales personality : friendly , patient and positive attitude.\n");
    printf("\t\t Excellent communicators.\n");
    printf("\t\t Ability to work long hours as team.\n\n");
    printf(" Duties and Responsibilities :");
    printf("\t Walk every store and respectfully trying make conversations with customers.\n");
    printf("\t\t\t\t Provide knowledge about product base on customer needs.\n");
    printf("\t\t\t\t Provide different payment methods. \n");
    printf("\t\t\t\t Try to sell products with possible discounts.\n");
    printf("\t\t\t\t Immediately attends to customers complaints and solve that fastest way possible.\n");
    printf("\t\t\t\t Make monthly necessary reports using Word, Exel and other necessary software\n");

    printf(" Press any key to go Menu : ");
    getch();
    system("cls");

    menu();

}


///////////////////////////////////////////////

//Shops
void sale()
{
    system("color F2");
    printOurName();

    printf("\n\t\t\t\t\t\t\t    ===========================================");
    printf("\n\t\t\t\t\t\t\t    ||           -==  SHOPS  ==-             ||");
    printf("\n\t\t\t\t\t\t\t    ===========================================\n\n");

    i=0;

    do
    {
        printf("\t\t\t\t\t\t\t\t[0%d] %s\n",(i+1), shop[i]);
        i++;
    }
    while(i<=4);

    selectedShop();
}


///////////////////////////////////////////////

//Choose shop
void selectedShop()
{
    bar = 0;

    printf("\n\n\t~Choose wine shop : ");
    scanf("%d",&bar);

    if (bar > 5 || bar < 1)
    {
        system("cls");

        printf("\nInvalid!\n\n");

        sale();
    }

    else
    {
        system("cls");
        system("color F0");

        printOurName();

        for(k=0; k<=4; k++)
        {
            printf("\n\t\t\t\t\t\t\t   ########## -- %s -- ##########\n\n",shop[bar-1]);

            displayItems();
        }
    }
}


///////////////////////////////////////////////

//beer items
void displayItems()
{
    printf("\n\t\t\t\t\t\t\t\t ==================================\n");
    printf("\t\t\t\t\t\t\t\t ||     -==  BEER ITEMS  ==-     ||\n");
    printf("\t\t\t\t\t\t\t\t ==================================\n\n");

    j=0;

    do
    {
        printf("\t\t\t\t\t\t\t\t  [0%d] %s\n",j+1, brand[j]);
        j++;
    }
    while(j<=4);

    printf("\n\t=====================================\n");
    printf("\t||\t -== Discounts ==-\t   ||");
    printf("\n\t=====================================\n");
    printf("\t||  More than Rs.100000 : 5%% \t   ||\n");
    printf("\t||  More than Rs.250000 : 7.5%% \t   ||");
    printf("\n\t=====================================\n");


    selectItems();
}

///////////////////////////////////////////////

//Item Quantity
void selectItems()
{
    printf("\n\n\t~How many items do you want? : ");
    scanf("%d",&numItems);

    if (numItems > 5 || numItems < 1)
    {
        system("cls");

        printOurName();

        printf("\nInvalid!\n\n");

        j=0;
        displayItems();
    }
    else
    {
        for (j=1; j<=numItems; j++)
        {
            printf("\nSelect Item : ");
            scanf("%d",&items);

            if (items > 5 || items < 1)
            {
                system("cls");

                printOurName();

                printf("\nInvalid!\n");

                j=0;
                displayItems();
            }
            else
            {
                //total_1[items]=0;
                //total_2[items]=0;
                //total_3[items]=0;

                printf("\n\t   -==  %s  ==-\n", brand[items-1]);
                printf("\t____________________________________\n\n");

                printPrices();
            }
        }

        printf("\n01.Select another shop : \n02.Go to main menu : ");
        scanf("%d",&choose_2);

        switch (choose_2)
        {
        case 1:
            system("cls");
            sale();
            break;
        case 2:
            system("cls");
            menu();
            break;
        default:
            printf("Invalid !\n\n");
            selectItems();
            break;
        }

        system("cls");

        main();
    }
}


///////////////////////////////////////////////

//Calculation
void printPrices()
{
    printf("    750ml - Price of bottle = Rs:500.00 - Quantity of Cases(12 bottles) : ");
    scanf("%d",&qut);
    total_1[items] += 500 * 12 * qut;
    printf("    Total = %.2f\n",total_1[items]);
    emptyTotal = 30 * 12 * qut;
    printf("    Empty Total = %.2f\n",emptyTotal);
    total_1[items] -= emptyTotal;
    printf("    Total - Empty Total = %.2f\n\n",total_1[items]);


    printf("    500ml - Price of bottle = Rs:400.00 - Quantity of Cases(24 Cans) : ");
    scanf("%d",&qut);
    total_2[items] += 400 * 24 * qut;
    printf("    Total = %.2f\n\n",total_2[items]);


    printf("    350ml - Price of bottle = Rs:250.00 - Quantity of Cases(24 Cans): ");
    scanf("%d",&qut);
    total_3[items] += 250 * 24 * qut;
    printf("    Total = %.2f\n\n",total_3[items]);

    fullTotal[items] = total_1[items]+total_2[items]+total_3[items];
    printf(" Total = %.2f\n",fullTotal[items]);
    Discount();
    billAmount = fullTotal[items] - discount;
    printf(" Bill Amount = %.2f\n",billAmount);
}


///////////////////////////////////////////////

//Discount
void Discount()
{
    if(fullTotal[items] >= discount_2)
    {
        discount = fullTotal[items] * 0.075;
        printf(" You have 7.5%% discount.....\n");
        printf(" Discount = %.2f\n",discount);
    }
    else if (fullTotal[items] >= discount_1)
    {
        discount = fullTotal[items] * 0.05;
        printf(" You have 5%% discount.....\n");
        printf(" Discount = %.2f\n",discount);
    }
    else
    {
        printf(" Discount = %.2f\n",discount);
    }
}


///////////////////////////////////////////////

//Exit
void ExitProgram()
{
    printf("01. Go Menu \n02. Exit : ");
    scanf("%d",&exitProgram);

    switch(exitProgram)
    {
    case 1:
        system("cls");
        menu();
        break;
    case 2:
        system("cls");
        system("color 08");
        printf("\n\n\t\t\t\t\t--------------------------------\n\t\t\t\t\t    >>>>>>>> THANK YOU.....!\n\t\t\t\t\t--------------------------------\n\n\n\n\n\n\nChanaka   --- MA_DSE_202_F_002\n\n\t***ALL RIGHT RECIEVED || copyright2021 || NIBM_MA_DSE_202 ||\n\n\n\n\n");
        exit (0);
        break;
    default:
        ExitProgram();
        printf("Invalid!\n\n");
        break;
    }

}

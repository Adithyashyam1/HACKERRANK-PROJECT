#include<stdio.h>
#include<stdlib.h>
int main()
{int start,choice,ans=0,c=0,ans1=0,w=0;
    printf("                                           QUIZ GAME\n");
    printf("                                   **************************\n");
    printf("                                        INSTRUCTIONS:\n");
    printf("\n");
    printf("Enter the number corresponding to the option as answer.\nFor example ,if option 1.x is the answer for the question,enter 1.\n");
    printf("\n");
        printf("\n");
        printf("\n");
    printf("                     press 0 for starting game OR  press 1 for exit from game\n");
    scanf("%d",&start);
    if(start==1)
    {
        printf("YOU EXITED FROM THE GAME");
        exit(0);
    }
    if(start==0)
    {
        printf("To go to current affairs press 1\n To go to maths quiz press 2\n");
    scanf("%d",&choice);
    if(choice==1)
       {

        printf("A.Which one is  the first country to approve COVID-19 vaccine of  Oxford-AstraZeneca?\n");
        printf(" 1.England\n 2.Japan\n 3.China\n 4.India\n");
        scanf("%d",&ans);
        if(ans==1)
        {c++;

        }
        printf("B.India's first AIR TAXI has been launched in:\n");
        printf(" 1.Manali\n 2.Chandigarh\n 3.Mumbai\n 4.Lucknow\n");
         scanf("%d",&ans);
        if(ans==2)
        {c++;

        }
        printf("C.What is the name of NASA's fifth rover that landed successfully on Mars in 2021?\n");
        printf(" 1.Sojourner\n 2. Opportunity\n 3.Perseverance\n 4.Curiosity\n");
         scanf("%d",&ans);
        if(ans==3)
        {c++;

        }
        printf("D.National Youth Day?\n");
        printf(" 1.12 Jan\n 2.7 Jan\n 3.9 Jan\n 4.15 Jan\n");
        scanf("%d",&ans);
        if(ans==1)
        {c++;

        }
        printf("E.Which state gov. decided to start world's largest floating solar project by 2023?\n");
        printf(" 1.TamilNadu\n 2. MadhyaPradesh\n 3.Karnataka\n 4.WestBengal\n");
        scanf("%d",&ans);
        if(ans==2)
        {c++;

        }

    }
    if(choice==2)
    {
         printf("A.Look at this series: 36, 34, 30, 28, 24, ... What number should come next?\n");
         printf(" 1.22\n 2.23\n 3.20\n 4.26\n");
        scanf("%d",&ans1);
        if(ans1==1)
        {w++;

        }
        printf("B.If 11 (170)16, 11(203)19, then value of 17(?)18 will be –\n");
        printf(" 1.200\n 2.300\n 3.400\n 4.500\n");
        scanf("%d",&ans1);
        if(ans1=2)
        {
            w++;
        }
        printf("C.a= 12 (390) 8, b = 7 (134) 5, c = 5 (?) 12\n");
        printf(" 1.279\n 2.289\n 3.280\n 4.299\n");
        scanf("%d",&ans1);
        if(ans1=1)
        {
            w++;
        }
        printf("D.If 13 x 12 = 651 & 41 x 23 = 448, then, 24 x 22 =?\n");
        printf(" 1.504\n 2.924\n 3.46\n 4.524\n");
         scanf("%d",&ans1);
        if(ans1=2)
        {
            w++;
        }
        printf("E.Look at this series: 53, 53, 40, 40, 27, 27, ... What number should come next?\n");
        printf(" 1.14\n 2.12\n 3.27\n 4.53\n");
        scanf("%d",&ans1);
        if(ans1=1)
        {
            w++;
        }
    }}
        if(choice==1)
        {
            printf("YOU FINISHED THE QUIZ SUCCESSFULLY\n");
            printf("YOU GOT %d OUT OF 5 IN CURRENT AFFAIRS\n",c);
        }
        if(choice==2)
        {
            printf("YOU FINISHED THE QUIZ SUCCESSFULLY\n");
             printf("YOU GOT %d OUT OF 5 IN MATHS QUIZ\n",w);

        }
        printf("\n");
        printf("\n");
        printf("\n");
        printf("        ***THANK YOU***");




    return 0;
}

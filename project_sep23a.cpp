#include<stdio.h>
main()
{
printf("pick an item:\n1. briyani\n2. parotta\n3. fried noodles\n4. fried rice");
    printf("price is:\n1. 200\n2. 100\n3. 250\n4. 150");
    int choice=0;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("you picked briyani");
        break;
        case 2:printf("you picked parotta");
        break;
        case 3:printf("you picked fried noodles");
        break;
        case 4:printf("you picked fried rice");
   }
    } 
    
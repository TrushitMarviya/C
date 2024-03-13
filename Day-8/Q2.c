#include<stdio.h>
main(){
    printf("-----Telecom call service-----\n");
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    int a ;
    printf("Enter Number:");
    scanf("%d",&a);
    switch (a)
    {
    case 1: printf("English\n");
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
    int e;
    printf("Sub-choice: ");
    scanf("%d",&e);
    switch(e){
        case 1: printf("You have successfully done a Internet Recharge.");
        break;
        case 2: printf("You have successfully done a Top-up Recharge.");
        break;
        case 3: printf("You have successfully done a Special Recharge.");
        break;
        default:
        printf("number is not available");
    }
        break;



    case 2: printf("Hindi\n");
        printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
    int h;
    printf("Sub-choice: ");
    scanf("%d",&h);
    switch(h){
        case 1: printf("Aapne safaltapurvak Internet Recharge kar liya he.");
        break;
        case 2: printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
        break;
        case 3: printf("Aapne safaltapurvak Special Recharge kar liya he.");
        break;
        default:
        printf("number Uplabdh nahi he");
    }
        break;


    case 3: printf("Gujarati\n");
            printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
    int g;
    printf("Sub-choice: ");
    scanf("%d",&g);
    switch(g){
        case 1: printf("Tame safaltapurvak Internet Recharge karyu chhe");
        break;
        case 2: printf("Tame safaltapurvak Top-up Recharge karyu chhe");
        break;
        case 3: printf("Tame safaltapurvak Special Recharge karyu chhe");
        break;
        default:
        printf("number Uplabdh nathi");
    }
    
        break;
    
    default:
    printf("Not available");
        break;
    }
}
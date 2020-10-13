#include<stdio.h>
int main()
{
    int a;
    //choosing a number for food selection as input
    printf("Choose any integer (b/w 1 to 10) to take food decision: ");
    scanf("%d",&a);
    
    //using switch-case taking decision and get output on screen
    switch(a)
    {
        case 1:
        printf("Food item : Pasta\nPrice : Rs. 179");
        break;
        
        case 2:
        printf("Food item : Pizza\nPrice : Rs. 239");
        break;
        
        case 3:
        printf("Food item : Daal-Bati\nPrice : Rs. 249");
        break;
        
        case 4:
        printf("Food item : Sandwich\nPrice : Rs. 149");
        break;
        
        case 5:
        printf("Food item : Burger\nPrice : Rs. 129");
        break;
        
        case 6:
        printf("Food item : French Fries\nPrice : Rs. 99");
        break;
        
        case 7:
        printf("Food item : Idli-Sambhar\nPrice : Rs. 129");
        break;
        
        case 8:
        printf("Food item : Pav-Bhaji\nPrice : Rs. 119");
        break;
        
        case 9:
        printf("Food item : Rajma-Rice\nPrice : Rs. 79");
        break;
        
        case 10:
        printf("Food item : DahiVada\nPrice : Rs. 39");
        break;
        
        default:
        printf("You're out of the menu box!");
    }
    
   return 0;
}

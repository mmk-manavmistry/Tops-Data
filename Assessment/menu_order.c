#include <stdio.h>
void main() {
    int choice,total=0,quantity,final_total=0,Grand_total;
    char ch;
    
    do {
        printf("---------------Menu---------------\n");
        printf("\n1.pizza          price = 180rs/pcs");
        printf("\n2.Burger         price = 100rs/pcs");
        printf("\n3.Dosa           price = 120rs/pcs");
        printf("\n4.Idli           price = 50rs/pcs ");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nyou have selected pizza ");
                printf("\nEnter the quantity: ");
                scanf("%d", &quantity);
                total = quantity * 180;
                printf("\nTotal amount :%d", total);
                final_total = total + final_total;
                printf("\nAmount :%d", final_total);
                Grand_total= final_total;
                break;
            case 2:
                printf("\nyou have selected Burger ");
                printf("\nEnter the quantity: ");
                scanf("%d", &quantity);
                total = quantity * 100;
                printf("\nTotal amount :%d", total);
                final_total = total + final_total;
                printf("\nAmount :%d", final_total);
                Grand_total = final_total;
                break;
            case 3:
                printf("\nyou have selected dosa ");
                printf("\nEnter the quantity: ");
                scanf("%d", &quantity);
                total = quantity * 120;
                printf("\nTotal amount :%d", total);
                final_total = total + final_total;
                printf("\nAmount :%d", final_total);
                Grand_total = final_total;
                break;
            case 4:
                printf("\nyou have selected Idali ");
                printf("\nEnter the quantity: ");
                scanf("%d", &quantity);
                total = quantity * 50;
                printf("\nTotal amount :%d", total);
                final_total = total + final_total;
                printf("\nAmount :%d", final_total);
                Grand_total = final_total;
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }
        printf("\nDo you want place more order?: y & n ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    printf("Total amount: %d\n", Grand_total);
}


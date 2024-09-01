#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct date {
    int month;
    int day;
    int year;
};
struct account {
    int number;
    char name[100];
    int acct_no;
    float mobile_no;
    char street[100];
    char city[100];
    char acct_type;
    float oldbalance;
    float newbalance;
    float payment;
    struct date lastpayment;
} customer;
int tl, sl, ts;
void input();
void writefile();
void search();
void output();

void main() {
    int i, n;
    char ch;
    clrscr();
    _setcursortype();
    printf("CUSTOMER BILLING SYSTEM:\n\n");
    printf("===============================\n");
    printf("\n1: Add account to the list\n");
    printf("2: Search customer account\n");
    printf("3: Exit\n");
    printf("\n================================\n");

    do {
        printf("\nSelect what you want to do? ");
        ch = getche();
    } while (ch <= '0' || ch > '3');

    switch (ch) {
        case '1':
            clrscr();
            printf("\nHow many customer accounts? ");
            scanf("%d", &n);

            for (i = 0; i < n; i++) {
                input();
                if (customer.payment > 0)
                    customer.acct_type = (customer.payment < 0.1 * customer.oldbalance) ? 'O' : 'D';
                else
                    customer.acct_type = (customer.oldbalance > 0) ? 'D' : 'C';

                customer.newbalance = customer.oldbalance - customer.payment;
                writefile();
            }
            main();
            break;

        case '2':
            clrscr();
            printf("Search by what?\n");
            printf("\n1 --- Search by customer number\n");
            printf("2 --- Search by customer name\n");
            search();
            ch = getche();
            main();
            break;

        case '3':
            clrscr();
            delay(700);
            textcolor();
            gotoxy(25, 25);
            cprintf("\nA PROJECT BY BIDUR & SUJAN");
            delay(1500);
            exit(1);
    }
}


// Other functions (writefile, search, output) go here

// Remember to add error handling and customize the code as needed.


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     // int *ptr;
//     int a[5];
//     int n;
//     int *ptr = (int *)(calloc(5,sizeof(int)));
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",a);
//         /* code */
//     }
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",*ptr);
//     }
    

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int a[5];
//     int *ptr = (int *)(calloc(5, sizeof(int)));
//     int n = 5; // Assuming you want to read 5 integers
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++) {
//         ptr[i] = a[i];
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d-------------%X\n", ptr[i],&ptr);
//     }
//     int *ptr1 = (int *)(realloc(ptr,20));

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d-----%X\n", ptr1[i],&ptr);
//         /* code */
//     }
//     free(ptr);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{

    while (true)
    {
        int *ptr  = (int *)(malloc(5*sizeof(int)));
        printf("%d--------------%d",*ptr,&ptr);
        free(ptr);

    }
    return 0;
}

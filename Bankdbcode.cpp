#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct acc_type
{
     char bank_name[20];
     char bank_branch[20];
     char acc_holder_name[30];
     int acc_number;
     char acc_holder_address[100];
     float available_balance;
};
struct acc_type account[100];
int num_acc;
void Create_new_account();
void Cash_Deposit();
void Cash_withdrawl();
void Account_information();
void Log_out();
void display_options();

int main()
{
    char option;

    num_acc=0;
    while(1)
    {  printf("\n\t \t ***** Welcome to Bank Application *****\n\n");
       printf("\n\tThis program is brought you by ");
       printf("Lakshya Malik\n\n");
       display_options();
       printf("Please enter any options (1/2/3/4/5/6) ");
       printf("to continue : ");
 
        cin>>option;
        printf("%c \n", option);
        switch(option)
        {
          case '1': Create_new_account();
                    break;
          case '2': Cash_Deposit();
                    break;
          case '3': Cash_withdrawl();
                    break;
          case '4': Account_information();
                    break;
          case '5': return 0;
          case '6': system("cls");
                    break;
          default : system("cls");
                    printf("Please enter one of the options");
                    printf("(1/2/3/4/5/6) to continue \n ");
                    break;
        }
    }
    return 0;
}
 
 
void display_options()
{
    printf("\n1. Create new account \n");
    printf("2. Cash Deposit \n");
    printf("3. Cash withdrawl \n");
    printf("4. Account information \n");
    printf("5. Log out \n");
    printf("6. Clear the screen and display available ");
    printf("options \n\n");
}
 
void Create_new_account()
{
   char bank_name[20];
   char bank_branch[20];
   char acc_holder_name[30];
   int acc_number;
   char acc_holder_address[100];
   float available_balance = 0;
   fflush(stdin);     
   printf("\nEnter the bank name              : ");
   cin>>bank_name;
   printf("\nEnter the bank branch            : ");
   cin>>bank_branch;
   printf("\nEnter the account holder name    : ");
   cin>>acc_holder_name;
   printf("\nEnter the account number(1 to 10): ");
   scanf("%d", &acc_number);
   printf("\nEnter the account holder address : ");
   cin>>acc_holder_address;
 
   strcpy(account[acc_number-1].bank_name,bank_name);
   strcpy(account[acc_number-1].bank_branch,bank_branch);
   strcpy(account[acc_number-1].acc_holder_name,
   acc_holder_name);
   account[acc_number-1].acc_number=acc_number;
   strcpy(account[acc_number-1].acc_holder_address,
   acc_holder_address);
   account[acc_number-1].available_balance=available_balance;
 
   printf("\nAccount has been created successfully \n\n");
   printf("Bank name              : %s \n" , 
   account[acc_number-1].bank_name);
   printf("Bank branch            : %s \n" , 
   account[acc_number-1].bank_branch);
   printf("Account holder name    : %s \n" , 
   account[acc_number-1].acc_holder_name);
   printf("Account number         : %d \n" , 
   account[acc_number-1].acc_number);
   printf("Account holder address : %s \n" , 
   account[acc_number-1].acc_holder_address);
   printf("Available balance      : %f \n" , 
   account[acc_number-1].available_balance);
 
}
 
void Account_information()
{
     register int num_acc = 0;
     
     while(strlen(account[num_acc].bank_name)>0)
     {
         printf("\nBank name                : %s \n" , 
         account[num_acc].bank_name);
         printf("Bank branch              : %s \n" , 
         account[num_acc].bank_branch);
         printf("Account holder name      : %s \n" , 
         account[num_acc].acc_holder_name);
         printf("Account number           : %d \n" , 
         account[num_acc].acc_number);
         printf("Account holder address   : %s \n" , 
         account[num_acc].acc_holder_address);
         printf("Available balance        : %f \n\n" , 
         account[num_acc].available_balance);
         num_acc++;
     }
}

void Cash_Deposit()
{
   int acc_no;
   float add_money;
 
   printf("Enter account number you want to deposit money:");
   scanf("%d",&acc_no);
   printf("\nThe current balance for account %d is %f \n", 
   acc_no, account[acc_no-1].available_balance);
   printf("\nEnter money you want to deposit :  ");
   scanf("%f",&add_money);
 
   while (acc_no=account[acc_no-1].acc_number)
   {
         account[acc_no-1].available_balance=
         account[acc_no-1].available_balance+add_money;
         printf("\nThe New balance for account %d is %f \n", 
         acc_no, account[acc_no-1].available_balance);
         break; 
   }acc_no++;
}

 
void Cash_withdrawl()
{
   int acc_no;
   float withdraw_money;
 
   printf("Enter account number you want to withdraw money:");
   scanf("%d",&acc_no);
   printf("\nThe current balance for account %d is %f \n", 
   acc_no, account[acc_no-1].available_balance);
   printf("\nEnter money you want to withdraw from account ");
   scanf("%f",&withdraw_money);
 
   while (acc_no=account[acc_no-1].acc_number)
   {
         account[acc_no-1].available_balance=
         account[acc_no-1].available_balance-withdraw_money;
         printf("\nThe New balance for account %d is %f \n", 
         acc_no, account[acc_no-1].available_balance);
         break; 
   }acc_no++;
}
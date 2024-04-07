#include<stdio.h>
#include<stdlib.h>

int main(){
    int user_pin,correct_pin=2659,count=1,ch,amount,balance=20000;
    
    printf("\nWelcome To Automated Teller Machines\n");
    start:
    printf("\nEnter your PIN : ");
    scanf("%d",&user_pin);
    if(user_pin==correct_pin)
    {
      printf("\nPlease select your choice: \n");
      printf("\n1 for deposite \n2 for withdraw \n3 for Check ammount \n4 for change PIN:\n");
      scanf("%d",&ch);
      switch(ch)
      {
       case 1:
              printf("\nEnter the deposite amount\n");
              scanf("%d",&amount);
              if(amount<=10000)
              {
                balance=balance+amount;
                printf("%d",balance);
              }
              else
              {
                printf("\nMaximun limit of withdraw id 10200020000\n");
              }
         break;
       case 2:
              printf("\nEnter the withdraw amount\n");
              scanf("%d",&amount);
              if(amount<=10000)
              {
                if(amount<=balance)
                {
                  balance=balance-amount;
                  printf("\nafter deducting %d ,current balance %d",amount,balance);
                }
                
              }
              else{
                    printf("\nInsufficient balance\n");
                }
         break;
       case 3:
              printf("\nTotal balance = %d",balance);
         break;
       case 4:
             printf("\nEnter the new PIN: \n");
             scanf("%d",&correct_pin);
             printf("\nYour PIN updated successfully!\n");
             goto start;
         break;

      }
    }
    else
    {
      printf("\nPlease enter the correct PIN");
      if(count<3)
      {
        count++;
        goto start;
      }
      
    }
    printf("\nPress 1... for continue");
    scanf("%d",&ch);
    if(ch==1)
    {
        goto start;
    }
//    return 1;
}
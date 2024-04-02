/*This program will be menu-driven similar to an ATM machine. 
Displaying a simple menu using a Personal Identification Number: 
1. Enter PIN and verify correct
2. Change PIN 
3. Display the number of times the PIN was entered (i) Successfully (ii)
Incorrectly
4. Exit Program.

Author:         Aaron Baggot
Date:           1st November 2022
Student Number: C22716399 TU856*/



#include <stdio.h>
int main()
{

int choice;
int cur_pin = 0;
int new_pin1,new_pin;
int incorrect = 0;
int successful = 0;
char input = 'Y';

char letter = ' ';

 
// Clear the buffer to ignore the "Enter" key used to select the menu option
    //while(getchar() != '\n');

//Requesting the user 4 digit passcode
// Check for characters within the PIN

while (cur_pin < 4)
{
        printf("Please Enter your 4 digit pin number\n");
        scanf("%d",&cur_pin);
       
}

    /*if (letter >= 0 || letter <= 1)
    {
        printf("\nInvalid Entry\n");
        printf("\nPlease Enter 4 digits\n");
        scanf("%d",&letter);
        incorrect++;
    }
    */
    if (cur_pin < 0001 || cur_pin > 9999)
    {
        printf("\nInvalid Entry\n");
        printf("\nPlease Enter 4 digits\n");
        incorrect++;
    }
    


    if (cur_pin == 1234)
    {
        printf("\nYou Entered the Correct PIN number\n\n");
        successful++;
    }

    else 
    {
        printf("You Entered the incorrect pin number.\n");
        printf("Please try again:\n");          
        printf("The pin number you Entered is: %d\n\n",cur_pin);
        incorrect++;
           
    } 

//listing the 4 menu options
    do
    {
        printf("\n1) Enter PIN and Verify account:\n");
        printf("2) Change Pin:\n");
        printf("3) Number of times you (i) Successfully (ii) Incorrectly entered pin:\n");
        printf("4) Exit:\n");
        printf("\nPlease choose an option from 1 to 4:\n\n");
        scanf("%d",&choice);

//using switch statement for each choice
        switch (choice)

        {

//Case 1 verifys the set PIN number "1234"
//Checking for Digits and Characters looping back to user menu

            case 1:
            {
                printf("\nEnter the 4 digit PIN number to Verify your account:\n\n");
                scanf("%d",&cur_pin);
                //scanf("%s",&letter);

                if (cur_pin == 1234)
                {
                    printf("\nValid PIN number:\n\n");
                    printf("\nYour account is Verified:\n\n");
                    successful++;
                    break;
                }

                else 
                        
                {
                    printf("\nYou Entered Incorrect PIN:\nYour account is not verified:\n\n");
                    incorrect++;
                    //break;
//end case
                }
            }
               break;
/* Case 2: Change pin number from current pin. 
Incrementing using variable "success" and "incorrect" pin entered
Break returns back to the main user menu */

            case 2:
            {
                printf("\nYou selected to change your PIN number:\n\n");
                printf("\nPlease Enter your Current 4 digit pin number to continue:\n\n"); 
                scanf("%d",&cur_pin);
                scanf("%c",&letter);

                if (cur_pin == 1234 )
                {
                    printf("\nYou Entered the Correct pin number:\n");
                    successful++;
                }

                if (cur_pin != 1234 )    
                {
                    printf("\nEntered Incorrect PIN number\n");
                    incorrect++;
                    break;
                }  
                //break;
//Switching to the new user pin and verifying the new PIN twice.

                    printf("\nPlease Enter your new 4 digit PIN number:\n\n");
                    scanf("%d",&new_pin1);

                     
                        
                    printf("\nPlease Verify your new 4 digit PIN number:\n\n");
                    scanf("%d",&new_pin);
                        
                    
                
                if (new_pin1 == new_pin)
                {
                    printf("\nYour new PIN is verified\n\n");
                    successful++;
                    cur_pin = new_pin;    
                    break;
                }
                       
                  if (new_pin1 != new_pin)
                {
                    printf("\nYour new PIN is verified\n\n");
                    incorrect++;
                    //cur_pin = new_pin;    
                    break;
                }    
                  
                else 
                {
                    printf("\nIncorrect pin\n");
                    printf("You have not Verified your new PIN number\n\n");
                    incorrect++;
                    break; 
//end case  
                }
            }



               
/*Case 3: The number of times the PIN was entered both correctly and incorrectly.
Using variables "successful" and "incorrect".
*/
            case 3:
            {   
                printf("\nYou entered %d Successful PIN numbers:\n\n",successful);
                printf("You entered %d Incorrect PIN numbers:\n\n",incorrect);
                break;
            } 
//end case    
            
//case 4 exit program and option to return to main menu
            case 4:
            {    
                printf("\nAre you sure you want to exit?\n");
                printf("\nPlease Type Y and hit return to EXIT\nType N and hit return to return to main menu\n");

                scanf("%s",&input);     
                
                if ( input == 'N')
                {
                   
                    printf("\nReturing to the main menu\n");
                    choice = 0;
                   
                }
            

                else if(input == 'Y')
                {
                    printf("Exiting.... Goodbye.....");
                    
                    
                }
                break;
                
            }

        }
    }       
        
    while (choice != 4);


    return 0;
}
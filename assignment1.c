

    /*This program will be menu-driven similar to an ATM machine.
    Using a do while loop checking the condition at the end of the loop. 
    This means that the statements inside the loop body will be executed at least once 
    even if the condition is never true. 
    The do while loop is an exit controlled loop which suits using the menu option. 
    Where even if the test condition is false, the loop body will be executed at least once. 
    The following options will be available once the user runs the program.  
    Displaying a simple menu using a Personal Identification Number: 
    1. Enter PIN and verify correct
    2. Change PIN 
    3. Display the number of times the PIN was entered (i) Successfully (ii)
    Incorrectly
    4. Exit Program.
    The switch case statement is used to choose between the numerous options within the menu each having a case.

    Author:         Aaron Baggot
    Date:           1st November 2022
    Student Number: C22716399 TU856*/



#include <stdio.h>

int main()
{
    int choice = 0;
    int cur_pin = 0;
    int new_pin1,new_pin;
    int incorrect = 0;
    int successful = 0;
    char input = 'Y';
    char letter = ' ';


/*do while loop to check the condition at the end of the loop and is also exit controlled loop
listing the 4 menu options*/

    do
    {
        printf("\n1) Enter PIN and Verify account:\n");
        printf("2) Change Pin:\n");
        printf("3) Number of times you (i) Successfully (ii) Incorrectly entered pin:\n");
        printf("4) Exit:\n");
        printf("\nPlease choose an option from 1 to 4:\n\n");
        scanf("%d",&choice);

        //Clear the buffer to ignore the "Enter" key used to select the menu option
        while(getchar() != '\n');



        //using switch statement for each choice
        switch (choice)
        {


            /* Case 1 verify the set PIN number "1234"
            Checking for Digits looping back to user menu
            Requesting the user 4 digit passcode
            Check for characters within the PIN. */

            case 1:
            {
                printf("\nYou selected Verify your account\n");
                printf("\nEnter the 4 digit PIN number to Verify your account:\n\n");
                scanf("%d",&cur_pin);
                while(getchar() != '\n');
                

                //checks the current pin with given set pin and new pin with set pin
                
                if (cur_pin == 1234 || cur_pin == new_pin)
                {
                    printf("\nValid PIN number:\n\n");
                    printf("\nYour account is Verified:\n\n");
                    successful++;
                    break;
                } //end if
                
                //checks the pin is within the number range for 4 digits
                else if (cur_pin < 0001 || cur_pin > 9999 || letter >= 0 )
                {
                    printf("\nInvalid Entry\n");
                    printf("\nYou Entered an Incorrect PIN\n");
                    incorrect++;
                    break;
                } //end else if

                
                //outside the required range
                else 
                                
                {
                    printf("\nYou Entered Incorrect PIN:\nYour account is not Verified:\n\n");
                    incorrect++;                   
                    
                }//end else
                break;

            } //end case

              
            /* Case 2: Change pin number from current pin. 
            Incrementing using variable "success" and "incorrect" pin entered
            Break returns back to the main user menu */

            case 2:
            {
                printf("\nYou selected to change your PIN number:\n\n");
                printf("\nPlease Enter your Current 4 digit PIN number to continue:\n\n"); 
                scanf("%d",&cur_pin);
               
                

                //verify the original set pin meets requirements and increment pin

                if (cur_pin == 1234 )
                {
                    printf("\nYou Entered the Correct PIN number:\n");
                    successful++;
                } //end if

                //decrement pin if incorrect

                if (cur_pin != 1234 )    
                {
                    printf("\nEntered Incorrect PIN number\n");
                    incorrect++;
                    break;
                } //end if 
                
                //Switching to the new user pin and verifying the new PIN twice.

                    printf("\nPlease Enter your new 4 digit PIN number:\n\n");
                    scanf("%d",&new_pin1);

                //checking the new pin
                if (new_pin1 < 1000 || new_pin1 > 9999)
                {
                    
                    printf("\nIncorrect You need to Enter a 4 digit PIN number between 1000 and 9999:\n\n");
                    scanf("%d",&new_pin1);
                    
                } //end if
                
                       
                    printf("\nPlease Verify your new 4 digit PIN number:\n\n");
                    scanf("%d",&new_pin);
                
                    //Clear the buffer to ignore the "Enter" key used to select the menu option
                    while(getchar() != '\n');    
                    
                
                if (new_pin1 == new_pin)
                {
                    printf("\nYour new PIN is verified\n\n");
                    successful++;
                    cur_pin = new_pin;    
                    
                } //end if
                       
                        
                  
                else 
                {
                    printf("\nIncorrect PIN Entered\n");
                    printf("You have not Verified your new PIN Number.\n\n");
                    incorrect++;
                   

                }//end else
                 break; 
            } //end case  



               
            /*Case 3: The number of times the PIN was entered both correctly and incorrectly.
            Using variables "successful" and "incorrect".
            */
            case 3:
            {   
                printf("\nYou entered %d Successful PIN numbers:\n\n",successful);
                printf("You entered %d Incorrect PIN numbers:\n\n",incorrect);
                break;
                
            } //end case    
 
            
            //case 4 exit program and option to return to main menu

            case 4:
            {    
                printf("\nAre you sure you want to exit?\n");
                printf("\nType N and ENTER to return to the main menu or Please Type Y or any key and ENTER to EXIT\n");

                scanf("%s",&input);     
                

                /*Setting both uppercase and lowercase n to recognise for option 
                of returning to the main menu*/

                if ( input == 'N' || input == 'n')
                {
                   
                    printf("\nReturning to the main menu\n");
                    choice = 0;
                   
                } //end if
            
                //program terminates gracefully
                else if(input == 'Y')
                {
                    printf("Exiting....\nThank You....\nGoodbye.....\n");
                    
                    
                } //end else if
                break;
                    
            } //end case  

        }
    }    
    while (choice != 4); //end while loop   


    return 0;
}//end main
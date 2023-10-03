/* C Program by Ayden Soliz for CS1310 Sep 2020
 * This program gets two numbers from the user and either adds, subtracts,
   multiplies, divides, or all of them based on the user's choice. There is also 
   an option to quit the program entirely. The program also prints out a unique
   menu showing the options with a design of my choosing.
   
                                   /\
                              /\  //\\
                       /\    //\\///\\\        /\
                      //\\  ///\////\\\\  /\  //\\
         /\          /  ^ \/^ ^/^  ^  ^ \/^ \/  ^ \
        / ^\    /\  / ^   /  ^/ ^ ^ ^   ^\ ^/  ^^  \
       /^   \  / ^\/ ^ ^   ^ / ^  ^    ^  \/ ^   ^  \       *
      /  ^ ^ \/^  ^\ ^ ^ ^   ^  ^   ^   ____  ^   ^  \     /|\
     / ^ ^  ^ \ ^  _\___________________|  |_____^ ^  \   /||o\
    / ^^  ^ ^ ^\  /______________________________\ ^ ^ \ /|o|||\
   /  ^  ^^ ^ ^  /________________________________\  ^  /|||||o|\
  /^ ^  ^ ^^  ^    ||___|___||||||||||||___|__|||      /||o||||||\       
 / ^   ^   ^    ^  ||___|___||||||||||||___|__|||  dream   | |           
/ ^ ^ ^  ^  ^  ^   ||||||||||||||||||||||||||||||oooooooooo| |ooooooo  
ooooooooooooooooooooooooooooooooooooooooooooooooooooooooo */
#include <stdio.h>



double get_number(void)                   /* gets a number from user */
{
 double number;      /* the number from the user */
 
 printf("Please enter a value: ");
 scanf("%lf",&number);
 printf("You entered %.2lf.\n",number);
 return(number);
}



double get_addition(double a,double b)    /* adds the user's numbers */
{
 double answer;      /* the sum of the numbers */
 
 answer = a+b;
 printf("The answer to %.2lf + %.2lf is %.2lf !\n",a,b,answer);
}



double get_subtraction(double a,double b) /* subtracts the user's numbers */
{
 double answer;      /* the difference of the numbers */
 
 answer = a-b;
 printf("The answer to %.2lf - %.2lf is %.2lf !\n",a,b,answer);	
}



double get_multiply(double a,double b)    /* multiplies the user's numbers */
{
 double answer;      /* the product of the numbers */
 
 answer = a*b;
 printf("The answer to %.2lf * %.2lf is %.2lf !\n",a,b,answer);	
}



double get_division(double a,double b)    /* divides the user's numbers */
{
 double answer;      /* the quotient of the numbers */
 
 if (b==0)
    printf("The answer to %.2lf / %.lf cannot be calculated.\n",a,b);
 else
  { answer = a/b;
	printf("The answer to %.2lf / %.2lf is %.2lf !\n",a,b,answer);
  }
}



void main (void)
{
 double number1;     /* first number from the user */
 double number2;     /* second number from the user */
 int operation;	     /* the operation the user will choose from menu */
 
 printf("This program calculates an answer based on the numbers and operation you choose.\n");
 number1 = get_number();
 number2 = get_number();
 
 printf("\n0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0\n"
        "o      Which option would you like to choose??      o\n"
        "0                                                   0\n"
        "o    (1) for addition                               o\n"
        "0                                                   0\n"
        "o    (2) for subtraction                            o\n"
        "0                                                   0\n"
        "o    (3) for multiplication                         o\n"
        "0                                                   0\n"
        "o    (4) for division                               o\n"
        "0                                                   0\n"
        "o    (5) for all of the above                       o\n"
        "0                                                   0\n"
        "o    (6) to quit the program                        o\n"
        "0                                                   0\n"
        "0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0\n");
 scanf("%i",&operation);
 printf("\n");
 
 switch (operation)         /* print operation choice */
   {
    case 1:
       	   get_addition(number1,number2);
       	   break;
    case 2:
    	   get_subtraction(number1,number2);
    	   get_subtraction(number2,number1);
    	   break;
    case 3:
    	   get_multiply(number1,number2);
    	   break;
    case 4:
    	   get_division(number1,number2);
    	   get_division(number2,number1);
    	   break;
    case 5:
    	   get_addition(number1,number2);
    	   get_subtraction(number1,number2);
    	   get_subtraction(number2,number1);
    	   get_multiply(number1,number2);
    	   get_division(number1,number2);
    	   get_division(number2,number1);
    	   break;
    case 6:
    	   printf("Oh I see you have chosen to quit. What a shame.\n");
    	   break;
    default:
       	   printf("Oops, it looks like you entered an invalid option !\n\n");
   }
}

#include<stdio.h>
#include <math.h>

int main(){
	char username [101] = "Ahmad Sutojo";
	char password [101] = "limar1234";
	char input [101] = "";
	char inputpass [101]="";
	
	do{	printf("Please enter your username\nUsername : ");
	scanf("%[^\n]",input);getchar();
	
	printf("Please enter your password\nPassword : ");
	scanf("%[^\n]",inputpass);getchar();
	}while (strcmp(input,username )!=0 || strcmp(inputpass,password)!=0 );
	
	float balance = 0;
	printf("Your current balance is : Rp.%f,", &balance);

	int op;
	do{
		printf("\nWhich one would you like to do ?");
		printf("\n 1 : Addition \n 2 : Subtraction \n 3 : Multiplication \n 4 : Division \n 5 : Modulus \n Type the number of the operation : ");
		scanf("%d", &op);getchar();
	
	}while
		((op != 1) && (op != 2) && (op != 3) && (op != 4) && (op != 5));
		

	float value;
	
	if (op == 1)	
	{	printf ("How much money do you want to add to your account ? \nAmount of Money : ");
		scanf ("%f,", &value);getchar();
		balance = balance + value ; 
		printf ("Your balance after addition is : Rp.%.2f,\n",balance);
	}
	else if (op == 2)
	{
		printf ("How much money do you want to take from your account ? \nAmount of Money : ");
		scanf ("%f",&value);getchar();
		balance = balance - value; 
		printf ("Your balance after subtraction is : Rp.%.2f\n",balance);
	}
	else if (op == 3)
	{
		printf ("How much money do you want to multiply from your account ? \nAmount of Money : ");
		scanf ("%f",&value);getchar();
		balance = balance * value;
		printf ("Your balance after multiplication is : Rp.%.2f\n",balance);
	}
	else if (op == 4)
	{
		printf ("How much money do you want to divide from your account ? \nAmount of Money : ");
		scanf ("%f",&value);getchar();
		balance = balance / value; 
		printf ("Your balance after division is : Rp.%.2f\n",balance);
	}
	else if (op == 5)
	{
		printf("what value ? \n");
		scanf("%f",&value);getchar();
		balance = fmod(balance,value);
		printf("your balance is now %.2f\n\n");
	}
	
}

#include<stdio.h>
#include<conio.h>
//#include<string.h>
#include<stdlib.h>
//#include<ctype.h>
void questions();
void answer();
void help();
int score=0;
int total=50;

int main()
{
	int option;
	printf("\t\t\t\TULA'S INSTITUTE DEHRADUN\n\n");
	printf("\t\t\tC PROGRAM QUIZ GAME\n");
	printf("\n\t\t___________________________________");
	printf("\n\t\t\t     WELCOME");
	printf("\n\t\t\t        TO");
	printf("\n\t\t\t     THE GAME");
	printf("\n\t\t___________________________________");
	printf("\n\t\t___________________________________");
	printf("\n\t\t BECOME A PROFFESSIONAL IN IQ !!!!!");
	printf("\n\t\t___________________________________");
	printf("\n\t\t___________________________________");
	
	while(1)
	{
		
		printf("\n1 >> Let's start the quiz ");
		printf("\n2 >> Help");
		printf("\n3 >> Quit");
		printf("\n\nEnter your choice [1/2/3] = ");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				questions();
				break;
				
			case 2:
				help();
				break;
				
			case 3:
				return 0;
				
			default:
				printf("you enter the wrong choice :: pls enter the right choice!!!");
		}
	}
}

void help()
{
	printf("\nHERE YOU WILL GET '5' POINTS IF THE ANSWER OF ONE QUESTION IS CORRECT:::\n");
	printf("2 POINT WILL BE LOST IF THE ANSWER OF ONE QUESTION IS WRONG:::\n");
	printf("THERE ARE TOTAL '50' MARKS IN ALL QUIZES:::\n");
}

void questions()
{
	int ans;
	char first_name[20];
	char last_name[20];
    system("cls");
	printf("\n\n\n\n\n\n\n\t\t\t\tRESISTER YOUR NAME : \n\n");
	printf("Enter your first name = ");
	scanf("%s",&first_name);
	printf("Enter your last name = ");
	scanf("%s",&last_name);
	system("cls");
	printf("\n ----------------------Welcome %s %s to c program quiz game----------------------------",first_name,last_name);
	printf("\n\n\t\t\t\tALL THE BEST !!!");
	printf("\n\n\t\t\t\tTHERE ARE YOUR QUESTIONS :\n\n\n");
	
	printf("1.Who is the developer of 'C' language ?\n");
	printf(" 1.Dennis Ritchie \t 2.Issac Newton \n 3.Van Rossum \t\t 4.Robert Hook");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("\n Congratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf("\n wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
	}
    
    printf("\n\n2.When was 'C' language invented ?\n");
	printf(" 1.1970 \t 2.1972 \n 3.1975 \t 4.1968");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("\n Congratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf(" wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
	}
    
    printf("\n\n3.The C-preprocessors are specified with________symbol ? \n");
	printf(" 1.* \t 2.$ \n 3.# \t 4.&");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("\n Congratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf(" wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
	}
    
	printf("\n\n4.Which keyword can be used for coming out of recursion ? \n");
	printf(" 1.exit \t 2.break \n 3.return \t 4.all of these");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("\n Congratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf(" wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
	}		
	
	printf("\n\n5.What is the value of an array element which is not initialized ? \n");
	printf(" 1.1 \t\t\t 2.depends on storage classes \n 3.by default 0 \t 4.predefined by the compiler");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf(" wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
}
	printf("\n\n6.An uninitialized pointer in C is called ? \n");
	printf(" 1.empty pointer \t 2.void pointer \n 3.wild pointer \t 4.invalid pointer");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf(" wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
}
printf("\n\n7.Library function pow() belongs to which header file ? \n");
	printf(" 1.calcus.h\t 2.square.h \n 3.arithmetic.h\t 4.math.h");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==4)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf(" wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
}
printf("\n\n8.The scope of a function is limited to ? \n");
	printf(" 1.whole file\t\t 2.directory \n 3.only function\t 4.current block");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf(" wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
}
 printf("\n\n9.Point out the wrong statement about malloc() ? \n");
	printf(" 1.allocated memory has undefined value\t\t\t 2.it returns pointer to allocated space \n 3.pointer is NULL if memory is not allocated\t\t 4.it does not lead to memory leak if memory is not deallocated");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==4)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf(" wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
}
 printf("\n\n10.The size of union is _______ ? \n");
	printf(" 1.predefined by the compiler\t 2.equal to size of largest datatype \n 3.sum of sizes of all member\t 4.none of these");
	printf("\n\n >>enter the option [1/2/3/4]\n");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\ncurrent point is = %d\n",score);
	}
	else
	{
		printf(" wrong choice\n");
		score=score-2;
		printf("2 point will be decreased");
		printf("\n>>current point is = %d",score);
}
}



#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

void signin();
void signup();
void change();
void chp(char [],char []);
void chu(char []);
void chpp(char []);
void security(char []);
void information(char []);

FILE *fp,*fi,*ch,*pr,*ur,*pp,*fp,*ch,*fi;
int i;
char passnu[8];
char upi[10];
int ans,ans2;
char passport1[8];
char passnu2[8];
char pass3[20];
char ui[20];
char user[20];
int a,an,ch2,ch1;
char temp[20],temp2;
char name[10],password[10],passnu[8];
char phone[10];
char passnumber[8],password[10],password1[10];
int ch2=0,a,ab;



void main()
{

    system("color 0b");
	fp= fopen("1.txt","a+");
	if(fp == NULL)
	{
		printf("file does not exist\n");
	}
	printf("1.  Signin\n");

	
	printf("2.  Signup\n");

	printf("3.  Change user info\n");

	printf("4.  Exit\n");
	
	printf("Enter Your Choice:       ");
	scanf("%d",&a);
     system("cls");  
	if(a==1)
	{    
		signin();
	}
	if(a==2)
	{     
		signup();
	}
	if(a==3)
	{      
		change();
	}
	getch();
}

void signin()
{
		
			printf("ENTER YOUR USER ID:\n");
			  
			scanf("%s",user);
		
			fi=fopen(user,"r");
			if(fi==NULL) 
			{
				
				printf("Enter right user id\n");
				signin();
			}
			else
			{
				
          fscanf(fi,"%s %s %s %s",name,phone,password,password1);
			printf("ENTER YOUR PASSWORD:\n");
		
   while(1)
   {
	temp2=getch();
	if(temp2==ENTER)
	{
		password[i]='\0';
		break;
	}
	else if(temp2==BKSP)
	{
		if(i>0)
		{
			i--;
			printf("\b \b");
		}
	}
	else if(temp2==TAB||temp2==SPACE)
	{
		continue;
	}
	else
	{
		password[i]=temp2;
		i++;
		printf("*");
	}
   }
        printf("\n");
		fi=fopen("1.txt","r");
		if(fi == NULL){
			printf("You entered wrong passoword");
		}
		else{
		ab=strcmp(password,password1);

		    information(ui);
				
		}
			
}
}
void signup()
{

	fp= fopen("1.txt","a");
	
	printf("ENTER USER ID = ");
	
	scanf("%s",ui);
    printf("\n"); 
	ch=fopen(ui,"r");
	fscanf(ch,"%d",&ch2);
	if(ch2==1)
	{

		printf("user id already exist plz enter another user id\n");
	
		ch2=0;
		
	}
	else
	{
	

		fi=fopen(ui,"w+");
		
		printf("ENTER YOUR  NAME = ");
		
		scanf("%s",name);

	printf("\n");
  	printf("ENTER YOUR PHONE NUMBER = ");
		
		scanf("%s",phone);   
		 printf("\n"); 
		security(ui);
		
	}
	printf("\n");
	printf("-------------------THANK YOU FOR SIGNINGIN YOUR WELCOME TO KINDER CARE--------------------\n");
	 information(ui);

}
void change()
{
	
		
		printf("Enter your user id:\n");
		
		scanf("%s",user);
		fi=fopen(user,"r");
		if(fi==NULL)
		{            
				printf("Enter right user id\n");
		}
		else
		{
			fscanf(fi," %s %s ",name,phone);
			
			printf("enter your password:\n");
			
while(1)
   {
	temp2= getch();
	if(temp2==ENTER)
	{
		password[i]='\0';
		break;
	}
	else if(temp2==BKSP)
	{
		if(i>0)
		{
			i--;
			printf("\b \b");
		}
	}
	else if(temp2==TAB||temp2==SPACE)
	{
		continue;
	}
	else
	{
		password[i]=temp2;
		i++;
		printf("*");
	}
   }
		     printf("\n");
		fi=fopen("1.txt","r");
		if(fi == NULL){
			printf("You entered wrong passoword");
		}
		else{
		ab=strcmp(password,password1); 
				
				printf("What do you want to change\n");
			
				printf("1. change passowrd\n");
				
				printf("2. change user id\n");
			    
				
				printf("Enter Your Choice         \n ");
				scanf("%d",&a);
				fclose(fi);
				if(a==1)
				{
				      
				      chp(user,password);
				}
				if(a==2)
				{
				       
				       chu(user);
				}
				getch();
		}
	
	}
}
void chp(char user[],char temp2[])
{		
		fi=fopen(user,"r");
	
	
		fscanf(fi,"%s %s ",name,phone);
		
		printf("your current password is:%s",temp2);
		
		printf("set your new password\n");
		
		scanf("%s",&password);
		remove(user);
		pr=fopen(user,"a");
	
			fprintf(pr," %s %s ",name,phone);
		
		fclose(pr);
}
void chu(char user[])
{
	
	
	pr=fopen(user,"r");

	printf("your current user id is:%s",user);
	
	printf("set your new user id\n");

	scanf("%s",&pass3);
	ch=fopen(pass3,"r");
	fscanf(ch,"%d",&ch2);
	if(ch2==1)
	{
	
		printf("user id already exist plz enter another user id\n");
		
		ch2=0;
		chu(user);
	}
	else
	{

		fscanf(pr," %s %s ",name,phone);
	remove(user);
	ur=fopen(pass3,"w");
		fprintf(ur," %s %s",name,phone); 

    
	fclose(ur);
}
}



void security(char ui[])
{
	
	ch=fopen(ui,"a");
	
	printf("SET YOUR PASSWORD = ");

	scanf("%s",password);
    printf("\n");
	printf("RE-TYPE YOUR PASSWORD = ");
	
	scanf("%s",password1);
	ans=strcmp(password,password1);
	if(ans==0)  
	{
		fprintf(ch,"\t%s",password);


	}
	else
	{
		
		printf("ENTER CORRECT PASSWORD:");
		
		security(ui);
	}

}
void information(char ui[]){
	printf("\n");
	printf("---------------------------------------------------------------------------------------------\n");
	printf("Attempt the assignment");
}






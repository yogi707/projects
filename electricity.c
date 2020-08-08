
//		PROJECT=ELECTRICITY BILL CALCULATOR
//		NAME=yograj thakur



#include <stdio.h>
#include <conio.h>
#include <time.h>				// clock();
#include <windows.h>			// gotoxy();
#include <stdlib.h>
#include <string.h>
#include <process.h>			// exit();

							//	USER DEFINE FUNCTION GOTOXY AND DELAY
					
					
COORD coord = {0, 0}; // sets coordinates to 0,0
//COORD max_buffer_size = GetLargestConsoleWindowSize(hOut);
COORD max_res,cursor_size;
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


								//	FUNCTION DECLARATION
void login();
void mainmenu();
void addb();
void deleteb();
void searchb();
void viewb();
void editb();
void calculateb();
void exitb();
void freturn();
void abox();
void sbox();
float cbill();
//int checkid();
				
				
								//	GLOBAL VARIABLES				
int i,j;																	//LOOPING VARIABLE
int ni=0;


								//	GLOBAL FILE DECLERATION
								
FILE *f,*fp;



								// STRUCTURE

struct information
{
	long cno;										//	CONSUMER NUMBER
	char lname[25];									//  CONSUMER NAME
	char fname[25];
	char pno[15];									//	PHONE NUMBER
	struct address
	{
		int 	roomno;									//	ROOM NUMBER
		char 	colony[25];								//	COLONY
		char	area[25];								//  AREA
		char	city[25];								//  CITY
		int		pincode;								// 	PINCODE
	}a;
	int newr;
	int oldr;
	float bill;
}s;




int main()
{
	login();
	return 0;
}

void login()
{	
	system("cls");
	char ch[30]=" ELECTRICITY BILL CALCULATOR ",user[15],pass[15],c;
	char password[20]="anku";
	system("COLOR F3");
	gotoxy(30,4);		
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	for(i=0;ch[i]!='\0';i++)
	{
		delay(50);
		printf("%c",ch[i]);
	}
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	
	gotoxy(50,9);		printf("LOGIN");	 
	gotoxy(40,12);		printf("USERNAME : ");			fflush(stdin);		gets(user);
	gotoxy(40,14);		printf("PASSWORD : ");			
	i=0;
	while(c!=13)
	{
		c=getch();
		printf("*");
		pass[i++]=c;
	}
	pass[--i]='\0';
	if(strcmp(user,"anku")==0)
	{
		if(strcmp(pass,password)==0)
		{
			gotoxy(40,17);					printf("Password match");
			gotoxy(40,19);					printf("LOADING FILES");
			for(i=0;i<3;i++)
			{	delay(100);
				gotoxy(53,19);
				for(j=0;j<20;j++)
				{	
					delay(60);
					printf(".");	
				}
				gotoxy(53,19);
				for(j=0;j<20;j++)
				{		
					printf(" ");
				}
			}
			mainmenu();
		}
		else
		{	
			gotoxy(40,17);		printf("Incorrect Password");
			getch();
			login();
		}
	}
	else
	{
		gotoxy(40,17);			printf("Incorrect Username");
		getch();				
		login();
	}
}

void mainmenu()
{
	system("cls");
	int t;
	 
	gotoxy(40,4);
	for(i=0;i<15;i++)
		printf("\xDB");
		
	printf("  MAIN MENU  ");
	
	for(i=0;i<15;i++)
		printf("\xDB");
		
	gotoxy(30,8);		printf("\xDB\xDB\xDB\xDB\xB2\xB2   1.ADD NEW CUSTOMER DETAILS ");
	gotoxy(30,10);		printf("\xDB\xDB\xDB\xDB\xB2\xB2   2.DELETE CUSTOMER BILL ");
	gotoxy(30,12);		printf("\xDB\xDB\xDB\xDB\xB2\xB2   3.SEARCH CUSTOMER BILL ");	
	gotoxy(30,14);		printf("\xDB\xDB\xDB\xDB\xB2\xB2   4.VIEW ALL CUSTOMER BILL ");
	gotoxy(30,16);		printf("\xDB\xDB\xDB\xDB\xB2\xB2   5.EDIT A CUSTOMER BILL ");
	gotoxy(30,18);		printf("\xDB\xDB\xDB\xDB\xB2\xB2   6.CALCULATE BILL ");
	gotoxy(30,20);		printf("\xDB\xDB\xDB\xDB\xB2\xB2   7.EXIT ");
	gotoxy(30,22);		printf("---------------------------------------------------------");
	gotoxy(30,24);		printf("ENTER YOUR CHOICE :");		fflush(stdin);		scanf("%d",&t);
	switch(t)
	{
		case 1:	addb();
				break;
			
		case 2:	deleteb();
				break;
				
		case 3:	searchb();
				break;

		case 4: viewb();
				break;

		case 5:	editb();
				break;

		case 6: calculateb();
				break;

		case 7:	exitb();
				break;
	
		default:gotoxy(40,26);				printf("INVALID CHOICE");
				delay(2000);
				mainmenu();
	}
}


void addb()					// ADD NEW ELECTRICITY BILL RECORD
{
		char choice;
	do	
	{	
		system("cls");
		abox();
	
		f=fopen("ele.dat","ab");
	
		gotoxy(35,7);					printf("ENTER THE NEW INFORMATION :");
		
		gotoxy(35,9);					printf("CUSTOMER NUMBER :");	
		gotoxy(53,9);												scanf("%d",&s.cno);
		/*if(checkid==0)
		{
			gotoxy(60,9);				printf("!! CUSTOMER NUMBER ALREADY EXIT");
			goto a;
		}*/
		gotoxy(35,10);					printf("FIRST NAME :");
		gotoxy(53,10);					fflush(stdin);				gets(s.fname);
		gotoxy(35,11);					printf("LAST NAME :");
		gotoxy(53,11);					fflush(stdin);				gets(s.lname);
		gotoxy(35,12);					printf("PHONE NUMBER :");
		gotoxy(53,12);					fflush(stdin);				gets(s.pno);
		gotoxy(35,13);					printf("ADDRESS -");
		gotoxy(36,14);					printf("ROOM NO. :");	
		gotoxy(53,14);												scanf("%d",&s.a.roomno);
		gotoxy(36,15);					printf("COLONY :");					
		gotoxy(53,15);					fflush(stdin);				gets(s.a.colony);
		gotoxy(36,16);					printf("AREA :");
		gotoxy(53,16);					fflush(stdin);				gets(s.a.area);
		gotoxy(36,17);					printf("CITY :");
		gotoxy(53,17);					fflush(stdin);				gets(s.a.city);
		gotoxy(36,18);					printf("PINCODE :");
		gotoxy(53,18);					fflush(stdin);				scanf("%d",&s.a.pincode);
		gotoxy(35,19);					printf("OLD READING :");
		gotoxy(53,19);					fflush(stdin);				scanf("%d",&s.oldr);
		gotoxy(35,20);					printf("NEW READING :");
		gotoxy(53,20);					fflush(stdin);				scanf("%d",&s.newr);
		gotoxy(35,21);					printf("CURRENT BILL :");		
		//gotoxy(53,21);					fflush(stdin);				scanf("%d",&s.bill);
		float billt=cbill();												// Tempory Bill Record
		s.bill=billt;
			
		gotoxy(53,21);				printf("Total Bill = %g",s.bill);	
		fseek(f,0,SEEK_END);
		fwrite(&s,sizeof(s),1,f);
		fclose(f);
		
		gotoxy(35,24);					printf("Record is saved successfully");
		gotoxy(35,25);					printf("Save any more(Y/N):");			choice=getch();
	
	}while(choice=='Y' || choice=='y');
	mainmenu();
}




void deleteb()				// DELETE OLD BILL RECORD
{
	int t,flag=0;									// to check cumstomer number
	char choice,d;
	system("cls");
	gotoxy(30,4);
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	printf(" DELETE BILL RECORD ");
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	f=fopen("ele.dat","rb+");
	gotoxy(25,6);				printf("Enter the consumer number=");					scanf("%d",&t);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(t==s.cno)
		{
			gotoxy(25,8);				printf("BILL RECORD IS FOUND");			
			sbox();	
			gotoxy(28,12);				printf("CONSUMER NUMBER = %d",s.cno);
			gotoxy(28,13);				printf("NAME = %s %s",s.fname,s.lname);
			gotoxy(28,14);				printf("PHONE NO. = %s",s.pno);
			gotoxy(28,15);				printf("ADDRESS : ");
			gotoxy(29,16);				printf("ROOM NO. = %d",s.a.roomno);
			gotoxy(29,17);				printf("COLONY = %s",s.a.colony);
			gotoxy(29,18);				printf("AREA = %s",s.a.area);
			gotoxy(29,19);				printf("CITY = %s",s.a.city);
			gotoxy(28,20);				printf("PINCODE = %d",s.a.pincode);
			gotoxy(28,21);				printf("NEW READING = %d",s.newr);
			gotoxy(28,22);				printf("OLD READING = %d",s.oldr);
			gotoxy(28,23);				printf("BILL = %d",s.bill);
			flag=1;
		}
	}
	if(flag==1)
	{
		gotoxy(28,26);					printf("Do you want to delete it(Y/N) :");		fflush(stdin);		scanf("%c",&d);
		if(d== 'Y' || d == 'y')
		{
			fp=fopen("tem.dat","ab+");
			rewind(f);
			while(fread(&s,sizeof(s),1,f)==1)
			{
				if(s.cno!=t)
				{
					fwrite(&s,sizeof(s),1,fp);
				}
			}	
			fclose(f);
			fclose(fp);
			remove("ele.dat");
			rename("tem.dat","ele.dat");
			if(flag=1)
			{
				gotoxy(28,28);				printf("The record is successfully deleted");
				gotoxy(28,29);				printf("Delete another record(Y/N):");		fflush(stdin);		scanf("%c",&choice);	
			}
		}
		else
		{	
			mainmenu();
		}
	}
	else
	{
		gotoxy(28,26);					printf("RECORD NOT FOUND");
		gotoxy(28,27);					printf("Want to try again(Y/N) :");			scanf("%c",&choice);
	}
	if(choice == 'Y' || choice == 'y')
		deleteb();
	else
		mainmenu();
}

void searchb()				// SEARCH A BILL RECORD
{
	int d,flag=0;
	char choice;
	f=fopen("ele.dat","rb");
	rewind(f);
	system("cls");
	gotoxy(30,4);
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	printf(" SEARCH BILL RECORD ");
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	
	gotoxy(25,6);	printf("ENTER CONSUMER NUMBER :");			scanf("%d",&d);
	
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(s.cno==d)
		{
			gotoxy(25,8);				printf("BILL RECORD IS FOUND");			
			sbox();	
			gotoxy(28,12);				printf("CONSUMER NUMBER = %d",s.cno);
			gotoxy(28,13);				printf("NAME = %s %s",s.fname,s.lname);
			gotoxy(28,14);				printf("PHONE NO. = %s",s.pno);
			gotoxy(28,15);				printf("ADDRESS : ");
			gotoxy(29,16);				printf("ROOM NO. = %d",s.a.roomno);
			gotoxy(29,17);				printf("COLONY = %s",s.a.colony);
			gotoxy(29,18);				printf("AREA = %s",s.a.area);
			gotoxy(29,19);				printf("CITY = %s",s.a.city);
			gotoxy(28,20);				printf("PINCODE = %d",s.a.pincode);
			gotoxy(28,21);				printf("NEW READING = %d",s.newr);
			gotoxy(28,22);				printf("OLD READING = %d",s.oldr);
			gotoxy(28,23);				printf("BILL = %g",s.bill);
			flag=1;
		}
		 
	}
	if(flag=0)
	{
		gotoxy(45,14); 				printf("\xDB\xDB RECORD NOT FIND \xDB\xDB");
	}
	fclose(f);
	gotoxy(25,27);				printf("TRY ANOTHER SEARCH (Y/N):");			choice=getch();
	
	if(choice=='Y' || choice=='y')
		searchb();
	else 
		mainmenu();
	
}

void viewb()				// VIEW ALL BILL RECORD
{	
	int t=0;										// To count number of records 
	system("cls");
	f=fopen("ele.dat","rb");
	gotoxy(30,2);
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	printf(" BILL RECORDS ");
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	
	gotoxy(6,5);		printf("\xDB\xDB CONSUMER NO.");
	gotoxy(25,5);		printf("\xDB\xDB NAME");
	gotoxy(40,5);		printf("\xDB\xDB PHONE NO.");
	gotoxy(55,5);		printf("\xDB\xDB ADDRESS");
	gotoxy(75,5);		printf("\xDB\xDB NEW READING");
	gotoxy(90,5);		printf("\xDB\xDB OLD READING");
	gotoxy(105,5);		printf("\xDB\xDB BILL");
	
	i=7;
	while(fread(&s,sizeof(s),1,f)==1)
	{
			gotoxy(6,i);		printf("%d",s.cno);
			gotoxy(25,i);		printf("%s",s.fname);
			gotoxy(25,i+1);		printf("%s",s.lname);
			gotoxy(40,i);		printf("%s",s.pno);
			gotoxy(55,i);		printf("%d,%s,%s",s.a.roomno,s.a.colony,s.a.area);
			gotoxy(55,i+1);		printf("%s,%d",s.a.city,s.a.pincode);
			gotoxy(75,i);		printf("%d",s.newr);
			gotoxy(90,i);		printf("%d",s.oldr);
			gotoxy(105,i);		printf("%g",s.bill);
			i=i+3;
			t++;
	}
	fclose(f);
	gotoxy(2,i+10);			printf("Total no. of records = %d",t);
	gotoxy(70,i+10);		
	freturn();
}

void editb()
{
	int t;												//	To enter consumer number to compare
	char choice;
	system("cls");
	f=fopen("ele.dat","rb+");
	gotoxy(30,2);
	for(i=0;i<15;i++)
	{
		printf("\xDB");
	}
	printf(" EDIT BILL RECORD ");
	for(i=0;i<15;i++)
	{	
		printf("\xDB");
	}
	gotoxy(35,5);			printf("Enter the consumer no.=");				fflush(stdin);			scanf("%d",&t);
	
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(s.cno==t)
		{
			abox();
			gotoxy(35,7);					printf("RECORD IS AVAILABLE");
			gotoxy(35,8);					printf("THE CONSUMER NO.= %d",s.cno);
			gotoxy(35,10);					printf("FIRST NAME :");
			gotoxy(53,10);					fflush(stdin);				gets(s.fname);
			gotoxy(35,11);					printf("LAST NAME :");
			gotoxy(53,11);					fflush(stdin);				gets(s.lname);
			gotoxy(35,12);					printf("PHONE NUMBER :");
			gotoxy(53,12);					fflush(stdin);				gets(s.pno);
			gotoxy(35,13);					printf("ADDRESS -");
			gotoxy(36,14);					printf("ROOM NO. :");	
			gotoxy(53,14);												scanf("%d",&s.a.roomno);
			gotoxy(36,15);					printf("COLONY :");					
			gotoxy(53,15);					fflush(stdin);				gets(s.a.colony);
			gotoxy(36,16);					printf("AREA :");
			gotoxy(53,16);					fflush(stdin);				gets(s.a.area);
			gotoxy(36,17);					printf("CITY :");
			gotoxy(53,17);					fflush(stdin);				gets(s.a.city);
			gotoxy(36,18);					printf("PINCODE :");
			gotoxy(53,18);					fflush(stdin);				scanf("%d",&s.a.pincode);
			gotoxy(35,19);					printf("OLD READING :");
			gotoxy(53,19);					fflush(stdin);				scanf("%d",&s.oldr);
			gotoxy(35,20);					printf("NEW READING :");
			gotoxy(53,20);					fflush(stdin);				scanf("%d",&s.newr);
			gotoxy(35,21);					printf("CURRENT BILL :");			
			float billt=cbill();												// Tempory Bill Record
			s.bill=billt;
			//gotoxy(53,21);					fflush(stdin);				scanf("%d",&s.bill);
			gotoxy(53,21);					printf("%g",s.bill);
			fseek(f,ftell(f)-sizeof(s),0);
			fwrite(&s,sizeof(s),1,f);
			fclose(f);
		}
	}
	 
	gotoxy(35,24);					printf("Record is saved successfully");
	gotoxy(35,25);					printf("Modify another record(Y/N):");			choice=getch();
	if( choice=='Y' || choice=='y')
		editb();
	else
		mainmenu();
			
}

void calculateb()
{
	char choice;
	int newrc,oldrc,unit;
	float billc;
	system("cls");
	f=fopen("ele.dat","rb");
	gotoxy(30,2);
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	printf(" BILL CALCULATOR ");
	for(i=0;i<15;i++)
	{
		delay(50);
		printf("\xDB");
	}
	gotoxy(20,5);				printf("New Reading =");						scanf("%d",&newrc);
	gotoxy(50,5);				printf("Old Reading = ");						scanf("%d",&oldrc);
	unit=newrc-oldrc;
	
	if(unit<=200)
	{
		billc=4*unit;
	}
	else if(unit >=201 && unit <=400)
	{
		billc=4*200+(float)(unit-200)*5.95;
	}
	else if(unit >=401 && unit <=800)
	{
		billc=200*4+(float)200*5.95+(float)(unit-400)*7.30;
	}
	else if(unit >=801 && unit <=1200)
	{
		billc=200*4+(float)200*5.95+(float)400*7.30+(float)(unit-800)*8.10; 
	}
	else
	{
		billc=200*4+(float)200*5.95+(float)400*7.30+(float)400*8.10+(float)(unit-1200)*8.75; 
	}
	gotoxy(35,8);				printf("Total Bill = %g",billc);
	
	gotoxy(35,12);					printf("Calculate another reading(Y/N):");			choice=getch();
	if( choice=='Y' || choice=='y')
		calculateb();
	else
		mainmenu();

}
 
void exitb()
{
	system("cls");
	gotoxy(40,5);				printf("THANKS FOR USING THE PROGRAM");
	gotoxy(20,8);				printf("EXITING IN 3 SEC...........");
	delay(3000);
	exit(0);
}

void freturn()
{
	printf("Press Enter to Exit");
	a:
	if(getch()==13)
		mainmenu();
	else
		goto a;
}

void abox()									//	TO PRINT BOX IN ADD FUNCTION
{
	for(i=30;i<=90;i++)
	{
		gotoxy(i,5);					printf("\xB2");
		gotoxy(i,22);					printf("\xB2");
	}
	for(i=0,j=5;i<18;i++,j++)
	{
		gotoxy(30,j);				printf("\xB2\xB2");
		gotoxy(90,j);				printf("\xB2\xB2");
	}
 
}

void sbox()									//	TO PRINT BOX IN SEARCH FUNCTION
{
	for(i=25;i<=85;i++)
	{
		gotoxy(i,10);					printf("\xB2");
		gotoxy(i,25);					printf("\xB2");
	}
	for(i=0,j=10;i<16;i++,j++)
	{
		gotoxy(25,j);				printf("\xB2\xB2");
		gotoxy(85,j);				printf("\xB2\xB2");
	}
 
}

float cbill()
{
	int unit;
	float billc;
	unit=s.newr-s.oldr;
	
	if(unit<=200)
	{
		billc=4*unit;
	}
	else if(unit >=201 && unit <=400)
	{
		billc=4*200+(float)(unit-200)*5.95;
	}
	else if(unit >=401 && unit <=800)
	{
		billc=200*4+(float)200*5.95+(float)(unit-400)*7.30;
	}
	else if(unit >=801 && unit <=1200)
	{
		billc=200*4+(float)200*5.95+(float)400*7.30+(float)(unit-800)*8.10; 
	}
	else
	{
		billc=200*4+(float)200*5.95+(float)400*7.30+(float)400*8.10+(float)(unit-1200)*8.75; 
	}
	return billc;
}

/*int checkid()
{
	fp=fopen("ele.dat","rb");
	while(fread(&s,sizeof(s),1,fp))
	{
		
	}
}*/

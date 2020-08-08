#include<stdio.h>
#include<conio.h>
#include<string.h>
struct record
{ char customername[10];
   int customerid;
   int mobile_no; 
	float ebill;
	struct date
	{
		int day;
		int month;
		int year;
		
		
	}d;
}r[10],t;
int main()

{     

        int k,i,n,j,id,meterid,oldreading,unit,newreading,mobileno,servicetex,p,day,month,year;
float cost=0,totalcost;
       char name[20];
       
       
	   
    m:
printf("welcome to punjab elctricity board\n");
printf("user login\n");

	char username[30],password[10];
	printf("enter username\n");
	fflush(stdin);
	gets(username);
	printf("enter password\n");
	gets(password);
	if(strcmp(username,"yograj")==0&&strcmp(password,"anku")==0)
	{
		f:
		printf("\nwelcome yograj thakur\n");
		
	printf("\nenter 1 to calculate electricity bill");
	printf("\nenter 2 to search customer record\n");
	printf("enter 3 for rate chart\n");
	printf("\npress 4 for logout\n");
	scanf("%d",&k);
	
	switch(k)
{  
FILE *fp;
case 1:
y:
fp=fopen("bbill","ab");
printf("\nenter number of person to calculate bill\n");
scanf("%d",&n);

for(i=0;i<n;i++)

{
		
		printf("\nenter name\n");
		fflush(stdin);
		gets(name);
		printf("\nenter meterid\n");
		scanf("%d",&meterid);
		printf("\nenter mobile number\n");
		scanf("%d",&mobileno);
		printf("\nenter day\n");
		scanf("%d",&day);
		printf("enter month");
		scanf("%d",&month);
		printf("\n enter year");
		scanf("%d",&year);
		
		printf("enter oldreading of meter \n");
		scanf("%d",&oldreading);
		printf("enter newreading of meter\n");
		scanf("%d",&newreading);
		unit=newreading-oldreading;
		printf("units %d\n",unit);
		
		if(unit>0&&unit<=100)
		{
			cost=unit*2.5;
			
		}
		else if(unit>100&&unit<=200)
{
	cost=(unit*3.5)+10;
		}		
		else if(unit>200&&unit<=300)
		{
			
			cost=(unit*4.5)+50;
		}
		else if(unit>300&&unit<=400)
{
	cost=(unit*5)+150;
		}		
		else
		{
		cost=10000;
		}
			servicetex=10;
			totalcost=cost+10;
		
	printf("\ntotal electricity bill\n %.2f",totalcost);
			
   strcpy(r[i].customername,name);
   r[i].customerid=meterid;
   r[i].mobile_no=mobileno;	
   r[i].d.day=day;
   r[i].d.month=month;
   r[i].d.year=year;
   r[i].ebill=totalcost;	
			
	fwrite(&r[i],sizeof(r[i]),1,fp);
		}
		fclose(fp);
		
		printf("\npress 1 for contineu\n");
	printf("\npress 2 for search\n");
	printf("\n press 3 for home");
	printf("\npress 4 for exit\n ");
		scanf("%d",&n);
		if(n==1)
		{
			
			goto y;
			
		}else if(n==2)
		{
			goto n;
		} else if(n==3)
		{
			goto f;
		} else if(n==4)
		{
			goto e;
		}	
	
	
break;					
 
case 2:
    n:
fp=fopen("bbill","rb");
printf("id\n");
scanf("%d",&id);
while(fread(&t,sizeof(t),1,fp))
	{
		if(t.customerid==id)
		{
printf("\ncustomer name %s\ncustomer meterid %d \ncustomer mobile number %d \nelectricitybill %f \n ",t.customername,t.customerid,t.mobile_no,t.ebill);	
printf("date %d %d %d",t.d.day,t.d.month,t.d.year);



		}
	}
		printf("\npress 1 for contineu\n");
		printf("\n press 2 for home");
		printf("\npress 3 for exist\n");
		scanf("%d",&n);
			if(n==1)
		{
			
			goto n;
			
		}
		else if(n==2)
		{
			goto f;
		}
		else if(n==3)
		{
			goto e;
		}
		
		
		

		fclose(fp);

		
		
			
			
		break;
		case 3:
			
printf("units                         rate\n");
printf("0to100                        2.5\n");
printf("100to200                      3    \n");
printf("200to350                      3.5\n");
printf("350to500                      4\n");
printf("greator than 500                         5.5\n");
	printf("\n press 1 for home");
		printf("\npress 2 for exist\n");
		scanf("%d",&n);

		 if(n==1)
		{
			goto f;
		}
		else if(n==2)
		{
			goto e;
		}
		
		
		break;
	case 4:
	goto m;
	break;
	default:
	printf("\nPlz enter valid key\n");
	goto f;
	break;	
				
	}
}
else	
{
	printf("\ninvalid password or id ");
	goto m;
}
	e:
		
	getch();
	

	}


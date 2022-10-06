#include<stdio.h>
#include<stdbool.h>
struct roomuser{
	int tf;
	char name[20];
	int age;
}ruser[5];
int it =0,cho=0;
int main()
{
	do
	{
	int op=0;
	printf("WELLCOME TO HOTAL KAYAN R K\n1. booking\n2. going out\n3. rooms booked\n4. exit\nenter what do you visit : ");
	scanf("%d",&op);
	printf("*********************\n");
	switch(op)
	{
		case 1:
			{
				printf("BOOKING : \n");
				for(it = 0; it<5;it++)
				{
					if(ruser[it].tf==1)
					{
						if(it==4)
						{
							printf("sorry its full!");
                           	printf("\n*********************\n");
						}
						continue;
					}
					else
					{
						for(it = 0;it<5;it++)
						{
							if(ruser[it].tf==1)
							{
								continue;
							}
							else
							{
						        printf("enter your name : ");
//						        scanf("%s");
//						        gets(ruser[it].name);
						        scanf("%s",&ruser[it].name);
						        printf("enter your age : ");
						        scanf("%d",&ruser[it].age);
						        if(ruser[it].age<18)
						        {
						        	printf("sorry, your below 18");
	                                printf("\n*********************\n");
						        	break;
								}
					        	ruser[it].tf=1;
					        	printf("your room no is : %d\n********************\n",++it);
					        	break;
							}
						}
						break;
					}
				}
				break;
			}
		case 2:
			{
				int rno = 0;
				printf("enter your room no : ");
				scanf("%d",&rno);
				ruser[--rno].tf = 0;
				printf("thank you visit again.\n");
				break;
			}
		case 3:
			{
				printf("ROOMS ARE BOOKED : \n");
				for(it=0;it<5;it++)
				{
					if(ruser[it].tf == 1)
					{
						printf("room on : %d\n",1+it);
						printf("booker name : %s\n",ruser[it].name);
						printf("booker age : %d\n",ruser[it].age);
					}
					else
					{
						continue;
					}
				}
	            printf("*********************\n");
				break;
			}
		case 4:
			{
				cho = 1;
				break;
			}
	}
    }while(cho==0);
}
//1. booking
//2. going out
//3. rooms booked
//enter what do you visit :

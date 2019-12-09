#include<stdio.h>

int main()
{
	int seat;
	int rem,n,run;

	scanf("%d",&seat);
	if(seat % 2 == 0)
	{
		if(seat % 6 == 0)
		{
			printf("WS\n");
			rem = seat / 6 ;
			
				if(rem % 2 == 0)
				{
					printf("Opposite seat is %d\n",seat - 11);
				}
				else
				{
					printf("Opposite seat is %d\n",seat + 1);
				}
			 // window seat 
		
		
		}
		else if(seat % 6 == 2)
		{
			printf("MS\n");
			rem = seat / 6 ;
			
				if(rem % 2 == 0)
				{
					printf("Opposite seat is %d\n",seat + 9);
				}
				else
				{
					printf("Opposite seat is %d\n",seat - 3);
				}
		 
			// middle seat
			
			
		}
		else if(seat % 6 == 4)
		{
			printf("AS\n");
			rem = seat / 6 ;
			
				if(rem % 2 == 0)
				{
					printf("Opposite seat is %d\n",seat + 5);
				}
				else
				{
					printf("Opposite seat is %d\n",seat - 7);
				}
			
		}
		
		// Aisle seat
		
	}
	else
	{
		if(seat % 6 == 1)
		{
			printf("WS\n");
			rem = seat / 6;
			
				if(rem % 2 == 0)
				{
					printf("Opposite seat is %d\n",seat + 11);
				}
				else
				{
					printf("Opposite seat is %d\n",seat - 1);
				}
		
			
			
		}
		else if(seat % 6 == 5)
		{
			printf("MS\n");
			rem = seat / 6  ;
			
				if(rem % 2 == 0)
				{
					printf("Opposite seat is %d\n",seat + 3);
				}
				else
				{
					printf("Opposite seat is %d\n",seat - 9);
				}
			
		}
		else if(seat % 6 == 3)
		{
			printf("AS\n");
			rem = seat / 6 ;
			
				if(rem % 2 == 0)
				{
					printf("Opposite seat is %d\n",seat + 7);
				}
				else
				{
					printf("Opposite seat is %d\n",seat - 5);
				}
		
		}	
}	

	
	

return 0;	
}

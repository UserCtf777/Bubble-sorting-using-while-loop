#include<stdio.h>
int main()
{
	int i,search,temp, j ,k, flag ,n,count =0,count1 =0,choice;
	while(choice != 0)
	{
		printf("\n---------------------------------------------------------\n");
		
		printf("\n__________________*B*U*B*B*L*E+++S*H*O*R*T*__________________\n");
		
		printf("\n---------------------------------------------------------\n");
	
		
		printf("Enter the size of ARRAY  [I]:...");
		scanf("%d",&n);
		int I[n];
		printf("Enter the ELEMENT for the ARRAY  [I]:...");
		for(i=0;i<n;i++)
		{
			
	 	 scanf("%d",&I[i]);
		}
		printf("\nEnter 1 to go with ASCENDING order:...\n");
		printf("\nEnter 11 to go with DEASCENDING order:...\n");
		printf("\nEnter 0 to go EXIT:...\n");
		scanf("%d",&choice);
		switch(choice)
		{
			
			printf("OKH,\nStarting the sorting process...");
			case 1 :  // ascending order
				for(i=0 ;i<n-1;i++)
				{
					flag = 0;//initial for 
					count1++;// conting the count for pass loop.
					for(j= 0 ; j<n-1-i;j++)
					{
						if(I[j]>I[j+1])
						{
							temp = I[j];
							I[j] = I[j+1];
							I[j+1] = temp;
							
							flag = 1;// mid for flag
						}
						count++;// counting the count for swap loop.
					}
					if(flag == 0)// check for flag
					break;
				}
        printf("\nprinting count for PASS %d...\n",count1); // to check the count of pass loop
			  printf("\nprinting count for swap %d...\n",count);  // to check the count of swap loop
			  printf("\nDisplaying the ARRAY I[]:...\n");
			  for(i = 0 ; i<n;i++)
			  {
		  	  printf("  %d ",I[i]);
			  }
				break;
			case 11 :// Deacending order
				for(i=0 ;i<n-1;i++)
				{
					flag = 0;//initial for 
					count1++;// conting the count for pass loop.
					for(j= 0 ; j<n-1-i;j++)
					{
						if(I[j]<I[j+1])
						{
							temp = I[j];
							I[j] = I[j+1];
							I[j+1] = temp;
							
							flag = 1;// mid for flag
						}
						count++;// counting the count for swap loop.
					}
					if(flag == 0)// check for flag
					break;
				} 
        printf("\nprinting count for PASS %d...\n",count1); // to check the count of pass loop
		  	printf("\nprinting count for swap %d...\n",count);  // to check the count of swap loop
		  	printf("\nDisplaying the ARRAY I[]:...\n");
		  	for(i = 0 ; i<n;i++)
		  	{
			    printf("  %d ",I[i]);
			  }
				break;
			default :
				printf("Enter a valid choice>>>");
		}
			
			
	}
	return 0;
}

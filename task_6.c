 
 #include<stdio.h.>
 
 main()
 {
 	int i ,sum=0,x;
 	printf("\n Enter no to check : ");
 	scanf("%d",&i);
 	x=i;
 	
 	while(i>0)
 	{
 	   sum=sum+(i%10)*(i%10)*(i%10)	;
 	   i=i/10; 
	 }
 	
 	 if(sum==x)
 	 {
 	 	printf("\n armstrong Number.");
 	 	
	  }
	  else{
	  	    printf("\n Not a armstrong number.");
	  }
 	
 }

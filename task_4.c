

 #include<stdio.h>
 
   main()
   {
   	  int num,count,fact=1;
   	  printf("Enter a number to find factorial \n");
   	  scanf("%d",&num);
   	  
   	  for(count=1;count<=num;count++)
   	  {
   	  	
   	  	fact=fact*count;
   	  	
		 }
   	  
   	   printf("Factorial of %d is : %d",num,fact);
   	
   	
   }

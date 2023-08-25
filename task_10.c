
 //swaping with the use of thrid variable.
 
 #include<stdio.h>
 
 main()
 {
 	int a,b,c;
 	printf("Enter number for A: ");
 	scanf("%d",&a);
 	
 	printf("Enter number for B: ");
 	scanf("%d",&b);
 	
	 c=a;
	 a=b;
	 b=c;
	 
	 printf("Value in A= %d \n",a); 
	 printf("Value in B= %d",b); 		
 }

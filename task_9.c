

 // wap to perform mathmatical operation using swtich case.
 
  
   #include<stdio.h>
   
   main()
   {
   	 int a,b,c;
   	 int add,sub,mul,div;
   	 printf("Enter two numbers:\n ");
   	 scanf("%d %d",&a,&b);
   	 
   	 printf("1.add \n 2.sub \n 3.mul \n 4.div \n");
   	 printf("Enter your choice \n ");
   	 scanf("%d",&c);
   	 
   	  switch(c)
   	  {
   	  	 case 1: add=a+b;
   	  	         printf("add= %d",add);
   	  	 break;
   	  	  case 2: sub=a-b;
   	  	         printf("sub= %d",sub);
   	  	 break;
   	  	 case 3: mul=a+b;
   	  	         printf("mul= %d",mul);
   	  	 break;
   	  	case 4: div=a-b;
   	  	         printf("div= %d",div);
   	  	 break;	
		 }
   	
   }

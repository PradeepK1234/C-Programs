

  #include<stdio.h>
  
  main()
  {
  	
  	 int a,b,c,add,sub,mul,div;
  	 
  	 printf("Enter two number \n");
  	 scanf("%d %d",&a,&b);
  	 
  	 printf(" 1.add \n 2.sub \n 3.mul \n 4.div \n");
  	 printf("Enter your choice");
  	 scanf("%d",&c);
  	 
  	 switch(c)
  	 {
  	 	case 1: add=a+b;
  	 	        printf("%d",add);
  	    break;
  	    
  	    case 2: sub=a-b;
  	            printf("%d",sub);
  	    break;
  	    
  	    case 3: mul=a*b;
  	            printf("%d",mul);

  	    break;
  	    
  	    case 4: div=a/b;
  	            printf("%d",div);
  	    break;
  	 	
  	 	default : printf("invalid choice");
  	 	
  	 	
  	 	
	   }
  	
  	
  	
  	
  }

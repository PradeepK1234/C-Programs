
  // student grade.
  
  #include<stdio.h>
  
  main()
  {
  	int m;
  	
  	printf("enter marks out of 100 \n ");
  	scanf("%d",&m);
  	
  	switch(m/10)
  	{
  		case  10: printf("A++ Grade");
  		break;
  		
  		case 9: printf("A+ Grade");
  		break;
  		
  		case 8: printf("A Grade ");
  		break;
  		
  		case 7: printf("B Grade");
  		break;
  			
     	case 6: printf("C Grade");
  		break;
  		
  		case 5: printf("D Grade");
  		break;
  		
  		case 4: printf("E Grade");
  		break;
  			
       	default : printf("FAILL Grade");
  		break;
  			
  		
  		
  		
	  }
  	
  	
  	
  	
  }

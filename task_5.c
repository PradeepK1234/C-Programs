
// wap to check given number is upercase or lowercase.

  #include<stdio.h>
  
  main()
  {
  	char ch;
  	printf("Enter a character : ");
  	scanf("%c",&ch);
  	
  	if(ch>=65 && ch<=90)
  	{
  		printf("Upper Case");
	  }
	  
	 else if(ch>=97 && ch<=122)
	 {
	 	printf("Lower case");
	  } 
  	else if(ch>=48 && ch<=57)
  	{
  		printf("Digit ");
	  }
	  
	  else{
	  	 printf("Special symbol");
	  }
  	
  }

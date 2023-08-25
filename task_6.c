
 #include<stdio.h>
 
 main()
 {
 	 char ch;
 	 int LC ,UC ;
 	 printf("Enter any character ");
 	 scanf("%c",&ch);
 	 
    LC=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    
    UC=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    
    if(LC||UC)
    {
    	printf("%c is vowel",ch);
	}
 	else{
 		printf("%c is consonent",ch);
	 }
 	
 	
 }

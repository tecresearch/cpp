 #include<stdio.h>
 main()
 {
		int a=10,b;
		//b=++a;
		//  b=++a - ++a;
		//  b=++a - ++a - ++a ;
		   // b=++a - ++a - a;
       // b=++a - a + a++;
		//  b=a-- + a++ - a + a++;
		 b=--a + --a  ;

		printf("a= %d\n",a);
		printf("b= %d\n",b);

}

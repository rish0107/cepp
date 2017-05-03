    /*
    Name:Shubhi Bajpai
    Sec:D
    Roll No.:22
    Sem:4
    */
    #include<stdio.h>
    #include<conio.h>
    #include<math.h>

    float f(float x)
    {
     return (x*x+x-3);
    }
    float d(float x)
    {
     return (2*x+1);
    }

    int main()
     {
	 float x0,x2;
	 int n,i;
	// clrscr();
	 printf("\t\t\tNEWTON RAPHSON METHOD");
	 printf("\n\t\t\tINPUT\n");
	 printf("\tenter approximation:");
	 scanf("%f",&x0);
	 printf("\n\t\t\tOUTPUT\n");

	 if(f(x0)==0)
	 {
	       printf("\nThe root is:%f",x0);
	 }
	 else
	 {
	     printf("\tenter the number of iterations:");
	     scanf("%d",&n);
	      for(i=0;i<n;++i)
	      {
              x2=x0-f(x0)/d(x0);
              if(f(x2)==0)
              {
                printf("\n\tThe root is:%f",x2);
                break;
              }

               printf("\n\tthe value of iteration %d is:%f",i+1,x2);
               x0=x2;
        }
        printf("\n\n\tThe root is:%f",x2);
    }
         //getch();
         return 0;
     }

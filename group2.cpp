#include<stdio.h>

    int main() //defines the starting point of the C/C++ program.
    {     		// \'......\' is used inside the double quotation mark so that the apostrophe doesnt interfere with the specified output.
	    int n;
	    printf("The following program executes the respective program for the given digit you press.\n"); 
	    printf("\'1\' To execute sum of given two numbers \n");
	    printf("\'2\' To execute simple interest using SI=(p*t*r)/100 \n");
	    printf("\'3\' To check if a given number is positive or negative \n");
	    printf("\'4\' To check if a given number is odd or even \n");
	    printf("\'5\' To find the largest of the three numbers \n");
	    printf("\'6\' To read n numbers and display the sum \n");
	    printf("\'7\' To find the sum of the series 1+2+3+....+n \n");
	    printf("\'8\' To find the factorial of a given number \n");
	    printf("\'9\' For Electricity Bill\n");
	    printf("\'10\' To execute hcf and lcm of two numbers \n");
	    printf("\'11\' To execute fibonacci series upto n terms \n");
	    printf("\'12\' To count number of digits in a number \n");
	    printf("\'13\' To reverse the digits in a number \n");
	    printf("\'14\' To find the prime factors in a number \n");
        printf("\'15\' To check if a number is greater than n1,less than n2 and divisible by 7 \n");
		printf("ENTER YOUR CHOICE:");  
        scanf("%d",&n);

	        switch(n) //using switch in which it reads 'n' and runs the code specified at each case. Break is used in each case
					//to end the code after running the program selected.
	        {
		    case 1: //entering 1 runs this code.
		        int a,b,s;
		        printf("Enter two numbers \n");
		        scanf("%d %d",&a,&b);
		        s = a + b ;
		        printf("%d + %d = %d",a,b,s);
		        break;  
		    case 2: //entering 2 runs this code.
		        int p,ti,r,si;
		        printf("Enter the principal,time and rate to calculate interest \n");
		        scanf("%d %d %d",&p,&ti,&r);
		        si=(p*ti*r)/100.0;
		        printf("The interest is: %d",si);
		        break;
		    case 3: //entering 3 runs this code.
		        printf("Enter a number:");
                int num;
                 scanf("%d", &num);
                 if (num == 0) { 
                    printf("0 is neither negative nor positive\n");
                    } else if (num < 0) {
                        printf("%d is negative\n", num);
                        } else {
                            printf("%d is positive\n", num);
                            }
		                break;
	        case 4:	//entering 4 runs this code.
	    	    printf("Enter a number: ");
                int nu;
                scanf("%d", &nu);
                    if (nu == 0) {
                    printf("%d is neither odd nor even\n", nu);
                        } else if(nu %2 == 0){
							printf("%d is even",nu);
						}
                         else{printf("%d is odd\n", nu);
                            }
	                    break;
	        case 5: //entering 5 runs this code.
	            int x, y, z;
                printf("Enter a number: \n ");
                scanf("%d", &x);
                printf("Enter 2nd number: \n ");
                scanf("%d", &y);
                printf("Enter 3rd number: \n ");
                scanf("%d", &z);
                    if (x == y and x == z and y == z){
                        printf("ALL ARE EQUAL!\n");
                    }
                        else if (x >= y and x > z) {
                            printf("%d is largest \n", x);
                                } else if (y>=x and y>z) {
                                    printf("%d is largest \n", y);
                            } else {
                                printf("%d is largest \n", z);
                                }
                            break;
            case 6: //entering 6 runs this code.
    	        int n,v,ans;
    	        ans=0;
    	        printf("How many numbers do you want to print sum of?");
                scanf("%d", &n);
                        for (int i = 1; i <= n; i = i + 1) { //using for loop to do the process until each provided numbers is added
                        printf("Enter number:");
                        scanf("%d", &v);
                        ans=ans+v;
                    }
                        printf("The sum of the given numbers is:%d \n", ans);
                break;
            case 7:  //entering 7 runs this code.
    	        int t,sum;
    	        printf("Upto which number do you want to print the sum to?");
    	        scanf("%d",&t);
    	        sum=t*(t+1)/2;
    	        printf("The sum upto %dth term is \"%d\"",t,sum);
    	        break;
    	    case 8: //entering 8 runs this code.
    		    int numb,fact,j;
    		    printf("enter n: ");
			    scanf("%d", &numb);
			    fact= 1;
                    for(j=1;j<=numb;j++){ //smth++ is post-operational increment.
            	     fact=fact*j;
		        	}
		    	        printf("The factorial of %d is %d",numb,fact);
			    break;
    	    case 9: //entering 9 runs this code.
    		    int unit,price;
			    price=0; 
    		    printf("Enter the number of units: ");
    		    scanf("%d",&unit);
    		        if (unit<=20){
    			        price =80;
			            } else if (unit>20 && unit <=100){
			                price=(80)+(unit-20)*8;
		                    } else if (unit>100){
		                        price=(80)+(80*8)+(unit-100)*10;
	                            }
	                    printf("Total Bill is Rs.%d",price);
	            break;
	        case 10: //entering 10 runs this code.
	            int num1,num2,c,d,temp,hcf,lcm;
	            printf("Enter two numbers: \n");
	            scanf("%d %d",&num1,&num2);
	            c = num1;  //c is updated to 'num1'
	            d = num2;	//d is updated to'num2'
					while (num2 != 0 ){ //the condition set runs the program until num2==0
						temp = num2;
						num2 = num1 % num2;
						num1 = temp;
						}
						hcf = num1;
						printf("hcf is: %d \n",hcf);
						lcm = (c*d)/hcf;
						printf("lcm is %d",lcm);
						break;
	    	case 11: //entering 11 runs this code.
		    	int numbe,aa,bb,cc,k;
				printf("Enter upto how many terms do you want the series printed?");
				scanf("%d",&numbe);
				aa=0;
				bb=1;
				cc=0;
				printf("The series upto %d th term is as follows \n",numbe);
					for(k=1;k<=numbe;k=k+1){
						printf ("%d ",cc); //prints 0 initially
						aa = bb;   //updates the value of aa to bb 
						bb = cc;   // updtes the value of bb to cc
						cc = aa + bb;  //updates the value of cc as aa+bb
						}
				break;
			case 12: //entering 12 runs this code.
				int nnn,count;
				printf("Enter a number: \n");
				scanf("%d",&nnn);
				count=0; //count is set to 0 initially.
					while (nnn != 0 ){
						nnn=nnn/10;
						count = count+1;
						}
					printf("The total number of digits is %d",count);
				break;
			case 13: //entering 13 runs this code.
				int rev,nn,rem;
				printf("Enter the number you want to reverse \n");
				scanf("%d",&nn); //input value is stored in 'nn'
				rev=0; //initially 'rev' is set to 0
					while (nn != 0) {
						rem = nn%10;//modulo division of 'nn'
						rev = rev * 10 + rem; //updating the value of 'rev''
						nn = nn/10;	 //updating the value of 'nn'
						}
						printf("The reversed number is: %d",rev);
				break;
			case 14: //entering 14 runs this code.
				int yy,ii,lf;
				printf("Enter a number: ");
				scanf("%d",&yy);
				printf("Prime factors:");
				for(ii=2;ii<=yy;ii++)  //ii++ is post operational increment of 'ii' by 1.
					{
					while (yy%ii==0)
						{
						if(lf != ii){
							printf("%d ",ii);
							lf =ii;
							}
						yy=yy/ii;
						}
					}
				break;
			case 15: //entering 15 runs this code.
				int zz,n1,n2;
				printf("Enter a number \n");
				scanf("%d",&zz);
				printf("Enter number1 and num2 \n");
				scanf("%d %d",&n1,&n2);
					if (zz>n1){
						printf("%d is greater than %d \n",zz,n1);
						}else {
							printf("%d is smaller than %d \n",zz,n1);
						}
							if(zz<n2){
							printf("%d is smaller than %d \n",zz,n2);
								}else {
								printf("%d is greater than %d \n",zz,n2);
								}
					if (zz % 7 == 0 ){
						printf("%d is divisible by 7 \n",zz);
							}else{
							printf("%d is not divisible by 7 \n",zz);
						}
					break;	
				default: //for a case not provided/declared default program is run.
					printf("!!!INVALID!!!");
				break;
		  }      
}
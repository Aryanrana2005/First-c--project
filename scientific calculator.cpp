#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
void calculator(){
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--                                                         --"<<endl;
cout<<"--                    SCIENTIFIC                           --"<<endl;
cout<<"--                    CALCULATOR                           --"<<endl;
cout<<"--                                                         --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         +        |     -       |          *             --"<<endl;
cout<<"--        ADD       |    MINUS    |       MULTIPLY         --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         /        |      m      |          L             --"<<endl;
cout<<"--       DIVIDE     |     MODE    |         LOG            --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         S        |       C     |          p             --"<<endl;
cout<<"--       SQUAR      |     CUBE    |        POWER           --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         s        |       c     |          t             --"<<endl;
cout<<"--        SIN       |      cos    |         ten            --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         r        |      k      |           .            --"<<endl;
cout<<"--     SQUAR ROOT   |    CLEAR    |         CLOSE          --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;

}
void display_output( double answer){
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--                       ------------------------------------"<<endl;
cout<<"--       CURRENT         |       "<<endl;
cout<<"--       OUTPUT IS:      |     "<<answer<<endl;
cout<<"--                       ------------------------------------"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         +        |     -       |          *             --"<<endl;
cout<<"--        ADD       |    MINUS    |       MULTIPLY         --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         /        |      m      |          L             --"<<endl;
cout<<"--       DIVIDE     |     MODE    |         LOG            --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         S        |       C     |          p             --"<<endl;
cout<<"--       SQUAR      |     CUBE    |        POWER           --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         s        |       c     |          t             --"<<endl;
cout<<"--        SIN       |      cos    |         ten            --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"--         r        |      k      |           .            --"<<endl;
cout<<"--     SQUAR ROOT   |    CLEAR    |         CLOSE          --"<<endl;
cout<<"-------------------------------------------------------------"<<endl;

}
int main()
{
        double num1=0.0;
        double num2=0.0;
        double answer=0.0;
        bool converter=0;
        char inp='\n'; //store null
       
        while(inp !='.')
		{
        	
        	if(converter==1){
			//if we want to display output
        	//take only one input
        	display_output(answer);
        	
				cout<<"Enter=";
				
	        	cin>>inp;
	        	
	        	//decision
	        	//if we want two variable or one input
	        	if(inp=='+'||inp=='-'||inp=='*'||inp=='/'||inp=='m'||inp=='p')
				{
	        	
		        	num1=answer;
		        		
		        		cout<<"Enter num2:";
		        		cin>>num2;
					}
					else if(inp=='k'||inp=='.'){
						//don't take any input
					}
					else{
				  num1=answer;
				}
				
			}
			else
			{
			//if we want to show basic calculation
			//we will input two numbers
			calculator();
				cout<<"Enter=";
				
	        	cin>>inp;
	        	
	        	//decision
	        	//if we want two variable or one input
	        	if(inp=='+'||inp=='-'||inp=='*'||inp=='/'||inp=='m'||inp=='p')
				{
	        		cout<<"Enter num1:";
	        		cin>>num1;
	        		
	        		cout<<"Enter num2:";
	        		cin>>num2;
				}
					else if(inp=='k'||inp=='.')
					{
						//don't take any input
					}
					else{
					num1=answer;
				}
				converter=1;
				
			}
        	
        	
			switch(inp)
			{
				case '+':
				answer=num1+num2;
					break;
				case '-':
				answer=num1-num2;
					break;
				case '*':
				answer=num1*num2;
					break;
				case '/':
				answer=num1/num2;
					break;
				case 'm':
				answer= int(num1)%int(num2);
					break;
				case 'L':
				answer= log(num1);
				break;
				case 'S':
				answer=num1*num1;
				break;
				case 'C':
				answer=num1*num1*num1;
				break;
				case 'p':
				answer= pow(num1,num2);
				break;
				case 's':
				answer=sin(num1);
				break;
				case 'c':
				answer=cos(num1);
				break;
				case 't':
				answer=tan(num1);
				break;
				case 'r':
				answer= sqrt(num1);
				break;
				case '.':
				break;
				case 'k':
					converter=0;
					
				default:
				cout<<"~~Invalid value!~~"<<endl;	
		}
		system("cls");
		
}
	
	
	return 0;
}



















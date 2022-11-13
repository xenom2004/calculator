#include <iostream>


using namespace std;









double pow(double x,int y)//power function

{
    y+=1;
    double out{1};
    while(y>1){
    out=out*x;
    y-=1;

    }


return out;
}





long double factorial(int number)
{

    if (number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

long double pow(long double x, int y)

{
    y += 1;
    long double out=1;
    while (y > 1)
    {
        out = out * x;
        y -= 1;

    }

    return out;
}

 

double sin1(double x){
 if (x > 0)
    {

        while (x >= 2 * 3.141592653589793238)
        {
            x = x - 2 * 3.141592653589793238;
            
        }

    }
    if (x < 0)
    {

        while (x <= -2 * 3.141592653589793238)
        {
            x = x + 2 * 3.141592653589793238;
        }
    }
    






    double sign = 1;
    double total_sum = 0;
    double n = 1;
    while(n<31){
        total_sum = total_sum + sign*pow(x,n)/factorial(n);
        sign = -1*sign;
        n = n+2;
    }
    return total_sum;
}
double cos(double x)
{
    int n=0;
    double sum=0;
    int sign =1;

    while(n<31){

    
    
    sum = sum + sign*pow(x,n)/factorial(n);
    sign=sign*(-1);
    n=n+2;


    }
return sum;



}
double cos1(double x){
    return sin1(3.14159265359/2-x);}
double tan1(double x){
    
    return sin1(x)/cos1(x);

}    









    

int main()

{
    double firstnumber;
    double secondnumber;
    char operation;
    

int tell;

cout<<"write which maths function to use,  press 1 for trignometry or press 2 for operations"<<endl;

cin>>tell;
if (tell==2){
    
    cout<<"enter first number."<<endl;

   cin>>firstnumber;
   cout<<"enter operators (-,+,*,/)"<<endl;
   cin>>operation;
   cout<<"enter second number."<<endl;
   cin>>secondnumber;
   if (operation =='+'){
    cout<<"your answer is "<<firstnumber+secondnumber<<endl;
        
    }
   
 if(operation=='-'){
    cout<<"your answer is "<<firstnumber-secondnumber<<endl;
        
    }
    
    if(operation=='*'){
    cout<<"your answer is "<<firstnumber*secondnumber<<endl;
        
    }
   
    if(operation=='/'){
    cout<<"your answer is "<<firstnumber/secondnumber<<endl;
    }}


else {
    cout<<"select your function"<<endl<<"press 1 for sin"<<endl<<"press 2 for cos"<<endl<<"press 3 for tan"<<endl;
    int fn;
    cin>>fn;

    cout<<"enter your number"<<endl;
    

    
    double num;
    cin>>num;

    
    if(fn==1){cout<<sin1(num);}
    if(fn==2){cout<<cos1(num);}
    if(fn==3){cout<<tan1(num);}



}
return 0;


}



















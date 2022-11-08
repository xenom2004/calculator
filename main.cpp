#include <iostream>


using namespace std;


int factorial(int number)
{
int max=number;
while (max>1){
max-=1;
number=number*(max);
}



return number;
}



double pow(double x,int y)

{
    y+=1;
    double out{1};
    while(y>1){
    out=out*x;
    y-=1;

    }


return out;
}



double sin(double x)
{
    if(x>0){
while(x>=2*3.141592653589793238){
x=x-2*3.141592653589793238;

}}
 if(x<0){}
while(x<=-2*3.141592653589793238)
{x=x+2*3.141592653589793238;



}


    
return x-pow(x,3)/factorial(3)+pow(x,5)/factorial(5)-pow(x,7)/factorial(7) +pow(x,9)/factorial(9)-pow(x,11)/factorial(11)+pow(x,13)/factorial(13)-pow(x,15)/factorial(15) +pow(x,17)/factorial(17);

}


int main()
{
    double val;
    cout<<"Enter";
    cin>>val;
cout<<sin(val);
return 0;
}


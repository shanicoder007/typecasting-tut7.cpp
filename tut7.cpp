#include<iostream>
#include <iomanip>


using namespace std;

//"******Global Variable******"

     int  d=66;

int main(){
 cout<<"*********Build In Data Types***********" <<endl;  
     int a, b, c;


     cout<<"the value of a "<<a<<endl;
      cin>>a;
     cout<<endl;

     cout<<"the value of b "<<b<<endl;
      cin>>b;
     cout<<endl;

    c = a + b;

     cout<<"the sum is " <<c<<endl;
     cout<<"the global variable d is " <<::d<<endl;
     cout<<endl;

cout<<"*********float, double , long double literals**********" <<endl;

     float e=21.7236785;
     double w=21.72568345671467;
     long double my_long_double=21.342678456256784678453;
     cout << setprecision(21);
     cout<<"the value of e " <<e<<endl;
     cout<<"the value od w " <<w<<endl;
     cout<<"the value od my long double " <<my_long_double<<endl;
cout<<"\nSize of operators"<<endl;

cout<<"te size of 21.7 is " <<sizeof(21.7)<<endl;
  cout<<"te size of 21.7f is " <<sizeof(21.7f)<<endl;  
    cout<<"te size of 21.7F is " <<sizeof(21.7F)<<endl;
  cout<<"te size of 21.7l is " <<sizeof(21.7l)<<endl;
cout<<"te size of 21.7L is " <<sizeof(21.7L)<<endl;
cout<<endl;

cout<<"*****Refrences Variables******"<<endl;

     cout<<"setting any single value to two separate refrences in your program is called refrences variable"<<endl;
     //EX
 
 cout<<"myname : zeeshan--->, freinds call me : shani--->, collegemates call me : shan "<<endl;



float x = 677;
float y = x;

 cout<<"the value of y is " <<--y<<endl;
 cout<<"the value of x is " <<x<<endl;
 cout<<endl;


cout<<"*******typecasting********"<<endl;


int n=23;
float m=23.54;

cout<<"the value of n is " <<(float)n<<endl;
cout<<"the value of m is " <<(int)m<<endl;
cout<<endl;
int k=(int)m;
cout<<"the value of k is "<<k<<endl;
return 0;
}
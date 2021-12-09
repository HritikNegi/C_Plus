#include <iostream>
using namespace std;

int gcd(int a, int b) 
{
   if (b == 0){
     return a;
   }
   else{
     return gcd(b, a % b);
   }
}
int main() 
{
   int a , b;
   cout<<"Enter the values of a "<<endl; 
   cin>>a>>b;
   cout<<"Enter the values of b "<<endl; 
   cin>>b;
   cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);
   return 0;
}

#include <iostream>
using namespace std;


int main(){ 

    int p[] = { 10, 20, 30 } ;
    cout << *p << endl ;
    
    //	Output 1 when p is not incremented
    
    //   p++ ;
    //	cout << *p << endl ;

    //	Above issue can be resolved using the below syntax
    cout << *( p +1 ) << endl ;

    return 0 ;
}

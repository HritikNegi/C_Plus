#include <iostream>
using namespace std ;


class Base {
public:
	int var ;
};

class Child : Base{
	int var2 ;
};

struct SBase {
public:
	int var ;
};

struct SChild : Base{
	int var2 ;
};

int main( ){
	
	// Child obj ;
	// obj.var2 = 5 ;

	struct SChild obj2 ;
	obj2.var2 = 5 ;

	cout << obj2.var2 << endl ;

	return 0;
}

#include <iostream>

using namespace std;

class badClass {
	int codeno;
	bool flag;
};

char* test() {
	char* c=new char[0];
	*c='K';
	return c;
	//delete(c);

}

void int_test()
{
    int* ptr = new int(5);


    // return without deallocating ptr
    return;
}


int main(int argc,char** argv) {

	cout << " CodeQL Test " << endl;
	char*c=test();	
	cout<<c<<endl;
	c[10]='D';

	int_test();
	return 0;
	
}

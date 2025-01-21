#include <iostream>
#include<cstring>
void dummyfn(int n);
int foo(int x);
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
	
	char source[ ] = " fresh2refresh" ;
        char target[ ]= "C tutorial" ;
        cout << source<<endl;
        cout << target << endl;
	strncat(target, source, sizeof(target) - strlen(target));
	
        cout << source<<endl;
        cout << target << endl;
	
	dummyfn(2);
	
        cout<< "Bad code example"<< endl;
        foo(1);

        return 0;
}



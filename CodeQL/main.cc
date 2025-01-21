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

int main(int argc,char** argv) {

	cout << " CodeQL Test " << endl;
	char*c=test();	
	cout<<c<<endl;
	c[10]='D';

	return 0;
	
}

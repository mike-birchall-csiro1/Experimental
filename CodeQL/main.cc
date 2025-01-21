#include <iostream>

using namespace std;

class badClass {
	int codeno;
	bool flag;
};

void test() {
	char* c=new char[0];
	*c='K';
	cout<<c<<endl;
	//delete(c);

}

int main(int argc,char** argv) {

	cout << " CodeQL Test " << endl;
	test();	
	return 0;
	
}

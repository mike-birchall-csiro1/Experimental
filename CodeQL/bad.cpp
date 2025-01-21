#include <iostream>
using namespace std;

void foo(int x) {
        cout <<"foo called with x="<<x<< endl;
        int buf[10];
        if (x==1000) {
                buf[x]=0;
        }

}


int main (int argc, char** argv) {
        cout<< "Bad code example"<< endl;
        foo(1);
        return 0;
}



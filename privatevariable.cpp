#include<iostream>
using namespace std;
class A {
private :
    int a;
public:
    A(int b): a(b) {}
    int get() {
return a;
    }
};
int main()
{
    A b(5);
    cout<<b.get();
    return 0;
}
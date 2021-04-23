#include <iostream>
#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    int b=a;
    /*if (b>=65&&b<=90) {cout <<(char) b<< endl;}*/
    if (b>=97&&b<=122) {
            cout<<(char) (b-32)<< endl;}
            else{
                cout<<(char)b<< endl;
            }

    return 0;
}

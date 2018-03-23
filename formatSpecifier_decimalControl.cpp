#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int x; long y; char z; float a; double b;
    cout<<"Enter int long char float double";
    scanf("%d %ld %c %f %lf",&x,&y,&z,&a,&b);
    printf("%d\n%ld\n%c\n%.03f\n%0.09lf",x,y,z,a,b);
    return 0;
}

//input 3 12345678912345 a 334.23 14049.30493
/*output
3
12345678912345
a
334.230
14049.304930000
*/

/*
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

int main() {
    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout.precision(3);
    cout<<fixed<<d<<endl;
    cout.precision(9);
    cout<<fixed<<e<<endl;
    return 0;
}
*/

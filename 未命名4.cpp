#include<ioStream>
using namespace std;
int main()
{
 int a,b,c,m;
 cin>>m;
 a=m/100;
 b=m/10%10;
 c=m%10;
 cout<<c*100+b*10+a;
}

#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int
int main()
{
  int n;
  cin>>n;

  for(int i =0 ; i <n; i++)
    {
        ll n1,n2,a,b;
        cin>>a>>b;
        n1= __gcd(a,b);
        n2 = (a*b)/__gcd(a*b);

       cout<<gcd<<" "<<lcm<<endl;
    }

}

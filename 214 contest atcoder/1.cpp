#include<iostream>
using namespace std;
int main()
{
    int t,n,div;

    cin>> t;
    int arr[t];
    for(int i =0 ; i <t; i++)
    {
        cin>>arr[i];
        }

    for(int i = 0 ; i <t ; i++)
        {
            div = arr[i]/250;
            cout<<div<<endl;
        }

    return 0;
}
//not sure

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a,b;
    cin>>a>>b;

    for(n=a; n<=b; n++)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0){
        break;
        }
    }
        if(n==i){
        cout<<n<<endl;
        }
}
        return 0;
}
        
    

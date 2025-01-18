#include<iostream> 
using namespace std;

//counting with recursion

void counting(int n)
{
    if(n==0)
    {
        return ;
    }

    cout<<n<<endl;

    counting(n-1);

    cout<<n<<endl;

}



int main()
{
 int n;
 cin>>n;

    counting(n);

    return 0;
}

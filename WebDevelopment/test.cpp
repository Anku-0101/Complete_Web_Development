#include<iostream>

using namespace std;
class abc
{
    public:
    
};
int sum(int z, int x)
{
    return x+z;
}


int main()
{   
    int (*ptr)(int, int);
    ptr = sum;
    
    int ans = ptr(10,5);
    cout<<ans;
    return 0;
}

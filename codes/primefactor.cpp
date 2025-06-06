#include <iostream>
using namespace std;

void whosprime(long long x)
{
    bool imPrime = true;

    for(int i = 1; i <= x; i++)
    {
        for(int z = 2; z <= x; z++)
        {
            if((i != z) && (i%z == 0))
            {
                imPrime = false;
                break;
            }
        }

        if(imPrime && x%i == 0)
            cout << i << endl;

        imPrime = true;
    }    
}

int main()
{
    long long r = 600851475143LL;
    whosprime(r);  
}

#include<iostream>
#include<vector>

using namespace std;

void sieveOfEratosthenes(int n){
    vector<bool> isPrime(100000,true);
    isPrime[0]=false;
    isPrime[1]=false;

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i*i; j<=n; j+=i) {
                isPrime[j] = false;
            }
        }
    }


}


int main()
{
    int n;
    cin>>n;
    sieveOfEratosthenes (100000);
    int t;
    cin>>t;

    while(t--)
    {
        int p;
        cin>>p;
        for(int i=2; i<=p;i++)
{
    if(isPrime[i])
    {
        cout<< i << " ";
    }
}

    }
}
/*
    Sieve of Eratosthenes:
    Given a number n, print all prime numbers less than n
*/

#include <iostream>
using namespace std;

void sieve_of_eratosthenes(int n)
{
    

    
    bool *prime = new bool[n];
    for (int i = 0; i < n; i++)
    {
        prime[i] = true;
    }

    
    for (int i = 2; i * i <= n; i++)
    {
       
        for (int j = 2 * i; j < n; j += i)
        {
            prime[j] = false;
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
}

void SieveOfEratosthenes(int n)
{
     
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
         
        if (prime[p] == true)
        {
             
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}




int main()
{
    sieve_of_eratosthenes(50);
}

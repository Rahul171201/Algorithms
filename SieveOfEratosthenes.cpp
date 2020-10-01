#include <bits/stdc++.h>   // C++ program to print all the prime numbers smaller than or equal to n using Sieve of Eratosthenes 
using namespace std; 
  
void SieveOfEratosthenes(int n) 
{ 
    
    bool prime[n+1];                        // Creating a boolean array "prime[0..n]" 
    memset(prime, true, sizeof(prime));   //initializing with true
  
    for (int p=2; p*p<=n; p++) 
    {  
        if (prime[p] == true) 
        {   
            for (int i=p*p; i<=n; i += p)    // Revising all the multiples of p greater than or  equal to the square of it 
            {
                prime[i] = false; 
        	}	
        } 
    } 
  
    for (int p=2; p<=n; p++)    //printing the prime numbers less than or equal to n
       if (prime[p]) 
          cout << p << " "; 
} 
  
int main() 
{ 
    int n;
    cout<<"Input the value of n : ";
    cin>>n;
    cout << "The prime numbers smaller than or equal to " << n <<"are  :"<< endl; 
    SieveOfEratosthenes(n); 
    return 0; 
} 

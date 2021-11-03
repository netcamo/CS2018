#include <bits/stdc++.h>
#include <stdio.h>
using namespace std ;

#define faster_io ios_base::sync_with_stdio(false);cin.tie()
#define getmin(a,b)  ( (a) < (b) ? (a) : (b))
#define getmax(a,b)  ( (a) > (b) ? (a) : (b))
#define all(v) v.begin() , v.end()
#define ull unsigned long long
#define ll long long
#define PI 3.141592653589793
#define SIZE 100000
#define MX 40010
#define F first
#define S second
#define pb(a) push_back((a))
#define mp(a,b) make_pair((a),(b))
#define elif else if
#define MAX 500000
#define forr(a,b) for( int i=(a) ; i < (b); i++)
ll power (ll x, ll y)
{
    if (y==0) return 1 ;
    ll temp=power(x,y/2) ;
    if (y%2==0) return temp*temp ;
    else return x*temp*temp ;
}

bool isprime (ll a)
{
    if (a==1) return false ;
    if (a==2) return true ;
    if (a%2==0) return false;
    for (ll i=3; i*i<=a ; i+=2)
    {
        if (a%i==0) return false;
    }

    return true ;
}

ll gcd (ll a,ll b)
{

    if(a==0)
        return b ;
    else return gcd (b%a, a) ;


}

ll lcm (ll a, ll b)
{

    return ((a/gcd(a,b))*b) ;

}

int charToInt (char c)
{   if (int(c)>=48&& int(c)<=57)
    return int(c)-48 ;
    else return -1 ;

}
char intToChar(int r)
{

    return char(48+r) ;
}

int stringToInt (string s) {
ll a=0 ;
for (int i=0 ; i<s.length() ; i++) {
    a=a*10+(charToInt(s[i])) ;}
    return a ;



}

string intToString (int n) {

string s="" ;
if (n==0 ) {
    return "0" ;
}
ll temp ;
while(n) {
    temp=n%10 ;
    n/=10 ;
    s+=intToChar(temp) ;

}

reverse(all(s)) ;
return s ;
}


vector < bool > sieve (MAX+1, true) ;
vector <ll> primes;

void c_sieve(ll n)
{

    sieve[0]=sieve[1]=false ;
    // cout<<sieve[3] <<endl ;
    for (ll i =3 ; i*i<=n ; i+=2)
    {

        if (sieve[i])
        {
            for (ll j= i*i ; j<=n ; j+=2*i)
            {
                sieve[j]=false ;

            }
        }


    }



}

void c_primes(ll n)
{
    primes.pb(2) ;
    for ( ll i =3 ; i<=n ; i+=2)
    {
        if (sieve[i]) primes.pb(i) ;
    }
}

 ll lcs (string s , string e , int s_n , int e_n) {

 if (e_n==0 || s_n ==0) {
    return 0 ;
 }
 if (s[s_n-1]==e[e_n-1]) return 1+ lcs(s,e ,s_n-1  , e_n-1) ;
  else return  max  (  lcs(s,e,s_n-1,e_n) ,lcs(s,e,s_n,e_n-1) ) ;


 }
 bool is (ll k) {
  ll z,x ;
 while(k!=0 &&k>=10) {
    z=k%10 ;
    x=k/10%10 ;
    if(x==1&&z==3){
        return 0 ;
    }
    k/=10 ;
 }
 return true ;


 }





ll fact (ll n) {
    if (n==0)return 1 ;
    ll multi=1 ;
    for (ll i =2; i<=n ; i++) {multi*=i ;}
    return multi ;
    }




double f( double x) {

double  z=pow(x,3)+3*pow(x,2)-1 ;

return z;
}

int main()
{
    //faster_io;
//    freopen ("file.txt", "r", stdin) ;
  //  freopen("output.txt" ,"w" , stdout) ;


        ifstream in("file.txt");
        char c ;
        char mat[1025][1025] ;
            for (int i =0 ; i<1025 ; i++) {
                for (int j =0 ; j<1025; j++) {
                    in.get(c) ;
                    mat[i][j]=c ;
                    cout<<c ;
                }
            }
            in.close ();



            return 0;
}

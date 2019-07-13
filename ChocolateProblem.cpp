# include <bits/stdc++.h>
  using namespace std;
# define res(a,b,c) for (int64 a=b ; a<c ; a++)
# define ress(a,b)  for (auto a = b.begin() ; a!=b.end() ; a++) 
# define all(con) con.begin() , con.end()
# define INF (int)1e9  
# define MOD 1000000007
# define pb push_back   
# define mp make_pair
# define f first
# define s second   
# define MAX numeric_limits<int>::max() 
# define MIN numeric_limits<int64>::min()
# define mymin -1000000000000000001
# define mymax 1000000000000000001
# define watch(x) cout<<(#x)<<" is "<<(x)<<endl
# define in(x) cin>>(x)
# define inn(x,y) cin>>(x)>>(y)  
# define out(x) cout<<(x)<<"\n"  
# define outt(x,y) cout<<(x)<<" "<<(y)<<"\n"  
typedef long long int int64;
typedef unsigned long long int uint64;
typedef vector<int64> vi;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef pair<int64,int64> pi; 
bool doubleSame(double a, double b)
{ const double eps = 1e-15; return ( abs(a-b)<= eps*abs(a) ); }

int64 getAns(int64 a, int64 b)
{
	if(a==0)
		return 0;
	else if(b==0)
		return 0;

	if(a>b)
		return (a/b) + getAns((a%b),b);
	else
		return (b/a) + getAns(a,(b%a));
}

int main()
{
	int64 p,q,r,s;
	cin>>p>>q>>r>>s;

	int64 ans = 0;

	for(int64 i = p ; i<=q ; i++)
	{
		for(int64 j = r ; j<=s ; j++)
		{
			ans+=getAns(i,j);
		}
	}

	cout<<ans<<endl;
}
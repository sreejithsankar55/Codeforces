#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
const char* comma = strchr(names + 1, ',');
std::cerr.write(names, comma - names) << " = " << arg1;
ZZ(comma, args...);
}
ll hr1,mi1;
int check(ll hr,ll mi)
{
	if(hr==hr1 and mi==mi1)
		return 1;
	else
		return 0;
}
int main()
{
	ll x=1,c=0,hr,mi,thr,tmi,b;
	scanf("%lld:%lld",&hr1,&mi1);//keep lld to get format 23:01 for eg.
	scanf("%lld:%lld",&hr,&mi);
	thr=hr;
	tmi=mi;
	while(true)
	{
		if(mi-x<0 or mi-x==-60)
		{
			mi=60+(mi-x);
			if(hr==0)
				hr=23;
			else
				hr--;
		}
		else if(mi==x)
			mi=0;
		else 
			mi=mi-x;
		c++;
		if(check(hr,mi))
			break;
	}

	ll t=c;
	c=c/2;
	while(true)
	{
		if(c==t)
			break;
		t--;
		
		if(tmi-x<0 or tmi-x==-60)
		{
			tmi=60+(tmi-x);
			if(thr==0)
				thr=23;
			else
				thr--;
		}
		else if(tmi==x)
			tmi=0;
		else 
			tmi=tmi-x;
	}
    //to handle the preceding 0s eg 9:8 is 09:08
	b=thr/10;
	if(b==0)
		cout<<0;
	cout<<thr<<":";
	b=tmi/10;
	if(b==0)
		cout<<0;
	cout<<tmi;
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for (int i = 0; i < (int)(n); ++i)
#define mod 1000000007
#define bigger(a,b) (a>b?a:b)
#define smaller(a,b) (a<b?a:b)
#define mem(A,g) memset(A,g,sizeof(A))
#define gc getchar_unlocked
#define positive(a) (bigger(a,-a))
#define INF std::numeric_limits<int>::max();
int main() {
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
char table2[100001][11];
char table1[11][100001];
while(t--)
{

        string a,b;
        cin>>a>>b;
        int m = a.length();
        int n = b.length();
        for(int i=0;i<=n;i++)
        	{
        		for(int j=0;j<=min(10,m);j++)
        		{
        			table2[i][j] = '0';
        		}
        	}
        	for(int i=0;i<=min(10,n);i++)
        	{
        		for(int j=0;j<=m;j++)
        		{
        			table1[i][j] = '0';
        		}
        	}
        	for(int i=1;i<=m;i++)
        	{
        		if(a[i-1]=='1')
        		{
        			table1[0][i] = 'L';
        		}
        		else
        		{
        			table1[0][i] = 'W';
        		}
        	}
        	for(int i=1;i<=n;i++)
        	{
        		if(b[i-1]=='1')
        		{
        			table2[i][0] = 'L'; 
        		}
        		else
        		{
        			table2[i][0] = 'W';
        		}
        	}
        	for(int i=1;i<=min(10,m);i++)
	        {
	        	table2[0][i] = table1[0][i];
	        }
	        for(int i=1;i<=min(10,n);i++)
	        {
	        	table1[i][0] = table2[i][0];
	        }
        	for(int i=1;i<=n;i++)
        	{
        		for(int j=1;j<=min(10,m);j++)
        		{
        			if(i == 1){

                        if(j == 1){
                            if(table2[i-1][j]=='W' || table2[i][j-1] == 'W'){
                                table2[i][j] = 'W';
                            }else{
                                table2[i][j] = 'L';
                            }
                        }else{
                            if(table2[i-1][j] == 'W' || table2[i][j-1] == 'L'){
                                table2[i][j] = 'W';
                            }else{
                                table2[i][j] = 'L';
                            }
                        }

                    }else if(j == 1){

                        if(table2[i][j-1] == 'W' || table2[i-1][j] == 'L'){
                            table2[i][j] = 'W';
                        }else{
                            table2[i][j] = 'L';
                        }

                    }else{
                        if(table2[i-1][j] == 'L' || table2[i][j-1] == 'L'){
                            table2[i][j] = 'W';
                        }else{
                            table2[i][j] = 'L';
                        }
                    }
        		}
        	}
        	for(int i=1;i<=min(n,10);i++)
        	{
        		for(int j=1;j<=m;j++)
        		{
        			if(i == 1){

                        if(j == 1){
                            if(table1[i-1][j]=='W' || table1[i][j-1] == 'W'){
                                table1[i][j] = 'W';
                            }else{
                                table1[i][j] = 'L';
                            }
                        }else{
                            if(table1[i-1][j] == 'W' || table1[i][j-1] == 'L'){
                                table1[i][j] = 'W';
                            }else{
                                table1[i][j] = 'L';
                            }
                        }

                    }else if(j == 1){

                        if(table1[i][j-1] == 'W' || table1[i-1][j] == 'L'){
                            table1[i][j] = 'W';
                        }else{
                            table1[i][j] = 'L';
                        }

                    }else{
                        if(table1[i-1][j] == 'L' || table1[i][j-1] == 'L'){
                            table1[i][j] = 'W';
                        }else{
                            table1[i][j] = 'L';
                        }
                    }
        		}
        	}
        int q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;
            int checky,checkx;
            if(y>=x)
            {
                //FIRST STRING
                checky = y-(x-1);
                if(table1[min(x,10)][min((checky-1)+10,y)]=='W')
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
            else
            {
                checkx = x-(y-1);
                if(table2[min(x,(checkx-1)+10)][min(10,y)]=='W')
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
            }
        cout<<"\n";
    }
}
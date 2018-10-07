#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
bool myCompare(pair<string,int> p1,pair<string,int> p2){
    return p1.second<p2.second;
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    map<string,int> mymap;
    int n;
    cin>>n;
    // cout<<"ashi";
    vector<int>v;
    v.push_back(0);
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    
    if(n==1)
    {
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=n;j++)
        {
          if(j==1)
          {
            swap(v[j],v[i]);
          }
        }
        string s="";
            for(int i=1;i<=n;i++)
            {
                s+=to_string(v[i]);
            }
            // cout<<s<<"\n";
            mymap[s]++;
            v.clear();
            v.push_back(0);
            for(int f=1;f<=n;f++)
            {
              v.push_back(f);
            }  
      }
    }
    else if(n==2)
    {
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=n;j++)
        {
          for(int k=1;k<=n;k++)
          {
            if(k==1)
            {
              swap(v[k],v[i]);
            }
            else if(k==2)
            {
              swap(v[k],v[j]);
            }
          }
          string s="";
            for(int i=1;i<=n;i++)
            {
                s+=to_string(v[i]);
            }
            // cout<<s<<"\n";
            mymap[s]++;
            v.clear();
            v.push_back(0);
            for(int f=1;f<=n;f++)
            {
              v.push_back(f);
            }
        }
        // v.clear();
        // for(int k=1;k<=n;k++)
        // {
        //   v.push_back(k);
        // }
        // for(int j=1;j<=n;j++)
        // {
        //   swap(v[i],v[j]);
        // }
        // string s="";
        // for(int i=1;i<=n;i++)
        // {
        //     s+=to_string(v[i]);
        // }
        // mymap[s]++;
      }
    }
    else if(n==3)
    {
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=n;j++)
        {
          for(int k=1;k<=n;k++)
          {
            // cout<<i<<j<<k<<"\n";
            for(int l=1;l<=n;l++)
            {

              if(l==1)
              {
                swap(v[l],v[i]);
              }
              else if(l==2)
              {
                swap(v[l],v[j]);
              }
              else
              {
                swap(v[l],v[k]);
              }
            }
            string s="";
            for(int i=1;i<=n;i++)
            {
                s+=to_string(v[i]);
            }
            // cout<<s<<"\n";
            mymap[s]++;
            v.clear();
            v.push_back(0);
            for(int f=1;f<=n;f++)
            {
              v.push_back(f);
            }
          }
        }
      }
    }
    else if(n==4)
    {
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=n;j++)
        {
          for(int k=1;k<=n;k++)
          {
            for(int l=1;l<=n;l++)
            {
                for(int m=1;m<=n;m++)
                {
                    if(m==1)
                      {
                        swap(v[m],v[i]);
                      }
                    else if(m==2)
                      {
                        swap(v[m],v[j]);
                      }
                    else if(m==3)
                      {
                        swap(v[m],v[k]);
                      }
                    else
                      {
                        swap(v[m],v[l]);
                      }
                }
                string s="";
                for(int i=1;i<=n;i++)
                {
                    s+=to_string(v[i]);
                }
                // cout<<s<<"\n";
                mymap[s]++;
                v.clear();
                v.push_back(0);
                for(int f=1;f<=n;f++)
                {
                  v.push_back(f);
                }
            }
          }
        }
      }
    }
    else if(n==5)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    for(int l=1;l<=n;l++)
                    {
                        for(int m=1;m<=n;m++)
                        {
                            for(int o=1;o<=n;o++)
                            {
                                if(o==1)
                                  {
                                    swap(v[o],v[i]);
                                  }
                                else if(o==2)
                                  {
                                    swap(v[o],v[j]);
                                  }
                                else if(o==3)
                                  {
                                    swap(v[o],v[k]);
                                  }
                                else if(o==4)
                                  {
                                    swap(v[o],v[l]);
                                  }
                                else
                                {
                                    swap(v[o],v[m]);
                                }
                            }
                            string s="";
                            for(int i=1;i<=n;i++)
                            {
                                s+=to_string(v[i]);
                            }
                            // cout<<s<<"\n";
                            mymap[s]++;
                            v.clear();
                            v.push_back(0);
                            for(int f=1;f<=n;f++)
                            {
                              v.push_back(f);
                            }
                        }
                    }
                }
            }
        }
    }
    else if(n==6)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    for(int l=1;l<=n;l++)
                    {
                        for(int m=1;m<=n;m++)
                        {
                            for(int o=1;o<=n;o++)
                            {
                                for(int p=1;p<=n;p++)
                                {
                                    if(p==1)
                                      {
                                        swap(v[p],v[i]);
                                      }
                                    else if(p==2)
                                      {
                                        swap(v[p],v[j]);
                                      }
                                    else if(p==3)
                                      {
                                        swap(v[p],v[k]);
                                      }
                                    else if(p==4)
                                      {
                                        swap(v[p],v[l]);
                                      }
                                    else if(p==5)
                                    {
                                        swap(v[p],v[m]);
                                    }
                                    else if(p==6)
                                    {
                                        swap(v[p],v[o]);
                                    }
                                }
                                string s="";
                                for(int i=1;i<=n;i++)
                                {
                                    s+=to_string(v[i]);
                                }
                                // cout<<s<<"\n";
                                mymap[s]++;
                                v.clear();
                                v.push_back(0);
                                for(int f=1;f<=n;f++)
                                {
                                  v.push_back(f);
                                }  
                            }
                        }
                    }
                }
            }
        }
    }
    else if(n==7)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    for(int l=1;l<=n;l++)
                    {
                        for(int m=1;m<=n;m++)
                        {
                            for(int o=1;o<=n;o++)
                            {
                                for(int p=1;p<=n;p++)
                                {
                                    for(int q=1;q<=n;q++)
                                    {
                                        if(q==1)
                                          {
                                            swap(v[q],v[i]);
                                          }
                                        else if(q==2)
                                          {
                                            swap(v[q],v[j]);
                                          }
                                        else if(q==3)
                                          {
                                            swap(v[q],v[k]);
                                          }
                                        else if(q==4)
                                          {
                                            swap(v[q],v[l]);
                                          }
                                        else if(q==5)
                                        {
                                            swap(v[q],v[m]);
                                        }
                                        else if(q==6)
                                        {
                                            swap(v[q],v[o]);
                                        }
                                        else if(q==7)
                                        {
                                            swap(v[q],v[p]);
                                        }
                                    }
                                    string s="";
                                    for(int i=1;i<=n;i++)
                                    {
                                        s+=to_string(v[i]);
                                    }
                                    // cout<<s<<"\n";
                                    mymap[s]++;
                                    v.clear();
                                    v.push_back(0);
                                    for(int f=1;f<=n;f++)
                                    {
                                      v.push_back(f);
                                    }  
                                }
                            }
                        }
                    }
                }
            }
        }
        // cout<<"jk";
    }
    else if(n == 8){
        // cout<<"hello";
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    for(int l=1;l<=n;l++)
                    {
                        for(int m=1;m<=n;m++)
                        {
                            for(int o=1;o<=n;o++)
                            {
                                for(int p=1;p<=n;p++)
                                {
                                    for(int q=1;q<=n;q++)
                                    {
                                        for(int r=1;r<=n;r++){

                                            if(r==1)
                                            {
                                                swap(v[r],v[i]);
                                            }
                                            else if(r==2)
                                            {
                                                swap(v[r],v[j]);
                                            }
                                            else if(r==3)
                                            {
                                                swap(v[r],v[k]);
                                            }
                                            else if(r==4)
                                            {
                                                swap(v[r],v[l]);
                                            }
                                            else if(r==5)
                                            {
                                                swap(v[r],v[m]);
                                            }
                                            else if(r==6)
                                            {
                                                swap(v[r],v[o]);
                                            }
                                            else if(r==7)
                                            {
                                                swap(v[r],v[p]);
                                            }
                                            else if(r == 8){
                                                swap(v[r],v[q]);
                                            }

                                        }
                                        string s="";
                                        for(int i=1;i<=n;i++)
                                        {
                                            s+=to_string(v[i]);
                                        }
                                        // cout<<s<<"\n";
                                        mymap[s]++;
                                        v.clear();
                                        v.push_back(0);
                                        for(int f=1;f<=n;f++)
                                        {
                                        v.push_back(f);
                                        }  
                                        
                                    }
                                    
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    
    vector<pair<string,int> >myvector2;
    for(auto i:mymap){
        // cout<<i.first<<" "<<i.second<<"\n";
        myvector2.push_back(make_pair(i.first,i.second));
    }
    sort(myvector2.begin(),myvector2.end(),myCompare);
    string s1 = myvector2[0].first;
    string s2 = myvector2[myvector2.size()-1].first;
    int demo = myvector2[myvector2.size()-1].second;
    for(int i=0;i<s2.length();i++){
        cout<<s2[i]<<" ";
    }
    cout<<endl<<demo<<endl;
    cout<<endl;
    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<" ";
    }
    cout<<"\n";
    
	
}
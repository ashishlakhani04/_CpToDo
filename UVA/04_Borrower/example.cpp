// Incomplete

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
string getString(string s){
	bool start = false;
	string s1="";

	for(char i:s){
		if(i == '"' && !start){
			start=true;
		}else if(i != '"' && start){
			s1.push_back(i);
		}
	}

	return s1;
}
bool myCompare(pair<string,string> p1,pair<string,string> p2){

	if(p1.second<p2.second){
		return true;
	}else if(p1.second>p2.second){
		return false;
	}
	return p1.first<p2.first;

}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    string s;

    vector<pair<string,string> > v;
    unordered_map<string,string> um;
    while((getline (cin, s)) &&  (s != "END"))
    {
    	string s1="",s2="";
    	bool start1 = false,start2=false,start3=false;
    	for(char i:s){

    		if((i == '"') && (!start1)){
    			start1=true;
    		}else if((i == '"') && (start1)){
    			start1=false;
    		}else if(start1){
    			s1.push_back(i);
    		}else if((i == 'b') && (!start2)){
    			start2=true;
    		}else if((start2) && (i == 'y')){
    			continue;
    		}else if(i == ' ' && !start3){
    			start3=true;
    		}
    		else if(start2 && start3){
    			s2.push_back(i);
    		}

    	}

    	um[s1] = s2;

    	// cout<<s1<<"=>"<<s2<<endl;

    	v.push_back(make_pair(s1,s2));
    }
    // cout<<"hello";
    // s.clear();
    vector<pair<string,string> > temp;
    while((getline (cin, s)) &&  (s != "END")){

    	if(s[0] == 'B'){
    		string s1 = getString(s);
    		v.erase(remove(v.begin(),v.end(),make_pair(s1,um[s1])),v.end());
    	}else if(s[0] == 'R'){
    		string s1 = getString(s);
    		temp.push_back(make_pair(s1,um[s1]));
    	}else{

    		// for(auto i:v){
    		// 	cout<<i.first<<"->"<<i.second<<endl;
    		// }
    		sort(temp.begin(),temp.end(),myCompare);
    		int size = temp.size();

    		for(int i=0;i<size;i++){
    			
    			pair<string,string> place = temp[i];
    			bool hogya=false;
    			int ite=0;
    			for(int k=0;k<v.size();k++){
    				auto j=v[k];
    				if(j.second < place.second){
    					hogya=true;
    					cout<<"Put \""<<place.first<<"\" after \""<<j.first<<"\"\n";
    					v.insert(v.begin()+ite,make_pair(place.first,place.second));
    					break;
    				}else if(j.second == place.second){
    					
    					// cout<<"hello";
    					if(j.first>place.first){
    						
    						
    						if(k-1 < 0){

    							break;
    						} // bug
    						cout<<"Put \""<<place.first<<"\" after \""<<v[k-1].first<<"\"\n"; // bug
    						v.insert(v.begin()+ite,make_pair(place.first,place.second));
    						hogya=true;
    						break;
    					}else{
    						cout<<"Put \""<<place.first<<"\" after \""<<j.first<<"\"\n";
    						v.insert(v.begin()+ite,make_pair(place.first,place.second));
    						hogya=true;
    						break;
    					}
    				}

    				ite++;

    			}

    			if(!hogya){
    				cout<<"Put \""<<place.first<<"\" first";
    				v.insert(v.begin(),make_pair(place.first,place.second));
    				cout<<"\n";
    			}

    			// cout<<"hello";

    		}
    		temp.clear();
    	}


    }
    cout<<"END";	

}
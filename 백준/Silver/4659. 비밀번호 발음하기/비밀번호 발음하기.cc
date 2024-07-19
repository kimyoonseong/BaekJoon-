#include <bits/stdc++.h>
using namespace std;  
string s; 
int lcnt, vcnt; 
bool isVowel(int idx){
	return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}

int main () { 
	while(true){
		cin >> s; 
		if(s == "end")break; 
		lcnt = vcnt = 0;
		bool flag = 0;
		bool is_include_v = 0;
		int prev = -1;
		for(int i=0; i<s.size(); i++){
			int idx=s[i];
			if(isVowel(idx)){
			 lcnt++; vcnt=0, is_include_v=1;
			 } // 모음하나 반드시 존재 
			else {
				vcnt++;
				lcnt=0;
			}
			//cout<<lcnt<<":"<<vcnt<<endl;
			if(lcnt==3 || vcnt==3) flag=1; // 3개연속이면 false 
			
			if((s[i]=='e')||(s[i]=='o')&& lcnt==2) continue; 
			if((lcnt==2||vcnt==2)&&s[i]==s[i-1]) flag=1; 
			
		}

		if(is_include_v == 0) flag = 1;
		if(flag) cout << "<" << s << ">" << " is not acceptable.\n";
		else cout << "<" << s << ">" << " is acceptable.\n";
	} 
	return 0;
}
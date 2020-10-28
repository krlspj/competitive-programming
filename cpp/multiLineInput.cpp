#include <bits/stdc++.h>
using namespace std;

void pVect(vector<string>);
int k;

int main(){
	scanf("%d", &k);
	vector<string> wds;

	for(int i = 0; i < k; i++){
		char w [100];
		scanf("%s", w);
		wds.push_back(w);
	}
	// pVect(wds);
	vector<string> nw;
	for ( string s : wds){
		if(s.length() <= 10){
			nw.push_back(s);
		}else{
			string ns = s[0] + to_string(s.length() - 2) + s[s.length() -1];
			nw.push_back(ns);
		}
	}
	pVect(nw);
}

void pVect (vector<string> a){
	for(string s : a){
		cout << s << endl;
	}
}


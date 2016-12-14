#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

void split( string str ){
	vector<int> internal;
	stringstream ss(str);
	string tok;
	while(getline(ss, tok, ' ')){
		internal.push_back(stoi(tok)-1);
		ct++;
	}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n, p;
	cin >> n;
	while (n--){
		cin >> p;
		cin.ignore();
		string s;
		vector<pair<int,int>> nb;
		for (int i = 0; i < p; i++){
			ct  = 0;
			getline(cin,s);
			split(s);
			nb.pb(mp(i,ct));
		}
		
		for (int i = 0; i < p; i++){
			memset(vis,0,sizeof(vis));
			ct = 0;
			dfs(i);
			
		}
		sort(nb.begin(),nb.end(),bili());
		cout << nb[0].first + 1;
		for (int i = 1; i < p; i++){
			if (nb[i].second > nb[i-1].second) break;
			cout << " " << nb[i].first + 1;
		}
		cout << endl;
	}
	return 0;
}

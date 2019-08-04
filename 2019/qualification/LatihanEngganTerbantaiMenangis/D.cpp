#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int N, M;
vector<int> nex[100100];
bool visited[100100];
int ans;

int BFS (int now){
	visited[now]=true;

	for (int i=0;i<nex[now].size();i++){
		if (!visited[nex[now][i]]) return 1+BFS(nex[now][i]);
	}

	return 1;
}
int main (){
	memset(visited,false,sizeof(visited));
	cin>>N>>M;
	for (int i=1;i<=M;i++){
		int a,b;
		cin>>a>>b;
		nex[a].pb(b);
		nex[b].pb(a);
	}
	for (int i=1;i<=N;i++){
		if (!visited[i]){
			int nKota = BFS(i);
			ans += nKota/2;
		}
	}

	cout<<ans<<endl;
}


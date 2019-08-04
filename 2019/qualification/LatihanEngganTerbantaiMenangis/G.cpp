#include<bits/stdc++.h>
using namespace std;

int bilA[100100],bilB[100100];
int n, k;

int main (){
	memset(bilA,0,sizeof(bilA));
	memset(bilB,0,sizeof(bilB));
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		int a;
		cin>>a;
		bilA[a]++;
	}
	for (int i=1;i<=n;i++){
		int a;
		cin>>a;
		bilB[a]++;
	}

	int ans=0;

	int maks=0;
	int Nmaks=0;
	for (int i=1;i<=100000;i++){
		if (bilA[i] > maks){
			Nmaks=i;
			maks=bilA[i];
		}
	}
	ans=maks-(n-bilB[Nmaks]);

	maks=0;
	Nmaks=0;
	for (int i=1;i<=100000;i++){
		if (bilB[i] > maks){
			Nmaks=i;
			maks=bilB[i];
		}
	}
	ans=max(ans, maks-(n-bilA[Nmaks]));

	cout<<(ans <= k? "Ya" : "Tidak")<<endl;
}


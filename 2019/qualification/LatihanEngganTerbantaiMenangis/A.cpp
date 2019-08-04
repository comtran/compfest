#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define pb push_back
#define fi first
#define se second

ull A,B;
vector<pair<ull, ull> > input;

ull counts (ull A, ull B){
	A--;
	A = A*(A+1)/2;
	B = B*(B+1)/2;
	return B-A;
}

ull sums;

int main (){
	int t;
	cin>>t;
	while (t--){
		ull x,y;
		cin>>x>>y;
		input.pb({x,y});
	}
	sort(input.begin(),input.end());

	A = input[0].fi;
	B = input[0].se;

	for (int i=1; i<input.size();i++){

		if (input[i].fi <= B) {
			B = max(B,input[i].se);
		}
		else {
			sums += counts(A,B);
			A = input[i].fi;
			B = input[i].se;
		}
	}

	sums += counts(A,B);

	cout<<sums<<endl;
}


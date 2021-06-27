		#include<bits/stdc++.h>
		using namespace std;

		int main(){

			int n;
			cin>>n;

			vector<int> v;

			for(int i=0;i<n;i++){

				int a;

				cin>>a;
				v.push_back(a);
			}

			for(auto it=v.begin();it!=v.end();it++)
				cout<<*it<<endl;

		return 0;
		}
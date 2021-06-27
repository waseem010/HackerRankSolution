		#include<bits/stdc++.h>
		using namespace std;

		int main(){

			int no;
			cin>>no;
			vector<int> v;


			for(int i=0;i<no;i++){

				int a;
				cin>>a;
				v.push_back(a);
			}

			int max = *max_element(v.begin(),v.end());
			cout<<max;



		return 0;
		}
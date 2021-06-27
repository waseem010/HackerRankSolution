		#include<bits/stdc++.h>
		using namespace std;

		int main(){

			int no;
			cin>>no;
			vector<int> v;

			int count=0;


			for(int i=0;i<no;i++){

				int a;
				cin>>a;
				v.push_back(a);
			}

			int max = *max_element(v.begin(),v.end());
		


			for(int i=0;i<no;i++){

				if(v[i]==max){
					count++;
				}


			}

			cout<<count<<endl;



		return 0;
		}
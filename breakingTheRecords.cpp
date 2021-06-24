		#include<bits/stdc++.h>
		using namespace std;

		int main(){


			int n;
			cin>>n;
			int arr[1000];

			for(int i=0;i<n;i++){

				cin>>arr[i];

			}


			int h=arr[0];
			int l=arr[0];
			int h_count=0;
			int l_count=0;

			for(int i=0;i<n;i++){
				if(arr[i]>h){
					h_count++;

					h=arr[i];
				}
			}



			for(int i=0;i<n;i++){
				if(arr[i]<l){
					l_count++;

					l=arr[i];
				}
			}


				cout<<h_count<<" "<<l_count<<endl;

		return 0;
		}

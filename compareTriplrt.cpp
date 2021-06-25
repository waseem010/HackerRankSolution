		#include<bits/stdc++.h>
		using namespace std;

		int main(){


			int arr[100],brr[100],alice=0,bob=0;


			for(int i=0;i<3;i++){
				cin>>arr[i];
				
			}


			for(int i=0;i<3;i++){
				cin>>brr[i];
				
			}

			for(int i=0;i<3;i++){
				if(arr[i]>brr[i]){
					alice++;
				}
				else if(arr[i]<brr[i]){
					bob++;
				}
				else{

				}
			}

			cout<<alice<<" "<<bob;



		return 0;
		}
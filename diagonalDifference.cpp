		#include<bits/stdc++.h>
		using namespace std;

		int main(){


			int no;
			cin>>no;

			int arr[no][no];

			int ld=0;
			int rd =0;s


			for(int i=0;i<no;i++){
				for(int j=0;j<no;j++){
					cin>>arr[i][j];

					if(arr[i]==arr[j]){

						ld = ld+arr[i][j];
					}

				}
			}

			for(int i=0;i<no;i++){
				for(int j=no-1-i;j>=0){

					rd=rd+arr[i][j];
				}
			}


			cout<<abs(ld-rd)<<endl;

		return 0;
		}
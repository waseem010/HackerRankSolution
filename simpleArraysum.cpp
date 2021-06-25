#include<bits/stdc++.h>
        using namespace std;

        int main(){


            int no;
            cin>>no;

            int arr[1000];
            int sum=0;

            for(int i=0;i<no;i++){
                cin>>arr[i];
            }

            for(int i=0;i<no;i++){
                sum = sum+arr[i];
            }

            cout<<sum;

        return 0;
        }

#include<bits/stdc++.h>
using namespace std;

int main(){

	int v1,v2,x1,x2;
	cin>>v1>>v2;
	cin>>x1>>x2;


	while(true){

		if(v1==v2 || x1>x2 && v1>v2 || x1<x2 && v1<v2 ){
			cout<<"NO"<<endl;
			break;
		}

		if((x1 += v1) == (x2 +=v2))		{
			cout<<"YES"<<endl;
			break;
		}
	}


		return 0;
		}
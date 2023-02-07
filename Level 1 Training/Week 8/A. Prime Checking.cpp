#include<bits/stdc++.h>
using namespace std;
int main() {
   long long num;
   cin>>num;
   bool Prime = true;
   
   if(num == 0 || num == 1){
   		Prime = false;
   }
   for(int i=2;i<= sqrt(num);i++){ //
   		if(num % i == 0){
   			Prime = false;
   			break;
		}
   }
   if(Prime){
   	cout<<"YES"<<endl;
   } else {
   	   	cout<<"NO"<<endl;
   }
}

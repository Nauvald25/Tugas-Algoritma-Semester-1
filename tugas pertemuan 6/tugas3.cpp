#include <iostream>
 using namespace std;
 int main(){
 	int a=2,b=20,n;
 	
 	for(a=a;a<=b;a+=2){
 		cout<<a;
 		if(a<b){
 			cout <<" + ";
 			
		 }
 		
	 }
 	
 	cout<< " = ";
 	n=b/2;
 	n=n*(n+1);
 	cout <<n;
 	return 0;
 }

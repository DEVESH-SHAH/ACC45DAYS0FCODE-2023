#include <iostream>

using namespace std;



int main() {

	int t;

	cin>>t;

	while(t){

	    int A,B;

	    cin>>A>>B;int inc=1;

	    while(1)

	    {

	        A-=inc;

	        if(A<0){

	            cout<<"Bob"<<endl;

	            break;

	        }else{inc++;}

	        B-=inc;

	        if(B<0){

	            cout<<"Limak"<<endl;

	            break;

	        }else{inc++;}

	    }

	    t--;

	}

	return 0;

}

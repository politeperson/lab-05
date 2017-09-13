#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
string w;
string rpt="";
cin >> w;
if(int(w[i]) >= 65 && int(w[i]) <=90 || int(w[i]) >= 97 && int(w[i]) <= 122){
	rpt+=w[i]
}

for(int i = 1; i < w.size(); i++){
if(int(w[i]) >= 65 && int(w[i]) <=90){
	rpt+=' ';
	rpt+=w[i]
}
	if(int(w[i]) >= 97 && int(w[i]) <= 122){
		rpt+=w[i];	
		        
	}
}

 cout << rpt << endl;    
return 0;
}
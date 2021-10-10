#include<iostream>
using namespace std;

void generate_strings(char *in,char *out,int i,int j){

	if(in[i] =='\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	//recursive case
	//one digit at a time
	int digit=in[i]-'0';
	char ch=digit+'A'-1;
	out[j]=ch;
	generate_strings(in,out,i+1,j+1);

	//two digits at a time
	if(in[i+1] != '\0'){
		int second=in[i+1]-'0';
		int no=digit*10+second;
		if(no<=26){
			ch=no+'A'-1;
			out[j]=ch;
			generate_strings(in,out,i+2,j+1);
		}
	}
	return;
}

int main(){

	char in[20];
	cin>>in;
	char out[20];
	generate_strings(in,out,0,0);


	return 0;
}

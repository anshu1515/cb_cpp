#include<iostream>
#include <cstring> 
using namespace std;

bool compare(char *a,char b[]){
	int i=0,j=0;
	int lena=strlen(a);
	int lenb=strlen(b);
	while(i<lena and j<lenb){
		if(a[i] != b[j]){
			return false;
		}
		i++;
		j++;
	}
	if(a[i] !='\0' || b[j] != '\0'){
		return false;
	}
	else{
		return true;
	}
}

void concat(char *a,char *b){
	int i=strlen(a);
	int lenb=strlen(b);
	for(int j=0; j<=lenb; j++){
		a[i]=b[i];
		i++;
	}
}

int main(){

	char a[1000];
	char b[1000];
	cin.getline(a,1000);
	cin.getline(b,1000);

	// concat(a,b);

	//inbulit function for concatenation
	// strcat(a,b);


	// if(compare(a,b) == true){
	// 	cout<<"Match"<<endl;
	// }
	// else{
	// 	cout<<"not match"<<endl;
	// }

	//inbuilt function
	//strcmp -->return 0 when match else return 1
	if(strcmp(a,b) == 0){
		cout<<"Match"<<endl;
	}
	else{
		cout<<"not match"<<endl;
	}

	return 0;
}
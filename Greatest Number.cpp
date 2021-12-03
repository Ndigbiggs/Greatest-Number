 #include <iostream>
using namespace std;

int max(int, int, int);
int max(int a, int b, int c){
	int max;
	if(a > b && a > c){
		max = a;
	}else if(b > a && b > c){
		max = b;
	}else
	max= c;
	
	return max;
}

int main(){
	int a, b, c;
	char response;
	do{
	cout<<"Input 3 numbers and I will show you the greatest:"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
		cout<<"The greatest number is:"<< max(a,b,c)<<endl;
		cout<<"Do you wish to continue(yes/no)?";
		cin>>response;
	}while(response=='yes');
		return 0;
}

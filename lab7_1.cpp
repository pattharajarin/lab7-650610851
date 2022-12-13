#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text;
    cout << "Input text: ";      
	cin >> text;
	string x = func1(text);
	string y = func2(x);
	string z = func2(text);                                                        
    cout << "Reversed text: "<<x<<"\n";
    cout << "Palindrome: ";
	if (y==z)
	{
		cout << "Yes";
	}else{
		cout << "No";
	}
    return 0;
}

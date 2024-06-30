/// String Plaindrome, String Reverse

#include <iostream>
#include <string>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' and ch <= 'z')
        return ch;
    else if(ch >= 'A' and ch <= 'Z')
        return ch -'A' + 'a';
}

bool isPlaindrome(char name[], int n){
    int start =0;
    int end = n-1;
    
    while (start <= end) {
            if (toLowerCase(name[start]) != toLowerCase(name[end])){
                return false;
                break;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
}

int getLength(char name[]){
    int ctn =0;
    for (int i=0; name[i]!='\0'; i++)
        ctn ++;
        
    return ctn;
}

void reverse(char name[], int n){
    int start =0;
    int end = n-1;
    
    while(start<end)
        swap(name[start++], name[end--]);
}

int main(){
    char name[500];
    cout << "Enter your name: "<<endl;
    cin>>name;
    
    cout << "Your name is :"<< name << endl;;
    int len = getLength(name);
    
    cout <<"And length is: "<< len <<endl;
    
    reverse(name, len);
    cout << "Your name is :"<< name << endl;;
    
    cout<<"Is plaindrome? "<< isPlaindrome(name, len) <<endl;
    
    
    
}
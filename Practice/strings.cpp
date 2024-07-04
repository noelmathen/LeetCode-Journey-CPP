#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "Hello";
    cout<<str1<<endl;
    string str2(str1), str3, str4;
    cout<<str2<<endl;
    str3 = str1+" "+str2;
    cout<<str3<<endl;

    str3.insert(5, ",");
    cout<<str3<<endl;
    str3.erase(6, 2);
    cout<<str3<<endl;
    cout<<str3.size()<<endl<<endl;

    string str = "Hello, Worlld!";
    size_t pos = str.find("World"); // Returns the starting index of "World"
    if(pos==string::npos){
        cout<<"Not found"<<endl;
    }
    pos = str.rfind("ll", 5);           // Finds the last occurrence of 'l'
    cout<<pos<<endl;
    pos = str.find_first_of("aeiou"); // Finds the first vowel
    cout<<pos<<endl;
    pos = str.find_last_of("aeiou");  // Finds the last vowel
    cout<<pos<<endl;
    pos = str.find_first_not_of("Hello"); // Finds the first character not in "Hello"
    cout<<pos<<endl;
    pos = str.find_last_not_of("!");   // Finds the last character not '!'
    cout<<pos<<endl;

    str4 = str.substr(0, 6);
    cout<<str4<<endl;

    for(auto it=str4.begin(); it!=str4.end(); it++){
        cout<<*it;
    }
    cout<<endl;
    for(auto i:str4){
        cout<<i;
    }
    cout<<endl;
    for(int i=0; i<str4.size(); i++){
        cout<<str4.at(i);
    }
    cout<<endl<<endl;

    int integer=456, x, y, z;
    float floatNumber = 789.123;
    string num1="123", num2="1234.5", output;

    x = stof(num2);
    // x+=1.1;
    cout<<x<<endl;
    output = "Integer: " + to_string(integer) + "\nFloat: " + to_string(floatNumber);
    cout<<output<<endl;


    int num = std::stoi("123");    // Converts string to int
    float fnum = std::stof("123.5"); // Converts string to float

    cout<<num<<" "<<fnum;


    
    



    return 0;
}

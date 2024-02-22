#include<iostream>
#include<exception>

using namespace std;

void increment(int &ref){   //used instead of pointers
    ref+=10;
}

class Student{
    public:
        string name;
        int rno, age;
        Student(int age){
            this->age = age;
        }
        void print(){
            cout<<"Name of student is: "<<name<<endl;
            cout<<"Rno of student is : "<<rno<<endl;
            cout<<"Age of student is : "<<age<<endl;
        }
        
};

int main(){
    //pointers
    int a=1;
    int *ptr = &a;  //pointer named ptr pointing to int a(address of a);
    cout<<*ptr<<endl;

    //references
    int b=2;
    int &ref = b;   //ref is an alias for b. ref cannot be used for operations or referenced to another variable ever again
    cout<<ref<<endl;
    increment(ref); 
    cout<<"After incrementing: "<<endl<<"b="<<b<<endl<<"ref="<<ref<<endl<<endl; //when ref is incremented(from 2 to 12), the value of b also changes(from 2 to 12)

    //dynamic memory allocation
    cout<<"DYNAMIC MEMORY ALLOCATION"<<endl;
    int *c = new int;   //dunamically allocating a single variable. stored in heap.
    *c=20;
    cout<<*c<<endl;
    delete c;   //deleting space allocated for c to prevent memory leaks

    int *d = new int(30);   //value can be initialized during allocation itself
    cout<<*d<<endl;
    delete d;

    //dma for arrays
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int *arr = new int[size];   //array size is determined during runtime. not compile time. 
    for(int i=0; i<size; i++){
        arr[i] = i*2;
        cout<<arr[i]<<" ";
    }
    delete[] arr; //to delete a whole array
    cout<<endl<<endl;

    //dma for classes
    Student *student = new Student(21); //this consturctor feature can only be done in new operator. malloc() cannot directly call constructor while new will.
    (*student).name = "Noel";   //access using '.' operator. for that, '*' is used. and also should be enclosed in branckets to ensure proper precedence 
    student->rno = 1;   //anotehr way to access
    (*student).print();
    delete student;

    //exception
    try
    {
        int *large = new int[99999999999999999];
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Allocation failed. \nReason: "<< e.what() << '\n';
    }
    

    return 0;
}

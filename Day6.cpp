// #include<iostream>
// #include<conio.h>
// using namespace std;
// void mySwap(int &a, int &b){
// int temp = a;
// a = b;
// b = temp;
// }
// int main() {
// int a = 5, b = 6;
// mySwap(a,b);
// cout << a << " " << b;
// return 0;
// }


// #include<iostream>
// #include<array>
// using namespace std;
// int main() {
// int arr[5] = {10, 20, 30, 40, 50};
// cout << arr<<" "<<&arr[0]<<" "<<&arr[1]<<" "<<&arr[2];
// return 0;
// }    

// Class&Object
// #include<iostream>
// using namespace std;
// class student {
// private:
// int roll;
// string name;
// float per;
// public:
// void setData(int r, string n,float p) {
// roll = r;
// name = n;
// per = p;
// }
// void getData() {
// cout << "enter roll, name and per:";
// cin >> roll;
// cin.ignore();
// getline(cin,name);
// cin >> per;
// }
// void output(){
// cout<<roll<<" "<<name<<" "<<per<<endl;
// }
// };
// int main() {
// student s1,s2;
// s1.setData(101,"Amit singh",75.21);
// s1.output();
// s2.getData();
// s2.output();
// return 0;
// }  

// this pointer
// #include<iostream>
// using namespace std;
// class demo {
// int a; //member variables
// float b;
// public:
// void setData(int a, float b) {
// this->a = a;
// this->b = b;
// }
// void output() {
// cout << a << " " << b << endl;
// }
// };
// int main() {
// demo d1;
// d1.setData(100,25.75);
// d1.output();
// return 0;
// }

// Constructor
// #include<iostream>
// using namespace std;
// class demo {
// public:
// demo() {
// //constructor
// cout << "Constructor called\n";
// }
// };
// int main() {
// demo d1,d2,d3,d4;
// return 0;
// }

// Parametorized constructor
#include<iostream>
using namespace std;
class demo {
int a;
float b;
public:
demo(){ // constructor
cout << "Constructor called\n";
}
demo(int a) {
this->a = a;
cout << "One Para constructor called\n";
}
demo(int a, float b) { //two parameterized constructor
this->a = a;
this->b = b;
cout << "Two Para constructor called\n";
}
//one parameterized constructor
};
int main() {
demo d1;
// demo d2 = 10;
// demo d2(10);
demo d2 = demo(10);
// demo d3(10,75.25);
demo d3 = demo(10, 75.25);
return 0;
}


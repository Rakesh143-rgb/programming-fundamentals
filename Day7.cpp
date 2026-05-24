// #include<iostream>
// using namespace std;
// class demo {
// int a;
// float b;
// public:
// demo(){
// // constructor
// cout << "Constructor called\n";
// }
// ~demo() {
// cout << "Destructor called\n";
// }
// };
// int main() {
// demo d1;
// {
// demo d2;
// }
// demo d3;
// return 0;
// }

// #include<iostream>
// using namespace std;
// using namespace std;
// class demo {
// int a;
// public:
// demo(int x){
// a = x;
// cout << "Constructor called "<<a<<endl;
// }
// ~demo() {
// cout << "Destructor called "<<a<<endl;
// }
// // constructor
// };
// int main() {
// demo d1 = 10, d2 = 20, d3 = 30;
// return 0;
// }

// Inheritance
// #include<iostream>
// using namespace std;
// class A {
// int x;
// public:
// void fun1() {
// cout << "class-A" << endl;
// }
// };
// class B:public A {
// int y;
// public:
// void fun2() {
// cout << "Class-B" << endl;
// }
// };
// int main() {
// B b1;
// b1.fun2();
// b1.fun1();
// cout << sizeof(b1);
// return 0;
// }

// Single Level Inheritance
// #include<iostream>
// using namespace std;
// class A {
// int x;
// public:
// A() {
// cout << "Default class-A\n";
// }
// A(int x){
// this->x = x;
// cout << "para class-A\n";
// }
// void output() {
// cout << x<<" ";
// }
// };
// class B:public A {
// int y;
// public:
// B() {
// cout << "default class-B\n";
// }
// B(int x, int y):A(x) {
// this->y = y;
// cout << "Para class-B\n";
// }
// void output() {
// A::output();
// cout << y << " ";
// }
// };
// int main() {
// B b1(10,20);
// b1.output();
// return 0;
// }

// Multilevel Inheritance
// #include<iostream>
// using namespace std;
// class A {
// int x;
// public:
// A() {
// cout << "Default class-A\n";
// }
// A(int x){
// this->x = x;
// cout << "para class-A\n";
// }
// void output() {
// cout << x<<" ";
// }
// };
// class B:public A {
// int y;
// public:
// B() {
// cout << "default class-B\n";
// }
// B(int x, int y):A(x) {
// this->y = y;
// cout << "Para class-B\n";
// }
// void output() {
// A::output();
// cout << y << " ";
// }
// };
// class C:public B {
// int z;
// public:
// C():B() {
// cout << "Default class-C\n";
// }
// C(int x, int y, int z):B(x,y) {
// this->z = z;
// cout << "Para class-C\n";
// }
// void output() {
// B::output();
// cout << z << " ";
// }
// };
// int main() {
// C c1(10,20,30);
// c1.output();
// return 0;
// }

// Multiple Inheritance
// #include<iostream>
// using namespace std;
// class A {
// int x;
// public:
// A() {
// cout << "Default class-A\n";
// }
// A(int x){
// this->x = x;
// cout << "para class-A\n";
// }
// void output() {
// cout << x<<" ";
// }
// };
// class B {
// int y;
// public:
// B() {
// cout << "default class-B\n";
// }
// B(int y) {
// this->y = y;
// cout << "Para class-B\n";
// }
// void output() {
// cout << y << " ";
// }
// };
// class C:public B,public A {
// int z;
// public:
// C():A(),B() {
// cout << "Default class-C\n";
// }
// C(int x, int y, int z):A(x),B(y) {
// this->z = z;
// cout << "Para class-C\n";
// }
// void output() {
// A::output();
// B::output();
// cout << z << " ";
// }
// };
// int main() {
//  C c1(10,20,30);
//  c1.output();
// return 0;
// }

// Protected Access Specifier
// #include<iostream>
// using namespace std;
// class A {
// protected:
// int x;
// public:
// A(int x){
// this->x = x;
// cout << "para class-A\n";
// }
// void output() {
// cout << x<<" ";
// }
// };
// class B:public A{
// int y;
// public:
// B(int x, int y):A(x){
// this->y = y;
// cout << "Para class-B\n";
// }
// void output() {
// cout << x << " ";
// cout << y << " ";
// }
// };
// int main() {
// B b1(10, 20);
// b1.output();
// // b1.x = 10; error
// return 0;
// }

// Diamond Problem
// #include<iostream>
// using namespace std;
// class A {
// public:
// void fun1() {
// cout << "Class-A\n";
// }
// };
// class B:public virtual A{
// public:
// void fun2() {
// cout << "Class-B\n";
// }
// };
// class C:public virtual A{
// public:
// void fun3() {
// cout << "Class-C\n";
// }
// };
// class D:public B, public C{
// public:
// void fun4() {
// cout << "Class-D\n";
// }
// };
// int main() {
// D d1;
// d1.fun4();
// d1.fun2();
// d1.fun3();
// d1.fun1();
// return 0;
// }

// Dyanamic Binding
// #include<iostream>
// using namespace std;
// class A {
// public:
// virtual void fun1() {
// cout << "Class-A\n";
// }
// };
// class B:public A{
// public:
// void fun1() {
// cout << "Class-B\n";
// }
// };
// int main() {
// B b1;
// A *p;
// p = &b1;
// p->fun1();
// return 0;
// }

#include<iostream>
using namespace std;
class shape{
public:
virtual void getData(){
cout << "Shape class\n";
}
virtual void calArea(){
cout << "Shape class\n";
}
virtual void output() {
cout << "Shape class\n";
}
};
class circle:public shape{
int r;
float area;
public:
void getData(){
cout << "Enter radius:";
cin >> r;
}
void calArea(){
area = 3.14159*r*r;
}
void output() {
cout << "Area = " << area;
}
};
class rect:public shape{
int l,b,area;
public:
void getData(){
cout << "Enter value of L and B:";
cin >> l>>b;
}
void calArea(){
area = l*b;
}
void output() {
cout << "Area = " << area;
}
};
int main() {
shape *p;
int n;
cout << "1. circle, 2. rect:";
cin >> n;
if(n==1){
circle c1;
p = &c1;
}
else {
rect r1;
p = &r1;
}
p->getData();
p->calArea();
p->output();
}
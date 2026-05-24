// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main() {
// int n,a,b;
// do {
// system("cls");
// cout << "1. Add\n";
// cout << "2. Sub\n";
// cout << "3. Mult\n";
// cout << "4. Div\n";
// cout << "0. Exit\n";
// cout << "Enter your choice:";
// cin >> n;
// switch(n){
// case 1:
// cout << "Enter 2 numbers:";
// cin >> a >> b;
// cout << a + b;
// getch();
// break;
// case 2:
// cout << "Enter 2 numbers:";
// cin >> a >> b;
// cout << a- b;
// getch();
// break;
// case 3:
// cout << "Enter 2 numbers:";
// cin >> a >> b;
// cout << a * b;
// getch();
// break;
// case 4:
// cout << "Enter 2 numbers:";
// cin >> a >> b;
// cout << a / b;
// getch();
// break;
// case 0:
// cout << "Bye Bye!!";
// break;
// default:
// cout << "Invalid choice!";
// getch();
// }
// } while(n!=0);
// return 0;
// }

// call by value
// #include<iostream>
// #include<conio.h>
// using namespace std;
// int fact(int n) {
// int temp = 1;
// while(n) {
// temp *= n;
// n--;
// }
// return temp;
// }
// int main() {
// int ans = fact(6);
// cout << ans;
// return 0;
// }

// default Argument function
// #include<iostream>
// #include<conio.h>
// using namespace std;
// int sum(int a, int b, int c=0, int d=0){
// return a + b + c + d;
// }
// int main() {
// cout << sum(10, 20);
// return 0;
// }

// // function overloading
// #include<iostream>
// #include<conio.h>
// using namespace std;
// int sum(int a, int b){
// return a + b;
// }
// float sum(float a, float b){
// return a + b;
// }
// double sum(double a, double b){
// return a + b;
// }
// int main() {
// cout << sum(10, 20)<<endl;
// cout << sum(7.5, 8.4)<<endl;
// cout << sum(10.5f, 20.7f)<<endl;
// return 0;
// }

// #include<iostream>
// #include<conio.h>
// using namespace std;
// double sum(double a, double b){
// return a + b;
// }
// int main() {
// cout << sum(10, 20)<<endl;
// cout << sum(7.5, 8.4)<<endl;
// cout << sum(10.5f, 20.7f)<<endl;
// return 0;
// }

// Recursive function
// #include<iostream>
// #include<conio.h>
// using namespace std;
// int fact(int n) {
// if(n==0)
// return 1;
// return n * fact(n - 1);
// }
// int main() {
// int ans = fact(5);
// cout << ans;
// return 0;
// }

// #include<iostream>
// #include<conio.h>
// using namespace std;
// int power(int n,int p) {
// if(p==0)
// return 1;
// return n * power(n,p-1);
// }
// int main() {
// int ans = power(5,3);
// cout << ans;
// return 0;
// }

// #include<iostream>
// #include<conio.h>
// using namespace std;
// void series(int n) {
// if(n==0) return;
// series(n - 1);
// cout << n << " ";
// }
// int main() {
// series(50);
// return 0;
// }

// #include<iostream>
// #include<conio.h>
// using namespace std;
// int fibo(int n) {
// if(n==1 || n==0)
// return n;
// return fibo(n-1) + fibo(n-2);
// }
// int main() {
// cout << fibo(6);
// return 0;
// }

// Pointer
#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *p, int *q) {
int temp = *p;
*p = *q;
*q = temp;
}
int main() {
int a = 5, b = 6;
swap(&a, &b);
cout << a << " " << b;
return 0;
}


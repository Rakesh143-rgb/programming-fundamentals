// fabonacii series
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n;
// cout << "Enter no of terms:";
// cin >> n;
// for(int i = 1,a = 0, b = 1; i <= n; i++) {
// int c = a + b;
// cout << b << " ";
// a = b;
// b = c;
// }
// return 0;
// }

// is prime
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n;
// cout << "Enter a no:";
// cin >> n;
// bool flag = true;
// for (int i = 2; i <= n/2; i++) {
// if(n%i==0){
// flag = false;
// break;
// }
// }
// if(flag)
// cout << "Prime";
// else
// cout << "Not prime";
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter a range:";
// cin >> n>>m;
// while(n<=m)
// {
// bool flag = true;
// for (int i = 2; i <= n/2; i++) {
// if(n%i==0){
// flag = false;
// break;
// }
// }
// if(flag)
// cout << n<<" ";
// n++;
// }
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// for (int i = 1; i <= n; i++) {
// for (int j = 1; j <= n; j++)
// {
// cout << j << " ";
// }
// cout << endl;
// }
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// for (int i = 1; i <= n; i++) {
// for (int j = 1; j <= i; j++)
// {
// cout << j << " ";
// }
// cout << endl;
// }
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// for (int i = 1; i <= n; i++) {
// for (int j = i; j >= 1; j--)
// {
// cout << j << " ";
// }
// cout << endl;
// }
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n;
// cout << "Enter no of rows:";
// cin >> n;
// for (int i = n; i >= 1; i--) {
// for (int j = i; j >= 1; j--)
// {
// cout << j << " ";
// }
// cout << endl;
// }
// return 0;
// }

//  #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n;
// cout << "Enter no of rows:";
// cin >> n;
// for (int i = 1; i <= n; i++) {
// for (int j = i; j >= 1; j--)
// {
// cout << j%2 << " ";
// }
// cout << endl;
// }
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// int a = 1;
// for (int i = 1; i <= n; i++) {
// for (int j = 1; j <= i; j++,a++)
// {
// cout.width(3);
// cout << a;
// }
// cout << endl;
// }
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// int a = (n*n+n)/2;
// for (int i = 1; i <= n; i++) {
// for (int j = 1; j <= i; j++,a--)
// {
// cout.width(3);
// cout << a;
// }
// cout << endl;
// }
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// for (int i = 1; i <= n; i++) {
// for (int k = 1; k <= n- i;k++)
// cout << "  ";
// for (int j = 1; j <= i; j++)
// cout << j<<" ";
// cout << endl;
// }
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// for (int i = 1; i <= n; i++) {
// for (int k = 1; k <= n- i;k++)
// cout << "  ";
// for (int j = 1; j <= i*2-1; j++)
// cout << j<<" ";
// cout << endl;
// }
// return 0;
// }

#include<iostream>
#include<math.h>
using namespace std;
int main() {
int n,m;
cout << "Enter no of rows:";
cin >> n;
for (int i = 1; i <= n; i++) {
for (int k = 1; k <= n- i;k++)
cout << "  ";
for (int j = 1; j <= i; j++)
cout << j<<" ";
for (int l = i- 1; l >= 1;l--)
cout << l << " ";
cout << endl;
}
return 0;
}

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// for (int i = 1; i <= n; i++) {
// for (int k = 1; k <= n- i;k++)
// cout << "  ";
// for (int j = 1; j <= i; j++)
// cout << j<<" ";
// for (int l = i- 1; l >= 1;l--)
// cout<<l<<" ";
// cout << endl;
// }
// for (int i = n-1; i >= 1; i--) {
// for (int k = 1; k <= n- i;k++)
// cout << "  ";
// for (int j = 1; j <= i; j++)
// cout << j<<" ";
// for (int l = i- 1; l >= 1;l--)
// cout<<l<<" ";
// cout << endl;
// }
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// for (int i = 1; i <= n; i++) {
// for (int j = 1; j <= i; j++)
// cout << j<<" ";
// for (int k = 1; k <= (n-i)*2-1;k++)
// cout << "  ";
// for (int l = i ; l >= 1;l--){
// if(l==n)
// continue;
// cout<<l<<" ";
// }
// cout << endl;
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter an odd number: ";
//     cin >> n;

//     if (n % 2 == 0) {
//         cout << "Please enter an odd number!" << endl;
//         return 0;
//     }

//     int mid = n / 2;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             int value = max(abs(i - mid), abs(j - mid)) + 1;
//             cout << value << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

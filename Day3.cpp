// #include<iostream>
// using namespace std;
// int main() {
//     int i,n;
//     cout << "enter the number of terms :";
//     cin >> n;
    
//     i=1;

//     while(i<=n) {
//         cout << i << " ";
// i++;
// }
// return 0;
    
// }

// #include<iostream>
// using namespace std;
// int main() {
// int i, n;
// cout << "enter no of terms:";
// cin >> n;
// i = 1;
// while(i<=n) {
// cout << i*2-1 << " ";
// i++;
// }
// return 0;
// }

#include<iostream>
using namespace std;
int main() {
int fact=1, n;
cout << "enter a no:";
cin >> n;
while(n) {
fact *= n;
cout << n << "*";
n--;
}
cout << "\b=" << fact;
return 0;
}

// #include<iostream>
// using namespace std;
// int main() {
// int rev=0, n;
// cout << "enter a no ";
// cin >> n;
// while(n) {
// rev = rev * 10 + n % 10;
// n/=10;
// }
// cout << rev;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
// int rev=0, n, org;
// cout << "enter a no ";
// cin >> n;
// org = n;
// while(n) {
// rev = rev * 10 + n % 10;
// n/=10;
// }
// if(rev == org)
// cout << "Palindrome";
// else
// cout << "Not palindrome";
// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,org;
// double count = 0;
// cout << "Enter a number:";
// cin >> n;
// org = n;
// while(n){
// count++;
// n /= 10;
// }
// n = org;
// double arm = 0;  
// while(n){
// double digit = n % 10;
// arm += pow(digit, count);
// n = n / 10;
// }
// if(arm==org)
// cout << "Armstrong";
// else
// cout << "Not armstrong";
// return 0;
// }
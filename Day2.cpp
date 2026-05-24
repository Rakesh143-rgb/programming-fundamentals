/*
#include<iostream>
using namespace std;
int main() {
int a, b, c;
cout << "enter 3 numbers:";
cin >> a >> b >> c;
if(a>b)
{
if(a>c)
cout << a;
else
cout << c;
}
else
{
if(b>c)
cout << b;
else
cout << c;   
}
return 0;
}
   

#include<iostream>
using namespace std;
int main() {
int a, b, c, d;
cout << "enter 4 numbers:";
cin >> a >> b >> c >> d;
int max = a;
if(b>max)
max = b;
if(c>max)
max = c;
if(d>max)
max = d;
cout << max << " is greater";
return 0;
}


#include<iostream>
using namespace std;
int main() {
float per;
cout << "Enter your percentage:";
cin >> per;
if(per>=90)
cout << "Grade is A";
else if(per>=70)
cout << "Grade is B";
else if(per>=50)
cout << "Grade is C";
else
cout << "Grade is D";
return 0;
}


#include<iostream>
using namespace std;
int main() {
int day;
cout << "Enter no of a day:";
cin >> day;
switch(day) {
case 1:
cout << "Monday";
break;
case 2:
cout << "Tuesday";
break;   
case 3:
cout << "Wednesday";
break;
case 4:
cout << "Thursday";
break;
case 5:
cout << "Firday";
break;
case 6:
cout << "Saturday";
break;
case 7:
cout << "Sunday";
break;
default:
cout << "Invalid input";
}
return 0;
}
*/

#include<iostream>
using namespace std;
int main() {   
int calls;
float bill_amount;
cout << "Enter no of calls:";
cin >> calls;
if(calls<=100)
bill_amount = calls * 0.80;
else if(calls<=200)
bill_amount = 80 + (calls- 100) * 1;
else if(calls <= 500)
bill_amount = 180 + (calls- 200) * 2;
else
bill_amount = 780 + (calls- 500) * 2.50;
bill_amount += 100;
cout << bill_amount;
return 0;
}
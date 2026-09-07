// patterns 
/*

            True(If condition will be true then enter the for loop)[if condition falls then we will exit for loop]
            :
for(int i=1;i<3;i++){
     :
     execute(Initialization part )
   print(i);

}

inti=1;
while(i<3){
  print(i);
  i++;
  }

inserted for loop

for(int j=0; j<2;j++){
     for( int i=1;i<3;i++)
     {
          print(j,i);
     (jis for loop ke under hai us ke under he circle back kre)
     }


                                  j=0(Initialization value)
                                  i=1(Initialization value)..>0,1
                                  i=2...>0,2
                                  i=3(condition fall ab out of the innerloop and coming out the outer of loop)
                                  j=1
                                  i=1...>1,1
                                  i=2...>2,1
                                  i=3...>(condition fallexit the outer loop)

for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    print(*)
   }
   cout<<endl;
}
*/

// #include<iostream>
// using namespace std;

// int main (){
//    int n=4,m=5;
//    when same row print n time use nested for loop
//    for (int i = 1; i < n; i++){
//       cout<<"*";
//      for (int  j= 1; j < m; j++){
//        if(i==1 || i==n || j==1 || j==n)
//        {
//           cout<<"*";
//        }
//        else{
//          cout<<" ";
//        }
//    }
//      cout<<"*";
//      cout<<endl;
//   }
// }
/*
for(int i=1; i<=n;i++){
  for(int j=1; j<=i;j++)
  {
     cout<<"*";
  }
  cout<<endl;

                            *
                            **
                            ***
                            ****
                            *****

}
   for(int i=n; i>=1;i--){
  for(int j=1; j<=i;j++)
  {
     cout<<"*";
  }
  cout<<endl;
}
                 *****
                 ****
                 ***
                 **
                 *

n-(row-1)
n-(3-1)
n-2              sum of stars=n-i+1


*/

// #include<iostream>
// using namespace std;

// int main(){
//    int n=5;

//    for(int i=1; i<=n;i++) {
//      for (int j=1; j<=n-i+1; j++){
//       cout<<"*";
//    }
//    cout<<endl;
//   }
// }
/*

          *
         **
        ***
       ****
      *****
--------------------
      *****
       ****
        ***
         **
          *
   for(int i=1;i<=n,i++){
         stars=i
         space=n-i
    for ( int j=1; j<=space; j++)
   {
      cout<<" ";
   }

   for (int j=1; j <=stars ; j++)
    {
       cout<<"*";
    }
    cout<<endl;
  }
 }
}

for(int i=n;i>=1;i--)

    *****
    ****
    ***
    **
    *
int stars=n-i+1;

*/
// #include<iostream>
// using namespace std;

// int main ()
// {
//   int n=5;

// for(int i=n;i>=1;i--){
//    int space=n-i+1;
//    int stars=i;
//    for ( int j=1; j<=space; j++)
//    {
//       cout<<" ";
//    }

//    for (int j=1; j <=stars ; j++)
//     {
//        cout<<"*";
//     }
//     cout<<endl;
//   }
// }

// #include<iostream>
// using namespace std;

// int main ()
// {
//   int n=5;

// for(int i=n;i>=1;i--){
//    int space=n-i+1;
//    int stars=n;
//    for ( int j=1; j<=space; j++)
//    {
//       cout<<" ";
//    }

//    for (int j=1; j <=stars ; j++)
//     {
//        cout<<"*";
//     }
//     cout<<endl;
//   }
// }

// #include<iostream>
// using namespace std;

// int main ()
// {
//   int n=5;

// for(int i=1;i<=n;i++){
//    int one=n-i+1;
//    int zero=n;
//    for ( int j=1; j<=one; j++)
//    {
//       cout<<"1";
//    }

//    for (int j=1; j <=zero; j++)
//     {
//        cout<<" ";
//     }

//     cout<<endl;
//   }
// }

// Function

/*
function
->Make Reusable code
->code block
->Perform aspecific task

(in function input go it and findout output that what will be perform task)

make Tea(pen,gas,milk,water,sugar,tea)

  funcname(parameter)
             :
             input(data type)
......................................
:            add number(int a,int b)  :....>function prototype/definition
.....................................
inside this called implementation code

*/
// Q->Wright a function to check if a number is a palindrome in c++
/*
#include<iostream>
using namespace std;

bool isPalindrome(int n){
   int original=n;
   int reverse=0;
   while (n>0)
   {
      int digit=n%10;
      reverse=reverse*10+digit;
      n/=10;
   }
   return original==reverse;
}
int main (){
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if (isPalindrome(num))
  {
   cout<<num<<"is a palindrome";
  }else{
   cout<<num<<"is not a pailindrome";
  }
  return 0;
}

*/

//(A number is called palindrome if number is equal to the reverse of a number ex-121)
// Q->Wright a function to calculate the sum of digits of number
/*
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    n = abs(n);  // Handles negative numbers

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << sumOfDigits(num) << endl;

    return 0;
}

*/

// Q->Wright a function which takes 2 numbers as parameters(a&b)
// and output: a^2+b^2+2*ab.#include <iostream>
/*
using namespace std;

int calculate(int a, int b) {
    return (a * a) + (b * b) + (2 * a * b);
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Result = " << calculate(a, b) << endl;

    return 0;
}
*/
// Wright a function that print the largest of 3 number
/*
#include <iostream>
using namespace std;

void largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        cout << "Largest number = " << a;
    }
    else if (b >= a && b >= c) {
        cout << "Largest number = " << b;
    }
    else {
        cout << "Largest number = " << c;
    }
}

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    largest(a, b, c);

    return 0;
}


Wright a function that accept the character(ch)as parameters  &
and return the character that occurs after ch in the english alphabet.
eg:input='c',return 'd'
#include <iostream>
using namespace std;

char nextCharacter(char ch) {
    return ch + 1;
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Next character = " << nextCharacter(ch);

    return 0;
}


    */


/*

int add(int a,int b){   //function definition
  return a+b;
}
int main (){
  cout<<add(5,10)<<endl;         ...>print "15
}The actual value of parameter is called argument.

Modules
            a%b=?
            Remainder when a is divided by b
      10%7=3(Remainder)
  int a=13582    10 digit
  13582%10=2

  13582/10=1358
  a=1358%10=8
  1358/10=135
  135%13=5
  135/10=13
  13%10=3
  a=1
  a=0  ( there is no digit left to add)

Sum of digits(int n){
int sum=0;
while(n>0){
      ans+=(n%10) ;
      n=n/10;-->n/=10;
      }
      return ans;

"A function only return once"
it find largest(int a, int b, int c){
  if(a>=b) && (a>=c)){
    return a;}
  }
}

*/
/*
int find largest(int a, int b, int c){
  if(a>=b && a>=c) return a;
  if(b>=c && b>=c) return b;
  return c;


}





*/
/*#include<iostream>
using namespace std;

int sumofDigits(int n){
   int sum=0;
   while(n>0){
      return sum+=(n%10);
      n/=10;
   }

   return sum;
}
int calculateIdentity(int a,int b){
   //Logic:(a+b)*(a+b) is mathematically equivalent and faster
   return (a*a)+(b*b)+(2*a*a);
}
int findLargest(int a,int b,int c){
   if(a>=b && a>=c){//when uses the both condition the use &&
      return a;
   }else if(b>=a && b>=c){
      return b;
   }else{
      return c;
   }
}
char getNextChar(char ch){
   if(ch=='z') return 'a'; //because 'z'next next doesn't exist
   return ch + 1;
}

int main ()  //code execution start main function
{
   cout<<"Sum of digits(12345)";
   return 0;//Every return value is of significance to the os
   //0  means successful  execution of your program
}
   */

/*
BINARY sYSTEM-SESSION
o->1 called binary number
string 0 1 2 3 4 5
:
5 4 3 2 1 0
1 0 1 1 0 1
p=0;
dec=0;
n=s.size()
for(int i=n-1;i>=n;i++){
dec=dec+ (size[i])*2 power p
p++;
}

int bin=1001
sting bin="1001" But this is also good


num   -> Binary number being processed
#include <iostream>
using namespace std;

int main() {
    int num = 10101;
    int dec = 0;
    int p = 0;

    while (num > 0) {
        int digit = num % 10;
        num /= 10;

        dec += digit * (1 << p);
        p++;
    }

    cout << "Decimal = " << dec;

    return 0;
}
digit -> Current binary digit
p     -> Power/position (0,1,2,3...)
dec   -> Decimal answer

digit = 1
p = 0
dec = 0

dec = dec + digit * pow(2, p);

dec = 0 + 1 * pow(2,0);
dec = 0 + 1 * 1;
dec = 1;

digit = 0
p = 1
dec = 1

dec = 1 + 0 * pow(2,1);
dec = 1 + 0 * 2;
dec = 1;


*/

// #include<iostream>
// #include<string>
// #include <cmath>
// using namespace std;

// int main (){
//    string s= "10101";
//    int n= s.size();
//    int dec=0;
//    int p=0;
//    for (int i = n-1; i>= 0; i--)
//    {
//       cout<<"Currently at"<<i<<"This.position,Power to multiplay is 2"<<p<<endl;
//       dec=dec +(s[i]-'0') *pow( 2,p);
//       p++;
//    }
//    cout<<dec<<endl;
// }

// #include<iostream>
// #include<string>
// #include <cmath>
// using namespace std;

// int main (){
//   int num=71;
//   string bin ="";

//   while(num>0){
//    int digit = num%2;
//    num /=2;
//    bin = to_string(digit) + bin;
//   }
//   cout<<bin<<endl;
// }

// #include<iostream>
// #include<string>
// #include <cmath>
// using namespace std;

// int main (){
//   int num=71;
//   string bin ="";

//   while(num>0){
//    int digit = num%2;
//    num /=2;
//    bin = to_string(digit) + bin;
//   }
//   cout<<bin<<endl;
// }

/*class Solution{
   public:
      string addbinary(string a,string b){
       string s="";
       int i=a.size()-1; j=b.size()-1;
       int carry=0;

       while(i>=0 || j>=0 || carry !=0){
       int x=0, y=0;
       iF(i>=0){
         x>a[i]-'0' ;//If as character defined then sub 0
         }
         if(j>0){
             y=b[j]-'0';
         }
             int digit= x+y+carry;
             s= to_string(digit%2)+s;
             carry=digit/2;
             i==1;
             j==1;
       }
             return 0;

      }
}
*/
// #include<iostream>
// #include<string.h>
// using namespace std;

// class Solution{
//    public:
//       string addbinary(string a,string b){
//        string s="";
//        int i=a.size()-1;
//        int j=b.size()-1;
//        int carry=0;

//        while(i>=0 || j>=0 || carry !=0){
//        int x=0, y=0;
//        if(i>=0){
//          x=a[i]-'0' ;//If as character defined then sub 0
//          }
//          if(j>=0){
//              y=b[j]-'0';
//          }
//              int digit= x+y+carry;
//              s= to_string(digit%2)+s;
//              carry=digit/2;
//              i--;
//              j--;
//        }
//        return s;

//       }
// };

// POINTER

/*

int a=10(store the value)
a variable hai
  int *p=&a (* store the adr of the the other variable)

  a=HOUSE( store)
  *p store the address of house

  int a=10
  int *p=&a
  cout<<*p

  output:10

Q->What will be the output of the following code:
int x;
int *ptr;
x=7;
ptr=&x;
cout<<*ptr;

output:7

Q2->What will be the output of the following code:
  void multipleBy2(int &a,int &b, int &c){
    a*=2;
    b*=2;
    c*=2;
   }

   int main (){
    int x=1,y=2,z=3;
    multipleBy2(x,y,z);
    cout<<x<<y<<z<<"\n";
    return 0;
    }

output: 246

Q3->What will be the output
int a=32;
int *ptr=&a;

char ch='a';
char & cho =ch;  //sky  value of car capital A 65
cho +=a;
*ptr +=ch;    //& by ref
*ptr +=ch;
cout<<a<<","<<ch<<endl;

output:
*/
/*
a=32;
ptr=&a;
char ch ='A'
char & cho=ch
cho= cho+a
   =65+32
cho=95
*ptr =ch
a=a+ch
=32+97
=129
print(129,a)

*/

/*
int *p-new int(10)
{delete  p}
cout<<*p;      //in this condition give the gear value

           X
X         : :
: :    :  : :
: :    :  : :
: :    :  : :
0 1  2 3 4 5.
............
4 2  0 3 2 5
*/
/*
An array is a data structure used to store a collection of elements (values or variables)all of the same time data type is  contiguous block of memory

key feature of an Array:
1->fixed size: The size(number of elements) of an array is defined at the size of creation and can not be changed
2->Same data type:All the elements in array must be The same type.


Linear search
    0  1   2   3  4
I/o 10 20  30  40 50

int n= all length
int count=0;
for (int i = 0; all < ; i++)
{
   if((i)%2==0)
   count++;
}
cout<<count;

Binary search( doit maintain order
 0 1 2 3 4
    1   3  12

q-> 0 shift at the end of the array
Non-zero value are not shift
q>Note that you must  do this without making a copy of te array


LINEAR SEARCH

0 1 2 3 4
0 1 0 3 12


first non zero           last me zero
   :                       :
--------------------------------
int index=-1;
for(i=0;i< ; i++)
{
 if(all[i]f=0){
 index++;
 swap(arr(index),arr[i]);
 }

}
 (index=-1  //I dont know that first position what the element fix)



Q-> there is a integer array nums stored in ascending order(with distinct values)
Prior to being passed to your function,nums is possibly left rotated at an unknown index k(1<=k<nums,length)such that the resulting index array is[num[k],mums[k+1],--num[n-1],num[0],num[1],---num[k-1]](o-indexed).For example,[0,1,2,3,4,5,6,7]might be left rotated by 3 indices and become[4,5,6,7,0,1,2],

Given the array numafter


the possible rotation and an integer target,return the index of target,if it is nums,-1 if it is not nums

you must write an algorithms with o(log n)runtime complexity


.0,1,2,3,4,5,6...............
4,5,6,7,0,1,2      (shorted rotated array)
.....................
                          1 2 3 4
                          2 3 4 1
                          3 4 2 1
                          4 3 2 1
                          ..............
                          1 2 3 4
                          ........

target:0
 0/p=4
target:10
o/p=-1


int low=0;
int heigh=n-1;
while()
{

Mid=(low+High)/2;
if(arr[mid]=target)
return Mid;
else if(arr[low]<=arr(mid))
{
if(target>=arr[low] &&  target<=arr[mid])
High=Mid;
   else{
         low=mid+1;
       }
       else
}


                  :
           .0,1,2,3,4,5,6...............
            4,5,6,7,0,1,2
             .... :  ....    (one part will be shorted when devid in two part  and binary search apply where It is is shorted)
>>>>>>>>>.             <<<<<<<<<<
     0    :  4  5  6  :   10
>>>>>>>>>>.            <<<<<<<
:                                :
So(This part is shorted)          No

Binary seach apply were this is shorted

target=0

}
Soting Algorithms



Bubble short
arry of first index will change other index
Becouse we will know that small value come to first

arr  30  50 40 20 10
      0  1  2  3  4

PASe 1->  i   i+1


   30  50 40 20 10
      ..
   30  50 40 20 10
         ..
   30  40 50 20 10
            ..
   30  40 20 50 10

   30  40 20 10 50   //50 short
              ..

PAss2->
   30  40 20 10 50

   30  20 40 10 50

   30  20 40 10 50

   30  20 10 40 50   // 40 and 50 are also shorted

Pass3_>

    30  20 10 10 50

    20  30 10 40 50

    20  10 30 40 50

    20  10 30 40 50      //30, 40 50 short


Case4->


    20  10 30 40 50

    10  20 30 40 50    //10 20 30 40 50  short
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*
                  Insertion Sort
     :
  40 : 20 50 30 10
  0  : 1  2   3  4   //20 will be shop 40 because 20 will small(i=1)
     :
              :
pass1-> 20 40 :50 30 10
        0  1  :2   3  4
              :(i=2)


pass 2-> 20 40 50 :30 10
         0  1  2  : 3  4
                  :(i=3)

pass 3-> 20 40 30 :50 10
         0  1  2  : 3  4
         20 30  40 50 10

  pass4->  20 30  40 50 10
                     ....
           20 30 40  10 50
                   ..
           20 30 10 40  50
               ...
           20  10  30 40 50
            ..
          10 20 30 40 5

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int prev = i - 1;

        // Move elements greater than current one position ahead
        while (prev >= 0 && arr[prev] > current) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = current;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted Array (Ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

*/

/*#include<iostream>

using namespace std;

void swap(int arr[],int x,int y){
   int temp=arr[x];
     arr[x]=arr[y];
     arr[y]=temp;

}

void bubbleSort(int arr[],int N){
     int count=0;
     for (int pass = 1; pass < N; pass++)
     {
         for (int idx = 0; idx <N-pass ; idx++)
         {
            count++;
            if(arr[idx]>arr[idx+1]){
               swap(arr,idx,idx+1);
            }
         }
         if(count==0)break;
         cout<<"pass"<<pass<<endl;
      }
     cout<<"count :"<<count<<endl;
   }
void insertionSort(int arr[],int N){
  for ( int pass = 1; pass <N; pass++){
     for (int idx  = pass; pass>0; idx--){
        if(arr[idx]>arr[idx-1]){
               swap(arr,idx,idx-1);
        }
        else break;
     }

  }

}
   int main (){
     int arr[]={ 10,20 ,30, 50 ,40,60,70,80};
     int N=10;
     bubbleSort(arr,N);
     for (int i = 0; i < N ; i++)
     {
       cout<<"arr[i]"<<" ";
   }
}
*/
/*
            2D ARRAY
                    0 1  2  3  4
case1->            10 20 30 40 50




                    0 1  2  3  4
case1->            20 30 40 50 60

                       col
                 .........................
                 : 10  : 20  :30:  40  : 50:
                 .........................
                 :  20  : 30 : 40   :50: 60:
                 .........................
             rows

->Traversal

 fist->length



for(i=0;i<N,i++){
   cout<<all[i]<<"";

}

  o/p : 10 20 30 40 50

  int N=Mat.length();  //N=2
  int M=Mat[0].length;    //M=5

  for(i=0;i<N;i++)
  {
     for(j=0;j<M;j++)
     {
       cout<<Mat[i][j]<<"";
     }
       cout<<endl;
  }

  o/p : 10 20 30 40 50
        20 30 40 50 60

     0  1  2  3  4
 0   10 20 30 40 50
 1   20 40 60 80 100
 2   30 50 70 90 110

int N=Mat.length();  //3
int M=Mat[0].length;  //5
for(i=0;i<N;i++)
{
   for(j=0;j<M;j++){
   cout<<Mat[i][j]
   }
}

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter 9 elements:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\n2D Array is:" << endl;

    // Output
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

Q->search a element in 2D array
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == key) {
                cout << "Element found at Row " << i
                     << " Column " << j << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        cout << "Element not found.";

    return 0;
}


Q->2Print the sum of second row
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum = " << sum;

    return 0;
}


   0    1   2
   ...............
0 : 1    4   9 :
................
1 : 11   4   3 :
..................
2 : 2    2   3 :
.................

           sum=0;
           M=Mat[0].length();  //3
           for(J=o;j<M;j++)
           {
              sum+=Mat[i][j];
           }
              return sum;

  sum=11+4+3=18

Q->Wright a program tofind the transpose of matrix.
What is transpose;
Transpose of a matrix is the process of swap the rows to column 2x3 matrix
 Matrix
 a11 a12 a13
 a21 a22 a23

 Transpose Matrix

 a11  a21
 a12  a22
 a13  a23

   0    1   2
   ...............
0 : 2    4   -1 :    {0,1}-->{1,0}
................     {0,2}-->{2,0}
1 : -10    5  11 :
..................
2 : 18    -7   6 :   {1,1}-->{1,1}
.................    {1,2}-->>{2,1}

                     (i,j)->(j,i)

   0    1   2
   ...............
0 : 2    -10   18 :
................
1 : 4    5     -7:
..................
2 : -1    11   6 :
.................

  0    1   2+
   ...............               int N=3
0 : 2    4    3    5 :           int M=4
................                 vector<vector<int>
1 : 7    8    1    9 :           for(i=0;i<N;i++)
..................               {
2 : 10    13   15  16 :            for(j=0;j<M;J++)
................. 3x4              {
                                    res[j][i]-Mat[i][j];
 2  7  10                          }
 4  8  13
 3  1  15
 5  9  16
           4x3
Time complexity=>(N*M)



low=0
high=N*M-1
while(low<=high)

Q->you are give mxn integer matrix with following two properties:
.Each row stored in the non decreasing order
.The first integer is greater the last integer of the
previous row
Given integer target,return true if target is in matrix or false otherwise
you must wright a solution in (log(m*n))time complexity
  1 3  5  7
  10 11 5 20
  23 30 34 60

for(i=0;i<N;i++)
{
   for(j=0;j<N;J++)
   {
      if(Mat[i][j]==target)
      return  true;
   }
}
   return false

T.c=0(N*M)


  1  3   5   7
  10 11  16  20
  23 30  34   60
low                       high
0 1 2 3 4  5 6  7 8 9 10 11
............:................
1 3 5 7 10 11 16 20 23 30 34 60
            :
            mid
                                low=0
                                high=N*M-1
                                while(low<=high)
                                {
                                    Mid=(low+high)/2;
                                    row=mid/2;
                                    col=Mid%2;
                                    if(Mat[row][col]==target)
                                }
                                    return true;
                                    else if(Mat[row][col]>target)
                                    High=Mid-1;
                                    else
                                     low=Mid+1
                                     return

  T.C=log(N*M)




  int arr[i]={1,2,3,4,5}
  char arr[5]={'a','b','c',}   //abc
   ={'a','b','c','\0'}
   char out [5]
   str cpy(out ,int)
   str cat(out,inp)
  strcpy


  strcat

  strcmp

  str inp[j]={'a','b','c'}

                          SRING

INSIDE THE STING WE STORE THE OBJECT  IN DOUBLE CODE

sting   str="abc"
str.length()
str,at(idx),  Str[i]
Str at(idx)
str.substr(Staticidx,size)
str print(world)

int x.y;
cin<<x<<y;


*/
// #include<iostream>
// #include<string.h>
// using namespace std;

// int main (){

//    string str1,str2;
//    getline(cin,str1);
//    //cin.getline(charArray.size()<<endl;
//    //cin>>str1;
//    cout<<"size is"<<str1.size()<<endl;
//    cout<<"char at index 1 is"<<str1[1]<<"char at index 2 is"<<str1.at (2)<<endl;
//    //Subtracting
//    //1.str.substr(start,size)
//    cout<<" Substring starting index 1 of size is"<<str1.substr(1,3)<<endl;
//    //2.str.substr(start)
//    cout<<"Substracting starting index 1 is"<<str1.substr(1)<<endl;
//    for (int i = 0; i < str1.size(); i++)
//    {
//       cout<<str1[i];
//    }
//    for(auto i=str1){
//       cout
//    }

//    cout<<str1;
// }

/*
    st="abc"
                  00000000000000000000000000000000000000000000
    int freq[26]={-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,,-,-,-,-,-,-}

    freq[c]=freq[c]+1

    a     c>
    97     99

Q->Count how many times lower case Vowels  occurred i string entered by  the user

   'a','e','i','o','u'

  "aBcdEfi"

  print 2 a and i

*/

// # include<iostream>
// # include<string.h>
// using namespace std;

// int countVowelSlowcase(string str){
//    int cnt=0;
//     for(int i=0; i<str.size();i++){
//       char ch=str[i];
//       if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
//          cout<<ch<<"detected"<<endl;
//          cnt++;
//       }
//     }
//     return cnt;
// }

//  int main (){
//    string str;
//    cin>>str;
//    cout<<"countVowelSlowcase(str)"<<endl;
//   // cout<<str;
//  }

/*
Q->you are given two string s1 and s2 of equal length.A string is swap is a an operation where you choice is a string different and swap the char at these
indices

Return true if it is possible to make both strings equal by perform at most
string otherwise return false

*/

/*class Solution{
   public boolean areAlmostEqual(String s1,String S2){
      int n1=s1.size(),n2=s2.size;
      if(n!=n2){
      return false;
      }
      int idx=-1;
      for(int i=0;i<n1;i++){
      if(str1[i]!=s2[i]){
      idx=i;
      break;
      }
   }
      if(idx==-1){
      return true;
      }
      for(int i=idx+1;i<n1;i++){
      if(str[i]!=s2[i])
      {
       swap(s1(idx).s1[i]);
       return str1==str2;
      }

   }
      return false;
  }
}
*/

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main (){
//    string s1,s2;
//       int n1=s1.size(),n2=s2.size();
//       if(n1!=n2){
//       return false;
//       }
//       int idx=-1;
//       for(int i=0;i<n1;i++){
//       if(s1[i]!=s2[i]){
//       idx=1;
//       break;

//      }

//    }
//    if(idx==-1){
//       return true;
//    }
//    for(int i=idx+1;i<1;i++){
//       if(s1[1]!=s2[1]){
//          //swap{s1[idx],s1[1]
//          return s1==s2;
//         }
//       }
//        return false;
//    }

//}
/*
Q->Two string consider close if you can from the other using the following operators;
Operator1:Swap any two string character
for example abc




*/

// #include<iostream>
// #include<algorithm>
// using namespace std;

// bool closeString(string word1,string word2){
//    if(word1.length()!=word2.length())
//    return false;

//     int freq1[26]={0};
//     int freq2[26]={0};
//    //Check same frequence set
//   for(char c:word1)freq1[c-'a']++;
//   for(char c: word2)freq2[c-'a']++;
//   //check same character set
//   for(int i=0; i<26;i++){
//    if((freq1[i]==0 && freq2[i]!=0)||
//      (freq1[i]!=0 && freq2[i]==0)){
//       return false;
//      }
//   }
//   sort(freq1,freq1+26);
//   sort(freq2,freq2+26);
//   for (int i = 0; i < 26; i++)
//   {
//     if (freq1[i]!=freq2[i]){
//       return false;
//     }
//     return true;
//   }

//   }
//   int main(){
//    string word1="abc";
//    string word2="bca";
//    if(closeString(word1,word2))
//      cout<<"True";
//    else
//      cout<<"False";
//      return 0;

/*  flowcharts


Start/Exit    start        Exit

Input/Output   Iput x  (parr gram)    Print"Hey"

Process        name="Tony Stark"(rectangle)

Decision         IS age>=18 (Decision block)>>>>>>>>>yes
                 :
                 no

Arrows          .........>


Sum of two number            Pseudo code
   Start(E)                1.I put a and b

   Input a & b(p)          2.sum=a+b

   sum=a+b(R)              3.Print sum

   Print sum(P)             4.Exit

   Exit(E)


Calculate Simple interest
                                 Psw
     Start(E)            1. Pseudo code

     Input P , R ,T(p)    2.input P ,RT/100


     Si=(p*R*T)/100       3.Print

     Print SI             4. Exit

     Exit


     print max of 2 numbers
         Start                         PSeudo code
         :                            1.Input a nd b
         Input a and b                 2. if a>b
         :                               print a
      YEs...Is a>b.,.......No           Else
      :                      :           Print b
      print a                print b   3.Exit
      :                     :
      :........>Exi<t..........


      print fist N natural umber

      Start

      i=1

      input N                         1. i=1
      ....................i==i        2.input N
                           :          3.While i<N
                           :           ---print i
      Is i<N.....>yes   print i        i=i+1
      Is i<N.....>yes   print i        ---print=i+1
      :                                4.Exit
      :
      No
     :
     Exit




Sum of N natural numbers

      Start
      :                     Pseudo code
      Input n               1.input n
      :                     2.i=1,sum=0
      i=1,sum=0             3.while i<n
      :                      sum=sum+i
      ..................     i=i+1
      :                  :   4.Print sum
      is i<=n...yes ..sum=sum+i 5.Exit
                      i=i+1
        :
        No
        ;
      print sum


  Boiler code



   How code run

   code.cpp............> Compiler...........>code.exe......>"Hello World"
   (Source code)                       (Executable file)       (output)

/Ending of syn error use semicolon ;


Preprocessor Directive

#include<iostream>   *All preprocessor directive start with #
using namespace std;

int main (){

   return 0;
}

Header file include pre-written code thats require to
to execute our program.Eg-iostream,vector etc

Macros---->

#include<iostream>
#define PI 3.14
using namespace std;

int main (){
   cout<<"PI"<<endl;
   return 0;
}




*/
// #include<iostream>
// using namespace std;

// int main (){
//    cout<<"hell  Harry"<<endl;
//    cout<<"You are my best teacher";
//    return 0;
// }

// Macros
//  #include<iostream>
//  #define PI 3.14
//  using namespace std;

// int main (){
//    cout<<PI;  //In place of PI  3.14 value will be insert we use of macros
//    return 0;
// }
// #include<iostream>
// using namespace std;

// int main (){
//                  //*Starting point of execution
//    return 0;
// }

// Namespace
/*#include<iostream>
using namespace std;  //Standard c++ Name space called std

int main (){          //cout (std:: cout ) called Namespace
     std::cout<<"Harry bro";// all function and class  object come to std namespace (If we use  using namespace std) so we have no need of use std:: cout only we are use of cout
   return 0;
}
   */

/* cout basically defined inside iostream header file

declaration            Define
 cout                   cout
 Exit in std  file     Exist in   iostream header file



 Output
 cout<<"Hello World";
       ...........
          output    //for new line insert we use \n or endl
*/

// #include<iostream>
// using namespace std;
// int main (){
//    cout<<"Harr my bro";
//    return 0;           //We have two file normal file that creat by user
// second executable file that creat by  compiler when code will be run
// }

// #include<iostream>
//  using namespace std;

//  int main (){
//    cout<<"Hello HArry bro\n";
//    cout<<"Why should you not place there \n";
//    cout<<"Every buddy wait for you\n";
//    return 0;
//  }

// #include<iostream>
// using namespace std;

// int main()
// {
//    cout<<"****\n***\n**\n*";
//    return 0;
// }

/*variable




a=10,b=5

          2*(a+b)
         /    \
       /       \>Variable
     Literal

Memory:  Data store in memory

 int a =10;
 int b=5;

*/
// #include<iostream>
//  using namespace std;
//  int main (){
//     int a=10;
//     int b=5;
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;  //A variable creat without ass operator
//     return 0;
//  }

// When this type we use variable then findout a gar value
//  #include<iostream>
//  using namespace std;

// int main (){
//    int a;
//    cout<<"a="<<a<<endl;
//    return 0;
// }

/*

Naming Conservations
.The name should start with an underscore(_)or a letter.
.The name can only contain only uppercase and lowercase letters,from 0 to 9 and
underscore.
.It must not a keyword(reserved word),Keyword have a special meaning for compiler.

.In variable spaces are not allow

Am valid or not
myName(valid)
_marks(valid)
Avg Score(not valid)
TotalMarks(valid)
1Student(not valid)
student_1(valid)
full&name(not valid)

                    Data type
 .....................   ..................
 :                                        :
 :                                       Non-primitive
 Primitive                                String
 Integer(int)4 Byte (4x8 bit)               Array etc
 Charater(char)1 Byte
 Bollen(bool)1 Byte(store True or fale value)
 Floating Point(float)4Bytes
 Double floating Point(double)


*/
// #include<iostream>
// using namespace std;
// int main (){
//    int age=25;
//    int marks=-200;
//    char grade='A';
//    bool isAdult=true;
//    float cgp=7.5;
//    double price=99.99;
//    cout<<age<<" "<<marks<<grade<<" "<<isAdult<<endl;
//    cout<<"size of int"<<sizeof(int)<<endl;
//    cout<<"size of char"<<sizeof(char)<<endl;
//    cout<<"size of bool"<<sizeof(bool)<<endl;
//    cout<<"size of double"<<sizeof(double)<<endl;
//    return 0;
// }

// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main (){
//    float PI=3.14159265;
//    double PI2=3.1415926535;

//    cout<<setprecision<<(12)<<"PI="<<PI<<endl;
//    cout<<setprecision(12)<<"PI2="<<PI2<<endl;
//    return 0;
// }

//        coments
//  #include<iostream>
//  using namespace std;
//  int main (){
// int age=25;
//  }

/*           Input


  int age;
  cout<<"Enter age";
  cin>>age;




*/
// #include<iostream>
// using namespace std;
// int main()
// {
//    int age;//garbage value
//    cout<<"Enter your age :";
//    cin>>age;

//    cout<<"Your age is"<<age<<endl;
//    return 0;
// }
/*

Sum of a and b
int a;
int b;
cin>>a;
cin>>b;
int sum=a+b;
cout<<Sum;

*/
// #include<iostream>
// using namespace std;
// int main (){
//       int a;
//       int b;
//       //input a
//       cout<<"Enter a:";
//       cin>>a;
//       //input b
//       cout<<"enter b:";
//       cin>>b;

//       //Calculate sum
//       int sum=a+b;
//       int prod=a*b;
//       cout<<"sum="<<sum<<endl;
//       cout<<"prod="<<prod<<endl;
//       return 0;

// }

/*

                  operator

Constant
  Variable that can not be changed.

  const int n=25;//must be initialized
  const float PI=3.14;

  Not allowed
  const int n;
  n=25;



*/

// #include<iostream>
// using namespace std;

// int main (){
//     const float PI=3.14;
//     const float g=9.8;
//     return 0;
// }

/*#include<iostream>
//Symbolic constants
#define x 25          //Constant worked in space occupy in memory
using namespace std;  //Macros does not work space occupy in memory

int main (){
   const int y=35;
   cout<<25; //25
   return 0;
}


Typecasting
Conversion of data from  onetype to another.

Implicit Conversion(automatic/Type promotion)
Done by compiler to avoid data loss

int main (){
  cout<<(10/3);  //3
  cout<<(10/3.0) //3.3333
  return 0;  //when any integer divide by double the return value will be findout float
   }// always compiler small datatype convert into largest data type

boo->chat->int->float->double->
'A'=65   'a'=97
'B'=66   'b'=66
'c'=67   'c'=67



#include<iostream>
using namespace std;

int main (){
   cout<<('A'-0)<<endl;
   cout<<('a'-0)<<endl;
   cout<<('B'-0)<<endl;
   cout<<('c'-0)<<endl;
   cout<<('C'-0)<<endl;
   cout<<('c'-0)<<endl;
   cout<<('D'-0)<<endl;
   cout<<('d'-0)<<endl;
   return 0;
}


#include<iostream>
using namespace std;

int main (){
   float PI=3.14;
   cout<<(int)(PI)<<endl;
   cout<<((float)10/3)<<endl;  //3.3333
   cout<<(char)('A'+1)<<endl;
   cout<<(char)('A'+2)<<endl;
   cout<<(char)('A'+3)<<endl;
   cout<<(char)('A'+4)<<endl;
   return 0;
}

Q->Predict output of cout<<(bool)3+'2';
Q->Predict output of cout<<(23.5+2+'A');

bool
if true (1)
if false(0)




#include<iostream>
using namespace std;

int main (){
   cout<<((bool)3+2)<<endl;
   cout<<(23.5+2+'A')<<endl;
   return 0;
}

            Operators
   Symbols that tell compiler to  perform some operation
   a+b
   Tyes of operator
   1.Arithmetic operators
   2.Assignment operators
   3.Relational Operator
   4.Logical Operator
   5.Bitwise Operator

                       Arithmetic Operator
...........................................................
Binary operator                                     Unary operator
:
Addition                                             Increment(++)
Subtraction                                          Decrement(--)
Multiply
divide
Modulo




#include<iostream>
using namespace std;

int main (){
   int a=5;
   int b=3;
   cout<<"+"<<(a+b)<<endl;
   cout<<"-"<<(a-b)<<endl;
   cout<<"*"<<(a*b)<<endl;
   cout<<"/"<<(a/b)<<endl;
   cout<<"%"<<(a%b)<<endl;
   return 0;
}

#include<iostream>
using namespace std;
int main (){
   int a=3;
   a++;
   cout<<"a="<<a<<endl;
   a--;
   cout<<"a="<<endl;
   return 0;
}

#include<iostream>
using namespace std;
int main (){
   int a=3;
   int b=++a;
   cout<<"a="<<a<<endl;
   cout<<"b="<<b<<endl;
   return 0;
}
Assignment Operators
=
+=         a=a+5 => a+=5
-=         a=a-5=>  a-=5
*=
/=


#include<iostream>
using namespace std;
int main (){
   int a=10;
   a+=5;
   cout<<a<<endl;
   a-=5;
   cout<<a<<endl;
   a*=5;
   cout<<a<<endl;
   a/=5;
   cout<<a<<endl;

   return 0;
}

 3.Relational Operator

>=
<=
==
!=


#include<iostream>
using namespace std;
int main (){
   int a=3;
   int b=3;
   cout<<(a==b)<<endl;  //True ->1
   cout<<(a!=b)<<endl; //False->0
   return 0;
}

Logical Operators
And(&&)
or(||)
Not(!)

a>b  && a<b  //If both condition is true then print true otherwise any one
condition is false  then print the false value


  #include<iostream>
  using namespace std;

  int main (){
     cout<<((3<5)&&(10==5))<<endl; //False
     cout<<(!(3<5))<<endl;
  }

*/

/*

         Vector[dsa]
.......................

.linear data structure
.Contiguous memory allocation
n=5
............................
: a   :   b  : c    : d : e :
............................

car arr[5]={'h','m','n','o','p'};
not insert any carr are not remove when given the sizeoff char arr


*/

/*#include<iostream>
#include<vector>
using namespace std;
int main ()
{
   int arr[5];
   int n=sizeof(arr)/sizeof(int);
   cout<<n<<endl;
   for (int i = 0; i < 5; i++)
   {
      arr[i]=i;
      cout<<arr[i]<<" "<<endl;   //<> angular bracket
   }
   cout<<endl;
   vector<int>nums(10,-1);
   int n2=nums.size();
   cout<<n2<<endl;

   for (int i = 0; i < n2; i++)
   {
     cout<<nums[i]<<" ";
   }
   vector<int>empty;
   cout<<empty.size()<<endl;
}*/

/*
                  vector
                  n=5               insertin last(not effect omn the initial arr)
      ..............................  :
      : 10  : 20  : 30  :40  : 50  : 60
      ...............................
        0    1      2     3    4
nums.push-break(60);
         ............................
      : 10  : 20  : 30  :40  : 50  :
      ...............................
        0    1      2     3    4      ( 10 go to fist 1 indexand 20 gogo to  to 2 index and 30 go to 3 index 40 go to 4 index 50 go to5 index )
        nums.insert-(5);

        vector remarks

        n=6
        ...................................
        : 10  : 20  : 30  : 40  :50  : 60  :
        .....................................
        0      1      2    3     4     5

      when first pop-front();
      nums.pop
      from front()
                                 nums.pop back();
                                      o(1) const
                                       fast

In front we deleat a  e shift left all
when deleat front then process will be slow
if we deleat 10 then index will be start  0

       6k    6ko4  6k08   6k12  6k16  6k20
       ...................................
        : 10  : 20  : 30  : 40  :50  : 60  :
        .....................................
        0      1      2    3     4     5
        4x5=20byte
        cout<<arr[idx];
        arr->Base Address
        idx->+ase*idxB
        arr[0]=>6k+4Bx0=6k
        arr[3]=>6k+4x3=4k12
        How to know  java that which block goes
        if index 4 we are jum 4 block
        if index 3 we are jum 3 block

        cout<<&arr(0)
        cout<<&arr<<endl;

*/

/*
#include<iostream>
#include<vector>
using namespace std;
 void  swap1(vector<int>nums){  //if we not use the & in the vector function then it called pass by value it means it form a new vector
  int temp=nums[0];
  nums[0]=nums[1];
  nums[1]=temp;
 }
 void swap2(vector<int>&nums){ // when use of & it called pass by reference it means which value gain in the main function it pass in the swap2
  cout<<nums[0]<<" "<<nums[1]<<endl;
  int temp=nums[0];
  nums[0]=nums[1];
  nums[1]=temp;
  cout<<nums[0]<<" "<<nums[1]<<endl;

 }

int main (){
  vector<int>nums(2);
  nums[0]=10;nums[1]=20;

  swap1(nums);
  cout<<nums[0]<<" "<<nums[1]<<endl;

  swap2(nums);
  cout<<nums[0]<<" "<<nums[1]<<endl;
}

vector ,object form in heap(Heap is comman area all function will be use same function)
refer variable form in stack(Every function take place when it call)
Main function teal we call a swap type function
swap1(It have nums time vector  it have passs by value so it form a new vector)
swap1 all operation form in 6k vector (near in 6k vector)
temp(it is the local variable of function) form in stack will asig the value of zero
first index value update to second index
when swap1 not imp on the mai function
when we calling swap2 form a new reference var nums
nums access the same vector which use by main function
(In stack form all local function and it findout space trace)
(in Stack when function will die the local var will be die)
(In heap still var will access by other then it stay)
global arr form in heap not in stack



   n=10  0 1 2 3 4 5 6 7 8 9
        [8, 6, 4 ,3, 7, 4, 1, 9 ,10 ,2,]

repeating=4
missing=5
  [4,5]

    size n=10  then we have take 1 to n index

         freq=[ 0 0  0 00 0 0 0 0 0 0     ]  it will start zero index
                0  1 2 3 4 5 6 7 8 9 10

                n+1=11
which will no that what wil be the value messing

    freq[i]==?

/in missing condition freq[i]==0
                      missing=i
                      freq>>1
                      repeating=i;
Let freq 5=0 so it will be  also missing
It value will be findout when  smallrange of freq


  */

/*
#include<iostream>
#include<vector>
using namespace std;
int main (){
class Solution{
   vector<int>findErrorNums(vector<int>&nums){
           int n=nums.size();
           vector<int>freq(n+1,0);
   for (int idx = 0; idx < n; idx++)
   {
      int val=nums[idx];
      freq[val]++;
   }
   int missing=0,repeating=0;
   for (int idx = 1; idx <= n; idx++)
   {
      if(freq[idx]==0)missing=idx;
      else if(freq[idx]>1)repeating=idx;
   }
     return{repeating,missing};
      }
  };
}
*/

/*
Conditional Statement
.if,else
.else if
.ternary operator
.switch

if(age>=18){
   cout<<"can vote";  If condition will be right then it execute other wise it jum to next
   }else {
      cout<<You can not vote;
      }


*/
/*
#include<iostream>
using namespace std;
int main (){
   int age=age;
   cout<<"Enter your age:";
   cin>>age;
   if(age>=18){   //Conditional statement
      cout<<"You can vote"<<endl; //If uses more the one time but else  uses only one  time
   }if(age>=45){
      cout<<"contestfor elections"<<endl;
   }
   return 0;
}

*/
/*
#include<iostream>
using namespace std;
int main (){
    float marks;
    cout<<"Enter your marks";
    cin >>marks;

    if(marks>=33){
      cout<<"Pass"<<endl;
    }else{
      cout<<"Fail"<<endl;
    }
    return 0;
}
    */

/*
q->Print the largest number


*/

/*
#include<iostream>
using namespace std;

int main(){
 int  a, b;
cout<<"Enter a:";
cin>>a;

cout<<"Enter b:";
cin>>b;
if(a>=b){
  cout<<"a is largest :"<<a<<endl;
}else{
  cout<<"b is largest:"<<b<<endl;
}
return 0;
}
*/

// Q->Print a number is even or odd
/*#include<iostream>
using namespace std;

int main(){
   int  n;
   cout<<"Enter n:";
   cin >>n;
   if(n%2==0){
      cout<<" The nums is even"<<endl;
   }else{
      cout<<"The nums is odd"<<endl;
   }
   return 0;
}
   */

/*
else if Statement(marks>=90){
cout<<"A";
}else if(marks>=8o){  //condition 2
cout<<"B";
}else {
     cout<<"C";
}

*/

/*
#include<iostream>
using namespace std;

int main (){
   int marks;
   cout<<"Enter marks:";
   cin>>marks;
   if(marks>=90){
      cout<<"A"<<endl;
   }else if(marks>=80){   //If we uses if in place of if else then then it print both vale doesent matter which condition come fist so it check all condition
      cout<<"B"<<endl;
   }else {
      cout<<"C"<<endl;
   }
   return 0;
}
if uses else then if condition is true then then not execute the else condition
*/

/*
        Practice Qs
Create an Income Tax Calculator.
income<5L
0%tax

income between 5-10L
20%tax

income >10L
30% Tax


*/

/*
#include<iostream>
using namespace std;
int main (){
   int Tax;
   cout<<" Enter Tax"<<endl;
   cin>>Tax;

   if(Tax<=5L){
      cout<<"Print 0% Tax "<<endl;
   }else if(Tax>=5L-10L){
      cout<<"print 20% Tax"<<endl;
   }else if (Tax>10L){
      cout<<"Print 30% Tax"<<endl;
      return 0;
   }
}
   */

/*
#include<iostream>
using namespace std;

int main (){
   int income;
   float tax;
   cout<<"Enter income(in Lakhs):";
   cin>>income;
   if(income<5){
      tax=0;
   }else if(income<=10){
      tax=0.2*income;
   }else{
          tax=0.3*income;
   }
   cout<<"Tax="<<(tax*100000)<<endl;
   return 0;
}
*/

// Practices Qs->Print the largest of 3 nums
/*
#include<iostream>
using namespace std;

int main (){
   int a,b,c;
   cout<<"Enter a:"<<endl;
   cin>>a;
   cout<<"Enter b:"<<endl;
   cin>>b;
   cout<<"Enter c:"<<endl;
   cin>>c;

   if(a>=b && a>=c){
      cout<<"Largest is a="<<a<<endl;
   }else if(b>=c){
      cout<<"Largest is b="<<b<<endl;
   }else{
      cout<<"Largest is c="<<c<<endl;
   }
   return 0;

}
   */
/*

Ternary Operator
variable=condition?statement1:statement2;

bool is Adult=(age>=18)?false;

*/

/*
#include<iostream>
using namespace std;
int main (){
   bool isAdult; //1,0
   int age;
   cout<<"Enter age:";
   cin>>age;

   if(age>=18){
     isAdult=true;
   }else{
      isAdult=false;
   }
   isAdult=age>=18?true:false;
   return 0;
}
*/

/*

           Switch Statement

switch(day){
case1:cout<<"Monday";
break;
case2:cou<<"Tuesday";
break;
default: cout<<"Invalid";  //More cases for 3-7
}

*/

/*
#include<iostream>
using namespace std;
int main (){
   int day=3;
   if(day==0){
      cout<<"Monday"<<endl;
   }else if(day==1){
      cout<<"Tuesday"<<endl;
   }
   return 0;
}
   */

/*#include<iostream>
using namespace std;

int main (){
   int day=1;
   switch(day){
      case1:cout<<"monday"<<endl;
      break;
      case2:cout<<"Tuesday"<<endl;
      break;
      case3:cout<<"Wednesday"<<endl;
      break;
      case4:cout<<"thursday"<<endl;
      break;
      case5:cout<<"Friday"<<endl;
      break;
      case6:cout<<"Saturday"<<endl;
      break;
      case7:cout<<"Sunday"<<endl;
      break;
      default:cout<<"Invalid Day"<<endl;
   }
   return 0;
}*/

/*
Build a calculator using Swich 4 basic arithmetic operation


*/

/*
#include<iostream>
using namespace std;
int main(){
   int a,b;
   char op;
   cout<<"Enter a:";
   cin>>a;
   cout<<"enter b:";
   cin>>b;
   cout<<"Enter operator:";
   cin>>op;
   //Calculator
   if(op=='+'){
      cout<<"a+b="<<a+b<<endl;
   }else if(op=='-'){
      cout<<"a-b="<<a-b<<endl;
   }
   return 0;
}

*/

/*

        for Loop
for(initialisation;condition;update){  //Loop run whn condition is true
   Do some work
}

for(int i=1;nums<=5;num++)
cout<<num;

*/

/*

#include<iostream>
using namespace std;

int main(){
    int nums;
   for ( nums = 1; nums <= 100; nums++) //int use when we use first time data type(nums=1we have inl only and declared first int nums)
   {
     cout<<nums<<" ";
   }
     cout<<endl;
     cout<<"last value of nums="<<nums<<endl;
   return 0;
  28

}

iterate(run)
iteration(signal run)
iterator(loop variable)

 */
/*
#include<iostream>
using namespace std;

int main (){
   int n;
   cout<<"Enter your n:";
   cin>>n;
   for (int i = 0; i <= n; i++)
   {
     cout<<i<<" ";
   }
  cout<<endl;
   return 0;
}
*/

/*

Q->Print sum of natural number

*/

/*
#include<iostream>
using namespace std;

int main (){
   int n;
   cout<<"Enter your n:";
   cin>>n;

   int sum=0;
   for (int i = 0; i <= n; i++)
   {
       sum+=i;
   }
  cout<<"sum="<<sum <<endl;
   return 0;
}
   */

/*
#include<iostream>
using namespace std;
int main (){
   int i=10;
   while(i<=25){
      cout<<i<<" ";
      i++;
   }
   cout<<endl;
   return 0;

}
*/

/*
#include<iostream>
using namespace std;
int main (){
   int n=10;
   int i=1;
   while(i<=n){
      cout<<i<<endl;
      i++;
   }
   cout<<endl;
   return 0;

}
*/

/* Q->Print the square patten using for loop
********
********
********
********/
/*
#include<iostream>
using namespace std;
int main (){
  for (int i = 1; i < 4; i++)
  {
    cout<<"****"<<endl;
  }
  return 0;


}
  */
/*
#include<iostream>
using namespace std;
int main (){
  int n=12;
 for (int i = n; i >= 1; i--)
 {
   cout<<i<<" ";
 }
 cout<<endl;
 return 0;
}
 */

/*

Q->print the sum of digit of  anumber using while loop
While(n>0){
lastDig=n%10
cout<<lastDig<<" ";
sum+=LastDig
n=n/10
}
*/

/*
#include<iostream>
using namespace std;

int main(){
   int n=10829;
   int digSum=0;;
   while(n>0){
      int lastDig=n%10;
      digSum += lastDig;
      n=n/10;
   }
   cout<<"sum="<<digSum<<endl;
   return 0;
}
   */
/*
Q->Print the sum of odd digits of a number  using while loop
   10829
   if(lastDig%2=0)
   sum=lastDig
*/

/*
 #include<iostream>
 using namespace std;
 int main (){
   int n=10829;
   int digSum=0;

   while(n>0){
      int lastDig=n%10;
      if(lastDig%2!=0){
         digSum += lastDig;
      }
      n=n/10;
   }
   cout<<"sum="<<digSum<<endl;
   return 0;
 }
*/

/*
Q->print the sum of digits of a number using while loop
n=10829
  if(lastDig%21=0)
  sum+=lastDig

*/

/*
#include<iostream>
 using namespace std;
 int main (){
   int n=10829;
   int digSum=0;

   while(n>0){
      int lastDig=n%10;
      if(lastDig%2!=0){
         digSum += lastDig;
      }
      n=n/10;
   }
   cout<<"sum="<<digSum<<endl;
   return 0;
 }

 @->print the digits of a given numberin reverse using while loop
 n=10829


  #include<iostream>;

  using namespace std;
  int main (){
    int n=10829;

    while(n>0){
      int lastDig=n%10;
      cout<<lastDig;
      n/=10;
    }
    cout<<endl;
    return 0;
  }

  Q->Reverse a given number & print the result
  res=92801

  res=0  0*10+9=9
  res=9  9*10+2=92
  res=92  92*10+8=928
  res=928  928*10+0=9280
  res=9280 9280*10+1=92801
  lastDig=n/10
  res=res*10+lastDig
  n=n/10

#include<iostream>
using namespace std;
int main (){
   int n=12345;
   int res=0;

   while(n>0){
      int lastDig=n%10;
      res=res * 10 +lastDig;
      n /=10;
   }
   cout<<"Reverse="<<res<<endl;
   return 0;
}

do-while loop
do{
   do some work
}while(condition);//work gets atleast once irrespective of condition
.In do-while always condition check after &  In while loop condition check fist


#include<iostream>
using namespace std;
int main (){
   int val=1;
  do
  {
    cout<<"Harry bro"<<endl;
  } while (val>5);

  while(val>5){
   cout<<"Harry bro";
  }
  return 0;
}

Break Statement
to exit the loop

#include<iostream>
using namespace std;

int main (){
     int i=1;
     while(i<=10){
      if(i==3){
         break;
      }
      cout<<i<<endl;
      i++;
     }
     cout<<"out of loop now"<<endl;
     return 0;
}
*/
/*
          DSA(Practice secession)

  x=5    1 0 1   If 1 give he true otherwise give the false
                 1
               & 1
               ....
                 1 nonzero number(So we can say that both number is set)
              .....


k=2 to  bit checked that IS true if 1 give the true otherwise false

x=5   1 0  1             x=  1 0 1
k=5   i 0  0                 0 0 1
                             :(in this position if we need 1 then ((1<<k)&x))
.............             ..........
.............           ..............

Left shift operator
bool is set(x,k)
{
   return((1<<k)&xk)=0
}

Right shift operator

x=5  1 0 1          1 0  1
k=2  0 0 1          5  0 1
.......................
....................
one want  to init point 1  place 0
((x>>k)&1)k=0)

Q->What is the value of x^x
  x^x=0 if both bit is equal
Q->Swap two number without using third variable

let a=10
    b=20
    a=a+b
    b=a-b
    a=a-b




#include<iostream>
using namespace std;
int main (){
   int a,b,temp;
   cout<<"Enter two number"<<endl;
   cin>>a>>b;
   temp=a;
     a=b;
     b=temp;
   cout<<"Enter the swap value"<<endl;
   cout<<"a="<<a<<endl;
   cout<<"b="<<endl;
   return 0;

}
      0 1 1 1 ...>x=7
      1 0 0 0  ...>x=8
      ..........
      ..........

      1 0  1  1
      0 0  0  1
   ................
   x=.1.0. 1   0.....
   &  0 0  1   0
   ................
   x= 1  0  0  0
.....................
carry=0  1  0  0
...................
      1  1  0  0  do it jor
........................
  int carr=1
  int x=5
  while(x&carry k=0) in actual we have so the fillip when come to zero the we stop
  {
      x=x^carry      do it zor
      carry=carry<<1;  carr shift left 1    0 0 1 0
  }
  x=x^carry
Q->upper case chr convert into lover case
A --->a
:     :
65    97                 1 0 0 0 0 0 1
                    0r   0 1 0 0 0 0 0
   32                  ..................
A+32---->a               1 1 0 0 0 0 1
   32                  .................
D+32------->d
   32
z+32----->z
*/
// right a program that are multiple of a

/*
#include<iostream>
using namespace std;

int main (){
   int n;
   do
   {
      cout<<"Enter number:";
      cin>>n;
      if (n %10==0)
      {
         break;
      }
      cout<<"You entered"<<n<<endl;

   } while (true);
   return  0;
}
continue Statement
 to skip an iteration

#include<iostream>
using namespace std;
int main (){
   for (int i = 1; i <=10; i++)
   {
      if (i==3)
      {
         continue;
      }
      cout<<i<<endl;
   }
   return 0;

}
   Q->WAP to show numbers entered by user e\xcept multiple of 10

 #include<iostream>
using namespace std;

int main (){
   int n;
   do
   {
      cout<<"Enter number:";
      cin>>n;
      if (n %10==0)
      {
         continue;
      }
      cout<<"You entered"<<n<<endl;

   } while (true);
   return  0;
}

Q->Check if a number is prime or not
n= 2 ,3, 5, 7,11 ,13
prime number divisible bu=y one and itself
*/
/*
#include<iostream>
using namespace std;

int main (){
   int n=3;
   bool isPrime=true;
   for (int  i = 2; i < n-1; i++)
   {
      if (n%i==0)
      {
         isPrime=false;
         break;
      }

   }
   if (isPrime==true)
   {
      cout<<"number is Prime"<<endl;

   }else{
      cout<<"Number is not prime"<<endl;
   }
   return 0;
}

q2->

  #include<iostream>
  using namespace std;
  int main (){
       int n;
       cout<<"Enter a number"<<endl;
       cin>>n;

       for (int i = 1; i <=n; i++)
       {
         cout<<n*i<<endl;
       }


       cout<<"print the multiple table  of number "<<endl;
       return 0;
  }
*/
/*
Q-->3  wap  to input a number and check weather a number is Armstrong or not
#include<iostream>
using namespace std;
int main (){
   int n,r,sum,temp;
   cout<<"Enter a number"<<endl;
   cin>>n;
   temp=n;
   while (n!=0)
   {
       r=n%10;
       sum=sum+(r*r*r);
       n=n/10;
   }
  if (sum==temp)
  {
   cout<<" print number is Armstrong number"<<endl;
  }else{
   cout<<"Print the number is not Armstrong<<endl";
  }

}

 #include<iostream>
 using namespace std;

 int main(){
   int n=15,curr;
    for (int i = 2; i <= n; i++)
    {
      int curr=i;
      bool isPrime=true;{
         for (int j = 2; j*j <=i ; j++)
         {
            if (n%j==0)
            {
               isPrime=false;
            }
         }
         if(isPrime){
            cout<<curr<<" ";
         }
      }
    }

 }
*/

/*
   Nested Loop
   Loop inside a loop

   1 1 1 1  4-->1
   2 2 2 2  4-->2
   3 3 3 3  4-->3
   4 4 4 4   4__>4     4x3
     no of Rows decide that what will be over code run
  for(int i=0;i<=4;i++){
    for(int j=1;j<=4;j++){
      cout<<i<<endl;
      }
   }


#include<iostream>
using namespace std;
int n=10;
int main (){
   for (int i = 1; i <=n; i++)
   {
      for (int j = 1; j<=n; j++)
      {
         cout<<i<<" ";
      }
      cout<<endl;
   }
   return 0;
}

     Nested Loops
   Dry  Run


#include<iostream>
using namespace std;
int n=6;
int i;
int main (){
   for (int i = 1; i <=n; i++)
   {
      int val=i;
      for (int j = 1; j<=n; j++)
      {
         cout<<val<<" ";
      }
      cout<<endl;
   }
   cout<<i<<endl;
   return 0;
}

#include<iostream>
using namespace std;
int n=6;
int i;
int main (){
   for (int i = 1; i <=n; i++)
   {
      int val=i;
      for (int j = 1; j<=n+1; j++)
      {
         cout<<val<<" ";
      }
      cout<<endl;
   }
   cout<<i<<endl;
   return 0;
}

    Print star patter
 *              1.outer loop-->Rows
 **             ntimes(1 to n)
 ***            2.inner loop(each rows/columns)
 ****            i times(1 to i)
                3. work?
                cout<< "*"


for(in i;i<=n;i++){
  for(int j=1;j=i;j++){
    cout<<"*"}
  }
    cout<<endl;
}


#include<iostream>
using namespace std;

int main (){
   int n=6;
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j<=i; j++)
      {
         cout<<"*";
      }
      cout<<endl;
   }
   return 0;

}
   Print inverted star pattern
   **** 4=n-i+1   1.outer loop(row)
   ***  3=n-i+1   (1to n)
   **   3=n-i+1   2.inner loop(each row)
   *    2=n-i+1  ( 1 to n-i+1)
   * Work
   cout<<*;
*/

/*
#include<iostream>
using namespace std;
int main (){
   int n=8;
   for (int i = 1; i <= n; i++)
   {
      for (int j= 1; j < n-i+1; j++)
      {
         cout<<"*";
      }
   cout<<endl;
   }
   return 0;
}
   Print Half pyramid
  R1  1    n=4
   R2 12
   R3 123
   R4 1234
   outer loop(rows)
       (1 to n)
   inner loop(each rows)
     (1 to i)
   3.work
   cout<<j;

for (int i = 1; i <=n; i++)
{
  for (int j = 0; j < i; j++)
  {
     cout<<j;
  }
  endl line
}

 #include<iostream>
 using namespace std;

 int main (){
   int n=4;
   for (char i = 1; i<=n ; i++)
   {
      for (int j = 1; j<=i ; j++)
      {
         cout<<j;
      }
      cout<<endl;
   }
   return 0;
 }
  Print Character Pyramid pattern
R1 A      (!)outer loop(row)
R2 BC      (! to n)
R3 DEF     ( 1 to  P)
R4 GHI J   work?
           cout<<ch;
           ch++;


#include<iostream>
using namespace std;

int main (){
   int n=5;
   char ch='A';

   for (int i = 1; i <=n; i++)
   {
      for (int j = 1; j <=i; j++)
      {

         cout<<ch++;

      }
      cout<<endl;
   }
   return 0;
}

 1. Outer loop (rows)
  ( 1  to n)
2.Inner loop(each rows)
cout<<"*";//First rows
for( 1 to n-1){
   1st or last->"*"
   else-->" "
   }
cout<<*; //Last rows
*/
/*
#include<iostream>
using namespace std;

int main (){
   int n=8;

   for (int i = 1; i <=n; i++)
   {
      cout<<"*";
      for (int j= 1; j<= n-1;  ++j)
      {
         if (i==1 || i==n)
         {
            cout<<"*";
         }else{
            cout<<" ";
         }
      }
      cout<<"*"<<endl;

   }
   return 0;

}
   Inverted & Rotated Half-Pyramid
        *
       **
      ***
     ****
*/
/*
#include<iostream>
using namespace std;

int main (){
   int n=10;
   for (int i = 1; i <=n; i++)
   {
      for (int j =1; j< n-1; j++)
      {
          cout<<" ";
      }
      for (int j = 1; j<=i; j++)
      {
         cout<<"*";
      }
      cout<<endl;
   }
   return 0;

}

 Print Floyd Triangle

#include<iostream>
using namespace std;

int main (){
   int n=5;
   int num=1;
   for (int i= 1; i <=n; i++)
   {
      for (int j=1; j<=i; j++)
      {
        cout<<num++<<" ";

      }
      cout<<endl;
   }
  return 0;
}

#include<iostream>
using namespace std;

int main (){
   int n=5;

   for (int i= 1; i <=n; i++)
   {
      for (int j=1; j<=n-i; j++)
      {
        cout<<" ";

      }
      for (int j = 1; j <=2*i-1; j++)
      {
         cout<<"*";
      }
      cout<<endl;
   }
  return 0;
}

#include<iostream>
using namespace std;

int main (){
   int n=5;
   for (int i=n; i>=1; i--)
   {
        for (int j = 1; j<=n-i; j++)
        {
             cout<<" ";
        }
        for (int j = 1; j<=2*i-1; j++)
        {
          cout<<"*"<<endl;
        }
        cout<<endl;
   }
}

                Diamond code
   */

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter half the height (number of rows for upper half): ";
    cin >> n;

    // 1. Upper Half (Upright Pyramid)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    // 2. Lower Half (Inverted Pyramid)
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}

Print Butterfly Patter


#include<iostream>
using namespace std;
int main (){
   int n=4;
   for (int i = 1; i<=n; i++)
   {
      for (int j = 1; j<=i; j++)
      {
         cout<<" *";
      }
      for (int j = 1; j<=2*(n-i); j++)
      {
         cout<<" ";
      }
      for (int j = 1; j<=i; j++)
      {
         cout<<"*";
      }
      cout<<endl;
    }
     for (int i = n; i>=1; i--)
   {
      for (int j = 1; j<=i; j++)
      {
         cout<<" *";
      }
      for (int j = 1; j<=2*(n-i); j++)
      {
         cout<<" ";
      }
      for (int j = 1; j<=i; j++)
      {
         cout<<"*";
      }
      cout<<endl;
    }
  return 0;
}

Function
  Block of code which runs when runs when it is called

  returnType fName(){
  /do some work;
  return some value; //optional
  }
  fName();  //Function call


    void mean space


#include<iostream>
using namespace std;

void sayHello(){
   cout<<"Hello\n";    //function call any function & call himself
}
void assistance(){
    sayHello();
    cout<<"work done\n";
}
int main(){
   assistance(); //function call
   return 0;
},
   forward declaration
   Declaration: The function's name,return type,and parameter(if any)
   Definition:the body of the fuction
                 Declaration
                 :
   void sayHello(){
     cout<<"Hello:\n";...>Defintion
     }

     Syntax with Parameters
     returnType fname(type param1,type param2..){
     / do some work
     return some value;
     }

     In genreal we take max paramter in function


   #include<iostream>
   using namespace std;

   int sum(int a,int b){
      int diff=a-b;
      return diff ;
   }
   int diff(int a,int b){
      int diff=a-b;
      return diff;
   }
   int main (){
      int s=sum(4,2);
      cout<<"sum="<<s<<endl;
      int d=diff(4,2);
      cout<<"sum="<<d<<endl;

      return 0;

   }


      Default concept


    #include<iostream>
   using namespace std;

   int sum(int a,int b=1){
      int sum=a+b;
      return sum;
   }
   int diff(int a,int b){
      int diff=a-b;
      return diff;
   }
   int main (){
      int s=sum(4);
      cout<<"sum="<<s<<endl;
      int d=diff(4,2);
      cout<<"sum="<<d<<endl;

      return 0;

   }
  #include<iostream>
  using namespace std;
  int prod(int a,int b){
    int prod=a*b;
    return prod;
  }
  bool isEven(int n){
   if(n%2==0){
      return true;
   }else{
      return false;
   }
  }

  int main (){
   int  s=(1,2);
       cout<<"prod"<<s<<endl;
       cout<<isEven(20)<<endl;
       return 0;
  }
WAP to print if a number is odd or even

Q->WAF to print the factorial of a number,n

#include<iostream>
using namespace std;

int factorial(int n){
   int  fact=1;
   for (int i = 1; i<=n; i++)
   {
      fact=fact*i;
   }
   cout<<"factorial("<<n<<")="<<fact<<endl;
   return fact;
}

int main (){
  factorial(0);
  factorial(1);
  factorial(2);
  factorial(3);
  factorial(4);
  return 0;

}
  what happen in memory?

                            Heap(Dynamic memory)
  :       :
  :       :
  :.......:
  :.......:...>Variable store in this
  :       :...> Stack frame
  .........
    Stack(one by on layer put on up)
  When code will be ex in main  then stack will be come to main
  .When return in calling place
  .Curren function on the top of the stack


  Scope
  Local vs Global scope of variable
  if any  local defined in function then were te scope
  Scope_>area where a var can be accesses or used


 #include<iostream>
 using namespace std;
 int num=25;               //Global scope variable
 void sum(int a,int b){
   cout<<num<<endl;
   int s=a+b;
   cout<<s<<endl;
 }
 int main (){
     sum(5,4);
     int s=10;
     cout<<num<<endl;
     return 0;
 }

Q->WAF to prinnt to print  if a number is prime or not

1-->nonprime                   2-->condition for a square number check
for(int i=2; i<=n-1;i++){     i power2<=n
   (n%i)->non-prime
   }


#include<iostream>
using namespace std;
bool isPrime(int n){
   if (n==1)
   {
      return false;
   }
   for (int i = 2; i < n-1; i++)
   {
      if (n%i==0)
      {
         return false;
      }
   }
   return true;
}
bool isPrime2(int n){
   if (n==1)
   {
      return false;
   }
   for (int i = 2; i*i <n; i++)
   {
     if (n%i==0)
     {
      return false;
     }
   }
   return true;
}
int main (){
    cout<<isPrime2(3)<<endl;
    return 0;
}
Q->WAF to find the binomial coefficient for given n & r
nCr=n!/r!(n-r)!

#include<iostream>
using namespace std;
int factorial(int n){
   int fact=1;
   for (int i = 1; i <=n; i++)
   {
      fact *=i;
   }
   return fact;
}
int binCoff(int n,int r){
   int val1=factorial(n);
   int val2=factorial(r);
   int val3=factorial(n-r);

   int result= val1/(val2*val3);
   return result;
}
int main (){
    cout<<binCoff(4,2)<<endl;
    return 0;
}

            Function overloading
Multiple function with the same name but different parameters
like as
sum(int a,int b)

sum(double a,double b)

#include<iostream>
using namespace std;

int sum(int a,int b){
   cout<<(a+b)<<endl;
   return a+b;
}
double sum(double a, double b){
   cout<<(a+b)<<endl;
   return a+b;
}
int main (){
   sum(2,3);
   sum(12,13);
   sum(1.5,1.2);
   return 0;

}
   Q->Print all Primes in a Range from 2 to n

      allPrime(int n){
       for(2 to n)
       is Prime(i)}
*/
/*
#include<iostream>
using namespace std;
bool isPrime(int n){
  if (n==1)
  {
     return false;
  }
  for (int i = 2; i*i<=n; i++)
  {
     if (n%i==0)
     {
      return false;
     }
  }
  return true;
}
void allPrimes(int n){
   //all prime->from to n
   for (int i=2; i<=n; i++)
   {
      if(isPrime(i)){
         cout<<i<<" "<<endl;
      }
   }
   cout<<endl;
}
int main (){
   allPrimes(13);
   return 0;
}
                 LOOPS
Q->WAP to find the factorial of a number entered by user
#include<iostream>
using namespace std;

int main (){
   int n;
   long long fact =1;
   cout<<"Enter a number"<<endl;
   cin>>n;
for (int  i = 1; i <= n; i++)
{
   fact =fact*i;
}
cout<<"factorial="<<fact<<endl;
return 0;
}

Q->WAP to print the multiplication table of a number,entered byuser
*/

/*z
#include<iostream>
using namespace std;
int main (){
   int n;
   cout<<"Enter a number"<<endl;
   cin>>n;
   for (int i = 1; i <=10; i++)
   {
       cout<<n*i<<" ";
   }
   cout<<endl;
   return 0;
}
   Q->WAP to input a number and check wether
   the number is an  Armstrong number or not
   An Armstrong number is a number that is equal to the sum of cubes of its digits


#include<iostream>
using namespace std;

int main (){
   int n,r,sum=0,temp;
   cout<<"Enter a number"<<endl;
   cin>>n;
   temp=n;

   while (n>0)
   {
      r=n%10;
      sum=sum+(r*r*r);
      n=n/10;
   }
   if(sum==temp)
   cout<<"It is Armstrong number ";
   else{
      cout<<"It is not a armstrong number";
   }
   return 0;

}
   Q->For a positive N,WAP that print all the
   prime numbers from 2 to N.


#include<iostream>
using namespace std;

int main (){
   int n;
   cout<<"Enter a number"<<endl;
   cin>>n;

   for (int i = 2; i <= n; i++)
   {
      if (n%i==0)
      {
         cout<<"Print that number is not prime"<<endl;

      }else{
         cout<<"Number is prime"<<endl;
      }
      cout<<endl;
   }

}
   Q->For a positive N ,WAP that print the first N Fibonacci numbers.
   Fibonacci series: o,1,1,2,3,5,8,13,211,34...
   This is series where each number is a sum of previous of two number i the series
   1=0+1
   2=1+1
   3=1+2
   5=2+3

#include<iostream>
using namespace std;
int main (){
   int n;
   cout<<"Enter a number"<<endl;
   cin>>n;
   int first=0,sec=1;
   cout<<first<<" "<<sec<<" ";
   for (int i = 2; i <n; i++)
   {
      int third=first+sec;
      cout<<third<<" ";
      first=sec;
      sec=third;
   }
   cout<<endl;
}

          Binary number System
      0 to 9=>10 digit

      0 t0 1(contain only two)

      532= 5x100+3x10+2x1
      bin-->Dec

convert 10010 to decimal representation

1 0 0 1 0
.............
16+0+0+2+0=18
..............

covert Decimal to Binary
divide by 2
  2:18:0
   :9:1
   :4:0
   :2:0
   :1
=>10010(binary number)
  2 :37:1
   :18: 0
   : 9: 1
   : 4: 0
   : 2: 0
   : 1
=>100101(binary number)
DAta Type Modifier
Alter the meaning of existing data types.
long >=4 bytes(more than int)
short 2  bytes
singed singed int is same as int
unsigned can only store non -negative numbers
long-long same as long int
int
(4 bytes)

#include<iostream>
using namespace std;

int main (){
   cout<<sizeof(int)<<endl;
   cout<<sizeof(short int)<<endl;
   cout<<sizeof(long long int)<<endl;
   return 0;
}

  Convert from Binary to decimal
  n=101


#include<iostream>
using namespace std;
void binToDec(int binNum){
   int n=binNum;
   int decNum=0;
   int pow=1;
    while(n>0){
    int lastDig=n%10;
    decNum+=lastDig*pow;
    pow=pow*2;
    n=n/10;
   }
   cout<<decNum<<endl;
}
int main (){
   binToDec(1010101);
   return 0;
}
   Convert from Decimal to Binary


#include<iostream>
using namespace std;
void binToDec(int binNum){
   int n=binNum;
   int decNum=0;
   int pow=1;
    while(n>0){
    int lastDig=n%10;
    decNum+=lastDig*pow;
    pow=pow*2;
    n=n/10;
   }
   cout<<decNum<<endl;
}
void decToBin(int decNum)
{
   int n=decNum;
   int pow=1; //10^0
} ;
int main (){
   binToDec(101);
   decToBin(7);
   return 0;
}


introduction to pointer
int a=10;
int b=5;
Memory
....................................
:...:.10..:.5.:..:..:..:....::...............
    0x792 0x7924
     :
     Address(Every memory location as different adders)
     All memory location has hexadecimal(16 base)

   HExa=>a(10),b(11),c(12),d(13),e(15)

   Address of operator
   "&"gives the address of a variable
   &a is equal to  7920   .........a.....
                           ;...;..10....;
                           0x792
      /address
     /
    &
     \Bitwise And

#include<iostream>
using namespace std;
int main (){
     int a=10;
     cout<<&a<<"\n";
     return 0;
}

Pointers
->A special variable that stores address of another variable
int*ptr=&a;
float*ptr=&b;
char*ptr=&c;
int*ptr2=&ptr;

#include<iostream>
using namespace std;
int main (){
   int a=10;
   int*ptr1=&a;
   float pi=3.14;
   float *ptr2=&pi;
   cout<<sizeof(ptr1)<<endl;
   cout<<sizeof(ptr2)<<endl;

   //cout<<&a<<"="<<ptr1<<endl;
   //cout<<&a<<"="<<ptr2<<endl;
   return 0;
}
   pointer topointer store

#include<iostream>
using namespace std;
int main (){
   int a=10;
   int*ptr=&a;
   int **pptr=&ptr;
   cout<<&ptr<<"="<<endl;
   return 0;
}


          Dereference operator
Gets the value of the variable pointer by any pointer
*operator lets us directly access & modify the value of variable.
int a=10
int* ptr=&a;
"*ptr"will be equal to 10

#include<iostream>
using namespace std;

int main (){
   int a=10;
   int *ptr=&a;
   cout<<ptr<<endl;
   cout<<*ptr<<endl;
   return 0;
}

#include<iostream>
using namespace std;

int main (){
   int a=10;
   int *ptr=&a;
   cout<<ptr<<endl;
   cout<<*ptr<<endl;
   *ptr=20;
   cout<<a<<endl;
   return 0;

}
   Null Pointer
We assign Null value to a pointer to show that it does not point any location
 int*ptr=NULL;
 Dereferencing null ptr is not possible as it all result in error.

#include<iostream>
using namespace std;

int main (){
   int*ptr=NULL;
   cout<<ptr<<endl;//If any pointer is null then we have not do it reference(other wise give segment fault)
   cout<<"bye";
   return 0;
}

PassingArguments=>
Pass by value
When parameter is a copy of actual argument variable in
memory

Pass by reference(pass by address)
When we pass the reference of argument to function


#include<iostream>
using namespace std;
//   void changeA(int param){
//       param=20;
//       cout<<param<<endl;
//    }
//pass by reference using pointer
void changeA(int *ptr){
    *ptr=20;
    cout<<*ptr<<endl;
}
int main (){
   int a=10;
   changeA(&a);
   cout<<a<<endl;
   return 0;
}
Reference Variables
Reference variable is an alternate name(alias)existing
variable

int a=5;
int&b=a;
a and b refer to the same location in memory

#include<iostream>
using namespace std;
void changeA(int *ptr){
    *ptr=20;
    cout<<*ptr<<endl;
}
int main (){
   int a=10;
   int &b=a;
   b=25;
   cout<<b<<endl;
   cout<<a<<endl;
   //changeA(&a);
   //cout<<a<<endl;
   return 0;
}
   Reference variable ko pass by value se

#include<iostream>
using namespace std;
//Pass by reference using Pointer
// void changeA(int *ptr){
//     *ptr=20;
//     cout<<*ptr<<endl;
// }

void changeA(int &a){
    a=20;
    cout<<a<<endl;
}

int main (){
   int a=10;
   changeA(a);
   cout<<a<<endl;
   return 0;
}

       DSA(Object oriented Programming question)

    Object Oriented Programming Questions




In noops
Class/Object
  :
  Blueprint                      actual object
                                   :
  int plus(int xint y){      Car Verna()
    return x+y;               :
    }                       Blueprint
    class Car{                  Verna color
     int color;                 Verna milage  ..>form multiple obj
     int milage;                verna star();
     void star(){
     }
   }

   Access modifier in class

class Student{
   String RollNo; :>>>WE can not modify this ony do it access
   String name;   :

   void a noll IN case( Sring  Current Name)//They  can  an roll

  }
}

int main (){

  Student xyz("ABC","123")  //They are access only in class
  by object not access we do it

  If any thing outer than we can not use these functionality
}

class student{
Privet:
   String name;
   string roll No;
Public:
   String getName(){
   return this.name}
}
String setName(String newName){
   this.name=newName
   }
   int main (){
     Student abc("xyz","123")  //Student object
    //abc.name   can not access so it is privet
    (they can't the access of privet class)
    abc.getName(); //we can access
    int x=1;
    Student();


       Class Person{
        string name;
        int age;
        Person(string name,int age){ //Forma constructor and pass two value
      this.name=name; //one name coneto function and other come to class
      this.age=age;  //This mean age  var present i the class
        }
        void run(){

        }
        void sleep(){

        }
      void eat(){
      }
   }
      int main (){
      Person obj();
      }
Q->What is the out of the fo the following code;

class access{
   private:
     int y;
   public:
     int x;
     void cal(int a,int b)
     {
        x=a+1;
        y=b;
     }
};
class access_specifier{
   int main(){
      access obj= new access();
      obj.cal.(2,3);
      obj<<obj.x<<" "<<obj.y;  //It have not access this is public
   }
};
q->Which access modifier restricts access to  the same class only
the (not even   derived)


Q10-->
Privet
 classs Base{
 public:BAse(){
   cout<<"Base"<<std::endl
   }
 };
class Derived:publicBase{
  public:Derived(){
   std::cout<<"Derived"<<std::endl;
    }
  };
class DEriDerived: public Derived{
  public:DEriDerived(){
    std::cout<<"DEriDerived"<<std::endl;
   }
  };
  int main (){
    DEriDerived obj(); //Derived functionality i DEriDerived contain
  }

  output:
  BAse
  Derived
  DEriDerived

  Q-12>
  #include<iostream>
  #include<string.h>

  class Base{   //Parent classs
   public:
   Base class{
    public:
   std::cout<<"Base";
    }
   Base(std::string s){
     std::cout<<"Base"<<s;
     }
     virtual-Base(){}
  };
  class Derived:publicBase{  //Derived class
    public:
      Derived(std::string s):Base(s){
        std::cout<<"DErived";
        }
      };

   int main (){
     Derived obj("Hello");
     return 0;
   }

   output:  Base:hello
            Derived

Q13->
 #include<iostream>
 class access{
 public:
   static int x;
   void increment (){
   x++;
   }
 };
 int access::x=0;

 int ,main (){
     access obj1;
     access obj2;

     obj.x=0;
     obj1.increment();
     obj2.increment();

     std:cout<<obj.x<<""<<obj2.x<<std::endl;
  }



#include<iostream>
using namespace std;

class Student{
private:
  string name;
  string  rollNums;
public:
  Student(string name,string rollNums){
    this->name=name;
    this->rollNums=rollNums;
  }
  string getName(){
   return (*this).name;
  }
};
class CollegeStudent :public Student{
   string collageName;
   //vector<string>courses;
   CollegeStudent();
};
class TuitionStudent : public Student{
     string tuitionBatch;

};
int main (){
   //Student abc("ABC","1234");
   //cout<<abc.getName();
   return 0;

}



What will ptr2 point to in the following code

int x=5 , y=10;              x     y
int *ptr=&x; *ptr2=&y;      [5]   [10]
ptr2=ptr1;                  100    200

ptr2==ptr1==&x


#include<iostream>
using namespace std;

int main (){
   int x=5,y=10;
   int *ptr1=&x, *ptr2=&y;
   ptr2=ptr1;
   cout<<ptr2<<endl;
   cout<<ptr1<<endl;
   cout<<&x<<endl;
   return 0;
}
Q->What is the type of a and b:
float* a,;

#include<iostream>
using namespace std;

int main(){
   int *ptr=0;
   cout<<ptr<<endl;
   return 0;
}
 Q->What will be the output of the following code:

#include<iostream>
using namespace std;

int main (){
   int x;
   int*ptr;     output:7
   x=7;
   ptr=&x;
   cout<<*ptr;
   return 0;
}
*Q->
#include<iostream>
using namespace std;
void multipleBy2(int &a,int&b,int&c){
   a *=2;
   b *=2;
   c *=2;
}
int main (){
   int x=1,y=2,z=3;
   multipleBy2(x,y,z);   output: 246
   cout<<x<<y<<z<<endl;
   return 0;
}

#include<iostream>
using namespace std;
int main (){
   int a=32;
   int*ptr=&a;

   char ch='A';
   char &cho=ch;

   cho +=a;
   *ptr +=ch;
   cout<<a<<" "<<ch<<endl;

}

  ARRAY part 1

  Liner collection of same type of element that stored in contiguous memory spaces
.......................................
:97  :  78 : 62  : 54  : 88  : 94 : 95 :
.......................................
0       1    2       3    4      5   6
int
(4)
          length=7
          0 t0 6

Creating an Array
int marks[50];
int marks[50]d={1,2,3};
int marks[]={1,2,3};

Memory is statically allocated(at compile time)

#include<iostream>
using namespace std;
int main (){
   int marks[50]; //0 t0 50 index(0 to 19 only valid index)
   cout<<marks[0]<<endl;
   cout<<marks[1]<<endl;
   cout<<marks[2]<<endl;
   cout<<marks[3]<<endl;
   cout<<marks[50]<<endl;
   return 0;

}


#include<iostream>
using namespace std;
int main (){
   int marks[50]={1,2,3}; //0 t0 50 index(0 to 19 only valid index)
   cout<<marks[0]<<endl; //1
   cout<<marks[1]<<endl;  //2
   cout<<marks[2]<<endl;  //3
   cout<<marks[3]<<endl; //0(After ini index will be zero

   return 0;
}
   Output & Input<<Array
   int arr[5]
   ..................
   7  : 5 : 2 : 1 : 3:
   ...................
   0    1   2   3   4
   length/size=5-1=4


#include <iostream>
using namespace std;
int main () {

    int arr[5]={10,20,30,40,50};
    int n= sizeof(arr)/sizeof(int);
int cout;
    int max=arr[0];
    int min = arr[0];
    for (int i = 0; i<=n ; i++)
    {
     if (arr[i]>max)
     {
       max=arr[i];
     }if (arr[i]<min)
     {
      min=arr[i];
     }
     //cout<<endl;

}
   // cout<<"largest="<<max<<endl;
    //cout<<"Smallest="<<min<<endl;
    return 0;
}

Array by bassed by refrence

#include<iostream>
using namespace std;


int main (){
   int a=5;
   int *ptr=&a;
   cout<<"ptr"<<endl;

   int arr[]={1,2,3,4,5};
   int n= sizeof(arr)/sizeof(int);
   cout<<"*arr"<<endl;
   cout<<*(arr+0)<<endl;//array name use as pointer in function
   cout<<*(arr+1)<<endl;
   cout<<*(arr+2)<<endl;
   cout<<*(arr+3)<<endl;//arr[3]
   cout<<arr[4]<<endl;

   return 0;

}
-->When array value pass i function then array are alwayes pass by refrence



#include<iostream>
using namespace std;

void func(int arr[]){
   arr[0]=1000; //0 index will be become 1000
}//Accor' to call by refrence all changecs should be inside i the functionBut call by refrence say that that chenges in function do it main function
void func2(int * arr){//when array wrught as a pointer the it will be wright
   arr[0]=1000;
}
int main (){
   int a=5;
   int *ptr=&a;
   cout<<"ptr"<<endl;

   int arr[]={1,2,3,4,5}; //changes will be occuer were actual array will be stored
   int n= sizeof(arr)/sizeof(int);

   func(arr);
   cout<<arr[0]<<endl;
   return 0;

}
Space&TimeComplexity
NOTE:Insomevideos,youwillhearaboutwordslikeSpace&TimeComplexityofAlgorithms,bigOhetc.TheconceptofSpace&TimeComplexityiscoveredinthelaterpartofthecourse(asanindividualchapter).Tobeabletounderstanditbeforethat,pleasereadthisreadingmaterial.SCENARIOImagineyougiveyourluckypentooneofyourfriends.Nowyourexamsareapproaching,soyouwouldlikeyourpenback.SPACECOMPLEXITYSpaceComplexityisrepresentedasafunctionthatportraystheamountofspacenecessaryforanalgorithmtorununtilcomplete.Inourscenariowearelookingatyoucanthinkofspacecomplexityasthenumberofroomsyouneedtofigureoutwhohasthepen.However,incomputerscience,thistypicallymeanshowmuchmemorydoestheprocessesanddatastructuresinourcodebase/functionstakeuptoachievetheirgoal.TIMECOMPLEXITYTimeComplexityisrepresentedasafunctionthatportraystheamountoftimenecessaryforanalgorithmtorununtilcomplete.vishalgautamm6@gmail.com
In

Inourscenariowearelookingattimecomplexitythatcanberepresentedintheapproachyoutakeinfindingoutwhohasthepen.However,incomputerscience,thistypicallymeanshowmuchtimetheprocessesanddatastructuresinourcodebase/functionstakeuptoachievetheirgoal.Timecomplexityhoweverisanumbrellatermforthedifferenttypesoftimecomplexitiesthatwecancalculate.Fromfastesttoslowesttheyare:WorstCaseTimeComplexity:TheabsolutemostnumberoftimesanoperationneedstobedonebeforecompletedAverageCaseTimeComplexity:Theaveragenumberoftimesitwilltakeforthealgorithm/codetocompleteAmortizedRunningTime:Similartoaverage,itisthenumberoftimestheoperationwilltakewhenrunasufficientamountoftimeconsecutivelyBestCaseTimeComplexity:ThefastestnumberoftimesanoperationneedstocompleteNOTE-ReadO(n)asBigOhofn.ExampleofComplexityFunction●O(n²):Youaskonefriendiftheyhavethepen.Youalsoaskthemiftheother99friendshavethepen.Afterwardsmoveontothenextfriendandrepeattheprocess.●O(n):Youaskeachfriendonebyoneiftheyhavethepen.vishalgautamm6@gmail.com
●
Inourscenariowearelookingattimecomplexitythatcanberepresentedintheapproachyoutakeinfindingoutwhohasthepen.However,incomputerscience,thistypicallymeanshowmuchtimetheprocessesanddatastructuresinourcodebase/functionstakeuptoachievetheirgoal.Timecomplexityhoweverisanumbrellatermforthedifferenttypesoftimecomplexitiesthatwecancalculate.Fromfastesttoslowesttheyare:WorstCaseTimeComplexity:TheabsolutemostnumberoftimesanoperationneedstobedonebeforecompletedAverageCaseTimeComplexity:Theaveragenumberoftimesitwilltakeforthealgorithm/codetocompleteAmortizedRunningTime:Similartoaverage,itisthenumberoftimestheoperationwilltakewhenrunasufficientamountoftimeconsecutivelyBestCaseTimeComplexity:ThefastestnumberoftimesanoperationneedstocompleteNOTE-ReadO(n)asBigOhofn.ExampleofComplexityFunction●O(n²):Youaskonefriendiftheyhavethepen.Youalsoaskthemiftheother99friendshavethepen.Afterwardsmoveontothenextfriendandrepeattheprocess.●O(n):Youaskeachfriendonebyoneiftheyhavethepen.vishalgautamm6@gmail.com
●

  Linear  serarch

  serrch for kry=10
  .........................................
  : 2  : 4  : 6 : 8 : 10 : 12  : 14 : 16  :
  ............................................
    :    :    :   :     :   :   :  :  :
    0   1    2    3     4

->In linear serch we serch any number 20 that are not exist in the arry then we will writen (-1) value

(arr,n,key){
   for(i=0 to n){
    if (arr[i]==key){
    return i; //rwitten the index value
    }
   }

}

#include<iostream>
using namespace std;

int linearSearch(int *arr,int n,int key) {
   for (int i = 0; i <=n; i++)
   {
      if (arr[i]==key)
      {
        return i;
      }

   }
   return -1;
}   //int arr[] square bracketnotation it is better that we show the arr in the integer form

int main (){
   int arr[]={2,4,6,8,10,12,14,16};
   int n=sizeof(arr)/sizeof(int);
   cout<<linearSearch(arr,n,10)<<endl;
   cout<<linearSearch(arr,n,20)<<endl;
   return 0;
}

REverse an array
with an array of size n,reverse the array in the place
.........................   .........................
: 5  : 4   : 3  : 9 : 2  :   : 2  : 9 : 3  : 4  : 5  :
.........................   .........................
  2    9     3     4    5    copy
  j=n-i-1
  i=0   j=5- 0-1
  i=1   j=5=1-1=3
  i=2   j=5-2-1=2


#include<iostream>
using namespace std;
void printArry(int *arr,int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<",";
   }
   cout<<endl;
}
int main (){
   int arr[]={5,3,9,2};
   int n=sizeof(arr)/sizeof(int);
   int copyArr[n];
   for (int i = 0; i <n; i++)
   {
      int j=n-i-1;
      copyArr[i]=arr[j];
   }
   for (int i = 0; i <n; i++)
   {
     arr[i]=copyArr[i];
   }
   printArry(arr,n);
   return 0;

}
Revese an array
without extra space( 2 Pointer approach)


.........................   .........................
: 5  : 4   : 3  : 9 : 2  :   : 2  : 9 : 3  : 4  : 5  :
.........................   .........................
  2    9     3     4    5    copy
  :                     :                sc:o(1)
  st                    end=n-1           Tc:o(1)

  start=0;,end=n-1;
   while(star<end);  //All the process start<=end
  swap(st,end);
  swap++;
  end--;
-> We take first and last element and swapthem(interchange)

swap two number
int temp=a;
a=b;
b=temp;

#include<iostream>
using namespace std;
void printArry(int *arr,int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<",";
   }
   cout<<endl;
}
int main (){
   int arr[]={5,3,9,2};
   int n=sizeof(arr)/sizeof(int);
   int start=0,end=n-1;

   while(start<end);{
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;
   }
   printArry(arr,n);
   return 0;

}

#include<iostream>
using namespace std;
void printArry(int *arr,int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<",";
   }
   cout<<endl;
}
int main (){
   int arr[]={5,3,9,2};
   int n=sizeof(arr)/sizeof(int);
   int copyArr[n];
   for (int i = 0; i <n; i++)
   {
      int j=n-i-1;
      copyArr[i]=arr[j];
   }
   for (int i = 0; i <n; i++)
   {
     arr[i]=copyArr[i];
   }
   printArry(arr,n);
   return 0;

}

Binary Search
Prerequisite:sorted array
                                 key=12
......................................
: 2 : 4 : 6 : 8  : 10 : 12 :14  : 16  :
......................................
  0  1    2   3    4   5    6     7
 st x           :  st=4 :                 end=n-1
              mid       mid

(1)mid=(st+end)/2 =(0+7)/2=3(take int value)
(arr[mid]==Key)
return mid;   //if key value big to mid then we findoutsecond phase
(arr[mid]<key)
  2nd half ....>st=mid+1
(arr[mid]>Key)
  1st half.....>end=mid-1
->Binary seach gave better complexity then linear search but it is only work in sorted arry

st<=end;
Binary Search
Pseudocode

int st=0;end=n-1;
while(st<=endl){
 mid=(st+end)/2;
 if(arr[mid]==key){
     return mid;
     }else if(arr[mid]<key){ //2nd half
     st=mid+1;
  }else{  1 st hahf
   end=mid-1;}
}
   teturn -1;


#include<iostream>
using namespace std;
int binarySearch(int *arr,int n,int key){
    int st=0,end=n-1;
      while(st<=end){
        int mid=(st+end)/2;
      if (arr[mid]==key)
      {
          return mid;
      }
      else if(arr[mid]<key){
         st=mid+1;
      }else{
         end=mid-1;
      }
   }
   return -1;
}
int main (){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr,n,50);

    return 0;

}


Binary search
Time complexity

.......................
: 1 : 2 : 3  : 4  : 5  :
.......................
In every  itration arry will be half

1st itration  arr size=n
2nd itration  arr size=n/2
3rd itration  arr sie=n/4
:                   :
:                   :
:                   1
x itration  arr size=n/2power (x-1)=1


n=2power(x-1)
log2n=x-1
x=log2 n

o(logn) it is best  time complexity

 Array pointer
 =>Array Pointer acts  like a consttant pointer that point the first element of the array

#include<iostream>
using namespace std;

int main (){
   int x=10;
   int*ptr=&x;

   int y=25;
   ptr=&y;
   cout<<*ptr<<endl;
   return 0;
}


#include<iostream>
using namespace std;

int main (){
   int arr[5];
   cout<<arr<<endl;
   int y=25;
   arr=&y; //It is not possible becouse arry pointer is constant pointer that
   point the first element of the array
   return 0;
}
   Pointer Arithmatic
   when we add any integer value then it point to the next value of the same type

   1.Increment an d derement operator
   ptr++ or ++ptr
   ptr--or --ptr

       .............................
       :  :   :  :  :  :  :  :  :  :
       .............................
      100 101 102 103 104 105 106 107
      int take 4 byte whenprint he int++ then it go to 4 byte in the front
      like as
      ptr=100
      ptr++=>ptr=104;

  #include<iostream>
  using namespace std;
  int main (){
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    return 0;
  }

   Pointer Arithmatic
   2.Addition and subtraction of costant
    ptr+3=ptr+3*size of data type
    int*ptr+3=ptr+3*4=ptr=12byte


   #include<iostream>
   using namespace std;
   int main (){
      int a=5;
      int*ptr=&a;
      cout<<ptr<<endl;
      cout<<(ptr+3)<<endl;
      return 0;
   }

   ptr-3=ptr-3*size of data type
   int*ptr-3=ptr-3*4=ptr-12byte;

#include<iostream>
using namespace std;
void pointerArr(int *ptr,int n){
   for (int i = 0; i <n; i++)
   {cout<<*ptr<<endl;
      ptr=ptr+1;
   }
}

int main (){
   int arr[]={1,2,3,4,5};
   int n= sizeof(arr)/sizeof(int);
   pointerArr(arr,n);
   return 0;


ptr1+ptr2 //Invalid operation
ptr1-ptr2 // both should be of same type


#include<iostream>
using namespace std;
int main (){
   int arr[20]={1,2,3,4,5,6};
   int *ptr1=arr;
   int *ptr2=ptr1+3;
   cout<<*ptr2<<endl;
   cout<<*ptr1<<endl;
   return 0;

}

4.Comparision(==,<,<=,>,>=)

  #include<iostream>
using namespace std;
int main (){
   int arr[20]={1,2,3,4,5,6};
   int *ptr1=arr;
   int *ptr2=ptr1+3;

   cout<<(ptr2 == ptr1)<<endl;
   return 0;

}
   [dsa Practice]
Assigment
1.Complex number->class and object
  add two number
  Subtract two number
  product of two number

     z=a+ib
     ex-> z=3+5i
            :  :........>Imaginary
            Real part
Addition of two complex number
5+4i     3+2i
      :
      8+6i
(real1+real2)( Imag1+Imag )

Subtraction of two complex number
a+ib     x+iy
      :
      (a-x)+(b-y)i
(real1+real2)( Imag1+Imag )
(a+ib)+(x+iy)=ax+iay+ibx+ipower2by          i power 2=-1
ax-by+i(ay+xb)
:  :     :.>real1ximg2+real2ximg1
:  :
:  :.........>img1ximg2
:
real1xreal2

 class{
    int real,imaginary;
 }

 this.real=real;
 this.imaginary=imaginary;
 it is initicialize the the current data membear
 c1,real=real   c1.imaginary=imaginry




Q->
#include<iostream>
using namespace std;
class Complex{
    public:
    int real,imaginary;
    Complex(int r=0,int i=0){
      this->real=real;
      this->imaginary=imaginary;
    }
    Complex addition(Complex c1,Complex c2){
      Complex result;
      result.real=c1.real+c2.real;
      result.imaginary=c1.imaginary+c2.imaginary;
      return result;
    }
    Complex Subtraction(Complex c1,Complex c2){
      Complex result;
      result.real=c1.real-c2.real;
      result.imaginary=c1.imaginary-c2.imaginary;
      return result;
    }
    Complex Product(Complex c1,Complex c2){
      Complex result;
     result.real=c1.real*c2.real-c1.imaginary*c2.imaginary;
     result .imaginary=c1.real*c2.imaginary-c2.real*c1.imaginary;
      return result;
    }
};
int main (){

   Complex c1(5,3);
   Complex c2(2,1);
   Complex obj;
   Complex result1=obj.addition(c1,c2);
   Complex result2=obj.Subtraction(c1,c2);
   Complex result3=obj.Subtraction(c1,c2);
   cout<<"addition:"<<result1.real<<"+"<<result1.imaginary<<"i"<<endl;
   cout<<"Subtraction:"<<result2.real<<"+"<<result2.imaginary<<"i"<<endl;
   cout<<"Product:"<<result3.real<<"+"<<result3.imaginary<<"i"<<endl;
   return 0;

}

Q->nk account number
int accountNumber;
double balance;

 void deposit(int amount){
  balance=balance+amount;
  }
  void withdrow(double amount){
  if(amount<=balnce){------------>The amount we want to withdrow should be less than eqaul to balance
      balance=balance-amount;
   }else{
       Insufficint Balance;
    }
  }
    double checkBalance(){
    return balance;
    }

Q->
#include<iostream>
using namespace std;
class BankAccount{
   private:
   int accountNumber;
   double balance;
   public:
   BankAccount(int accountNumber,double balance){
      this->accountNumber=accountNumber;
      this->balance=balance;
   }
   void deposit(double ammount){
      balance=balance+ammount;
   }
   void withdrow(double amount){
      if (amount<=balance)
      {
         balance=balance-amount;
      }else{
        cout<<"Insufficient Balance"<<endl;
      }
   }
   double checkBalnce(){
      return balance;
   }
};
int main (){
      BankAccount account(123,1000);
      account.deposit(300);
      cout<<account.checkBalnce()<<endl;
      account.withdrow(500);
      cout<<account.checkBalnce();
      return 0;
}
      Dout
#include<iostream>
#include<string>
using namespace std;

class Person{
   protected:
   string name;
   int age;
   public: Person(string name,int age){
      this-> name=name;
       this->age=age;
   }
}

   class Student:public Person{
  private:
  string rollNo;
  public:
  Student(string name,int age,int rollNo):Person(name,age){
      this->rollNo=rollNo;
   }
   void displayData(){
      cout<<"Name:"<<name<<endl;
      cout<<"Age:"<<age<<end;
      cout<<"RollNo"<<ollNo<<endl;
   }


};
int main (){
   Student st("Harry",24,79);
   st.displayData();
   return 0;
}

PrintSubarrays -->time complexity o(n power 3)
Subarray is continous part of an array   Subsequance(non-continous)
.....................                      1,3,5
: 1 : 2 :3  : 4 :5  :
.....................
1,12,123,1234,1345->5   start     end
2,23,234,2345->4         0        0,1,2,3,4,
3,34,345->3              1        1,2,3,4,
4,45->2                  2        2,3,4
5->1                     3        3,4,
n ize of arry=n+(n+1)/2  4        4


  #include<iostream>
  using namespace std;

  void printSubarrys(int *arr,int n){
  for (int start = 0; start<n; start++)
  {
   for (int end= start; end<n; end++)
   {
     //cout<<"("<<start<<","<<end<<")\n";
     for (int i = start; i <=end; i++)
     {
      cout<<arr[i];
     }
     cout<<",";
   }
   cout<<endl;
  }


  }
  int main (){
   int arr[5]={1,2,3,4,5};
   int n=5;
   printSubarrys(arr,n);
   return 0;
  }


Max Subarray Sum
Brute Force Approach
...............................
: 2 : -3 : 6  :-5   : 4  :  2 :
...............................
  2   -1  5    0     4     6
 -3   3  -2    2    4
  6   1   5    7
 -5  -1   1
  4   6
  2
Print the max sub arr
maxsum not initialize to 0  [-1,-2,-3,-4]
we initialize to INT_MIN


 #include<iostream>
 #include<climits>
  using namespace std;

  void printSubarrys(int *arr,int n){
   int maxsum=INT_MIN;
  for (int start = 0; start<n; start++)
  {
   for (int end= start; end<n; end++)
   {
     int currSum=0;
     for (int i= start; i <=end; i++)
     {
      currSum+=arr[i];
     }
     cout<<currSum<<",";
      maxsum=max(maxsum,currSum);//when ueses int maxsumthen it give the garbage value
     //max(a,max(b,c)); foe three number
   }
   cout<<endl;
  }
  cout<<"maximum subarray sum="<<maxsum<<endl;


  }
  int main (){
   int arr[6]={2,-3,6,-5,4,2};
   int n=6;
   printSubarrys(arr,n);
   return 0;
  }
MAX sum arry(Slightly optimised)
.................................
: 2  :-3   : 6  ;  -5  : 4  ; 2 :
.................................
 0      1     2    3     4     5

 #include<iostream>
 #include<climits>
  using namespace std;

  void printSubarrys(int *arr,int n){
   int maxsum=INT_MIN;
  for (int start = 0; start<n; start++)
  {
   for (int end= start; end<n; end++)
   {
     int currSum=0;
     for (int i= start; i <=end; i++)
     {
      currSum+=arr[i];
     }
     cout<<currSum<<",";
      maxsum=max(maxsum,currSum);//when ueses int maxsumthen it give the garbage value
     //max(a,max(b,c)); foe three number
   }
   cout<<endl;
  }
  cout<<"maximum subarray sum="<<maxsum<<endl;
}
void maxSubarrysSum2(int *arr,int n){
   int maxsum=INT_MIN;
  for (int start = 0; start<n; start++)
  { int currSum=0;
   for (int end= start; end<n; end++)
   {
     maxsum+=arr[end];
      maxsum=max(maxsum,currSum);//when ueses int maxsumthen it give the garbage value
     //max(a,max(b,c)); foe three number
   }
   cout<<endl;
  }
  cout<<"maximum subarray sum="<<maxsum<<endl;


  }
  int main (){
   int arr[6]={2,-3,6,-5,4,2};
   int n=sizeof(arr)/sizeof(int);//if you write int n=6 then it will not print
   maxSubarrysSum2(arr,n);
   return 0;
  }


  MAX sum arry                               2  number's
  Kadane's Algorithms(DP)                  +ve  +   +ve---->+ve
.................................          -ve  +   +ve(laargest)--->+ve
: 2  :-3   : 6  ;  -5  : 4  ; 2 :          -ve +  +ve----->-ve
.................................
 0      1     2    3     4     5

uses Sum=0;
maxSum=INT_MIN


for(int i=0 to n)
currSum +=arr[i]
maxSum=max(maxSum,CurrSum)
if(maxSum<0)
currSum<0;
}

#include<iostream>
#include<climits>
using namespace std;
void maxSubarraySum3(int*arr,int n){
   int maxSum=INT_MIN;
   int currSum=0;
   for (int i = 0; i <=n; i++)
   {
      currSum+=arr[i];
      currSum<0;
      maxSum=max(currSum,maxSum);
      if(currSum<0){
         currSum=0;
      }
   }
  cout<<"maximum subarray sum="<<maxSum<<endl;
}
int main (){
  int arr[4]={-1,-2,-3,-4};
   int n=sizeof(arr)/sizeof(int);//if you write int n=6 then it will not print
   maxSubarraySum3(arr,n);
   return 0;
}
Buy and Sell Stock
                                 prices=[7,1,5,3,6,4]
   :7       .5   .6
   :    .1     .3
   :               .4
   :.................
   Example1:
   Input:prices=[7,1,5,3,6,4]
   output:5
   Explanation:Buy on day 2 (price=1)and sellon the day 5(price=6),profit:6-=5
   Note that bying on day 2 and selling on day 1 is not allowed because you must buy before you
   Ex->
   Input:prices=[7,6,4,3,1]
   output:0
   Explanation:IN this case,no transection are done and the max profit=0

   Constraints:
   1<=prices.lenght<=10power 5
   0<=prices[i]<=10power 4

   eachday=sell day
   bestBuy[i= 0 to 2]

   bestBuy INT_MAX
buy   ................................
      : -infinite :7  : 1 : 1: 1  : 1 :
       .................................
        0       1   2   3   4   5

Sell   ........................
 n     :7 : 1 : 5 : 3 : 6 : 4 :
       .........................
Profit
      ................................
     :-infinite : -6 : 4 : 2 : 5 : 3 :
     .................................

loop( i=0 to `n-1)
      .    .............................
best buy    :infinite :7 : 1 : 1: 1 : 1 :
           ............................
                       i   2   3   4   5

bestBuy[i]=min(bestBuy[i-1],price[i-1])


#include<iostream>
#include<climits>
using namespace std;

void maxProfit(int *prices,int n){
   int bestBuy[100000];

   bestBuy[0] = prices[0];  // initialize with first price
  // cout<<bestBuy[0]<<",";

   for (int i = 1; i < n; i++)
   {
      bestBuy[i] = min(bestBuy[i-1], prices[i]);
     // cout << bestBuy[i] << ",";
   }
   int maxProfit=0;
   for (int i = 0; i <n; i++)
   {
      int currProfit=prices[i]-bestBuy[i];
     maxProfit=max(maxProfit,currProfit);
   }

   cout <<"max Profit="<<maxProfit<<endl;
}

int main (){
    int prices[6]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(int);
    maxProfit(prices,n);
    return 0;
}

Trapping Rainwater            height=[4,2,0,6,3,2,5]
                              Find the amount of water trap
         0
         :...      0
         :  : 2   :...
:.0..2   :  :...  :  :
:  :... 4:  :  :.3.. :
:  :  :  :  :  :  :  :
 4  2  0  6  3  2  5   final water trapped =11

 at 0 water trapped  4
 at 2 water tapped   5(left largest and right largest in both thar are smallest is decide the trapped water)

* bar needs the to trap wateri.i larger bars on the bords sides
*min of(left largerst & right largest)bar gives trapped water
min size=>  n>2

;..            4-bar=water trapped
: :  :...     4-1=3
: :..:  :
; :  :  :
 6  1  4
Auxiliary Arrays
.......................
: 4 ;2 ; 0 : 6  ;3 : 2 :
.......................

Left Max                           In left if not esixt any max value then value wi
....................................             will be -infinite
:-infinit  :4  : 4 :4  : 6  : 6 : 6 :
....................................

leftMax[i]=max(leftMax[i-1],height[i-1])

Q->Tapping rain water

#include<iostream>
#include<climits>
using namespace std;
void trap(int*heights,int n){
   int leftMax[20000];
   leftMax[0]=INT_MIN;
   leftMax[0]=heights[0];
   for (int i = 1;i <n; i++)
   {
      leftMax[i]=max(leftMax[i-1],heights[i]);

   }
   for (int i = 0; i < n; i++)
   {
      cout<<leftMax[i]<<",";
   }
   cout<<endl;
}

int main (){
   int heights[7]={4,2,0,6,3,2,5};
   int n=sizeof(heights)/sizeof(int);
   trap(heights,n);
   return 0;
}

   #include<iostream>
#include<climits>
using namespace std;
void trap(int*heights,int n){
   int leftMax[20000];
   leftMax[0]=INT_MIN;
   cout<<leftMax[0]<<",";
   leftMax[0]=heights[0];
   for (int i = 1;i <n; i++)
   {
      leftMax[i]=max(leftMax[i-1],heights[i]);//if we print i+1 in hight then it give me extra 1 plus like as last term given 6 then it become 7
      cout<<leftMax[i]<<",";//It this condition we calculate leftmax value
   }

   cout<<endl;
}

int main (){
   int heights[7]={4,2,0,6,3,2,5};
   int n=sizeof(heights)/sizeof(int);
   trap(heights,n);
   return 0;
}
Right shift meathod
Right
.......................................
:6 :6  : 6  : 5  :5   : 5  : -infinte  :
........................................

rightMax[i]=max(rightMax[i+1],h)





   #include<iostream>
#include<climits>
using namespace std;
void trap(int*heights,int n){
   int leftMax[20000];
   leftMax[0]=INT_MIN;
   cout<<leftMax[0]<<",";
   leftMax[0]=heights[0];
   for (int i = 1;i <n; i++)
   {
      leftMax[i]=max(leftMax[i-1],heights[i]);//if we print i+1 in hight then it give me extra 1 plus like as last term given 6 then it become 7
      cout<<leftMax[i]<<",";//It this condition we calculate leftmax value
   }

   cout<<endl;
}

int main (){
   int heights[7]={4,2,0,6,3,2,5};
   int n=sizeof(heights)/sizeof(int);
   trap(heights,n);
   return 0;
}

Left shift
...................................
:6  : 6 :6  : 5 : 5 : 5  :-infinte :
...................................

 #include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void trap(int *heights, int n) {
    int leftMax[20000], rightMax[20000];

    // Initialize
    leftMax[0] = heights[0];
    rightMax[n-1] = heights[n-1];

    // Fill leftMax
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1], heights[i]);
    }

    // Fill rightMax
    for (int i = n-2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i+1], heights[i]);
    }

    // Calculate trapped water
    int water = 0;
    for (int i = 0; i < n; i++) {
        water += min(leftMax[i], rightMax[i]) - heights[i];
    }

    cout << "Total trapped water = " << water << endl;
}

int main() {
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);
    trap(heights, n);
    return 0;
}

 #include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void trap(int *heights, int n) {
    int leftMax[20000], rightMax[20000];

    // Initialize
    leftMax[0]=INT_MIN;
    leftMax[0] = heights[0];
    rightMax[n-1] = heights[n-1];

    // Fill leftMax;
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
    }

    // Fill rightMax
    for (int i = n-2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
        cout<<rightMax[i]<<",";
    }
     cout<<rightMax[n-1]<<",";
     cout<<endl;
}

int main() {
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);
    trap(heights, n);
    return 0;
}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool containsDublicate(vector<int>&nums){
     sort(nums.begin(),&nums){
      for (int i = 1; i < nums.size(); i++)
      {
         if (nums[i]==nums[n-1])
         {
            return True;
         }
      }
      return false;
     }
}
int main(){
   vector<int>nums={1,2,3,4,5,1};
   cout<< containsDublicate(nums);
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

    cout << containsDuplicate(nums);
    return 0;
}
Q->
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&nums,int target){
   int low=0,high=nums.size()-1;

   while(low<=high){
      int mid=(low+high)/2;

      if (nums[mid]==target)
      {
         return mid;
      }
      if (nums[low]<=nums[mid])
      {
        if (nums[mid]<= target)
         {
             high=mid-1;
         }else {
            low=mid+1;
         }

        }else{
           high=mid-1;
        }

      }
      return -1;

   }

int main (){
   vector<int> nums = {1, 2, 3, 1};

    cout << (nums);
    return 0;
    return 0;
}
Bubble
Idea:Large elements come to  end by swapping with adjacents
[5,4,1,3,2]

for (int i = 0; i < n-1; i++)
{
   for ( j = 0; j < n-i-1; j++)
   {
      if (arr[i]>arr[j+1])
      {
         swap(arr[j],arr[j+1]);
      }

   }

}

#include<iostream>
using namespace std;
void print(int arr[],int n){
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void bubbleSort(int arr[],int n){
   for (int i = 0; i < n-1; i++)
   {
      for (int j = 0; j <n-i-1; j++)
      {
         if (arr[j]>arr[j+1])
         {
           swap(arr[j],arr[j+1]);
         }

      }

   }
   print(arr,n);

}
int main (){
   int arr[5]={5,4,1,3,2};
   bubbleSort(arr,5);
   return 0;

}

->For decending bubble short
#include<iostream>
using namespace std;
void print(int arr[],int n){
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void bubbleSort(int arr[],int n){
   for (int i = 0; i < n-1; i++)
   {
      for (int j = 0; j <n-i-1; j++)
      {
         if (arr[j]<arr[j+1])
         {
           swap(arr[j],arr[j+1]);
         }

      }

   }
   print(arr,n);

}
int main (){
   int arr[5]={5,4,1,3,2};
   bubbleSort(arr,5);
   return 0;

}

#include<iostream>
using namespace std;
void print(int arr[],int n){
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void bubbleSort(int arr[],int n){
   for (int i = 0; i < n-1; i++)
   {  bool isSwap=false;
      cout<<"outer loop";
      for (int j = 0; j <n-i-1; j++)
      {  cout<<"innner loop";
         if (arr[j]<arr[j+1])
         {
           swap(arr[j],arr[j+1]);
         }
      }
      if (!isSwap)
      {
        return ;
      }
   }
   print(arr,n);

}
int main (){
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   bubbleSort(arr,5);
   return 0;

}

Selection Sort
Idea:pink the smallest(from unsorted)&put in the beginning
for (int i = 0; i < n-1; i++)
{
 index=i;
 for (int j = 0; i < count; i++)
 {
   if (arr[j]<arr[minindex])
   {
      minindex=j
   }
  swap(arr[i],arr[minindex])
 }

}
Accending order

#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
void print(int arr[],int n){
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void selectionSort(int arr[],int n){
   for (int i = 0; i <n-1; i++)
   {
      int minIdx=i;
      for (int j=i+1; j<n; j++)
      {
         if (arr[j]<arr[minIdx])
         {
           minIdx=j;
         }

      }
     swap(arr[i],arr[minIdx]);
   }
  print(arr,n);
}
int main (){
   int arr[5]={5,4,1,3,2};
   selectionSort(arr,5);
   return 0;
}
Decending order

#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
void print(int arr[],int n){
   //0(N*longn)is better than o(n power 2)
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void selectionSort(int arr[],int n){
   for (int i = 0; i <n-1; i++)
   {
      int minIdx=i;
      for (int j=i+1; j<n; j++)
      {
         if (arr[j]>arr[minIdx])
         {
           minIdx=j;
         }

      }
     swap(arr[i],arr[minIdx]);
   }
  print(arr,n);
}
int main (){
   int arr[5]={5,4,1,3,2};
   selectionSort(arr,5);
   return 0;
}

Insertion sort

Idea:pick a eleement from element fromunshortd element
[5,4,1,3,2]

[5,4,1,3,2]  curr=4   for(int i=1;i<n;i++){
   .......             int curr=arr[i]
[4,5,1,3,2] curr=1
....                  //before inserted for insertd part (sorted) we take bakward loop
[1,4,5,3,2] curr=3     prev=i-1(loop will be start previus)              //before previus we will be shift all array shift backword

                  it will be run wen prev is larege to curr value it swap  arr[prev] to arr[prev+1]it will be stop
                  when prev value greater  the current value it show(prev>=-1)

....         while(arr[prev]>=0 && arr[prev]>curr){
[1,3,4,5,2]  curr=2  swap(arr[prev],arr[prev+1]);
                  prev--
[1,2,3,4,5]


#include<iostream>
using namespace std;
//O(n^2)time complexity
void print(int arr[],int n){
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void insertionsort(int arr[],int n){
   for (int i = 1; i <n; i++)
   {
      int curr=arr[i];
      int prev=i-1;
      while(prev>=0 && arr [prev]>curr){
      swap(arr[prev],arr[prev+1]);
      prev--;
      }
      arr[prev+1]=curr;
   }
   print (arr,n);
}
int main (){
   int arr[5]={5,4,1,3,2};
   insertionsort(arr,5);
   return 0;

}
   Counting Sort
Idea:use a frequency count of element from min to max.
[1,4,1,3,4,2,4,3,7]
min<-->max  +venumber

 min 1 and max 7 (show its range will be 1to7) counting short range we will be use when nuber of counting will be small
 rang
 ............................    freq[arr[i]]++
 : 0 :2  :1  :2  : 2 :  :  : 1 :  : freq
 ............................
  0    1  2   3   4   5   6   7  8  index=alue

[1,4,1,3,4,2,4,3,7]  n=8
 1 1 2 3 3 4 4 7sorted

 (1)frq(inti=0 to n-1)
 frq[arr[i]]++
 (2)for(min arr to max arr)
 while(frq[i]>0){
 arr[j]=i;
 frq[i]--
 }

 Count short algorithms

#include<iostream>
#include<climits>
using namespace std;

void print(int arr[], int n){
   for (int i = 0; i < n; i++){
      cout << arr[i] << " ";
   }
   cout << endl;
}

void countSort(int arr[], int n){
   int minValue = INT_MAX, maxValue = INT_MIN;

   for (int i = 0; i < n; i++){
      minValue = min(minValue, arr[i]);
      maxValue = max(maxValue, arr[i]);
   }

   int range = maxValue - minValue + 1;
   int freq[100000] = {0};

   for (int i = 0; i < n; i++){
      freq[arr[i] - minValue]++;
   }

   int j = 0;
   for (int i = 0; i < range; i++){
      while(freq[i] > 0){
         arr[j++] = i + minValue;
         freq[i]--;
      }
   }

   print(arr, n);
}

int main (){
   int arr[8] = {1,4,1,3,2,4,3,7};
   countSort(arr, 8);
   return 0;
}

Inbuild Order
    sort(start,end)
Decending order
  sort(start,end,greater<int>())


  In-built sort


#include<iostream>
#include<climits>
using namespace std;

void print(int arr[], int n){
   for (int i = 0; i < n; i++){
      cout << arr[i] << " ";
   }
   cout << endl;
}

void countSort(int arr[], int n){
     int freq[100000] = {0};
   int minValue = INT_MAX, maxValue = INT_MIN;

   for (int i = 0; i < n; i++){
      minValue = min(minValue, arr[i]);
      maxValue = max(maxValue, arr[i]);
   }
   for (int i = 0; i < n; i++){
      freq[arr[i]]++;
   }

   int j = 0;
   for (int i = maxValue; i >=minValue; i--){
      while(freq[i] > 0){
         //arr[j++] = i + minValue;
         arr[j++]=i;
         freq[i]--;
      }
   }

   print(arr, n);
}

int main (){
   int arr[5] = {4,2,4,1,3};
   countSort(arr, 5);
   return 0;
}

Q->Sort this array of characters using insertion sort desending order
char[]={'f','b','a','e','c','d'}

#include <iostream>
using namespace std;

void sortchar(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char curr = arr[i];
        int prev = i - 1;

        // Shift smaller elements to the right (for descending order)
        while (prev >= 0 && arr[prev] < curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int main() {
    char arr[] = {'f','b','a','e','c','d'};
    int n = sizeof(arr) / sizeof(arr[0]);

   sortchar(arr, n);

    cout << "Sorted array in descending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
Q->
#include<iostream>
using namespace std;
void print(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void selectionSort(int arr[],int n){
   for (int i = 0; i < n-1; i++)
   {
      int minIdex=i;
      for (int j= i+1; j <n ; j++)
      {
         if (arr[j]<arr[minIdex])
         {
            minIdex=j;
         }

      }
      swap(arr[i],arr[minIdex]);
   }
   print(arr,n);
}
int main (){
   int arr[10]={3,6,2,1,8,7,4,5,3,1};
    selectionSort(arr,10);
}

#include<iostream>
using namespace std;
void print(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void bubbleSort(int arr[],int n){
   for (int i = 0; i < n-1; i++)
   {
      for (int j = 0; j <n-i-1; j++)
      {
         if (arr[j]>arr[j+1])
         {
           swap(arr[j],arr[j+1]);
         }

      }

   }
   print(arr,n);

}
int main(){
   int arr[10]={3,6,2,1,8,7,4,5,3,1};
    bubbleSort(arr,10);

}

   #include<iostream>
using namespace std;
void print(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void bubbleSort(int arr[],int n){
   for (int i = 0; i < n-1; i++)
   {
      for (int j = 0; j <n-i-1; j++)
      {
         if (arr[j]>arr[j+1])
         {
           swap(arr[j],arr[j+1]);
         }

      }

   }
   print(arr,n);

}
int main(){
   int arr[10]={3,6,2,1,8,7,4,5,3,1};
    bubbleSort(arr,10);

}
    Q->INsertion problem

#include<iostream>
using namespace std;
void print(int arr[],int n){
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void insertionsort(int arr[],int n){
   for (int i = 1; i <n; i++)
   {
      int curr=arr[i];
      int prev=i-1;
      while(prev>=0 && arr [prev]>curr){
      swap(arr[prev],arr[prev+1]);
      prev--;
      }
      arr[prev+1]=curr;
   }
   print (arr,n);
}
int main (){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    insertionsort(arr,10);
}

 2D-Arrays

...............                     ...............
: 1  : 2  : 3 :                     .:.1..;.2...:.3:
...............                     :...5..:.6..:.7:
  1D                                2D


int student[2][3]={{100,100,100}{75,80,85}};       : w1 :h1  :
weight[]={-----------}                             : w2 :h2  :
                                                   : w3 : h3 :

   int student[5][2];
   int arr[][]--={{},{}------}
   ex->
   int student[3][3]={{100,100,100},{85,74,65},{63,72,65}}
                    arr[4][3]
                       0   1   2
                  0  :   :   :  :
                  1  :   :   :  :
                  2  :   :(2,1):  :  ...>arr[2][1]
                  3  :   :   :  :

   #include<iostream>
   using namespace std;

   int main (){
        int student[3][3]={{100,100,100},  //Always 2D array vijulize in 2D form
                            {85,74,65},
                            {63,72,65}};
                           cout<<student[1][1]<<endl;
                           cout<<student[0][1]<<endl;
                           cout<<student[1][0]<<endl;
                           cout<<student[2][1]<<endl;
                           cout<<student[1][2]<<endl;
                           cout<<student[2][2]<<endl;
                            return 0;
  }
    input and output 2D array                for(int i=0 to n-1)
    :  :  :  :  :..r1
    :  :  :  :  :..r2                         for(int j=0 to m-1)
    :  :  :  :  :..r3
    Rowwise arr traversing array
   #include<iostream>
   using namespace std;
   int main (){
      int arr[3][4];
      int n=3,m=4;
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m ; j++)
         {
            cin>>arr[i][j];
         }
      }
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m ; j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
      }
     return 0;
   }
2D AArays in memeory
A 2D aaray is represented as a conductor as a contiguous block of memeory cells(linerly)

RowMajor                              1 2 3
.............................         4 5 6
: 1 :2 :3 :4 :5 :6 :7 :8 :9 :         7 8 9
..............................


Column major
.............................         1 2 3
: 1 :4 :7 :2 :5 :8 :3 :6 :9 :         4 5 6
..............................        7 6 9

Trvel in spiral way
:1 : 2 :3 : 4 :
:5 : 6 :7 : 8 :
:9 : 10:11: 12:
:12:13 :14: 15:

output: 1 2 3 4 8 12 15 14 13 12 9 5  6 7 11 10

Approch          start =0
  Top            & col=0
  :              ending row=n-1
  right          ending colum=n-1
                Top
    :bottom     for(start to ending)
    :            mat[start row][j]
    left       Right
              for(start row+1 to ending rows)
   Bottom
   for(endingcol-1 to start colum){
   mat[endingrow][j]}

   Left(ending row-1 to start row+1)
   mat[i][startcolum]

   Spiral Marix

   srow!=erow  //(srow<=erow && col <=ecol)
                                   :
                                 if we right this then ever element print double or thriple time
   scol!=ecol

#include<iostream>
using namespace std;
void spiralMatrix(int matrix[4][4],int n,int m){
int srow=0,scol=0;
int erow=n-1,ecol=m-1;
while (srow<=erow && scol <=ecol)
{
//top
          for (int j = scol; j<= ecol; j++) {
             cout<<matrix[srow][j]<<" "; //j ->colum
          }
//right
         for (int i = srow+1; i<=erow ; i++){
          cout<<matrix[i][ecol]<<" ";
          }


//bottom
         if(srow<erow){for (int  j = ecol-1; j>=scol; j++){
            cout<<matrix[ecol][j]<<" ";
          }
         }
         if(scol<ecol){
//left
           for (int i = erow-1; i >scol+1; i++)
        {
           cout<<matrix[ecol][scol]<<" ";
         }
      }
         srow++;
         scol++;
         erow--;
         ecol;
       }
       cout<<endl;
     }
int main (){
   int matrix[4][4]={{1,2,3,4},
                      {5,6,7,8,},
                     {9,10,11,12},
                     {13,14,15,16}};
   spiralMatrix(matrix,4,4);
   return 0;
}

or->

#include <iostream>
using namespace std;

void spiralMatrix(int matrix[4][4], int n, int m) {
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol) {

        // top row
        for (int j = scol; j <= ecol; j++) {
            cout << matrix[srow][j] << " ";
        }

        // right column
        for (int i = srow + 1; i <= erow; i++) {
            cout << matrix[i][ecol] << " ";
        }

        // bottom row
        if (srow < erow) {
            for (int j = ecol - 1; j >= scol; j--) {
               if(srow==ecol){//weare print the middele val becouse it print in also Top and agin print in bottom
                  break;
               }
                cout << matrix[erow][j] << " ";
            }
        }

        // left column
        if (scol < ecol) {
            for (int i = erow - 1; i > srow; i--) {
                cout << matrix[i][scol] << " ";
            }
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }

    cout << endl;
}

int main() {
    int matrix[4][4] = {   //odd size mean copy any matrix
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    spiralMatrix(matrix, 4, 4);
     int matrix2[4][4] = {   //odd size mean copy any matrix
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
       spiralMatrix(matrix2, 3, 4);
    return 0;
}
Dignol sum
1 2 3 4               (both dignolsum-common)
5 6 7 8                  j=n-i-1
9 10 11 12
12 14 15 16

#include<iostream>
using namespace std;
int diagonalSum(int matrix[][3],int n){
   int sum=0;
   for (int i = 0; i < n; i++)//Time complexity this o(n^2)
    {
     for (int j = 0; j< n; j++)
     {
      if(i==j)
      {               //use of else if then common element add ony one time
         sum+=matrix[i][j];//Primary dignol sum
      }else if (j==n-i-1)
      {
         sum+=matrix[i][j]; //Secondary dignol sum
      }

     }

   }
  cout<<"sum="<<sum<<endl;
  return 0;

}
int main (){
    int matrix[3][3]={{1,2,3},
                      {4,5,6},
                     {7,8,9}};
            diagonalSum(matrix,3);
        return 0;
}

Method ->2
#include<iostream>
using namespace std;
int diagonalSum(int matrix[][3],int n){
 //we take only single loop and findout i and j both
 int sum=0;
 for (int i = 0; i < n; i++)
 {
   sum+=matrix[i][i];
   if(i!=n-i-1)   //j=n-i-1
   {
      sum+=matrix[i][n-i-1]; //secondry dignol
   }
 }
 cout<<"sum="<<sum<<endl;
 return sum;

}
int main (){
    int matrix[3][3]={{1,2,3},
                      {4,5,6},
                     {7,8,9}};
            diagonalSum(matrix,3);
        return 0;
}

Search in Sorted Matrix                   10 20 30 40...>R1 logm
                                          15 25 35 45...>R2logm
Approch                                   27 29 37 48....>R3logm
1.Bruteforce approch                      32 33 39 50.....>R4logm(IN worst case)
 o(n*n)
2.Row/columwise Binary search
If serch throgh row wise the taken tmie o(n*log n)
if serc throgh col wise binary serch  o(n*log m)

Staircase Search
cells special property   10 20 30 40 key=33
                         15 25 35 45
                         27 29 37 48
                         32 33 39 50   distance=(n+m)-->max we take step
cell start=>matrix[0][m-1]
while(r<n &&c>=0)
cell ==Key  found
cell<key   down row++
cell<Key(then we are goes to doun word becouse smallest value exixt i left)
cell>key left col--(this process cotinue untilwe not findout over value)
Time complexity
o(n+m)very efficient compared to o(n^2)


#include<iostream>
using namespace std;

bool search(int matrix[][4],int n,int m,int key){
  int i=0,j=m-1;
while(i<n && j>=0){
   if (matrix[i][j]==key)
   {
      cout<<"found at cell("<<i<<","<<j<<")\n";
     return true;
   }else if (matrix[i][j]>key)
   {
      j--;
   }else{
      i++;
   }

}
cout<<"key not found";
return false;
}
int main (){
  int matrix[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
            search(matrix,4,4,10);
         return 0;
}

Search in Sorted Matrix

n>>m                   m>>>n
0(n)                  0(m)
when number of
row max and col
 zero

incomeTax Calculator=>
income<5L
0%tax

inclome between 5L-10L
20%tax

income>10L
30% tax

Matrix Pointers
1  2  3   4
5  6  7   8
9  10 11 12
13 14 15 16
100 104
1   2  3   4 5  6  7   8 9  10 11 12 13 14 15 16
  |
  mat
  1->4

#include<iostream>
using namespace  std;
int main (){
   int mat[4][4]={{1,2,3,4},
                 {5,6,7,8},
                  {9,10,11,12},
                 {13,14,15,16}};
                 cout<<mat<<endl;
                 cout<<mat+1<<endl;
                 cout<<mat<<"mat="<<&mat[0][0]<<endl;//0x61fed0mat=0x61fed0 findoutaddress is same
                 cout<<mat+1<<"!="<<&mat[0][1]<<endl;//0x61fee0=0x61fed4
                 cout<<mat+1<<"="<<&mat[1][0]<<endl;//0x61fee0=0x61fee0
                 return 0;
                 0x61fed0 here form hexa decimal value
                 0x61fee0
               According to matrix ouer size will be upgrate
}

int *arr,int arr[] both are the same

Passing  matrix Pointer to functions

function(int(*[4]){...} ..>4 mean which number are colum that present that are point
     :
     we pass the row pointer
      :
      function(int Mat[][4]){..}
       )

#include<iostream>
using namespace  std;

void func(int mat[][4],int n,int m){
   cout<<"0th row ptr"<<mat<<endl;
  cout<<"1st row ptr"<<mat+1<<endl;
  cout<<"2st row ptr"<<mat+1<<endl;

  cout<<"0th row ptr"<<*mat<<endl;
  cout<<"1st row ptr"<<*(mat+1)<<endl;
  cout<<"2st row ptr"<<*(mat+2)<<endl;
}
int main (){
   int mat[4][4]={{1,2,3,4},
                 {5,6,7,8},
                  {9,10,11,12},
                 {13,14,15,16}};
         func(mat,4,4);
         return 0;
           0th row ptr0x61fee0
          1st row ptr0x61fef0
          2st row ptr0x61fef0
}

*(mat+i)+j  ..?we got in cell [i][j]


#include<iostream>
using namespace  std;

void func(int mat[][4],int n,int m){
  cout<<*(*(mat+2)+2)<<endl;
}
int main (){
   int mat[4][4]={{1,2,3,4},
                 {5,6,7,8},
                  {9,10,11,12},
                 {13,14,15,16}};
         func(mat,4,4);
         return 0;

}
Q->print the number of all's that are in 2nd arry
n=2,m=3,  int arr[2][3] = {{4, 7, 8}, {8, 8, 7}}

    #include <iostream>
using namespace std;

// function to count number of 7's
int countSevens(int arr[][3], int n, int m) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 7) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};

    int result = countSevens(arr, 2, 3);
    cout << result << endl;

    return 0;
}

Q->Print out the sum of the numbers in second row of "num"array
nput-intnums[][]={{1,4,9},{11,4,3},{2,2,3}};


#include<iostream>
using namespace std;
int sumSecondRow(int arr[][3],int m){
   int sum=0;
   for (int j= 0; j < m; j++)
   {
     sum+=arr[1][j];
   }
   return sum;
}
int main (){
   int nums[3][3]={{1,4,9},
                {11,4,3},
                {2,2,3}};
         int result=sumSecondRow(nums,3);
         cout<<result<<endl;
}

Q->;
void transposeMatrix(int arr[][3],int result[][2],int row,int cols){
   for (int i = 0; i < row; i++)
   {
     for (int j = 0; j< cols; j++)
     {
        result[j][i]=arr[i][j];
     }
     cout<<endl;
   }

}
int main (){
  int arr[2][3]={{11,12,13},
                  {21,22,23}};
  int transpose[3][2];
  transposeMatrix(arr,transpose,2,3);
  for (int i = 0; i < 3; i++)
  {
   for (int j= 0; j< 2; i++)
   {
      cout<<transpose[i][j]<<" ";
   }
   cout<<endl;
  }
  return 0;
}
  #include <iostream>
using namespace std;

// function to transpose matrix
void transposeMatrix(int arr[][3], int result[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = arr[i][j];
        }
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];

    // call function
    transposeMatrix(arr, transpose, 2, 3);

    // print transpose matrix (3x2)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
Char data type
1->1byte( take only one byte it mean 8 bit)


   #include<iostream>
   using namespace std;
   int main (){
      char ch='A';
      cout<<(int)ch<<endl;  //represent a char this type
      cout<<(int)ch-'a'<<endl;
      return 0;
   }
      c-srings
      ..................
      :c:o:d:e:\0
      ..............
      Expilicity Termiminated by null charecter,"\0"
                                                  |
                                                  bac slac mean end of sring

   #include<iostream>
   using namespace std;
   int main (){
      char arr[5]={'a','b','c','d','e'};//valid strim mean thar end of null char
      cout<<arr<<endl;
      return 0;
   }

   #include<iostream>
   using namespace std;
   int main (){
      char arr[5]={'a','b','c','d','\0'};//valid strim mean thar end of null char
      cout<<arr<<endl;
      "hello world";// string lateral;
      return 0;
   }

   #include<iostream>
   using namespace std;
   int main (){
     char work[]="code";  //[]inside this mention the size the we lern th null chercter
     cout<<work<<endl;
      return 0;
   }

      #include<iostream>
   using namespace std;
   int main (){
     char work[]={'c','\0'};  //[]inside this mention the size the we lern th null chercter
     cout<<work<<endl;
      return 0;
   }
        #include<iostream>
   using namespace std;
   int main (){
     char work[50]={'c','q'}; //In this condition prinnt a garbage value
     cout<<work<<endl;
      return 0;
   }

Charater Array
c-Strings

..........................
: c  : 0 : d  : e  : \o  :
..........................
Explicitly Termiminated by numm charecter,"\0"

#include<iostream>
using namespace  std;
int main (){
   char arr[5]={'a','b','c','d','e'};//valid stream mean that end ofthe null char
   cout<<arr[ 0]<<endl;
   cout<<arr[ 1]<<endl;
   cout<<arr[ 2]<<endl;
   cout<<arr[ 3]<<endl;
   cout<<arr[ 4]<<endl;
   return 0;
}

#include<iostream>
using namespace std;
int main (){
    char arr[5]={'a','b','c','d','e'};//valid stream mean that end ofthe null char
    cout<<arr<<endl;
    "apna collage"//string literal
    "helloworld"//strinng literals
    "a";//string literals
    return 0;
}

Character Array
Creation and output of c-strings
 char work[]="code"; //[]inside this mention the size the we
 Learn that null character
char[4]="code";//invalid becouse we have to take 5 size for
null charater
char work[50]={'c','o','d','e','\0'};// vlaid becouse we have  to take 5 size for null charater

#include<iostream>
using namespace std;
int main (){
   char work[]="code";
   cout<<work<<endl;
   return 0;
}


#include<iostream>
using namespace std;
int main (){
   char work[50]={'c','o','d','e','\0'}; //in nest element  this take garbege value
   cout<<work<<endl;
   return 0;
}

#include<iostream>
using namespace std;
#include<string.h>
int main (){
   char word[10];
   cin>>word;//charecter arry take compleate string and convert input array
   //one timec reate space then you press any thing notprint
   cout<<"your world was:"<<word<<endl;
   cout<<"lenght:"<<strlen(word)<<endl;
   return 0;
}

cin.getline(array_name, size, delimiter);


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[30];

    cout << "Enter a sentence ending with * : ";
    cin.getline(sentence, 30, '*');

    cout << "Your word was: " << sentence << endl;
    cout << "Length: " << strlen(sentence) << endl;

    return 0;
}
    Conver to upper case to lower case
    world[]="ApPle"
    output
    world[]="APPLE"
}
=>convert to upper case
#include<iostream>
#include<cstring>
using namespace std;
void toUpper(char word[],int n){
   for (int i = 0; i <n; i++)
   {
      char ch=word[i];
      if(ch>='A'&& ch<='Z'){
         continue;
      }else{
         word[i]=ch-'a'+'A';
      }
   }

}
int main (){
   char word[]="ApPle";
   toUpper(word,strlen(word));
   cout<<word<<endl;
   return 0;

}
=>convert to Lower case
#include<iostream>
#include<cstring>
using namespace std;
void tolower(char word[],int n){
   for (int i = 0; i <n; i++)
   {
      char ch=word[i];
      if(ch>'A' && ch<='Z'){
         continue;
      }else{
         word[i]=ch-'A'+'a';
      }
   }
}
int main (){
   char word[]="ApPle";
   tolower(word,strlen(word));
   cout<<word<<endl;
   return 0;
}
   Reverse a char array
   input (char[],len)
   ............
   :c:o:d:e:\0:           int st=0,end=n-1
   ............           while(st<end)
   {
      swap(word[st],word[end]);
      st++;
      end--;
}
   output
   ...........
   e:d:o:c:\0:
   ...........

  #include<iostream>
  #include<cstring>
  using namespace std;
  void reverse(char word[],int n){
   int st=0,end=n-1;
   while(st<end){
      swap(word[st],word[end]);
      st++;
      end--;
   }
  }
  int main (){
   char word[]="code";
   reverse(word,strlen(word));
   cout<<"reverse word is="<<word<<endl;
   return 0;
  }


   Valid Palindrom
   difintion: A string is called palindrom if reading from left to right and right to Left is same
   input char[]="appble"
   output false
   input char[]="racecat"
   output true

   char[]="appble" false
   char[]="racecar" true
   char[]="madam" true
   char[]="a" true
   char[]="" true
   in st=0,end=n-1
   while(st<end){
      if(word[st]!=word){
         return false;
         st++;
         end--;
}


   #include<iostream>//timecomplexity o(n)linear time compllexity
   #include<cstring>
   using namespace std;
   bool isPalindrome(char word[],int n){
      int st=0,end=n-1;
      while(st<end){
         if(word[st]!=word[end]){
            return false;
         }
         st++;
         end--;
      }
      return true;
   }
   int main (){
      char word[]="racecar";
      if(isPalindrome(word,strlen(word))){
         cout<<"Is palindrome"<<endl;
      }else{
         cout<<"Not palindrome"<<endl;
      }
   }

 <cstring>
 1. strlen()-->findout the lenght of the string
 2. strcpy(dest,src)-->copy the string from the source to destination
 3. strcat(dest,src)-->concatenate the string from source to destination
 4. strcmp(str1,str2)-->compare two string if both are same then return 0
 if str1>str2 then return +ve value
 if str1<str2 than return  -ve value

 strcpy(dest,src)

#include<iostream>
#include<cstring>
using namespace std;
int main (){
 char str1[100];
 char str2[100]="hello world";
strcpy(str1,str2);
cout<<"str1="<<str1<<endl;
return 0;
}
strcat(dest,src)

#include<iostream>
#include<cstring>
using namespace std;
int main (){
 char str1[100]="abc";
 char str2[100]="xyz";
strcat(str1,str2);
cout<<"str1="<<str1<<endl;
return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
int main (){
   char str1[100]="mango";
   char str2[100]="x";
   cout<<"strcmp(str1,str2)="<<strcmp(str1,str2)<<endl;
   cout<<"strcmp(str2,str1)="<<strcmp(str2,str1)<<endl;
   return 0;
}

String in c++
oops: Class ,object,Member Function & Properties

case1: color;"black"
case2:color;"red"
case3:color;"blue"

Strings in c++
C++ String are  objects of pre-defined class in stl
C++ String have usefull memeber function.
C++ String are dyanmic(there size can change at run time). String support operators like +,==,>,<etc.
C++ String are stord  in  contigous memeory .

String in c++

#include<iostream>
#include<string>
using namespace std;
int main (){
   string str="hello";
   cout<<str<<endl;
   str="yellow";
   cout<<str<<endl;//string lateral assigment in string it  is  not possible in char array
   return 0;

}

  #include<iostream>
#include<string>
using namespace std;
int main (){
   string str; //if we take the the input of any string
   cin >> str;  //where this place create whightspace this is not take the input so takes the input in string we uses the getline
   cout<<str<<endl;
   return 0;

}

 #include<iostream>
#include<string>
using namespace std;
int main (){
   string str;
   cout<<"Enter a string with spaces: ";
   getline(cin,str);
   cout<<"You entered: "<<str[0]<<endl;
   cout<<"You entered: "<<str[1]<<endl;
   cout<<"You entered: "<<str[2]<<endl;
   cout<<"You entered: "<<str[3]<<endl;
   return 0;
}

  for each loop
    for(char ch: str){
      cout<<ch<<" ";
}

  #include<iostream>
  #include<string>
  using namespace std;
  int main (){
       string str="apna collage!";
       //access each chareter  throught index
      for(int i=0; i<str.length();i++){//inthis we are calling all the function of string  this class
         cout<<str[i]<<"-"; // this type are all individual charecter print
      }
      cout<<"\n";

  }

  #include<iostream>
  #include<string>
   using namespace std;
   int main (){
         string str="apna collage!";
         for(char ch: str){
            cout<<ch<<",";//this type are all
              //individual charecter print
                  }
                  cout<<endl;
                  return 0;
}


strlen()--> findout the length of the function
  #include<iostream>
  #include<string>
   using namespace std;
   int main (){
      string str="apna collage!";
      cout<<str.length()<<endl;
      return 0;
   }

str.at(index)-->findout the charecter at  that index

#include<iostream>
  #include<string>
   using namespace std;
   int main (){
      string str="apna collage!";
      cout<<str.length()<<endl;
      cout<<str[2]<<endl;
      cout<<str.at(2)<<endl;
      return 0;
   }

   str.substr(start_index,size)-->findout the
   substring from the start index and size of  the
   substring

  #include<iostream>
  #include<string>
  using namespace std;
  int main (){
   string str="Hello world!";
   cout<<str.substr(0,5)<<endl;
   return 0;
  }
str.find(word)-->findout the index of the first
occurance of the word in the string if not found then return -1


  #include<iostream>
  #include<string>
  using namespace std;
   int main (){
      string str="I Love coding and love  to learn  new things!";
      cout<<str.find("Love")<<endl;
      return 0;
   }

     Valid Anagram
     Two string are anagram if they have same
     charater but in different order
     input str1="Listen"
     input str2="Silent"
     output true

     str1="rat"
     str2="car"
       output false
       str1="anagram"
       str2="nagaram"
       output true
       how to trace the charecter in Anaagram
      count[str[i]-"a"]++;//count  the number of
      charecter in str1 and str2 if both are the same  then both are anagram

      =>String is not pointer so don't taking
      size


   #include<iostream>
   #include<string>
   using namespace std;

   bool isAnagram(string str1,string str2){
      if(str1.length()!=str2.length()){
         cout<<"not valid anagram"<<endl;
         return false;
      }
      int count [26]={0};
      for (int i=0; i<str1.length();i++){
         int index=str1[i]-'a';
         count[index]++;
      }
      for(int i=0; i<str2.length();i++){
         int index=str2[i]-'a';
         count[index]--;
      }
      for(int i=0; i<26; i++){
         if(count[i]!=0){
            return false;
         }
      }
      return true;
   }
   int main (){
      string str1="anagram";
      string str2="nagaram";
      if(isAnagram(str1,str2)){
         cout<<"valid anagram"<<endl;
      }else{
         cout<<"not valid anagram"<<endl;
      }
      return 0;
   }

#include<iostream>
#include<string>
using namespace std;
int main (){
   string str1="cat";
   string str2="dog";
   cout<<(str1<str2)<<endl;
   cout<<(str1>str2)<<endl;
   return 0;
}
char and array string end


          VECTOR-14
   Creating a dynamic array

#include<iostream>
using namespace std;
int main (){
   //int arr[100]={1,2,3,4,5};//this is static array we have mention the size of the array
   int size;
   cin>>size;
   int *arr=new int[size];//this is daynamic array we have not take the size of the array
   arr[0]=*(arr+0)=1;
   arr[1]=*(arr+1)=2;
   arr[2]=*(arr+2)=3;
   return 0;

}
   Diffference between static and dyanmic memeory =>
   allocation is thatin  dyamin memeory allocation we use a external function that acess is not in main function we creat a external function that is new
   and delete and in static memeory allocation we
   creat a array in main function and we have to
   mention the size of the array but in dyanmic array we have not mention the size of the arrray and we  can creat a array in main function and also creat  a array in external function and we can access that array in main function by return type type of the function and also we can access that array by
   pointer and we also creat  array in main function
   and we can access that array in external function
   by passing the pointer of the array in the
   function and also we  can access that array in  main function by return type of the function and
   also we can access that array by pointer and also
   we can creat a array in main function and also
   creat a array in external array  and we can acess that array in the main function

#include<iostream>
using namespace std;
int main (){
   int size;
   cin>>size;

   int *arr=new int[size];
   int x=1;
   for(int i=0;i<size;i++){
      arr[i]=x;
      cout<<arr[i]<<" ";
      x++;
  }
  cout<<endl;
  return 0;
}

 #include<iostream>
  using namespace std;
  void funcInt(){
   int *ptr=new int;
   *ptr=5;
   cout<<*ptr;
   delete ptr;
  }
  void funcArray(){
   int size;
   cin>>size;
   int *ptr=new int [size];
   int x=1;
   for (int i=0;i<size;i++){
      ptr[i]=x;
      cout<<ptr[i]<<" ";
      x++;
   }


  }
  int main (){
   funcInt();
   cout<<endl;
   funcArray();
   return 0;
  }

    Dyanmic Memory Allocation
STatic Memory Allocation  Dyanmic Memory allocation
.allocate at compile time    .Allocate at run time(new operator)
.uses stack memory            .uses heap memeory
.gets freed automatically     .needs to freed explicity(delete operator)

Memory Leak
A memory leak occurs when programmers create a memory in a heap and forest to delete it leads to redused performance due to deplection of available memeory

dout->solve
#include<iostream>
using namespace std;
int main (){
   int *ptr=new int ;
   *ptr= 1200;
   cout<<"ptr points to"<<*ptr<<endl;
   return *ptr;

}
int main (){
   int *x=func();
   cout<<*x<<endl;
   return 0;

}
      STL
   standerd Templete library
   It is a library(collection)of container classes,algorithms and iteration
   it contains the implimention of common data structutres and like vector,
   stack,maps etc.
Differnce between implimention and usages of vector
1.Implimention of the vector is done by the programmer and usage of the
vector is done by the user of the vector

               Vectors
Like Dyanmic arrays that can resize dyanmically at runtime.
They are stored in contigously in memory and they support random access to elements.
 vector<int>vec1;
 vector<int>vec2={1,2,3,4};
 vector<int>vect3(5,-1); //vector of size five and all element is -1 initialized


#include<iostream>
#include<vector>
using namespace std;
int main (){
   vector<int>vec1;
   vector<int>vec2={1,2,3,4};
   vector<int>vec3(5,-1);
   for(int i=0;i<vec2.size();i++){
      cout<<vec2[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<vec3.size();i++){
      cout<<vec3[i]<<" ";
   }
   cout<<endl;
   return 0;
}

     Practicesection-15
     Recurstion
     when a fuction calls itself if inside the Body
     1.Smaller problem of the same type
      5!=5x4!
      n!=nx(n-1)!
   problem   Smaller
                Problem
      5!=5x4!
      4!=4X3!
      3!=3x2!
      2!=2X1!
      int factorial(int n){
        if(n==0){
           return 1;}
        int smallerProblem=factorial(n-1);
        return n*smallerProblem;

        fact(5)=5*fact(4)         : fact(1)  :
        fact(4)=4*Fact(3)         : fact(2)  :
        fact(3)=3*fact(2)         : fact(3)  :
        fact(2)=2*fact(1)         : fact(4)  :
        fact(1)=1*fact(0)         : fact(5)  :
        fact(0)=1                 ............
      }
        Time complexity =o(n)
        Space complexity=o(n)
        a^5=a*a^4
        a^n=a*a^(n-1)
 problem    smaller
            problem of the same type
            power(a,n)=a*power(a,n-1)

        fact(5)=5*fact(4)         : fact(1)  :
        fact(4)=4*Fact(3)         : fact(2)  :
        fact(3)=3*fact(2)         : fact(3)  :
        fact(2)=2*fact(1)         : fact(4)  :
        fact(1)=1*fact(0)         : fact(5)  :
        fact(0)=1                 ............
   Time complexity:o(n)         Recursive space stateck
   Space complexity:o(n)

  int power(int a,int n){
  if(n==0)
  return 1;
  if(n==1)
  return a;
  int smaller=power(a,n-1);
  return a*smaller;
  }
  a^32=a^16*a^16          :  a^2  :
  a^16=a^8*a^8            :  a^4  :
  a^8=a^4*a^4             :  a^8  :
  a^4=a^2*a^2             :  a^16 :
  a^2=a^1*a^1             :  a^32 :

time complexity:O(log2N)  Space somplexity:O(log2N)

a^35=a^17*a^17*a
a^39=a^19*a^19*a
a^n=a^(n/2)*a^(n/2)*a
when n is odd

 when n is even
 a^n=a^(n/2)*a^(n/2)
 problem       smaller problem

int fastPower(int a,int n){
   if(n==0)
   return 1;
   if(n==1)
   return a;
   int halfPower=fastPower(a,n/2);
   if(n%2==0){
      return halfPower*halfPower;}
      }
      else //odd
      return halfPower*halfPower*a;

}
=>for odd power 2
#include<iostream>
using namespace std;
int fastPower(int a,int n){
   if(n==0){
   return 1;
  }
   if(n==1){
   return a;
  }
  int halfPower=fastPower(a,n/2);
  if(n%2==0){
      return halfPower*halfPower;
  }else{
      return halfPower*halfPower*a;
   }
}

int main (){
   int result=fastPower(2,17);
   cout<<"result="<<result<<endl;
   return 0;
}

Q. find the occurence of a element in the any using recursion
  0 1 2 3 4 5 6  7
  2 4 8 4 8 8 10 6
                          target=8
[2,4,6]
  indexes
               i=0
  i--->element-->print i} move(i+1)
                               next index


void findOccurance(int arr[],int i,int n,int target){
   if(i==n){
      return;
      }
      if(arr[i]==target){
       cout<<i<<" ";
      }
       findOccurance(arr,i+1,n,target)


Occurance means howmany time element present in the array and also findout the index of the element in the array

#include<iostream>
using namespace std;
void findOccurance(int arr[],int i,int n,int target){
   if(i==n){
      return;
   }
   if(arr[i]==target){
      cout<<i<<" ";
   }
   findOccurance(arr,i+1,n,target);
}

int main (){
   int arr[]={3,2,8,5,8,7,8,3,4,5};
   int n=10;
  int target=8;
  findOccurance(arr,0,n,target);
  return 0;
}

Convert Numbert to Words
1947->one Nine four seven
   1947->194->19->1->0
         seven->four->nine->one

 after reverse  the number
 one->nine->four->seven
 N->extract lass digit print(N/10)
 cout<<maip[lastdigit]


#include<iostream>
using namespace std;
string digit[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void printNumber(int n){
   if(n==0){
      return ;
   }
   int lastDigit=n%10;
   printNumber(n/10);
   cout<<digit[lastDigit]<<" ";
}
int main (){
  int n=1947;
  printNumber(n);
  return 0;
}

Q.3 find the length of sting using recursion
length of strirng using recursion
length(str);
int length(char str[]){
 if(str[0]=='\0'){
   return 0
 }
 return 1+length(str+1);
}
=>length of strinng using recurstion
#include<iostream>
using namespace std;
int length(char str[]){
     if(str[0]=='\0'){
       return 0;
     }
     return 1+length(str+1);
}
int main (){
   char str[]="hello world";
   cout<<length(str)<<endl;
   return 0;
}
Q->
1.Factorial(0k)
2.Power(0k)
3.Fast Power/Fast Expression
4 Search of Occurance of an element in an array using recursion(ok)
5.Convert number to words
6.length of string using recursion(ok)

for factoril, there is no seprate formula for eeven and odd numbers
factorial works the same  way for every postive integer
n!= n x (n-1)!
 0!=1

Logic of Factorial using Recursion

Suppose:

5!=5×4!
4!=4×3!
3!=3×2!
2!=2×1!
1!=1

So:

5!=5×4×3×2×1
Recusive flow Example
factorial(5)

= 5 * factorial(4)

= 5 * 4 * factorial(3)

= 5 * 4 * 3 * factorial(2)

= 5 * 4 * 3 * 2 * factorial(1)

= 5 * 4 * 3 * 2 * 1

= 120

int factorial(int n){
   if(n==0){
      return 1;
}
      int smallerproblem=factorial(n-1);
      return n*smallerProblem;
int Power(int a,int n){
if(n==0)
return 1;
if(n==1)
return a;
int smaller=power(a,n-1);
return a*smaller
}



Strings(AssignmentQuestions)Question1:CounthowmanytimeslowercasevowelsoccurredinaStringentered

#include<iostream>
using namespace std;
void countVowels(char str[]){
   int count=0;
   for(int i=0;str[i]!='\0';i++){
     char ch=str[i];
   if(ch=='a'||ch=='e'|| ch=='i' || ch=='o'||ch=='u')
     count++;
   }
   cout<<"couut="<<count<<endl;
}
int main(){
   char str[]="hello world";
   countVowels(str);
   return 0;
}

  #include<iostream>
  #include<cstring>
  using namespace std;
  int main (){
    string str;
    int vowels=0, consonants=0;
    cout<<"Enter a string:";
    for(char ch:str){
      ch=tolower(ch);
      if(ch>='a' && ch<='z'){
         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
         } else {
            consonants++;
         }
      }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
    return 0;
  }

   #include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        ch = tolower(ch);

        // Check if character is an alphabet
        if (ch >= 'a' && ch <= 'z') {

            // Check vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    cout << "Number of vowels = " << vowels << endl;
    cout << "Number of consonants = " << consonants << endl;

    return 0;
}
  Question2:Youaregiventwostringss1ands2ofequallength.Astringswapisanoperationwhereyouchoosetwoindicesinastring(notnecessarilydifferent)andswapthecharactersattheseindices.Returntrueifitispossibletomakebothstringsequalbyperformingatmostonestringswaponexactlyoneofthestrings.Otherwise,returnfalse.Example:Input:s1="bank",s2="kanb"Output:trueExplanation:Forexample,swapthefirstcharacterwiththelastcharacterofs2tomake"bank

  In C++, bool is a data type used to store only two values:

true
false

It is mainly used for conditions, comparisons, and decision-making
  vector<int>diff; usesses this line compare for two string

  if (s1.size() != s2.size())

It checks whether the sizes (lengths) of s1 and s2 are different.

Breakdown:
s1.size() → returns the number of elements (or characters if they are strings) in s1
s2.size() → returns the number of elements in s2
!= → means “not equal to”
if (...) → runs the code inside the block only if the condition is true

(s1[i] != s2[i])
👉 “The character at index i in s1 is not equal to the character at index i in s2.”

diff.push_back(i);

means:

👉 Add the value of i to the end of the vector diff.

Breakdown
diff → a vector (dynamic array) of integers
push_back() → inserts a new element at the end
i → current index where characters are different


   #include<iostream>
#include<vector>
using namespace std;

bool areAlmostEqual(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    vector<int> diff;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            diff.push_back(i);
        }
    }

    // Already equal
    if (diff.size() == 0) {
        return true;
    }

    // Must differ at exactly two positions
    if (diff.size() != 2) {
        return false;
    }

    int i = diff[0], j = diff[1];

    // Check if swapping fixes it
    return (s1[i] == s2[j] && s1[j] == s2[i]);
}

int main() {
    string s1 = "bank";
    string s2 = "kanb";

    cout << (areAlmostEqual(s1, s2) ? "true" : "false") << endl;

    return 0;
}
               vector-19
1.creating a dyanmin array


#include<iostream>
using namespace std;
int main (){
   //int arr[100]={1,2,3,4,5};
   int size;
   cin>>size;
   int *arr=new int[size];// vector<int>(size);
   int x=1;
for (int i = 0; i < size; i++)
{
   arr[i]=x;
   cout<<arr[i]<<" ";
   x++;
}
cout<<endl;
return 0;

}


#include<iostream>
#include<vector>
using namespace std;
int main (){
   int size;
   cin>>size;
   vector<int>arr(size);
   int x=1;
   for (int i = 0; i < size; i++)
   {
      arr[i]=x;
      cout<<arr[i]<<" ";
      x++;
   }
   cout<<endl;
   return 0;
}
in static memoryallocation
Memory is allocated at compile time and size can not be changed
Featurs
.Fixed size
.Faster access
.Memory allocated in stack/data segment
.Can not resize during execution

#include<iostream>
using namespace std;
int main (){
   //static memory allocation
   int number[5]={10,20,30,40,50};
   printf("Static Memory Allocation:\n");
   for (int i = 0; i < 5; i++)
   {
      printf("%d",number[i]);
   }
   return 0;
}
why Dyanmic Memory Allocationis used
1.Flexible memory Size
In static allocation,arry size must be fixed at compile time
int arr[100]

->If the user need more or fever elements, memory may be wasted
or insufficient
Dyanmic allocation allows runtime sizing:
int *arr=(int*)malloca(n*sizeof(int));
here,n can be choosen by the user during exection

2.EFFICINT MEMORY USAGE
Static allocation may waste memory becaouse space is reserved even ifunused.
Dyanmic allocation allocates only the requird memeory
ex-
.static arr size=1000
.user uses only 100 elements
.Remaining memory is wasted

A linked list is a linear data structure where elements (nodes) are connected using pointers.

Each node contains:

Data
Address of next node
Diagram
[10|*] → [20|*] → [30|NULL]
Uses
Dynamic memory management
Implement stacks and queues
Easy insertion/deletion

2. Tree

A tree is a hierarchical data structure made of nodes.

Top node = Root
Connected nodes = Children

Diagram
        A
       / \
      B   C
     / \
    D   E
Uses
File systems
Databases
Searching and sorting

3. Graph

A graph consists of:

Vertices (nodes)
Edges (connections)
Diagram
A ---- B
|      |
C ---- D
Uses
Social networks
Maps/navigation
Network routing

4. Queue

A queue follows FIFO (First In First Out).

Insertion → Rear
Deletion → Front

Diagram
Front → [10][20][30] ← Rear
Uses
Printer queue
CPU scheduling
Ticket booking systems

5. Stack

A stack follows LIFO (Last In First Out).

Insertion and deletion happen at the top.

Diagram
Top
 ↓
[30]
[20]
[10]
Uses
Function calls
Undo operation
Expression evaluation

Dynamic memory management

#include<iostream>
using namespace std;
int main (){
   int n;
   //user enterd size at runtime
   cout<<"Enter number of element:";
   cin>>n;
   //Dyanmic memory allocation
   int*arr=new int[n];//new → allocates memory at runtime
   //Iput elements
   cout<<"Enter elements"<<endl;
   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }
   //Display elements
   cout<<"Array element are:\n";
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   //free dyanmically allocated memory
   delete[]arr;//delete[] → frees allocated memory
   return 0;
}
Implement stacks and queues
Easy insertion/deletion


#include<iostream>
using namespace std;
#define size 5
class Stack{
   int arr[size];
   int top;
public:
  Stack(){
   top=-1;
  }
  //push operation
   void push(int value){
      if(top==size-1){
         cout<<"Stack Overflow\n";
      }else{
         top++;
         arr[top]=value;
         cout<<value<<"pushed into stack\n";
      }
   }
   //Pop operation
   void pop(){
      if (top==-1)
      {
         cout<<"Stack Undefflow"<<endl;
      }else{
         cout<<arr[top]<<" poped from stack"<<endl;
         top--;
      }
   }
   //Display stack
   void display(){
      cout<<"Stack Elements:";
      for (int i = 0; i >=0; i--)
      {
         cout<<arr[i]<<" ";
      }
      cout<<endl;
   }
};
int main (){
   Stack s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.display();
   s.pop();
   s.display();
   return 0;
}
  Dyanmic memory allocation


#include<iostream>
using namespace std;//creating a dyanmin array
void func(){
   int arr[100]={1,2,3,4,5};
   for (int i = 0; i < 5; i++)
   {
      return;
   }

}

int main (){
   func();//if we call the funtion  the void func come to stack function
   int size;
   cin>>size;
   int *arr=new int[size];
   int x=1;
   for (int i = 0; i < size; i++)  : func    :
   {                               :..........
                                   :  arr....:
      arr[i]=x;                    :.........:
      cout<<arr[i]<<" ";           : main    :
      x++;                         :.........:
   }
   cout<<endl;
   return 0;
}
     static                 dyanmic
    allocate at (compile)    allocate at(run time)
     int arr[10]={1,2,3}

   Memory leak=>A memory leak happens when a program allocates memory dyanmically but does not free it after use.
   Becouse of this the unused memory stays occupied untial the program ends.
   IN c++,memory leaks usually wwhen using new without delete

   Example of Memory Leak in C++
   #include<iostream>
   using namespace std;
   int main (){
   int * ptr=new int;//memory allocated dynamically
   *ptr=10;
   cout<<*ptr<<endl;
   //delete  ptr;<--missing
   return 0;
   }
   int *ptr = new int;
Memory is created in the heap
ptr stores the address of that memory

Correct code
#include<iostream>
using namespace std;
int main (){
int *ptr=new int;
*ptr=10;
cout<<*ptr<<endl;
delete ptr;
return 0;

MemoryLeak with Array wrong code

#include<iostream>
using namespace std;
int main (){
int *arr=new int[5];
for (int i = 0; i < 5; i++)
{
   arr[i]=i;
   cout<<arr[i]<<" ";
}
//delete[]arr; <--missing
return 0;
}#include<iostream>
using namespace std;
int main (){
int *arr=new int[5];
for (int i = 0; i < 5; i++)
{
   arr[i]=i;
   cout<<arr[i]<<" ";
}
delete[]arr;//free array memory
return 0;
}
Important Rules
Allocation	Deallocation
new	delete
new[]	delete[]

Problems Caused by Memory Leak
RAM usage increases
Program becomes slow
System may crash
Long-running applications become unstable


#include<iostream>
using namespace std;
void func(){
   int arr[100]={1,2,3,4,5};
   for (int i = 0; i <5; i++)
   {
      cout<<arr[i]<<" ";
   }
   return ;
}
int main (){
   func();
   cout<<arr[0]<<endl;//create errror becouse is not access of main funcion
}

Dynamic memory Allocation
#include<iostream>
using namespace std;
void funcInt(){
   int *ptr=new int;
   *ptr=5;
   cout<<*ptr;
   delete ptr;

}
void func(){
   int size;
   cin>>size;
   int*arr=new int[size];
   int x=1;
   for (int i = 0; i < size; i++)
   {
      arr[i]=x;
      cout<<arr[i]<<" ";
      x++;
   }
   cout<<endl;
   delete[]arr;//without this is create amemory  leak;
}
int main (){
  funcInt();
  return 0;
}
Dyanmic Memory Allocation
static Memory Allocation      Dynamic memory allocation

.allocation at compile time   .allocation at run time(new operator)
.uses stack memory            . uses heap memory
.gets freed automatically     .needs to freed explicitly
.compile time mean when the compiler  .Run time is the phase when the
checks and converts your code into     program is already executing
machine code before the program starts after successful
running time                           after successful copilatiion
copiler checks                         .Error that happen during
.Syantax error                         execution are called runtime
.Missing errors                        errors
.wrong varibledeclarations
.Type errors                      Commo Run time errors
                                error                      Example
                        Division error                    10/2
                        Invalid array accesss             arr[100]
                        Null pointer access       *ptr when ptr is null
                        Memory leak                 Missing delete
                        Infinite loop              while(true)


#include<iostream>
using namespace std;
int main(){
int x=10;//Memory for x is automatically allocated in stack memory
cout<<x<<endl;
return 0;//when function ends:
}
memory is automatically destroyed
No need for
delete
.In allocation and deallocaton is not  role
of programmer


Stack Operations
Operation	Meaning
push()	   Add element
pop()	      Remove top element
top()  	   Show top element

Simple Definition

LIFO = Last inserted element is removed first.

A stack is a memory area used to store:

Local variables
Function calls
Function parameters

Stack Memory Features
Feature	       Description
Fast	          Very fast memory
Automatic      	Allocates/deallocates automatically
Stores local variables	  Variables inside functions
Fixed size	     Limited memory
LIFO	Last In First Out

Memory leak
A Memory Leak occurs when programmers create a memory in heap and to
 forget to delete it.
Leads to reduse performace due to deplection of a vailable memory


#include<iostream>
using namespace std;
int* func(){
   int*ptr=new int;
   *ptr=1200;
   cout<<"ptr points to"<<*ptr<<endl;
   return ptr;
}
int main (){
   int* x=func();
   cout<<*x<<endl;
   delete x;//free memory
   return 0;
}

Memory Leak
A memory leak occurs when programmers create a memory in a heapand forget to delete it.
leads to reduced performance due to deplection of available memory

 2D Dynamic arrays
                           ptr1      1  2   3
                           ptr2      4  5   6
                           ptr3      7  8   9
                           ptr4      10 11  12
                            :
                            :
                            nrows
   ptri=new int[cols]
array of pointer--->

int* *arr=new int*[size]-->this type pointer that point the pointer

.if 2D array create in matrics form then then it stor incide the heap memory in form of matrix

2D dynamic array
#include<iostream>
using namespace std;
int main (){
   int rows,cols,i,j;//take to var
   cout<<"enter to rows:";
   cin>>rows;
   cout<<"enter cols";
   cin>>cols;
   int **matrix= new int*[rows];
   for (int i = 0; i <rows; i++)
   {
      matrix[i]=new int[cols];
   }
//data store
int x=1;
for (int i = 0; i < rows; i++)
{
   for (int j = 0; j < cols; j++)
   {
      matrix[i][j]=x++;
      cout<<matrix[i][j]<<" ";
   }
   cout<<endl;
}
cout<<*(*(matrix+2))<<endl;
return 0;
}
STL (Standard Template Library) in C++

STL is a library in C++ that provides ready-made classes and functions to make programming easier and faster.

Instead of writing everything from scratch, STL gives you:

Dynamic arrays
Linked lists
Stacks
Queues
Sorting functions
Searching functions
Iterators
Main Parts of STL
1. Containers

Containers store data.

Examples
Container	Use
vector	Dynamic array
list	Doubly linked list
stack	LIFO structure
queue	FIFO structure
set	Unique sorted values

2. Algorithms

Ready-made functions for operations.

Examples
Algorithm	Work
sort()	  Sort elements
find()	  Search element
reverse()	Reverse elements
count()	   Count values

3. Iterators

Used to traverse containers.

Example:

vector<int>::iterator it;

Iterator works like a pointer.
Exampleof STL vector

#include<iostream>
#include<vector>
using namespace std;
int main (){
   vector<int>v;
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   for (int i = 0; i < v.size(); i++)
   {
      cout<<v[i]<<" ";
   }
   return 0;
}
   Why STL is Used
Saves time
Less code
Efficient
Reusable
Easy to use
Reduces errors
.STL=>Itos library(collection)of container classes,algorithms & itrrators.
.It continers the implimention of common data structures like vector,stacks,maps etc.

 vector intodunction(are also know assequence containers)
 =>Like Dynamic arrays that can resize dynamically at run time.
 They are stored contiguously in memory

 vector<int>vec1;
 vector<int>vec2={1,2,3,4};
 vector<int>vec3(5,-1);
 =>allocation and deallocation are not possible it work automatically

  #include<iostream>
  #include<vector>
  using namespace std;
  int main(){
   vector<int>vec1;
   cout<<vec1.size()<<"\n";
   return 0;
  }

 #include<iostream>
  #include<vector>
  using namespace std;
  int main(){
   vector<int>vec1={1,2,3,4};
   cout<<vec1.size()<<"\n";
   return 0;
  }

  #include<iostream>
  #include<vector>
  using namespace std;
  int main(){
   vector<int>vec1(10,-1);
   cout<<vec1.size()<<"\n";
   for (int i = 0; i < vec1.size(); i++)
   {
      cout<<vec1[i]<<" ";
   }
   cout<<endl;
   return 0;
  }
              vector implimention in memory
vector<int>vec={1,2,3,4}
  .............
  :1 : 2: 3: 4:    capacity=4
  .............   size=4
       :
   1 2 3 4 5 6 7 8  when new create cap=8
   if add 9 elemnt in this vector
   then vetor form double capcity
   ............................
   :1:2:3:4:5:6:7:8:..........>  cap=16
   ............................


  #include<iostream>
  #include<vector>
  using namespace std;
  int main(){
   vector<int>vec={1,2,3,4};
   cout<<"size:"<<vec.size()<<endl;//4
   cout<<"capacity:"<<vec.capacity()<<endl;//4

   vec.push_back(5);
    cout<<"size:"<<vec.size()<<endl;//5
   cout<<"capacity:"<<vec.capacity()<<endl;//8

   vec.pop_back();
    cout<<"size:"<<vec.size()<<endl;
   return 0;

  }
     Pair sum
Find if any pair in sorted vector has target sum.
input:arr=[2,7,11,15],target=9
output:[0,1]//vector of indices
nested loop-->o(n^2)
find all pairs in a vector whose sum is equal to a target value.

#include<iostream>
#include<vector>
using namespace std;
int main (){
   vector<int>v={1,2,3,4,5,6,7,8};
   int target=9;
   cout<<"Pairs are:\n";
   for (int i = 0; i < v.size(); i++)
   {
      for (int j = 0; j < v.size(); j++)
      {
         if(v[i]+v[j]==target){
            cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
         }
      }

   }
   return 0;
}
   2 pointer approach
   arr=[2,7,11,15],target=9;
        st      end
1.currSum=target
2.currSum>target(in this case end--)
currSum<target
st++

#include<iostream>
#include<vector>
using namespace std;
vector<int>pairSum(vector<int>arr,int target){
   int st=0,end=arr.size()-1;
   int currSum=0;
   vector<int>ans;

   while(st<end){
     currSum=arr[st]+arr[end];
     if(currSum==target){
      ans.push_back(st);
      ans.push_back(end);
      return ans;
     }else if(currSum>target){
      end--;
     }else{
      st++;
     }
   }
   return ans;
}
int main (){
   vector<int>vec={2,7,11,15};
   int target=9;
   vector<int>ans=pairSum(vec,target);
   cout<<ans[0]<<","<<ans[1]<<endl;
   return 0;
}
2D vector

    vector<int>>matrix;

  #include<iostream>
  #include<vector>
  using namespace std;
  int main (){
   vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
   for (int i = 0; i <matrix.size(); i++)
   {
      for (int j = 0; j < matrix.size(); j++)
      {
         cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
   }
   return 0;
  }
   Prdict the output
*Q->
#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>v;
   for (int i = 0; i < 5; i++)//0,1,2,3,4
   {
      v.push_back(i);
   }
   cout<<v.size()<<endl;
   cout<<v.capacity()<<endl;
   return 0;
}
         Bitwise Manipulation
Bitwise Operation
.Bitwise AND &
 0&1->0
 0&0->0     3&5
 1&0->0      00011
 1&1->1      00101
                 X
            ..........
              00001
             ........

.Bitwise OR |

.Bitwise XOR ^
Rule of bitwise and
#include<iostream>
using namespace std;
int main (){
   //Bitwise Operators
   cout<<(3&5)<<endl;
   return 0;
}
   .Bitwise OR |
   Rule of bitwise or
    0|0=0       0011
    0|1=1       0101
    1|0=1     ..........
    1|1=1       0111(7)
              .............
              #include<iostream>
using namespace std;
int main (){
   //Bitwise Operators
   cout<<(3|5)<<endl;
   return 0;
}

Bitwise xor ^(Rule of xor)      0^0=0  same =0
                                1^1=0   doff=1
                                0^1=1
                                1^0=1
                        0011
                        0101
                     ..........
                        0110(6)
                     ..........
#include<iostream>
using namespace std;
int main (){
   //Bitwise Operators
   cout<<(3^5)<<endl;
   return 0;
}
One's NOT operator
~0-->1
~1-->0

  #include<iostream>
  using namespace std;
  int main (){
   //Bitwisse Operator
   cout<<(~6)<<endl;
   return 0;
  }
   output=-7    Rule=>The rule is:

~n = -(n + 1)
Binary Not  operator
1 1 1 1 1 0 0 1
             +1



(1)1's compliment
 0 0 0 0 1 1 0
           + 1
..................
0  0  0  0 1  1 1(7)base 10 this final  number are also called  (2's compliment)
This become magnitude of number
..................
Binary NOT  operatior

0(BIT)                    1 1 1 1 1 1 1
                         0 0 0 0 0  0 0
                                      1
                                      +
                         ................
                           0 0 0 0 0 1 (1)base10
                           ..............

#include <iostream>
using namespace std;

int main() {
    // Bitwise NOT operator
    cout << (~6) << endl;
    cout << (~0) << endl;

    return 0;
}

Binary Shift Operaors
.Left Shift  <<

#include<iostream>
using namespace std;
int main (){
   //Bitwise Operator
   cout<<(7<<2)<<endl;
   return 0;
}
.Right shift

#include<iostream>
using namespace std;
int main (){
   //Bitwise Operator
   cout<<(7>>2)<<endl;
   return 0;
}
Q->
#include<iostream>
using namespace std;
int main (){
   cout<<(~4)<<endl;
   return 0;
}
Q->
#include<iostream>
using namespace std;
int main (){
   cout<<(8>>1)<<endl;
   return 0;
}
   check if Odd or Even

heck Even or Odd Using Bitwise Manipulation

A number is:

Even if its last bit (LSB) is 0
Odd if its last bit (LSB) is 1

We can check the last bit using the bitwise AND operator &.| Decimal | Binary |
| ------- | ------ |
| 1       | `1`    |
| 2       | `10`   |
| 3       | `11`   |
| 4       | `100`  |
| 5       | `101`  |
| 6       | `110`  |
| 7       | `111`  |
| 8       | `1000` |
| 9       | `1001` |
| 10      | `1010` |

  #include<iostream>
  using namespace std;
  int main (){
   int n;
   cin >>n;
   if ((n&1)==0)
   {
      cout<<"Even"<<endl;

   }else{
      cout<<"Odd"<<endl;
   }
   return 0;
  }
   checkif odd or even          00000111(1)
                               & 000000001(all make zero and one conserve)
15&0=>0
3&0=>0
5&0>0      ans=0(then number will be even)

Get ith Bit
 num=6,i=2


#include<iostream>
using namespace std;

int getIthBit(int num,int i){
   int bitMask=1<<i;
   if (!(num & bitMask))
   {
      return 0;
   }else{
      return 1;
   }

}
int main (){
   cout<<getIthBit(6,2)<<endl;
   cout<<getIthBit(7,5)<<endl;
   return 0;
}
              Set ith Bit
                             00110
                             01000
                              i
                           ............
                             0 1 1 1 0
                           ...........
                                8 +  4 +  2  + 1=15
To find the i-th bit of a number, use the bitwise AND (&) operator.

Formula
bit = (num >> i) & 1;
num >> i shifts the number right by i positions.
& 1 extracts the last bit.
Bit positions start from 0 (LSB).

  #include<iostream>
  using namespace std;
  int main (){
   int num=13;
   int i=2;
   int bit=(num>>i)&1;
   cout<<"The"<<i<<"th bit is:"<<bit<<endl;
   return 0;
  }

  Explanation

13 in binary:

13 = 1101
      ↑
     2nd bit

Positions:

Bit Position: 3 2 1 0
Binary      : 1 1 0 1

The 2nd bit = 1.      0110
                      1101
Output:                 i
                  .............
The 2th bit is: 1      0101
                  ...............
         mask=n(1<<i)
         num=num & mask

Clear ith Bit

#include<iostream>
using namespace std;
int clearIthBit(int num,int i){
   int bitMask=~(1<<i);
   return num &bitMask;
}
int main (){
   cout<<clearIthBit(6,1)<<endl;
   return 0;
}
   Step 1: 1 << i

When i = 1:

1 << 1

Binary:

0001 << 1
=
0010

So:

1 << 1 = 2
Step 2: ~(1 << i)
~(0010)

Bitwise NOT flips all bits:

0010
↓
1101

So:

bitMask = 1101

(In a 32-bit system it is actually many 1s followed by 1101.)

Step 3: num & bitMask
num = 6 = 0110
mask    = 1101

AND operation:

  0110
& 1101
-------
  0100

Result:

0100 = 4
                        check for power of two


n > 0 && (n & (n - 1)) == 0
Why does it work?

A power of 2 has exactly one set bit (1) in its binary representation.

Examples:
                                     when you subtract one
1  = 0001                               8=1000
2  = 0010                             8-1=0111
4  = 0100                            Now AND  them
8  = 1000                              1000
16 = 10000                           & 0111
                                    .........
                                       0000(result 0)
                                    .........
For a number that is not a power of 2
   10=1010                         1000
 10-1=1001                        &1001
                              ...............
                                  1000(not 0) not power of 2
                              ................

#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
   return n>0 && (n&(n-1)==0);
}
int main (){
   int n;
   cin>>n;
   if (isPowerOfTwo(n))
   {
      cout<<"Power of 2";
   }else{
      cout<<"Not a Power of two";
   }
   return 0;
}
 Practice QS
 WAP to update the ith bit in a number according to given value(0 to 1)
 num=7,i=2,val=0
 num=7,i=3,val=1
7=0111                   num=7
                         i=2
                         val=0

Clear bit at position 2     7=0111
0111->0011       set bit at position 3
Result=3        0111->1111
                Result(15)


#include<iostream>
using namespace std;
 int updateIthBit(int num,int i,int val){
      //clear the ith bit
      num=num&(~(1<<i));
      //set the i-th bit if val=1
      num=num|(val<<i);
      return num;
   }
int main (){
  cout<<updateIthBit(7,2,0)<<endl;
  cout<<updateIthBit(7,3,1)<<endl;
return 0;
}
Q->WAf to clearlast i bits of a number
num=15,i=2


#include<iostream>
using namespace std;
int clearIBits(int num,int i){
  int bitMask=(~0)<<i;
  num=num & bitMask;
  cout<<num<<endl;
}
int main (){
  clearIBits(15,2);
  return 0;
}
  Count Set Bits(Number of 1's in Binary Represention)
| Number | Binary | Set Bits |
| ------ | ------ | -------- |
| 5      | 101    | 2        |
| 7      | 111    | 3        |
| 10     | 1010   | 2        |
| 15     | 1111   | 4        |
Method 1: Using Bitwise AND (&)
Logic

Check the last bit repeatedly.

num & 1
If result is 1 → last bit is set.
If result is 0 → last bit is not set.
Then right shift the number by 1 (num >> 1).

#include<iostream>
using namespace std;
int countSetBits(int n){
   int count=0;
   while(n>0){
     if (n&1)
     {
       count++;
     }
     n=n>>1;
   }
   return count;
}
int main (){
   int n=13;
   cout<<"Number="<<n<<endl;
   cout<<"Set Bit="<<countSetBits(n)<<endl;
   return 0;
}
Fast Exponentiation (Binary Exponentiation)

Fast exponentiation is used to calculate aⁿ efficiently.

Instead of multiplying a by itself n times, we repeatedly square the base and halve the exponent.

Example     Time complexity=(0)

Find:-                Fst exponention Algorithm

     3^5=243         Idea
                  IF exponent is even: a^n=(a^n/2)^2
If exponent is odd: a^n=axa^n-1
We use bit manipulation:

.(n & 1) → checks if n is odd
.n >> 1 → divide n by 2

a=3                    n=2(even)
n=5(101 in binary)    ans=3
ans=1                a=9*9=81
n=5(odd)             n=1(odd)
ans=ans*a
ans=1*3=3               ans=3*81=243
                        a=81*81
a=a*a=9                 n=0
n=n>>1=2          Time complexity=o(log n)
                  Space Complexity=o(1)

#include<iostream>
using namespace std;
long long fastExponentiation(long long a,long long n){
   long long ans=1;
   while (n>0)
   {
      if (n&1)
      {
        ans=ans*a;
      }
      a=a*a; // square the base
      n=n>>1; //divide n by 2
   }
   return ans;
}
int main (){
   long long a=3,n=5;
   cout<<a<<"^"<<n<<"="
       <<fastExponentiation(3,5);
   return 0;
}

#include<iostream>
using namespace std;

void fastExpo(int x, int n) {
    int ans = 1;

    while (n > 0) {
        int lastBit = n & 1;

        if (lastBit) {
            ans = ans * x;
        }

        x = x * x;    // square the base
        n = n >> 1;   // divide exponent by 2
    }

    cout << ans << endl;
}

int main() {
    fastExpo(3, 5);
    return 0;
}
BitManipulation(AssignmentQuestions)Question1:WriteaFunctiontocleartherangeofbitsfromitojinagivennumber.(i&jarecountedbackwardsfromtherightendofthenumber)Examples:Input:num=15,i=1,j=3Output:1Explanation:15inbinaryformis=>00001111[i=1st&j=3rdbitunderlined]Afterbitsarecleared,numberwillbecome00000001Input:num=31,i=1,j=3Output:17Note-Thinkaboutwhattypeofbitmaskisneeded.Itcanalsobeacombinationof2numbers.

#include<iostream>
using namespace std;
int clearIBits(int num,int i,int j){
   int a=(~0)<<(j +1);//1s before j
   int b=(1<<i)-1; //is after i
   int bitMask=a|b;
   cout<<num<<endl;
   return num & bitMask;
}
int main(){
   cout<<clearIBits(15,1,3)<<endl;
   return 0;
}
a=(~0)<<(3 + 1)   bitmask=a|b
 =11110000          11110000
b=(1<<1)-1          00000001
 =00000001      .................
                    11110001(bitMask)
  00001111(num)
& 11110001(bitMask)
............
  00000001(result 1)
............
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]

Output: 1

  #include<iostream>
  #include<vector>
  using namespace std;
  int singleNumber(vector<int>&nums){
    int ans=0;
    for ( int num:nums)
    {
       ans=ans^num;
    }
    return ans;
  }
  int main(){
      vector<int>nums={1};
      cout<<singleNumber(nums)<<endl;
      return 0;
  }

  Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Example 3:

Input: nums = [1]

Output: 1
You are given a 0-indexed integer array nums.

The effective value of three indices i, j, and k is defined as ((nums[i] | nums[j]) & nums[k]).

The xor-beauty of the array is the XORing of the effective values of all the possible triplets of indices (i, j, k) where 0 <= i, j, k < n.

Return the xor-beauty of nums.

Note that:

val1 | val2 is bitwise OR of val1 and val2.
val1 & val2 is bitwise AND of val1 and val2.

Example 1:

Input: nums = [1,4]
Output: 5

#include<iostream>
#include<vector>
using namespace std;
int xorBeauty(vector<int>&nums){
   int ans=0;
   for ( int num:nums)
   {
      ans^=num;
   }
   return ans;
}
int main (){
    vector<int>nums={1,4};
    cout<<xorBeauty(nums)<<endl;
    return;
}
    Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.



Example 1:

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.


 #include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor) {

    // Overflow case
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    long long dvd = llabs((long long)dividend);
    long long dvs = llabs((long long)divisor);

    long long quotient = 0;

    while (dvd >= dvs) {
        long long temp = dvs;
        long long multiple = 1;

        while ((temp << 1) <= dvd) {
            temp <<= 1;
            multiple <<= 1;
        }

        dvd -= temp;
        quotient += multiple;
    }

    // Apply sign
    if ((dividend < 0) ^ (divisor < 0)) {
        quotient = -quotient;
    }

    return (int)quotient;
}

int main() {
    int dividend = 10;
    int divisor = 3;

    cout << divide(dividend, divisor) << endl;

    return 0;
}
         OOPS(Part1)
oops=>Object oriented programming system
It is a programming paradigm that uses objects and classes to
design and organize code.
oops is a way of writing program by modeling rel-world entities as objects that contain both data(attributes) and functions(behaviores).

Class: A blueprint for creating objects
Object: An instance of a class
Encapsulation: Wrapping data and methods into a single unit
Inheritance: One class can inherit properties from another
Polymorphism: The same function can behave differently in different situations
Abstraction: Hiding complex details and showing only essential features
 classes & Objects

 class Student{
  string name;
  float cgpa;
  void getPercentage(){
   cout<<(cgpa*10)<<endl;
  }
 };

#include<iostream>
using namespace std;
class Student{   //this is blue print whow to  see a individual  object
   //Properties
   string name;
   float cgpa;

   //Methods
   void getPercentage(){
      cout<<(cgpa*10)<<"%\n";
   }
};
 class User{
      string username;
      string password;
      s tring bio;

   void deactivate(){
      cout<<"deleatingaccount\n";
   }
   void editBio(string newBio){
      bio=newBio;
    }
   };
int main (){
   Student s1 ; //object
   cout<<sizeof(s1)<<endl;
   return 0;
}
   Access Modifiers
 .  privet=data&method accessible inside class
 . public=data&method accessible outside class
 . protected=data&method accessible inside class & to its derived class


#include<iostream>
using namespace std;

class Student {
private:
    string name;

public:
    float cgpa;

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void getPercentage() {
        cout << (cgpa * 10) << "%\n";
    }
};

int main() {
    Student s1;

    s1.setName("Alice");
    s1.cgpa = 9.5;

    cout << s1.getName() << endl;
    cout << s1.cgpa << endl;
    s1.getPercentage();
    return 0;
}
      Getters and Setters


#include<iostream>
#include<cstring>
using namespace std;
class student{
   private:
   string name;
   float cgpa;
   public:
   //Setters
   void getPercentage(){
      cout<<(cgpa*10)<<"%\n";
   }
   void setName(string namevalue){
      name=namevalue;
   }
   void setCgpa(float cgpaValue){
      cgpa=cgpaValue;
   }
   //getters    this is setup for get the value of private data member
   string getName(){
      return name;
   }
   float getCgpa(){
      return cgpa;
   }
};
int main(){
   student s1;
   s1.setName("vishal");
   s1.setCgpa(9.5);
   cout<<s1.getName()<<endl;
   cout<<s1.getCgpa()<<endl;
   s1.getPercentage();
   return 0;
}
       Encapsulation
Encapsulation is the process of building a protective barrier around the data and methods of an object, preventing direct access to the internal state of the object from outside the class.

1.Ecapsulation helps to achieve data hiding,which means that the internal stateof object is hidden form outside the world

2.Inheritance
Inheritance in OOP

Inheritance is an OOP concept in which one class acquires the properties (data members) and behaviors (methods) of another class.

The existing class is called the Base Class, Parent Class, or Superclass.
The new class is called the Derived Class, Child Class, or Subclass.
Advantages
Code reusability
Reduces code duplication
Easier maintenance
Supports hierarchical classification

#include<iostream>
using namespace std;
//Parent class
class Animal{
   public:
   void eat(){
      cout<<"Animal is eating\n";
   }
};
//child class inherits from Animal
class Dog:public Animal
{
   public:
   void bark(){
      cout<<"Dog is barking\n"<<endl;
   }
};
int main (){
   Dog d1;
   d1.eat(); //Inheritance method of parent class
   d1.bark(); //Dog's own method
   return 0;
}

Abstraction
Abstraction is the process of hiding complex implementation details and
shoing only the essentail features of an object to the outside world;

#include<iostream>
using namespace std;
class Shape{
   public:
   virtual void draw()=0;//pure virtual function
};
class Circle:public Shape{
   public:
   void draw(){
      cout<<"Drawing  Circle"<<endl;
   }
};
int main(){
   Circle c;
   c.draw();
   return 0;
}
   Encapsulation
Fast answer

Encapsulation is one of the four fundamental principles of Object-Oriented Programming (OOP).

It is the process of bundling data (variables) and methods (functions) that operate on that data into a single unit (class) while restricting direct access to some of the object's internal details.

Why Encapsulation?
Protects data from unauthorized access.
Improves security and data integrity.
Makes code easier to maintain and modify.
Hides implementation details from users of the class.
Example in Java
class BankAccount {
    private double balance;  // hidden data

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    public double getBalance() {
        return balance;
    }
}

public class Main {
    public static void main(String[] args) {
        BankAccount account = new BankAccount();
        account.deposit(1000);
        System.out.println(account.getBalance());
    }
}
How Encapsulation Works
balance is declared private, so it cannot be accessed directly from outside the class.
Public methods (deposit() and getBalance()) provide controlled access to the data.
Real-Life Analogy

Think of a capsule medicine:

The medicine inside is hidden and protected.
You interact only with the outer capsule.
Similarly, in encapsulation, users interact with public methods while the internal data remains protected.

In short: Encapsulation = Data Hiding + Controlled Access to Data.

Inheritance
Inheritance in OOP

Inheritance is an OOP concept in which one class acquires the properties (data members) and behaviors (methods) of another class.

The existing class is called the Base Class, Parent Class, or Superclass.
The new class is called the Derived Class, Child Class, or Subclass.
Advantages
Code reusability
Reduces code duplication
Easier maintenance
Supports hierarchical classification
C++ Example
#include <iostream>
using namespace std;

// Parent Class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Child Class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;

    d.eat();   // Inherited from Animal
    d.bark();  // Dog's own method

    return 0;
}
Output
Animal is eating
Dog is barking

Here:

Animal is the parent class.
Dog is the child class.
Dog inherits the eat() function from Animal.
Types of Inheritance in C++
1. Single Inheritance

One child class inherits from one parent class.

class A {
public:
    void display() {
        cout << "Class A";
    }
};

class B : public A {
};
2. Multilevel Inheritance

A class inherits from a class that is already derived.

class A {
public:
    void showA() {
        cout << "A" << endl;
    }
};

class B : public A {
};

class C : public B {
};
3. Multiple Inheritance

A class inherits from more than one parent class.

class A {
public:
    void showA() {
        cout << "A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "B" << endl;
    }
};

class C : public A, public B {
};
4. Hierarchical Inheritance

Multiple child classes inherit from the same parent class.

class A {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class B : public A {
};

class C : public A {
};
5. Hybrid Inheritance

Combination of two or more inheritance types.

class A {
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};
Real-Life Example
Parent Class: Vehicle
Properties: speed, fuel
Methods: start(), stop()
Child Class: Car
Inherits speed, fuel, start(), stop()
Adds its own method: openSunroof()

Definition:
Inheritance is the mechanism by which one class acquires the properties and methods of another class, enabling code reusability and establishing an "is-a" relationship between classes.

Abstraction
Abstraction in OOP

Abstraction is the process of hiding implementation details and showing only the essential features of an object to the user.

It focuses on what an object does, not how it does it.

Real-Life Example
Car

When you drive a car:

You use the steering wheel, accelerator, and brake.
You do not need to know how the engine, gearbox, or fuel injection system works internally.

This is abstraction: hiding complex implementation and exposing only necessary functionality.

C++ Example Using Abstract Class
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;   // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle c;
    c.draw();

    return 0;
}

Abstraction vs Encapsulation
Abstraction               	Encapsulation
Hides implementation details	    Hides data
Focuses on what an object does	  Focuses on how data is protected
Achieved using abstract classes and interfaces  	Achieved using access specifiers (private, protected, public)

4.polymorphism

Constructors
Special method invoked automatically at time of object creation
Used for Intialisation.
.Same name as class
.Construction does not have a return type
.Only called once(automatically),at object creation
.Memory allocation happens when constructor is called

.this is a special pointer in c++ that point to the currentobject.
this->pro is sama as *(this).pop
1.Default constructor: No parameters, provide by compiler if  not  default constructor is defined by the user
2.Parameterized constructor: Takes parameters to
intialize object with spacified values


#include<iostream>
using namespace std;
class car{
   string name;
   string color;
   public:
   car(){
      cout<<"Default constructor is called,object being created"<<endl;
      name="vishal rolex";
      color="black";
   }
   car(string nameValue,string colorValue){
     cout<<"constructor is called,object being created"<<endl;
     name=nameValue;
     color=colorValue;
   }
   void start(){
      cout<<"car can has startd"<<endl;
   }
   void stop(){
      cout<<"car has stopeed"<<endl;
   }
   //getter
   string getName(){
      return name;
   }

};
int main(){
   car c0;//default constructor
   car c1("vishal rolex", "black");
   cout<<"car name:"<<c1.getName()<<endl;//parameterized constructor
   c1.start();
   c1.stop();
   return 0;
}
   Constructor in C++ (Detailed Explanation)

A constructor is a special member function of a class that is automatically called when an object is created.

Properties of a Constructor
Constructor name must be the same as the class name.
It has no return type (not even void).
It is called automatically when an object is created.
It is used to initialize object data members.
Constructors can be overloaded.

1. Default Constructor
A construnctor that tale no parameters


#include<iostream>
using namespace std;
class Car{
   private:
   string name;
   string color;
   public:
   //Default Constructor
   Car(){
     name="Unknown";
     color="Unknown";
    cout<<"Default constructor called"<<endl;
   }
   void display(){
      cout<<"Car Name:"<<name<<endl;
      cout<<"Car Color:"<<color<<endl;
   }
};
int main (){
   //constructor automatically called when object is created
   Car  c1;
   c1.display();
   return 0;
}
2.Parametrized Constructor
A constructor that take parameters to initialize
object with specified values.

#include<iostream>
#include<cstring>
using namespace std;
  class student{
   private:
      string name;
      string color;
  public:
      student(string n, string c) {
          name = n;
          color = c;
          cout<<"Parameterized constructor called"<<endl;
      }
      void display(){
            cout<<"Student Name:"<<name<<endl;
            cout<<"Student Color:"<<color<<endl;
      }
  };
int main (){
    student s1("Vishalrolex", "Black");
    s1.display();
    return 0;
}
3.Constructor OverLosding
Multple constructor  with different parameters list in the same class.

#include<iostream>
#include<cstring>

using namespace std;
class Student{
   private:
   string name;
   int age;
   public:
   //Default Constructor
   Student(){
      name="vishal Saxena";
      age=18;
   }
   //Parametrized Constructor
   Student(string n,int a){
      name=n;
      age=a;
   }
   void display(){
      cout<<"Name:"<<name<<endl;
      cout<<"Age:"<<age<<endl;
   }
};
int main (){
   Student s1;
   Student s2("Vishal",20);
   cout<<"Student 1"<<endl;
   s1.display();
   cout<<"Student 2"<<endl;
   s2.display();
   return 0;
}
4.Copy Constructor
Creates new object as a copy of an existing object.

#include<iostream>
#include<cstring>
using namespace std;
class Student{
   private:
    string name;
   public:
    Student(string n){
      name=n;
    }
    //Copy constructor
    Student(const Student & s){
      name=s.name;
      cout<<"Copy Constructor Called"<<endl;
    }
    void display(){
      cout<<"Name:"<<name<<endl;
    }

};
int main (){
   Student s1("Vishal");
   //Copy Constructor called
   Student s2(s1);
   s1.display();
   s2.display();
   return 0;

}
   5.Using this Pointer in Constructor
   this reffer to current object


#include<iostream>
using namespace std;
 class Student{
   private:
   string name;
   int age;
 public:
   Student(string name,int age){
      //Current varibles
      this->name=name;
      this->age=age;
   }
   void display(){
      cout<<"Name:"<<name<<endl;
      cout<<"Age:"<<age<<endl;
   }
 };
 int main (){
   Student s1("vishal",20);
   s1.display();
   return 0;
 }
 Car Example

#include <iostream>
using namespace std;

class Car {

    // Private data members
    string name;
    string color;

public:

    // Parameterized Constructor
    // Automatically called when object is created
    Car(string nameValue, string colorValue) {

        cout << "Constructor is called, object being created" << endl;

        // Initialize data members
        name = nameValue;
        color = colorValue;
    }

    // Member function
    void start() {
        cout << "Car has started" << endl;
    }

    // Member function
    void stop() {
        cout << "Car has stopped" << endl;
    }

    // Display car details
    void display() {
        cout << "Name  : " << name << endl;
        cout << "Color : " << color << endl;
    }
};

int main() {

    // Creating object and passing values
    Car c1("BMW", "Black");

    c1.display();
    c1.start();
    c1.stop();

    return 0;
}
    Q->Creater a User class with properties:id(privet),username(public)&password(privet).
    Its id should be initialized in a parameterized constructor.
    It should have a gretter & Setter for password

   #include<iostream>
   using namespace std;
    class User{
      private:
        int id; //privet data memeber
        string password;//privet data member
      public:
        string username;//Public.data member
        //parametrized construnctor
        User(int userId,string  userName){
         id=userId;
         username=userName;
        }
      //Setter forpassword
      void setPassword(string pass){
         password=pass;
      }
      //Getter for password
      string getPassword(){
         return password;
      }
      //Function to display user details
      void display(){
         cout<<"id:"<<id<<endl;
         cout<<"Username:"<<username<<endl;
      }
    };
    int main(){
      //Creating object using parametrized constructor
      User u1(101,"Vishal");
      //Setting Passward
      u1.setPassword("vishal@1234");
      //Displaying user information
      u1.display();
      cout<<"password:"<<u1.getPassword()<<endl;
      return 0;
    }

    Copy Costructor
Special Constructor(default)used to copy properties of one object into another
Car(Car&original){
cout<<"copying..\n";
name=original.name;
price=original.price;
}

#include<iostream>
#include<cstring>
using namespace std;
class Car{
   public:
      string name;
      string color;
   //Parametrized Constructor
   Car(string name,string color){
      this->name=name;
      this->color=color;
   }
   Car(Car & original){
      cout<<"copying original to new..\n";
      name=original.name;
      color=original.color;
   }
};

int main (){
  Car c1("BMW","Black");
  Car c2(c1);
  cout<<c2.name<<endl;
  cout<<c2.color<<endl;
  return 0;
}

Shallow & Deep Copy
Shallow copies refrences to original array.But array remains same.
Deep copy created a brand new copy of the array.
Compiler generally creates a shallow copy for array.
we need to define own copy constructor when deep copy is needed i.e when  class  contains a pointers to dyanamically allocated memory.


 #include<iostream>
#include<cstring>
using namespace std;
class Car{
   public:
      string name;
      string color;
      int *mileage;

   //Parametrized Constructor
   Car(string name,string color){
      this->name=name;
      this->color=color;
      mileage=new int;
      *mileage=12;
   }
   Car(Car & original){
      cout<<"copying original to new..\n";
      name=original.name;
      color=original.color;
      mileage=new int;
      *mileage=*original.mileage;
   }
};          //c1 and c2 allocate same memeory allocation inside heap memeory

int main (){
  Car c1("BMW","Black");
  Car c2(c1);
  cout<<c2.name<<endl;
  cout<<c2.color<<endl;
  cout<<*c2.mileage<<endl;
  *c2.mileage=10;
  cout<<*c1.mileage<<endl;
  return 0;
}

                Destructor
Destructor in C++ (Detailed Explanation)

A destructor is a special member function that is automatically called when an object is destroyed. It is mainly used to free resources such as dynamically allocated memory, files, database connections, etc.

Rules of Destructor
Destructor name is the same as the class name, preceded by ~.
It has no return type.
It takes no parameters.
There can be only one destructor in a class (no overloading).
It is called automatically when an object goes out of scope or is deleted.



#include<iostream>
using namespace std;
class Car{
   public:
   //Constructor
   Car(){
      cout<<"Constructor called"<<endl;
   }
   //Destructor
   ~Car(){
      cout<<"Destructor Called"<<endl;
   }
};

int main (){
   Car c1;
   cout<<"Inside main function"<<endl;
   return 0;
}

~Car(){
 cout<<"object delection..\n";
 if(millage!=NULL){
   delete mileage;
   mileage=NULL;
 }
}

 #include<iostream>
#include<cstring>
using namespace std;
class Car{
   public:
      string name;
      string color;
      int *mileage;

   //Parametrized Constructor
   Car(string name,string color){
      this->name=name;
      this->color=color;
      mileage=new int;
      *mileage=12;
   }
   Car(Car & original){
      cout<<"copying original to new..\n";
      name=original.name;
      color=original.color;
      mileage=new int;
      *mileage=*original.mileage;
   }
   ~Car(){
      cout<<"delecting object..\n";
      if (mileage!=NULL)
      {
         delete mileage;
         mileage=NULL;
      }

   }
};

int main (){
  Car c1("BMW","Black");
  cout<<c1.name<<endl;
  cout<<c1.color<<endl;
  cout<<*c1.mileage<<endl;
  return 0;
}
  Inheritance in C++ with Code Examples
What is Inheritance?

Inheritance allows a child class to inherit the data members and member functions of a parent class.
1: Single inheritance

 #include<iostream>
 using namespace std;
 class Animal{
   public:
   void eat(){
      cout<<"Animal can eat"<<endl;
   }
   void breathe(){
      cout<<"Animal can breathe"<<endl;
   }

 };
 //Child class
 class Dog:public Animal{
   public:
   void bark(){
      cout<<"Dog can bark"<<endl;
   }
 };
 int main (){
    Dog d1;
    //Inherited functions
    d1.eat();
    d1.breathe();

    //Own function
    d1.bark();
    return 0;
 }
     Student Inheritance


    #include<iostream>
    using namespace std;
    //parent class
    class Person{
      public:
      string name;
      int age;
      void displayPerson(){
         cout<<"Name:"<<name<<endl;
         cout<<"Age:"<<age<<endl;
      }
    };
    //child class
    class Student:public Person{
      public:
      int rollNo;
      void displayStudent(){
         cout<<"Roll No :"<<rollNo<<endl;
      }
    };
    int main (){
      Student s1;
      s1.name="Vishal";
      s1.age=20;
      s1.rollNo=101;

      s1.displayPerson();
      s1.displayStudent();
      return 0;

    }

     Inheritance      :                    :       :
   Modeof Inheritance :Type of Inheritance :       :
   Base class         : Public:   Protectd : Privet:
   member access      :                    :       :
    specifier         :                    :       :
    ....................................................
    public      :   Public    : Protectd:    Privete :
    protected   :Protectd     : Protectd:    Privete :
    Privete     :Not accesseble:Not accessi:Not accessible
                   (Hidden)        (Hidden)   (Hidden)
   .......................................................
   You have take any modebut but privet can not be acccess

   ex->singlein heritance

 #include<iostream>
     using namespace std;
 class Animal{
       public:
       string color;
       void eat(){
         cout<<"eats"<<endl;
       }
       void breathe(){
         cout<<"breathes\n";
       }
     };
     class Fish:public Animal{
      public:
      int fins;
      void swim(){
         eat();
         cout<<"swims"<<endl;
      }
     };
     int main (){
        Fish f1;
        f1.fins=3;
        cout<<f1.fins<<endl;
        f1.swim();
        f1.eat();
        f1.breathe();
        return 0;

     }
              Multilevel Inhritance
         Base class
           :
         Derived class
           :
         Derived class

#include<iostream>
#include<string>
using namespace std;
class Animal{
   public:
   void eat(){
      cout<<"eats"<<endl;
   }
   void breathe(){
      cout<<"breathe"<<endl;
   }
};
class Mammel:public Animal{
   public:
   string bloodType;
   Mammel(){
      bloodType="warm";
   }
};
class Dog:public Mammel{
   public:
   void tailMag(){
      cout<<"a dog is itx tail";
   }
};
      Types of Inheritance

  Base             Base class
class                 /
    \                 /
     \               /
     \Derived class /


#include<iostream>
#include<string>
using namespace std;
class Teacher{
   public:
   int salary;
   string subject;
};
class Student{
public:
 int rollno;
 float cgpa;
};
 class TA:public Teacher,public Student{
   public:
   string name;
 };
int main (){
    TA tol;
    tol.name="Vishal";
    tol.subject="c++";
    tol.cgpa=9.1;
    cout<<tol.name<<endl;
    cout<<tol.subject<<endl;
    cout<<tol.cgpa<<endl;

}


#include<iostream>
using namespace std;
//Base class
class Animal{
   public:
   void eat(){
      cout<<"Animal is eating"<<endl;
   }
   void breathe(){
      cout<<"Animal is breating"<<endl;
   }
};
//Derived class
class Bird:public Animal{
   public:
   void fly(){
     cout<<"Bird is flying"<<endl;
   }
};
class Fish:public Animal{
   public:
   void swim(){
      cout<<"Fish is swimming"<<endl;
   }
};
int main (){
   Bird b;
   Fish f;
   cout<<"Bird Activities:"<<endl;
   b.eat();
   b.breathe();
   b.fly();

   cout<<"Fish Activities"<<endl;
   f.eat();
   f.breathe();
   f.swim();
   return 0;
}

   hybrid inheritance

#include<iostream>
using namespace std;
class Animal{
   public:
   void eat(){
      cout<<"Animal can eat"<<endl;
   }
};
class Mammel:  public Animal{
  public:
    void walk(){

      cout<<"Mammel can walk"<<endl;
    }
};
class Bird:public Animal{
   public:
  void fly(){
   cout<<"Bird can fly"<<endl;
  }
};
class Bat:public Mammel,public Bird{
   public:
   void sleep(){
      cout<<"Bat can sleep"<<endl;
   }
};
int main (){
   Bat b;
  b.walk();
  b.fly();
  b.sleep();
  return 0;
}
                  Polymorphism
Polymorphism is the ability of the objects to take on different forms or behavve in different ways depending on the context in which they are used.

.Complie Time Polymorphism
.Run Time Polymorphism

#include<iostream>
#include<string>
using namespace std;
class Print{
   public:
    void show(int x){
      cout<<"int:"<<x<<endl;
    }
    void show(string str){
      cout<<"string:"<<str<<endl;
    }
};
int main (){
   Print obj1;
   obj1.show(25);
   obj1.show("vishalIndustry");
   return 0;
}
   Fast answer

Compile-time Polymorphism is a type of polymorphism where the method or function to be executed is determined during compilation, rather than at runtime.

It is also called static polymorphism or early binding
1. Function Overloading

Multiple functions have the same name but different parameter lists.

  #include<iostream>
  using namespace std;
  class Math{
   public:
     int add(int a,int b){
         return a+b;
     }
     double add(double a,double b){
      return a+b;
     }
  };
int main (){
   Math m;
   cout<<m.add(5,3)<<endl;  //Calls int version
   cout<<m.add(2.5,3.5)<<endl;//Calls double version
}
   2.OperatorOverloading

#include<iostream>
using namespace std;
class Complex{
   public:
   int real,imag;
   //Constructor
   Complex(int r,int i){
      real=r;
      imag=i;
   }
   //Operator Overloading for +
  Complex operator +(Complex c){
    return Complex(real +c.real,imag +c.imag);
  }
  //Function to display complex number
  void display(){
   cout<<real<<"+"<<imag<<"i"<<endl;
  }
};
int main (){
   Complex c1(3,4);
   Complex c2(5,6);
cout<<"First Complex Number:";
c1.display();
cout<<"Second Complex Number:";
c2.display();
return 0;
}
All  type Inheritace

#include<iostream>
using namespace std;
class Animal{
   public:
   void eat(){
      cout<<"Animal is eating"<<endl;
   }
};
class Dog:public Animal{
   public:
   void bark(){
      cout<<"Dog is barking:"<<endl;
   }
};
int main (){
  Dog d;
  d.eat();
  d.bark();
  return 0;
}
2.Multilevel Inheritance
A class inheritance from a class that is already inheritance from another class

#include<iostream>
using namespace std;
class Animal{
   public:
      void eat(){
         cout<<"Animal is eating"<<endl;
      }
};
class Dog:public Animal{
   public:
  void bark(){
   cout<<"Dog is barking"<<endl;
  }
};
class Puppy:public Dog{
   public:
    void weep(){
      cout<<"Puppy is weeping"<<endl;
    }
};
int main (){
   Puppy p;
   p.eat();
   p.bark();
   p.weep();
   return 0;
}
   Multilevel Inheritance
One child class inheritance from more than one parent class

#include<iostream>
using namespace std;
class Father{
  public:
  void fatherProperty(){
   cout<<"Father's property help in fancial problem"<<endl;
  }
};
class Mother{
   public:
   void motherproperty(){
      cout<<" mother property we don't need"<<endl;
   }
};
class Child:public Father,public Mother{
   public:
   void ownproperty(){
      cout<<"Child's Property"<<endl;
   }
};

int main (){
   Child c;
   c.fatherProperty();
   c.motherproperty();
   c.ownproperty();
   return 0;
}
   Hierarhical Inheritance
   Multiple child class classas in heritance from one parent class
   *
 #include<iostream>
 using namespace std;
 class Animal{
   public:
   void eat(){
      cout<<"Animal is eating"<<endl;
   }
 };
 class Dog:public Animal{
    public:
    void bark(){
        cout<<"dog is barking"<<endl;
    }
 };
 class Cat:public Animal{
   public:
    void meow(){
      cout<<"Cat meows"<<endl;
    }
 };
 int main (){
  Dog d;
  Cat c;
  d.eat();
  c.meow();
   return 0;

 }
   Operator overloding

  #include<iostream>
  using namespace std;
  class complex{
      int real;
      int img;
   public:
    complex(int r,int i){
      real=r;
      img=i;
    }
    void showNum(){
      cout<<real<<"+"<<img<<"i"<<endl;
    }
    //Operator Overloading
    void operator+(complex & c2){
      int resreal=this->real+c2.real;
      int resimg=this->img+c2.img;
      complex c3(resreal,resimg);
      cout<<"res=";
      c3.showNum();
    }
  };
  int main (){
    complex c1(1,2);
    complex c2(3,4);

    c1.showNum();
    c2.showNum();

    c1+c2
    return 0;
  }

   A virtual function is a member function in base class  that can be overridden in a derived class.It is used to achive runtime polymorphism(late binding)

#include<iostream>
using namespace std;
class Animal{
   public:
   //Virtual function this tells compiler to use runtime polymorphism
     virtual void sound(){
      cout<<"Animal makes a sound"<<endl;
   }
   //Virtual destructor(good paractice)
   virtual~Animal(){
      cout<<"Animal destructor called"<<endl;
   }
};
//Derived class1
class Dog:public Animal{
   public:
   //Overriding the virtual function
   void sound()override{
      cout<<"Dog barks:Woof Woof!"<<endl;
   }
   ~Dog(){
      cout<<"dog Destructor Called"<<endl;
   }
};
//Derived class 2
class Cat:public Animal{
   public:
    //Overriding the vertual function
    void sound ()override{
      cout<<"Cat meows: Meows Meows!"<<endl;
    }
    ~Cat(){
      cout<<"Cat Destructor Called"<<endl;

    }
};
int main (){
  //Base class pointer
  Animal *ptr;
  cout<<"------Dog object----"<<endl;
  //Create Dog object dynamically
  ptr=new Dog();
  //Becouse sound is virtual,
  //Dog's version called at runtime
  ptr->sound();
  //Delte object
  delete ptr;
  cout<<endl;
  cout<<"---Cat object---"<<endl;
  //Create Cat object  dynamically
  ptr=new Cat();
  ptr->sound();
  delete ptr;
  return 0;
}
  Step 3: Base Class Pointer
Animal *ptr;
ptr = new Dog();

Step 4: Runtime Polymorphism
ptr->sound();

What happen without virtual function

#include<iostream>
using namespace std;
class Animal{
   public:
     void sound(){
       cout<<"Animal makes a sound"<<endl;
     }
};
class Dog:public Animal{
   public:
     void sound(){
      cout<<"Dog barks"<<endl;
     }
};
int main (){
  Animal *ptr;
  Dog d;

  ptr=&d;
  ptr->sound();
  return 0;
}
Becouse function is not virtual the comiler calls the fuction based on the the pointer type(Animal*),not object type(Dog)

REal life ex->

#include<iostream>
using namespace std;
class Employee{
   public:
   virtual void salary(){
      cout<<"Employee Salary"<<endl;
   }
};
class Manager: public  Employee{
   public:
   void salary() override{
      cout<<"Manager Salary=9000000"<<endl;
   }
};
class Developer:public Employee{
   public:
   void salary()override{
      cout<<"Developer salary=800000"<<endl;
   }
};
int main (){
  Employee *emp;
  Manager m;
  Developer d;
  emp=&m;
  emp->salary();
  emp=&d;
  emp->salary();
  return 0;
}
.Virtual Functions
.Vitual function are dynaminc in nature.
.Defined by the keyword"virtual"inside a base class and are always declaerd with a base class and override in
a child class
.A virtual function is called during Runtime

            Abstraction
Abstraction mean hiding the implemention details showing only the essential fature of an object

For example, when you drive a car, you use the steering wheel, brake, and accelerator, but you do not need to know how the engine works internally.
1.Abstract Classes
2.Pure Virtualfunctions

 #include<iostream>
 using namespace std;
 //Abstrct class
 class Animal{
   public:
    //Puere virtual function abstract
    //=0 make this function abstract
    virtual void makeSound()=0;
    //Normal function
    void eat(){
      cout<<"Animal is eating"<<endl;
    }
 };
 //Derived class 1
 class Dog:public Animal{
    public:
      //Implimention of pure virtual function
   void makeSound() override{
      cout<<"dog barks:Woof Woof!"<<endl;
   }
 };
 //Derived class 2
 class Cat:public Animal{
    public:
    //Implimetion ofpure vitual function
    void makeSound() override{
      cout<<"Cat meows:Meows Mewos"<<endl;
    }
 };
 int main (){
    Dog d;
    Cat c;
    cout<<"Dog Activities"<<endl;
    d.makeSound();
    d.eat();

    cout<<"CAt Activities"<<endl;
    c.makeSound();
    c.eat();
    return 0;
 }
 Ex->   Bank Account Abstrction

#include<iostream>
using namespace std;
class BankAccount{
   protected:
      double balance;
public:
  BankAccount(double b){
     balance=b;
 }
 //Pure virtual function
  virtual void deposit(double amount)=0;
  virtual void withdraw(double amount)=0;
  void showBalance(){
   cout<<"Current Balance:"<<balance<<endl;
  }
};
//Derived class
class SavingsAccount:public BankAccount{
   public:
   SavingsAccount(double b):BankAccount(b){}

   void deposit(double amount)override{
      balance+=amount;
      cout<<amount<<"deposited successfully"<<endl;
   }
   void withdraw(double amount)override{
      if (amount<=balance)
      {
         balance-=amount;
         cout<<amount<<"withdraw successfully"<<endl;
      }else{
         cout<<"Insufficient Balance!"<<endl;
      }
   }
};
int main (){
   //Creating object throgh base classs
   BankAccount *acc=new SavingsAccount(5000);
   acc->showBalance();

   acc->deposit(2000);
   acc->showBalance();

   acc->withdraw(1000);
   acc->showBalance();

   acc->withdraw(7000);

   delete acc;
   return 0;
}
       Abstraction
Hiding all unnecessary details &showing only the important parts       access specifieres
                        privete
                        protected
                        public
Abstract classes  & Pure Virtual Fuctions
 :
 This type of class that note making object class
  shape{
    draw()
  }
class Circle:public Shape{
  draw()
}
class Square:public shape{
  draw();
}
  That function have not clear defintion are called virtual function
  Property
  .Abstract classes are used to provide a base class fom which other classes can be derived.
  .They can not be instantia and aremeant to be inheritac
  .Abstract class are typically used to define an interfce for a derived claxx
  EX-Abstract class

#include<iostream>
using namespace std;
class Shape{
  public:
  virtual void draw()=0; //abstract fnx,pure virtualfnx unimplemented pure virttual methodit have not proper meaning
};
class Circle:public Shape{
   public:
 void draw(){
   cout<<" draw circle"<<endl;
 }
};
class Square:public Shape{
   public:
 void draw(){
   cout<<" draw square"<<endl;
 }
};

int main (){
  Circle cir1;
  cir1.draw();

  Square squ1;
  squ1.draw();

  Shape s1; //give the error
  s1.draw();
  return 0;
}
                  Static Keyword
.Statiic Varibles
Varible declared as static in  a function are created & initialized once for the lifetime of the program.//in function

Static varible in  a class  are created & initialised once.
they are shared by allthe objectof the class//in class

static objects

 #include<iostream>
 #include<cstring>
 using namespace  std;
 void counter(){
   static int count=0;//for making static when function calls end then var exist same way in memory and this line run only singletimenot more thanone time
     count++;
   cout<<"count:"<<count<<endl;
 }
 int main(){
    counter();
    counter();
    counter();
    return 0;
 }

#include<iostream>
using namespace std;
class Example{
   public:
    int x=0;
};
int main (){
  Example eg1;
 //redeclared give the error

  cout<<eg1.x++<<endl;
  cout<<eg1.x++<<endl;
  cout<<eg1.x++<<endl;
  return 0;
}

 #include<iostream>
using namespace std;
class Example{
   public:
    static  int x;
};
int Example::x=0;
int main (){
  Example eg1;
   Example eg2;
   Example eg3;
 //redeclared give the error

  cout<<eg1.x++<<endl;
  cout<<eg1.x++<<endl;
  cout<<eg1.x++<<endl;
  return 0;
}
           Static
static refeersesomething that belongs to the class itself, not to individual instantces(objects)
.Only one copy exists,shared across all instances.
.You don't need tocreate an object to access it

#include<iostream>
using namespace std;
//class definition
class Student{
   public:
   Student(){
      cout<<"Constructor Called"<<endl;
   }
   //Member function
   void display(){
      cout<<"Display Function called"<<endl;
   }
   //Destructor
   ~Student(){
      cout<<"Destructor Called"<<endl;
   }
};
//Function containing a static obect
void showData(){
   //Static object
   //Created only once during the function call
   static Student s;

   //Calling member function
   s.display();

}
int main (){
  cout<<"First Call"<<endl;
  showData();

  cout<<"Second  Call"<<endl;
  showData();

  cout<<"Third call"<<endl;
  showData();

  return 0;
}

 #include<iostream>
 using namespace std;
 class Example{
   public:
     Example(){
      cout<<"constructor.."<<endl;
     }
     ~Example(){
      cout<<"destructor.."<<endl;
     }
 };
 int main (){
   int a=0;
   if (a==0)
   {
      Example ege1;
   }
   cout<<"code ending.."<<endl;
   return 0;
 }
   Friend Class & Function
   Normally,privet and protebers of a class can not be accessed from outside the class

   A friend function or friend classis allowed to access the privete and protected membersof another class

   A friend functionis not amemeber of the class,it can access theclass'sprivet data
   ex->

 #include<iostream>
 using namespace std;
 class Box{
   private:
     int length;
   public:
   //Constructor
  Box(int 1){
   length=1;
  }
  //Friendfunctiondeclared
  friend void showLength(Box);
 };
 //frien function deifntion
 void showLength(Box b){
   //Accessing privatemember directly
cout<<"Length="<<b.length<<endl;
 }
 int main (){
   Box b1(10);
   //calling friend function
   showLength(b1);
   return 0;
 }
   A Friend class or friend can access privete and members of the other classes in whichit is declared as a function


classA ......................>friend function
privete/protected           friend class


#include<iostream>
using namespace std;
class A{
   string secret="secret data";
   friend class B;
   friend void revealSecret(A&obj);
};
class B{ //become a friend class of A
   public:
   void showSecret(A &obj){
      cout<<obj.secret<<endl;
   }
};
void revealSecret(A &obj){
   cout<<obj.secret<<endl;//object secret is not directly print is privet member revealSecret function formfrind
};
int main (){
   A a1;
   B b1;
  // b1.showSecret(a1);
  revealSecret(a1);
   return 0;
}

#include<iostream>
using namespace std;
class A{
   string secret="secret data";
   friend class B;
   friend void revealSecret(A&obj);
};
class B{
   public:
   void showSecreat(A &obj){
      cout<<obj.secret<<endl;
   }
};
void revealSecret(A &obj){
   cout<<obj.secret<<endl;
};
int main (){
   A a1;
   B b1;

   revealSecret(a1);
   return 0;
}

#include<iostream>
#include<string>
using namespace std;
class Parent{ //Base class Parent
    public:
   // Parent(){//Constructor of Parent class
   //    cout<<"Constructor of Parent"<<endl;
   // }
   ~Parent(){//Destructor of parent class
      cout<<"destructor of Parent class";
   }
};
class Child:public Parent{//Derived Class (child)inherits all public member of parent
  public:
//   Child(){//Constructor of a child class
//     cout<<"Constructor of child "<<endl;//this statement executes after Parent's consructor
//   }
  ~Child(){//destructo of child class
     cout<<"destructor of parent class"<<endl;
  }
};
int main (){
Child ch1;//Creating a object of child classe
    /*
       What happens internally?

       Step 1:
       Parent constructor is called automatically
       Output: Constructor of Parent

       Step 2:
       Child constructor is called
       Output: Constructor of Child
}

 Friend Class & Function
 A friend class or a function can access privet and protected members of the other classes in which it is declared as a friend.

 class A{     ----------> friend func
 privet/protect            friend class
}

#include<iostream>
#include<string>
using namespace std;
class A{
   private:
   string secret="secret data";
   friend class B;//Friend class declaration
   friend void revelSecret(A &obj);
};
class B{
  public:
  void showSecret(A &obj){
    cout<<"Accessed by Friend Class B :"<<obj.secret<<endl;
  }
};
void revelSecret(A &obj){
   cout<<"Accessed by Friend Function:"<<obj.secret<<endl;
}
int main (){
   A a1;
   B b1;
   b1.showSecret(a1);
   revelSecret(a1);
   return 0;
}
   1. Base Class
class Base{
public:
    virtual void print(){
        cout<<"Base class"<<endl;
    }
};
virtual keyword
The virtual keyword tells the compiler:
"If a derived class provides its own version of this function, call that version when using a base class pointer or reference."
Without virtual, the function call is decided at compile time.
With virtual, the function call is decided at runtime.

Inheritance
class Derived : public Base

means:

Derived inherits from Base.
Derived gets access to Base's public members.
Function Overriding
void print() override

This replaces the Base version of print().

The override keyword tells the compiler:

"I am intentionally overriding a virtual function from the base class."

If you make a mistake in the function signature, the compiler will generate an error.
Function Overriding
void print() override

This replaces the Base version of print().

The override keyword tells the compiler:

"I am intentionally overriding a virtual function from the base class."

If you make a mistake in the function signature, the compiler will generate an error.

 #include<iostream>
 #include<string>
 using namespace std;
 class Base{
   public:
   virtual void print(){//Virtual function
      cout<<"Base class"<<endl;
   }
 };
 class Derived:public Base{ //Derived class inherits Base
   public:
   void print()override{//override Base class function
     cout<<"Derived"<<endl;
   }
 };
 int main (){
  Base* b=new Derived();//Base class pointing toDerived object
  b->print();//Calls Derived's print()becouse of virtual function
  delete b;
  return 0;

 }
        object Oriented  Programing
        Only overloaded Operator function is given,rest is already covered in Lecture.

        Complex operator-(Complex &obj){
        int resReal=this->real-obj.real;
        int resImg=this->img-obj.img;
        Complex  res(resReal,resImg);
        return res;}

#include<iostream>
using namespace std;
class Complex{
  private:
    int real;
    int img;
public:
  //Construnctor
  Complex(int r=0,int i=0){
      real=r;
      img=i;
  }
  //Overloading -operator
  Complex operator-(Complex &obj){
   int resReal=this->real-obj.real;
   int resImg=this->img-obj.img;

   return Complex(resReal,resImg);
  }
  //display function
  void display(){
   cout<<real<<"+"<<img<<"i"<<endl;
  }
};
int main (){
Complex c1(10,20);
Complex c2(5,8);
Complex c3=c1-c2;
cout<<"First Complex:";
c1.display();
cout<<"Second Complex Number:";
c2.display();

cout<<"After Subtraction :";
c3.display();
return 0;

}

#include<iostream>
#include<string>
using namespace std;
class BankAccount{
  private:
    int accountNumber;
    double balance;
public:
 BankAccount(int accNum, double bal){
   accountNumber=accNum;
   balance=bal;
 }
 void deposit(double amount){
   balance+=amount;
 }
 void withdraw(double amount){
   if (amount<=balance)
   {
      balance-=amount;
   }else{
      cout<<"No sufficient balance for this withdrawal"<<endl;
   }
 }
 double getBalance(){
   return balance;
 }
};
int main(){
   BankAccount myAccount(123456,500.0);
   myAccount.deposit(150.0);
   myAccount.withdraw(100.0);
   cout<<"Current Balance:Rs"<<myAccount.getBalance()<<endl;
}

#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:
      string name;
      int age;
   public:
     Person(string n,int a){
      name=n;
      age=a;
     }
};
class Student:public Person{
  private:
       string studentID;
   public:
     Student(string n,int a,string id):Person(n,a){
      studentID=id;
     }
     void displayStudent(){
      cout<<"name:"<<this->name<<endl;
      cout<<"age:"<<this->age<<endl;
      cout<<"studentId:"<<this->studentID<<endl;
     }
};
int main (){
  Student student("Alice",20,"s12345");
  student.displayStudent();
  return 0;
}
                      Recursion
What is Recursion?

Recursion is a programming technique where a function calls itself to solve a problem.

A recursive function breaks a big problem into smaller subproblems until it reaches a condition where it can stop.
returnType functionName(parameters) {
    Base Case (Stopping Condition)
    if(condition)
        return value;

    Recursive Call
    return functionName(smaller_problem);
}
    Components of Recursion
1. Base Case

The condition that stops the recursive calls.

if(n == 0)
    return;

Without a base case, recursion will continue forever and cause a stack overflow.
2. Recursive Call

The function calls itself with a smaller problem.

functionName(n - 1);
Example 1: Print Numbers from 5 to 1

#include<iostream>
using namespace std;
void print(int n){
   if (n==0)
   {
      return ;
   }
   cout<<n<<" ";
   //Recursive Call
   print(n-1);
}
int main (){
 print(5);
 return 0;
}print(5)
│
├── print(4)
│   ├── print(3)
│   │   ├── print(2)
│   │   │   ├── print(1)
│   │   │   │   └── print(0)
│   │   │   │       return
 How it works
Example 2: Factorial Using Recursion
Formula
5! = 5 × 4 × 3 × 2 × 1

#include<iostream>
using namespace std;
int factorial(int n){
   if (n==0||n==1)
   {
      return 1;
   }
   //Recursive Case
   return n * factorial(n-1);
}
int main (){
   cout<<factorial(12);
   return 0;
}
   Factorial of a Large Number Using Recursion

   #include <iostream>
#include <vector>
using namespace std;

// Multiply a large number by x
void multiply(vector<int>& result, int x) {
    int carry = 0;

    for (int i = 0; i < result.size(); i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

// Recursive factorial
void factorial(int n, vector<int>& result) {
    if (n == 1 || n == 0)
        return;

    factorial(n - 1, result); // recursive call
    multiply(result, n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> result;
    result.push_back(1);

    factorial(n, result);

    cout << n << "! = ";

    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i];

    cout << endl;

    return 0;
}
Example 3: Sum of First N Natural Numbers

   #include<iostream>
   using namespace std;
   int sum(int n){
      if (n==1)
      {
         return 1;
      }
       return n + sum(n-1);
   }
   int main(){
      cout<<sum(12);
      return 0;
   }

Example 4: Fibonacci Series
Formula
fib(0) = 0
fib(1) = 1

fib(n) = fib(n-1) + fib(n-2)

#include<iostream>
using namespace std;
int fib(int n){
   if(n==0){
      return 0;
   }
   if(n==1){
      return 1;
   }
   return fib(n-1)+fib(n-2);
}
int main (){
   cout<<fib(6);
   return 0;
}
   Example 5: Print 1 to N

  #include<iostream>
  using namespace std;
  void print(int n){
   if (n==0)
   {
      return ;
   }
   print(n-1);
   cout<<n<<" ";
  }
  int main(){
   print(5);
   return 0;
  }
   Advantages of Recursion
Code becomes shorter.
Easy to solve tree and graph problems.
Useful for Divide and Conquer algorithms.
Makes some problems easier to understand.

Disadvantages of Recursion
Uses extra stack memory.
Slower than loops in many cases.
Can cause stack overflow if recursion is too deep.

Iteration vs Recursion
Iteration (Loop)           	Recursion
Uses loops	              Function calls itself
Less memory                	More memory
Faster	                  Usually slower
Easy for simple tasks	     Good for complex problems

1. Base Case
2. Recursive Call

Without a base case, the program will never stop and may crash due to stack overflow.

When s function repeadly calls itself

  #include<iostream>
  using namespace std;
  //recursive function-recursion
  void func(){//This function not contain anybase case so it call it self agin-agin
     cout<<"function call..work"<<endl;
  };
  int main (){
     func();

  }
Recursion
Understanding using math
f(n)=n!
f(n)=n*f(n-1)
          :
         f(n-1)*f(n-2)
                  :
                  (n-2)*(n-3)
                          :
int factorial(int n){
n*factorial(n-1);
}

#include<iostream>
using namespace std;
int factorial(int n){
   if (n==0)      :..local var
   {
      return 1;
   }
   return n * factorial(n-1);
}
int main() {
   int ans=factorial(5);
   cout<<ans<<endl;
   return 0;
}
   It is a method of solving computational problem were the solution  depends on solution to smaller instancess of the same problem
   (1)Base Case/Smallest case
   (2)kamm? in each function call
   (3)Inner funcction

   Recusion in memeory

 : fact =1  :  int factorial(int n){
 : fact n=2 :   if(n==0){
 : fact n=3 :   return 1;
 : fact n=4 :   }
 : fact n=5 :   return  n* factorial(n-1);
 :  main    :

 Print number in decresing order
From n to 1
print (n)
assume->print (n-1)
Kamm->cout<<n
Base case n=1=> cout<<"1"<<endl;

 void print(int n){
  if(n==0){
  return 0;
  }
  cout<<n<<" ";
  print (n-1);
 }

  #include<iostream>
  using namespace std;
  void print(int n){
   if (n==0)
   {
      return ;
   }
   cout<<n<<" ";
   print (n-1);

  }
  int main (){
   print(5);
   return 0;

  }
   Call Stack
  void print(int n){
   if (n==0)
   {
      return ;
   }
   cout<<n<<" ";//umber are print when these are goes to up
   print (n-1);
  }
Number are print in accending level

  #include<iostream>
  using namespace std;
  void print(int n){
   if (n==0)
   {
      return ;
   }

   print (n-1);
   cout<<n<<" ";

  }
  int main (){
   print(5);
   return 0;

  }
   Stack Overflow
   Reasion
   (1)Local varibal(in  one function create many local var)
Stack Overflow in C++ (Reason with Code Examples)

A Stack Overflow happens when the program uses more memory in the call stack than the stack can hold.

Common Reasons for Stack Overflow
1. Infinite Recursion (Most Common)

A function keeps calling itself without a stopping condition.

#include<iostream>
using namespace std;
void fun(){
   cout<<"Calling function.. "<<endl;
   fun(); //Call itself forever
}
int main (){    Each function call stack memory.Eventually,the stack become full causing a stack overflow
   fun();
   return 0;
}fun()
 └── fun()
      └── fun()
           └── fun()
                ...

2. Very Deep Recursion

Even if a base case exists, too many recursive calls can fill the stack.

#include <iostream>
using namespace std;

void count(int n) {
    if (n == 1000000){  // Base case
        return;
    }
    count(n + 1);

}

int main() {
    count(1);
    return 0;
}
    Explanation

The function creates 1,000,000 stack frames before returning.
count(1)
 └── count(2)
      └── count(3)
           ...
                └── count(1000000)

3. Large Local Array

Large local variables are stored on the stack.

#include<iostream>
using namespace std;
int main () {
   int arr[10000000];//Very large time
   cout<<"Hello";
   return 0;
}
Problem

The array requires hundreds of MB of memory on the stack
Stack Memory
+------------------+
| arr[100000000]   |  <-- Too large
+------------------+
4. Recursive Function Without Proper Base Case

#include<iostream>
using namespace std;
int main (){
   int * arr=new int[1000000];
   cout<<"Array created "<<endl;
   delete[]arr;
   return 0;
}

  #include<iostream>
  using namespace std;
  int factorial(int n){
   return n*factorial(n-1); //No base class
  }
  int main (){
      cout<<factorial(5);
      return 0;
  }
Correct Version

#include<iostream>
using namespace std;
int factorial(int n){
   if(n==0||n==1){
      return 1;
   }
   return n* factorial(n-1);

}
int main (){
  cout<<factorial(5);
  return 0;
}
     Stack overflow in absecee of bae class

#include<iostream>
using namespace std;
void func(){
   cout<<"function called..kaam in infinite time"<<endl;
   func();
}
int main (){
  func();
  return 0;
}
    Sum of n natural numbers  (1)faith
    n=5                       n+func(n-1)
                           (2)Kaam
    sum(5)=5+sum(4)          (3)base case
              :              smallest problem n=1
           4+sum(3)           return=1;
               :
               3+sum(2)    int sum(int n){
                  :           if(n==1){
               2+sum(1)           return 1;}
                              return n+sum(n-1); }

#include<iostream>
using namespace std;
 int sum(int n){
   if (n==1)
   {
      return 1;
   }
   return n+sum(n-1);
 }
int main ()  {
  cout<<sum(5)<<endl;
  return 0;
}
  Print Nth Fibonacchi Number
  0 1 1 2 3 4 5 8 13 21........
  fib(0)=0
  fib(1)=1

  fib(n)=fib(n-1)+fib(n-2)
         fib(5)
         /    \
      fib(4)  fib(3)........>fib(1)
       /    \fib(2)     /
       fib(3)          fib(2)\
      /    \                / fib(0)
     fib(2) fib(1)         fib(1)
     /   \
   fib(1) fib(0)

Recusion tree

 #include<iostream>
 using namespace std;
 int fibonacci(int n)  {
   if (n==0||n==1)
   {
      return n;
   }
   return fibonacci(n-1)+fibonacci(n-2);

 }
int main ()  {
   cout<<fibonacci(5)<<endl;
   return 0;
}
Check Array is Sorted or Not Using Recursion

 #include<iostream>
 using namespace std;
 //REcursive function
 bool isSorted(int arr[],int n){
   //Base case
   if (n==1||n==0)
   {
      return true;
   }
   //If first pair is not sorted
   if (arr[0]>arr[1])
   {
     return false;
   }
   //ckeck reamainig array recursively
   return isSorted(arr+1,n-1);
 }
 int main (){
   int arr[]={10,20,30,40,50};
   int n=sizeof(arr)/sizeof(arr[0]);
   if (isSorted(arr,n))
   {
      cout<<"Array is Sorted";
   }else{
      cout<<"Array is not Sorted" ;
   }
   return 0;
 }
   arr=[1,2,3,4,5]
(1)  arr[i]>arr[i+1]
     return false;
(2) isSolted(arr,n,i)=kaam
                        isSorted(arr,n,i+1)
(3)  BC=>if(i==n-1)
            retrun true;

#include<iostream>
using namespace std;
bool isSorted(int arr[],int n,int i){
   if (i==n-1)
   {
      return true;
   }
   if (arr[i]>>arr[i+1])
   {
      return false;
   }
   return isSorted(arr,n,i+1);
}
int main (){
   int arr1[5]={1,2,3,4,5};//sorted:1
   int arr2[5]={1,2,4,3,5};//unshorted:0

   cout<<isSorted(arr1,5,0);

   return 0;
}
       First Occurance;
WAF to find first occurrence of an element in a vector.
  arr=[1,2,3,3,4]    target=3
           :
           2             ans=2
     :1:2:3:3:3:4:5:
   i=0            i=5

If target is not exist then return -1

#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int>arr,int i,int target){
   if (i==arr.size())
   {
      return -1;
   }
   if (arr[i]==target)
   {
      return i;
   }
   return firstOccurance(arr,i+1,target);
}
int main (){
   vector<int>arr={1,2,3,3,3,4};
   cout<<firstOccurance(arr,0,3)<<endl;
   return 0;
}

First and Last Occurance using recusion
     0 1 2 3 4 5 6(index)
arr={1,2,3,4,3,5,3}
First occurance of 3->Index  2
Last occuranceof 3->INdex 6
1. First Occurrence Using Recursion
.Start checking fromindex 0
.If the current elemet matches the key,return the index
.Otherwise, recursively check the next index.

#include<iostream>
using namespace std;
//Function to find first occurance
int FirstOccurance(int arr[],int n,int i ,int Key){
   //Base Case
   if (i==n)
   {
      return -1;
   }
   if(arr[i]==Key){
      return i; //If element found
   }
   //REcursive call
   return FirstOccurance(arr,n,i +1,Key);

}
int main (){
   int arr[]={1,2,3,4,3,5,3};
   int n=7;
   int key=3;
   cout<<FirstOccurance(arr,n,0,key);
   return 0;

}
.Go to the end of the array first
2. Last Occurrence Using Recursion
Logic
Go to the end of the array first.
While returning from recursion, check if the current element is the key.
The last matching index will be returned first.
Code

#include <iostream>
using namespace std;

// Function to find last occurrence
int lastOccurrence(int arr[], int n, int i, int key)
{
    // Base Case
    if (i == n)
    {
        return -1;
    }

    // Recursive call first
    int restIndex = lastOccurrence(arr, n, i + 1, key);

    // If found later, return it
    if (restIndex != -1)
    {
        return restIndex;
    }

    // Check current position
    if (arr[i] == key)
    {
        return i;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 5, 3};
    int n = 7;
    int key = 3;

    cout << "Last Occurrence: "
         << lastOccurrence(arr, n, 0, key);

    return 0;
}

WAF to find last occurance of a an element in a vector
:1:2:3:3:3:4:    target=3
     2 3 4 5       ans=4
     last index=4


   #include<iostream>
   #include<vector>
   using namespace std;
   int firstOccurance(vector<int>arr,int i,int target){
      if (i==arr.size())
      {
         return -1;
      }
      if (arr[i]==target)
      {
         return i;
      }
      return firstOccurance(arr,i+1,target);

   }
   int lastOccurance(vector<int>arr,int target,int i){
      if (i==arr.size())
   {
      return -1;
   }
        int idxfound=lastOccurance(arr,target,i+1);
        if (idxfound==-1 && arr[i]==target)
        {

          return i;
        }
        return idxfound;
   }
   int main (){
      vector<int>arr={1,2,3,3,3,4};
      cout<<lastOccurance(arr,45,0)<<endl;
      return 0;
   }

         Print X to the power N
         Method 1: Simple Recursion
Formula
             x^n=X x X^n-1
for example:
       2^5=2x2^4
       2^4=2x2^3power(2,5)
= 2 * power(2,4)

= 2 * 2 * power(2,3)

= 2 * 2 * 2 * power(2,2)

= 2 * 2 * 2 * 2 * power(2,1)

= 2 * 2 * 2 * 2 * 2 * power(2,0)

= 2 * 2 * 2 * 2 * 2 * 1power(2,3)

REcursion Tree
power(2,3)
    |
    v
2 * power(2,2)
        |
        v
    2 * power(2,1)
            |
            v
        2 * power(2,0)
                |
                v
                1
                BackTracing:
power(2,0) = 1

power(2,1) = 2 × 1 = 2

power(2,2) = 2 × 2 = 4

power(2,3) = 2 × 4 = 8

Method 2: Optimized Recursion (Fast Exponentiation)

Instead of multiplying n times, divide the problem by 2.

Logic

If n is even:  x^n=(x^n/2)^2
if n is odd: x^n=Xx(X^n/2)^2
for a enven number
#include<iostream>
using namespace std;
int power(int x,int n){
   //Base case
   if (n==0)
   {
      return 1;
   }
   //Recursive call
   return x*power(x,n-1);
}
int main (){
   int x,n;
   cout<<"Enter base (x):";
   cin>>x;
   cout<<"Enter power(n):";
   cin>>n;
   cout<<x<<"^"<<n<<"="<<power(x,n);
   return 0;
}
for odd number power
#include<iostream>
using namespace std;
long long power(long long x,long long n){
   //Basecase
   if (n==0)
   {
      return 1;
   }
   long long halfPower=power(x,n/2);
   long long result=halfPower*halfPower;
   //Ifn is odd
   if (n%2!=0)
   {
      result=x*result;
   }
   return result;
}
int main (){
   long long x,n;
   cout<<"Enter base:";
   cin>>x;
   cout<<"Enter exponeent:";
   cin>>n;
   cout<<x<<"^"<<n<<"="<<power(x,n);
   retrun 0;
}
   call:
   power(2,10)
    |
power(2,5)
    |
power(2,2)
    |
power(2,1)
    |
power(2,0)

   power(2,0) = 1

power(2,1) = 2

power(2,2) = 2 × 2 = 4

power(2,5) = 4 × 4 × 2 = 32

power(2,10) = 32 × 32 = 1024
Time Complexity
Method	     Time Complexity
Simple Recursion   	O(n)
Fast Exponentiation	  O(log n)



   x^n.....>2^5=2*2^2*2^2(in case odd)
   :
   2^4=>2^2*2^2(in case even)

#include <iostream>
using namespace std;

int power(int x, int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    // Recursive call
    int halfPow = power(x, n / 2);

    // Square of half power
    int halfPowSquare = halfPow * halfPow;

    // If n is odd
    if (n % 2 != 0)
    {
        return x * halfPowSquare;
    }

    // If n is even
    return halfPowSquare;
}

int main()
{
    cout << power(2, 5) << endl;

    return 0;
}
Tiling Problem
Count total ways to tile a floor(2xn)with tiles(2x1)


1. Basic Tiling Problem
Problem Statement

Given a floor of size:

2 × n

and tiles of size:

2 × 1

Find the number of ways to tile the entire floor.

You can place a tile:

Vertically
Horizontally
 #include<iostream>
   #include<vector>
   using namespace std;
   int firstOccurance(vector<int>arr,int i,int target){
      if (i==arr.size())
      {
         return -1;
      }
      if (arr[i]==target)
      {
         return i;
      }
      return firstOccurance(arr,i+1,target);

   }
   int lastOccurance(vector<int>arr,int target,int i){
      if (i==arr.size())
   {
      return -1;
   }
        int idxfound=lastOccurance(arr,target,i+1);
        if (idxfound==-1 && arr[i]==target)
        {

          return i;
        }
        return idxfound;
   }
   int main (){
      vector<int>arr={1,2,3,3,3,4};
      cout<<lastOccurance(arr,45,0)<<endl;
      return 0;
   } explain logic concept in detail

Your code uses recursion to find the first occurrence and last occurrence of an element in a vector.

1. First Occurrence Logic
int firstOccurance(vector<int> arr, int i, int target)
{
    if(i == arr.size())
    {
        return -1;
    }

    if(arr[i] == target)
    {
        return i;
    }

    return firstOccurance(arr, i + 1, target);
}
How it works

Suppose:

vector<int> arr = {1,2,3,3,3,4};
target = 3;

Function call:

firstOccurance(arr,0,3);
Step 1
i = 0
arr[0] = 1

Not equal to 3.

Recursive call:

firstOccurance(arr,1,3);
Step 2
i = 1
arr[1] = 2

Not equal to 3.

Recursive call:

firstOccurance(arr,2,3);
Step 3
i = 2
arr[2] = 3

Match found.

return 2;

The function immediately returns 2.

Visualization
first(0)
   |
first(1)
   |
first(2)
   |
Found 3
return 2
Why does it give the first occurrence?

Because we check:

if(arr[i] == target)

before making the recursive call.

So the first matching element is returned immediately.

2. Last Occurrence Logic
int lastOccurance(vector<int> arr, int target, int i)
{
    if(i == arr.size())
    {
        return -1;
    }

    int idxfound = lastOccurance(arr, target, i + 1);

    if(idxfound == -1 && arr[i] == target)
    {
        return i;
    }

    return idxfound;
}

This is more interesting.

Instead of checking first, it goes all the way to the end of the array.

Example
arr = {1,2,3,3,3,4}
target = 3

Call:

lastOccurance(arr,3,0);
Recursive Calls
last(0)
 |
last(1)
 |
last(2)
 |
last(3)
 |
last(4)
 |
last(5)
 |
last(6)

At:

i = 6

Base case:

return -1;

Now recursion starts returning (backtracking).

Backtracking Phase
At i = 5
arr[5] = 4
idxfound = -1

Condition:

idxfound==-1 && arr[i]==3

False.

Return:

-1
At i = 4
arr[4] = 3
idxfound = -1

Condition true.

return 4;
At i = 3
idxfound = 4

Condition:

idxfound==-1

False.

Return:

4
At i = 2
idxfound = 4

Return:

4
At i = 1

Return:

4
At i = 0

Return:

4

Final Answer:

4
Visualization

Array:

Index : 0 1 2 3 4 5
Value : 1 2 3 3 3 4

Recursion goes:

0 → 1 → 2 → 3 → 4 → 5 → 6

Then returns:

6 returns -1
5 returns -1
4 returns 4
3 returns 4
2 returns 4
1 returns 4
0 returns 4

Answer = 4

Why does this find the LAST occurrence?

Because the function first searches the remaining part of the array:

int idxfound = lastOccurance(arr,target,i+1);

Only after returning does it check the current element.

So it examines indices in reverse order during backtracking:

5 ← 4 ← 3 ← 2 ← 1 ← 0

The first match found during backtracking is actually the last occurrence in the array.

Example When Element Doesn't Exist
lastOccurance(arr,45,0);

Array:

{1,2,3,3,3,4}

45 is not present.

All calls eventually return:

-1

Output:

-1
Key Concept
First Occurrence

Check first, then recurse.

if(arr[i]==target)
    return i;

return firstOccurance(...);

Search direction:

Left → Right
Last Occurrence

Recurse first, then check.

int idxfound = lastOccurance(...);

if(idxfound==-1 && arr[i]==target)
    return i;

Search direction during backtracking:

Right → Left

This difference in the order of operations is what makes one return the first occurrence and the other return the last occurrence.

give the complet e code

Here's the complete C++ program for finding both the first occurrence and last occurrence of an element using recursion, with detailed comments.

#include <iostream>
#include <vector>
using namespace std;

// Function to find the first occurrence of target
int firstOccurance(vector<int> &arr, int i, int target)
{
    // Base case: reached end of array
    if (i == arr.size())
    {
        return -1; // Element not found
    }

    // If current element matches target
    if (arr[i] == target)
    {
        return i; // Return current index
    }

    // Search in remaining array
    return firstOccurance(arr, i + 1, target);
}

// Function to find the last occurrence of target
int lastOccurance(vector<int> &arr, int target, int i)
{
    // Base case: reached end of array
    if (i == arr.size())
    {
        return -1;
    }

    // Recursive call first
    int idxFound = lastOccurance(arr, target, i + 1);

    // If target was not found ahead and current element matches
    if (idxFound == -1 && arr[i] == target)
    {
        return i;
    }

    // Otherwise return the index found in deeper calls
    return idxFound;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 3};

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int firstIndex = firstOccurance(arr, 0, target);
    int lastIndex = lastOccurance(arr, target, 0);

    cout << "\nFirst Occurrence Index = " << firstIndex << endl;
    cout << "Last Occurrence Index  = " << lastIndex << endl;

    return 0;
}
Sample Run 1

Input

3

Output

First Occurrence Index = 2
Last Occurrence Index  = 7
Sample Run 2

Input

10

Output

First Occurrence Index = -1
Last Occurrence Index  = -1
Recursion Tree for Last Occurrence (target = 3)
last(0)
 |
last(1)
 |
last(2)
 |
last(3)
 |
last(4)
 |
last(5)
 |
last(6)
 |
last(7)
 |
last(8) --> -1

Backtracking:

i=7 -> found 3 -> return 7
i=6 -> return 7
i=5 -> return 7
i=4 -> return 7
i=3 -> return 7
i=2 -> return 7
i=1 -> return 7
i=0 -> return 7

Therefore, the last occurrence index is 7.

  Print X to the power N give the code  and explain it process

You can calculate Xⁿ (X raised to the power N) using recursion.

Method 1: Simple Recursion
Formula
X
N
=X×X
N−1

For example:

2
5
=2×2
4
2
4
=2×2
3

and so on...

Code
#include <iostream>
using namespace std;

// Function to calculate x^n
int power(int x, int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    // Recursive call
    return x * power(x, n - 1);
}

int main()
{
    int x, n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter power (n): ";
    cin >> n;

    cout << x << "^" << n << " = " << power(x, n);

    return 0;
}
Example

Input:

x = 2
n = 5

Function calls:

power(2,5)
= 2 * power(2,4)

= 2 * 2 * power(2,3)

= 2 * 2 * 2 * power(2,2)

= 2 * 2 * 2 * 2 * power(2,1)

= 2 * 2 * 2 * 2 * 2 * power(2,0)

= 2 * 2 * 2 * 2 * 2 * 1

Output:

32
Recursion Tree

For:

power(2,3)
power(2,3)
    |
    v
2 * power(2,2)
        |
        v
    2 * power(2,1)
            |
            v
        2 * power(2,0)
                |
                v
                1

Backtracking:

power(2,0) = 1

power(2,1) = 2 × 1 = 2

power(2,2) = 2 × 2 = 4

power(2,3) = 2 × 4 = 8
Method 2: Optimized Recursion (Fast Exponentiation)

Instead of multiplying n times, divide the problem by 2.

Logic

If n is even:

x
n
=(x
n/2
)
2

If n is odd:

x
n
=x×(x
n/2
)
2
Code
#include <iostream>
using namespace std;

long long power(long long x, long long n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    long long halfPower = power(x, n / 2);

    long long result = halfPower * halfPower;

    // If n is odd
    if (n % 2 != 0)
    {
        result = x * result;
    }

    return result;
}

int main()
{
    long long x, n;

    cout << "Enter base: ";
    cin >> x;

    cout << "Enter exponent: ";
    cin >> n;

    cout << x << "^" << n << " = " << power(x, n);

    return 0;
}
Example

Find:

2^10

Calls:

power(2,10)
    |
power(2,5)
    |
power(2,2)
    |
power(2,1)
    |
power(2,0)

Backtracking:

power(2,0) = 1

power(2,1) = 2

power(2,2) = 2 × 2 = 4

power(2,5) = 4 × 4 × 2 = 32

power(2,10) = 32 × 32 = 1024

Output:

1024
Time Complexity
Method	Time Complexity
Simple Recursion	O(n)
Fast Exponentiation	O(log n)

The fast exponentiation method is preferred for large values of n because it reduces the number of recursive calls significantly.

 #include<iostream>
   #include<vector>
   using namespace std;
   int pow(int x,int n){
      x^n/2;
      int halfPow=pow(x,n/2);
      int halfPowSquare=halfPow*halfPow;
      if (n%2!=0)
      {
         return x*halfPowSquare;
      }
      return halfPowSquare;
   }
   int main (){
     cout<<pow(2,10)<<endl;
     return 0;
   } give the right code


Your code has a few mistakes:

Mistakes
Missing base case (n == 0).
x^n/2; does nothing. In C++, ^ is the bitwise XOR operator, not power.
Without a base case, the recursion will continue forever and cause a stack overflow.
Correct Code (Fast Exponentiation)
#include <iostream>
using namespace std;

int power(int x, int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    // Recursive call
    int halfPow = power(x, n / 2);

    // Square of half power
    int halfPowSquare = halfPow * halfPow;

    // If n is odd
    if (n % 2 != 0)
    {
        return x * halfPowSquare;
    }

    // If n is even
    return halfPowSquare;
}

int main()
{
    cout << power(2, 10) << endl;

    return 0;
}
Output
1024
How power(2,10) Works
Recursive Calls
power(2,10)
    |
power(2,5)
    |
power(2,2)
    |
power(2,1)
    |
power(2,0)
Base Case
power(2,0) = 1
Backtracking
power(2,1)
= 2 × 1 × 1
= 2

power(2,2)
= 2 × 2
= 4

power(2,5)
= 4 × 4 × 2
= 32

power(2,10)
= 32 × 32
= 1024
Time Complexity
Simple recursion: O(n)
Fast exponentiation (this code): O(log n)

Because each recursive call reduces n to n/2.

Tiling Prolem in detial all qyestion avilable in internate
Tiling Problem (Recursion) – Detailed Explanation

The Tiling Problem is one of the most common recursion and dynamic programming interview questions.

1. Basic Tiling Problem
Problem Statement

Given a floor of size:

2 × n

and tiles of size:

2 × 1

Find the number of ways to tile the entire floor.

You can place a tile:

Vertically        Recurrence  Relation
Horizontally           f(n)=f(n-1)+f(n-2)
Example: n = 1        This is the same as the Fibonacci sequence.

Floor:                 why?

| |                      Vetical tile

Only one way:           Remaning

| |                     2*(n-1)

Answer:                    Ways:

1                          f(n-1)
Example: n = 2        Horizantal Ties

Floor:                  Need two horizontal tiels together
2 × 2                          Uses two columns
Vertical Placement           REmaning:
| | | |                    2*(n-2)
Horizontal Placement        Ways:
-----                       f(n-2)
-----               Total:f(n)=f(n-1)+f(n-2)

Total ways:

2
Example: n = 3
Case 1

Place first tile vertically.

Remaining floor:

2 × 2

Ways:

f(2)
Case 2

Place first two tiles horizontally.

Remaining floor:

2 × 1

Ways:

f(1)
#include<iostream>
using namespace std;
int tiling(int n){
   //Base case
   if (n==0||n==1)
   {
      return 1;
   }
   return tiling(n-1)+tiling(n-2);

}
int main (){
   int n;
   cout<<"Enter n :";
   cin>>n;
   cout<<"Ways="<<tiling(n);
   return 0;
}
   output:5                  Time Complexity
   Recursion Tree           Recursive
    For n=4                        o(2^n)
                f(4)      becouse many subproblem repeat
          /      \
       f(3)      f(2)
      /   \      /  \
   f(2) f(1) f(1) f(0)
   / \
f(1) f(0)
Dynaminc Programing Solution


 #include<iostream>
#include<vector>
using namespace std;

int tiling(int n)
{
    vector<int> dp(n+1);

    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    cout<<tiling(n);
}
    Frequently Asked Variations Asked in Interviews
1. 2×n Board with 2×1 Tiles

Recurrence:

f(n)=f(n-1)+f(n-2)
2. 3×n Board Tiling

More complex DP.

Common recurrence:

f(n)=4f(n-2)-f(n-4)

for even n.
 #include<iostream>
   #include<vector>
   using namespace std;
   int firstOccurance(vector<int>arr,int i,int target){
      if (i==arr.size())
      {
         return -1;
      }
      if (arr[i]==target)
      {
         return i;
      }
      return firstOccurance(arr,i+1,target);

   }
   int lastOccurance(vector<int>arr,int target,int i){
      if (i==arr.size())
   {
      return -1;
   }
        int idxfound=lastOccurance(arr,target,i+1);
        if (idxfound==-1 && arr[i]==target)
        {

          return i;
        }
        return idxfound;
   }
   int main (){
      vector<int>arr={1,2,3,3,3,4};
      cout<<lastOccurance(arr,45,0)<<endl;
      return 0;
   } explain logic concept in detail

Your code uses recursion to find the first occurrence and last occurrence of an element in a vector.

1. First Occurrence Logic
int firstOccurance(vector<int> arr, int i, int target)
{
    if(i == arr.size())
    {
        return -1;
    }

    if(arr[i] == target)
    {
        return i;
    }

    return firstOccurance(arr, i + 1, target);
}
How it works

Suppose:

vector<int> arr = {1,2,3,3,3,4};
target = 3;

Function call:

firstOccurance(arr,0,3);
Step 1
i = 0
arr[0] = 1

Not equal to 3.

Recursive call:

firstOccurance(arr,1,3);
Step 2
i = 1
arr[1] = 2

Not equal to 3.

Recursive call:

firstOccurance(arr,2,3);
Step 3
i = 2
arr[2] = 3

Match found.

return 2;

The function immediately returns 2.

Visualization
first(0)
   |
first(1)
   |
first(2)
   |
Found 3
return 2
Why does it give the first occurrence?

Because we check:

if(arr[i] == target)

before making the recursive call.

So the first matching element is returned immediately.

2. Last Occurrence Logic
int lastOccurance(vector<int> arr, int target, int i)
{
    if(i == arr.size())
    {
        return -1;
    }

    int idxfound = lastOccurance(arr, target, i + 1);

    if(idxfound == -1 && arr[i] == target)
    {
        return i;
    }

    return idxfound;
}

This is more interesting.

Instead of checking first, it goes all the way to the end of the array.

Example
arr = {1,2,3,3,3,4}
target = 3

Call:

lastOccurance(arr,3,0);
Recursive Calls
last(0)
 |
last(1)
 |
last(2)
 |
last(3)
 |
last(4)
 |
last(5)
 |
last(6)

At:

i = 6

Base case:

return -1;

Now recursion starts returning (backtracking).

Backtracking Phase
At i = 5
arr[5] = 4
idxfound = -1

Condition:

idxfound==-1 && arr[i]==3

False.

Return:

-1
At i = 4
arr[4] = 3
idxfound = -1

Condition true.

return 4;
At i = 3
idxfound = 4

Condition:

idxfound==-1

False.

Return:

4
At i = 2
idxfound = 4

Return:

4
At i = 1

Return:

4
At i = 0

Return:

4

Final Answer:

4
Visualization

Array:

Index : 0 1 2 3 4 5
Value : 1 2 3 3 3 4

Recursion goes:

0 → 1 → 2 → 3 → 4 → 5 → 6

Then returns:

6 returns -1
5 returns -1
4 returns 4
3 returns 4
2 returns 4
1 returns 4
0 returns 4

Answer = 4

Why does this find the LAST occurrence?

Because the function first searches the remaining part of the array:

int idxfound = lastOccurance(arr,target,i+1);

Only after returning does it check the current element.

So it examines indices in reverse order during backtracking:

5 ← 4 ← 3 ← 2 ← 1 ← 0

The first match found during backtracking is actually the last occurrence in the array.

Example When Element Doesn't Exist
lastOccurance(arr,45,0);

Array:

{1,2,3,3,3,4}

45 is not present.

All calls eventually return:

-1

Output:

-1
Key Concept
First Occurrence

Check first, then recurse.

if(arr[i]==target)
    return i;

return firstOccurance(...);

Search direction:

Left → Right
Last Occurrence

Recurse first, then check.

int idxfound = lastOccurance(...);

if(idxfound==-1 && arr[i]==target)
    return i;

Search direction during backtracking:

Right → Left

This difference in the order of operations is what makes one return the first occurrence and the other return the last occurrence.

give the complet e code

Here's the complete C++ program for finding both the first occurrence and last occurrence of an element using recursion, with detailed comments.

#include <iostream>
#include <vector>
using namespace std;

// Function to find the first occurrence of target
int firstOccurance(vector<int> &arr, int i, int target)
{
    // Base case: reached end of array
    if (i == arr.size())
    {
        return -1; // Element not found
    }

    // If current element matches target
    if (arr[i] == target)
    {
        return i; // Return current index
    }

    // Search in remaining array
    return firstOccurance(arr, i + 1, target);
}

// Function to find the last occurrence of target
int lastOccurance(vector<int> &arr, int target, int i)
{
    // Base case: reached end of array
    if (i == arr.size())
    {
        return -1;
    }

    // Recursive call first
    int idxFound = lastOccurance(arr, target, i + 1);

    // If target was not found ahead and current element matches
    if (idxFound == -1 && arr[i] == target)
    {
        return i;
    }

    // Otherwise return the index found in deeper calls
    return idxFound;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 3};

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int firstIndex = firstOccurance(arr, 0, target);
    int lastIndex = lastOccurance(arr, target, 0);

    cout << "\nFirst Occurrence Index = " << firstIndex << endl;
    cout << "Last Occurrence Index  = " << lastIndex << endl;

    return 0;
}
Sample Run 1

Input

3

Output

First Occurrence Index = 2
Last Occurrence Index  = 7
Sample Run 2

Input

10

Output

First Occurrence Index = -1
Last Occurrence Index  = -1
Recursion Tree for Last Occurrence (target = 3)
last(0)
 |
last(1)
 |
last(2)
 |
last(3)
 |
last(4)
 |
last(5)
 |
last(6)
 |
last(7)
 |
last(8) --> -1

Backtracking:

i=7 -> found 3 -> return 7
i=6 -> return 7
i=5 -> return 7
i=4 -> return 7
i=3 -> return 7
i=2 -> return 7
i=1 -> return 7
i=0 -> return 7

Therefore, the last occurrence index is 7.

  Print X to the power N give the code  and explain it process

You can calculate Xⁿ (X raised to the power N) using recursion.

Method 1: Simple Recursion
Formula
X
N
=X×X
N−1

For example:

2
5
=2×2
4
2
4
=2×2
3

and so on...

Code
#include <iostream>
using namespace std;

// Function to calculate x^n
int power(int x, int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    // Recursive call
    return x * power(x, n - 1);
}

int main()
{
    int x, n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter power (n): ";
    cin >> n;

    cout << x << "^" << n << " = " << power(x, n);

    return 0;
}
Example

Input:

x = 2
n = 5

Function calls:

power(2,5)
= 2 * power(2,4)

= 2 * 2 * power(2,3)

= 2 * 2 * 2 * power(2,2)

= 2 * 2 * 2 * 2 * power(2,1)

= 2 * 2 * 2 * 2 * 2 * power(2,0)

= 2 * 2 * 2 * 2 * 2 * 1

Output:

32
Recursion Tree

For:

power(2,3)
power(2,3)
    |
    v
2 * power(2,2)
        |
        v
    2 * power(2,1)
            |
            v
        2 * power(2,0)
                |
                v
                1

Backtracking:

power(2,0) = 1

power(2,1) = 2 × 1 = 2

power(2,2) = 2 × 2 = 4

power(2,3) = 2 × 4 = 8
Method 2: Optimized Recursion (Fast Exponentiation)

Instead of multiplying n times, divide the problem by 2.

Logic

If n is even:

x
n
=(x
n/2
)
2

If n is odd:

x
n
=x×(x
n/2
)
2
Code
#include <iostream>
using namespace std;

long long power(long long x, long long n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    long long halfPower = power(x, n / 2);

    long long result = halfPower * halfPower;

    // If n is odd
    if (n % 2 != 0)
    {
        result = x * result;
    }

    return result;
}

int main()
{
    long long x, n;

    cout << "Enter base: ";
    cin >> x;

    cout << "Enter exponent: ";
    cin >> n;

    cout << x << "^" << n << " = " << power(x, n);

    return 0;
}
Example

Find:

2^10

Calls:

power(2,10)
    |
power(2,5)
    |
power(2,2)
    |
power(2,1)
    |
power(2,0)

Backtracking:

power(2,0) = 1

power(2,1) = 2

power(2,2) = 2 × 2 = 4

power(2,5) = 4 × 4 × 2 = 32

power(2,10) = 32 × 32 = 1024

Output:

1024
Time Complexity
Method	Time Complexity
Simple Recursion	O(n)
Fast Exponentiation	O(log n)

The fast exponentiation method is preferred for large values of n because it reduces the number of recursive calls significantly.

 #include<iostream>
   #include<vector>
   using namespace std;
   int pow(int x,int n){
      x^n/2;
      int halfPow=pow(x,n/2);
      int halfPowSquare=halfPow*halfPow;
      if (n%2!=0)
      {
         return x*halfPowSquare;
      }
      return halfPowSquare;
   }
   int main (){
     cout<<pow(2,10)<<endl;
     return 0;
   } give the right code


Your code has a few mistakes:

Mistakes
Missing base case (n == 0).
x^n/2; does nothing. In C++, ^ is the bitwise XOR operator, not power.
Without a base case, the recursion will continue forever and cause a stack overflow.
Correct Code (Fast Exponentiation)
#include <iostream>
using namespace std;

int power(int x, int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    // Recursive call
    int halfPow = power(x, n / 2);

    // Square of half power
    int halfPowSquare = halfPow * halfPow;

    // If n is odd
    if (n % 2 != 0)
    {
        return x * halfPowSquare;
    }

    // If n is even
    return halfPowSquare;
}

int main()
{
    cout << power(2, 10) << endl;

    return 0;
}
Output
1024
How power(2,10) Works
Recursive Calls
power(2,10)
    |
power(2,5)
    |
power(2,2)
    |
power(2,1)
    |
power(2,0)
Base Case
power(2,0) = 1
Backtracking
power(2,1)
= 2 × 1 × 1
= 2

power(2,2)
= 2 × 2
= 4

power(2,5)
= 4 × 4 × 2
= 32

power(2,10)
= 32 × 32
= 1024
Time Complexity
Simple recursion: O(n)
Fast exponentiation (this code): O(log n)

Because each recursive call reduces n to n/2.

Tiling Prolem in detial all qyestion avilable in internate
Tiling Problem (Recursion) – Detailed Explanation

The Tiling Problem is one of the most common recursion and dynamic programming interview questions.

1. Basic Tiling Problem
Problem Statement

Given a floor of size:

2 × n

and tiles of size:

2 × 1

Find the number of ways to tile the entire floor.

You can place a tile:

Vertically
Horizontally
Example: n = 1

Floor:

| |

Only one way:

| |

Answer:

1
Example: n = 2

Floor:

2 × 2
Vertical Placement
| | | |
Horizontal Placement
-----
-----

Total ways:

2
Example: n = 3
Case 1

Place first tile vertically.

Remaining floor:

2 × 2

Ways:

f(2)
Case 2

Place first two tiles horizontally.

Remaining floor:

2 × 1

Ways:

f(1)

Therefore:

f(3)=f(2)+f(1)
=2+1
=3
Recurrence Relation

For every n:

f(n)=f(n-1)+f(n-2)

This is the same as the Fibonacci sequence.

Why?
Vertical Tile

Uses one column.

Remaining:

2 × (n-1)

Ways:

f(n-1)
Horizontal Tiles

Need two horizontal tiles together.

Uses two columns.

Remaining:

2 × (n-2)

Ways:

f(n-2)

Total:

f(n)=f(n-1)+f(n-2)
Recursive Code
#include<iostream>
using namespace std;

int tiling(int n)
{
    // Base case
    if(n==0 || n==1)
    {
        return 1;
    }

    return tiling(n-1) + tiling(n-2);
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Ways = "<<tiling(n);

    return 0;
}
Example

Input:

4

Calculation:

f(4)
=f(3)+f(2)

=(f(2)+f(1))+f(2)

=(2+1)+2

=5

Output:

5
Recursion Tree

For n = 4

            f(4)
          /      \
       f(3)      f(2)
      /   \      /  \
   f(2) f(1) f(1) f(0)
   / \
f(1) f(0)

Answer:

5
Time Complexity

Recursive:

O(2^n)

because many subproblems repeat.

Dynamic Programming Solution
#include<iostream>
#include<vector>
using namespace std;

int tiling(int n)
{
    vector<int> dp(n+1);

    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    cout<<tiling(n);
}

Time:

O(n)
Frequently Asked Variations Asked in Interviews
1. 2×n Board with 2×1 Tiles

Recurrence:

f(n)=f(n-1)+f(n-2)
2. 3×n Board Tiling

More complex DP.

Common recurrence:

f(n)=4f(n-2)-f(n-4)

for even n.

3. m×n Board with m×1 Tiles

Recurrence:

f(n)=f(n-1)+f(n-m)

Example:

Board:

4 × n

Tile:

4 × 1

Then:

f(n)=f(n-1)+f(n-4)
4. Domino and Tromino Tiling

LeetCode 790

Board:

2 × n

Tiles:

Domino
L-shaped Tromino

Requires advanced DP.

5. Count Ways to Tile a Floor

GeeksforGeeks classic problem.

Usually:

Floor: n × m
Tile : 1 × m

Recurrence:

f(n)=f(n-1)+f(n-m)
6. Tiling with Obstacles

Some cells are blocked.

Solved using:

DP
Bitmask DP

Advanced interview problem.

Important Formula Summary
2×n floor with 2×1 tile
f(n)=f(n-1)+f(n-2)
n×m floor with 1×m tile
f(n)=f(n-1)+f(n-m)
Base Cases
f(0)=1
f(1)=1

These are the most common tiling problems asked in coding interviews, competitive programming, and recursion/DP courses.

dp mean

DP stands for Dynamic Programming.

It is an optimization technique used when the same subproblems are solved repeatedly in recursion.

Why Do We Need DP?

Consider the Fibonacci recursion:

int fib(int n)
{
    if(n <= 1)
        return n;

    return fib(n-1) + fib(n-2);
}

For fib(5):

           fib(5)
         /       \
     fib(4)      fib(3)
     /   \       /   \
 fib(3) fib(2) fib(2) fib(1)

Notice:

fib(3) is calculated multiple times
fib(2) is calculated multiple times

This wastes time.

Dynamic Programming Idea

Store the answer of a subproblem once and reuse it.

Instead of recalculating:

fib(3)
fib(2)
fib(1)

save them in memory.

Two Types of DP
1. Memoization (Top-Down)

Recursion + Storage

#include<iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int>& dp)
{
    if(n <= 1)
        return n;

    if(dp[n] != -1)
        return dp[n];

    dp[n] = fib(n-1, dp) + fib(n-2, dp);

    return dp[n];
}

int main()
{
    int n = 5;
    vector<int> dp(n+1, -1);

    cout << fib(n, dp);
}

Output:

5
2. Tabulation (Bottom-Up)

Start from the smallest problem and build upward.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 5;

    vector<int> dp(n+1);

    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n];
}

Output:

5
DP in Tiling Problem

Recurrence:

f(n) = f(n-1) + f(n-2)

Recursive solution recalculates the same values many times.

Using DP:

int tiling(int n)
{
    vector<int> dp(n+1);

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}
When to Use DP?

Use Dynamic Programming when:

1. Overlapping Subproblems

Same subproblem is solved repeatedly.

Example:

Fibonacci
Tiling Problem
Coin Change
Knapsack
2. Optimal Substructure

Big problem can be built from solutions of smaller problems.

Example:

Shortest Path
Longest Common Subsequence
House Robber
DP vs Recursion
Feature	Recursion	Dynamic Programming
Repeated calculations	Yes	No
Speed	Slow	Fast
Memory	Less	More
Time Complexity (Tiling)	O(2ⁿ)	O(n)
Easy Definition

Dynamic Programming (DP) is a technique where we store the answers of previously solved subproblems and reuse them instead of solving them again. This reduces time complexity and makes programs much faster.

2. 3×n Board Tiling

More complex DP.

Common recurrence:

f(n)=4f(n-2)-f(n-4)

for even n.2. 3×n Board Tiling

More complex DP.

Common recurrence:

f(n)=4f(n-2)-f(n-4)

for even n.

The 3 × n Board Tiling problem is more difficult than the standard 2 × n tiling problem.

Problem

You have:

Board size = 3 × n
Tile size  = 2 × 1 domino

Find the number of ways to completely cover the board.

Important Observation

If n is odd:

3 × odd = odd number of cells

A domino covers:

2 cells

Since an odd number of cells cannot be completely covered by tiles of size 2:

f(1) = 0
f(3) = 0
f(5) = 0
...

Therefore:

For odd n, f(n) = 0
Base Cases

For n = 0:

Empty board

One valid arrangement:

f(0) = 1

For n = 2:

There are 3 ways.

f(2) = 3
Values
n      f(n)

0       1
1       0
2       3
3       0
4       11
5       0
6       41
8       153
10      571
Recurrence Relation

For even values of n:

f(n) = 4*f(n-2) - f(n-4)
Example: f(4)

Using:

f(4) = 4*f(2) - f(0)

Substitute:

f(4) = 4×3 - 1
f(4) = 11
Example: f(6)
f(6)=4*f(4)-f(2)
=4×11−3
=44−3
=41
#include <iostream>
#include <vector>
using namespace std;

long long tiling3xn(int n)
{
    if (n % 2 != 0)
    {
        return 0;
    }

    vector<long long> dp(n + 1);

    dp[0] = 1;

    if (n >= 2)
    {
        dp[2] = 3;
    }

    for (int i = 4; i <= n; i += 2)
    {
        dp[i] = 4 * dp[i - 2] - dp[i - 4];
    }

    return dp[n];
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Ways = " << tiling3xn(n);

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int tiling(int n,int m){
   vector<int>dp(n+1);
   for (int i = 0; i <= n; i++)
   {//If floor length equals tile Length
      if (i<m)
      {
         dp[i]=1;
      }
      //If floar length equals tile Length
      else if (i==m)
      {
         dp[i]=2;
      }
      //General recurrence
      else{
         dp[i]=dp[i-1]+dp[i-m];
      }
   }
  return dp[n];
}
int main (){
   int n,m;

   cout<<"Enter n(floor Length):";
   cin>>n;
   cout<<"Enter m(tile length):";
   cin>>m;
   cout<<"Number of ways="<<tiling(n,m)<<endl;
   return 0;
}
   dp[0] = 1
dp[1] = 1
dp[2] = 1
dp[3] = 1
dp[4] = 2
dp[5] = 3
dp[6] = 4
dp[7] = 5
O(n)
  Time complexity:Number of ways = 5
  Space complexity: o(n)
O(n)

#include<iostream>
#include<string>
using namespace std;
int tilingProblem(int n){//2xn
   if (n==0||n==1)
   {
      return 1;
   }
   //vertical
   int ans1=tilingProblem(n-1);
   //Horiontal
   int ans2=tilingProblem(n-2);
   return ans1+ans2;
}
int main (){
   int n=3;
   cout<<tilingProblem(4)<<endl;
  return 0;
}
  Remove Duplicates in string

 #include<iostream>
 #include<string>
 using namespace std;
 void removeDuplicate(string str,string ans,int i,int map[26]){
   if(i==str.size()){
      cout<<"ans:"<<ans<<endl;
      return;
   }
    char ch=str[i];
    int mapIdx=(int)(ch-'a');
    if (map[mapIdx]==true)
    {
      removeDuplicate(str,ans,i+1,map);
    }else{
      map[mapIdx]=true;
      removeDuplicate(str,ans+str[i],i+1,map);
    }

 }
 int main (){
   string str="appnnacollege";
   string ans="";
   int map[26]={false};

   removeDuplicate(str,ans,0,map);
   return 0;
 }
Recursive Approach

We will:

Process one character at a time.
Use an array of size 26 to track whether a character has already appeared.
If the character is new, add it to the answer.
Otherwise, skip it.
Recursively process the next character.

#include<iostream>
using namespace std;
void removeDuplicates(string str,int idx,string ans,bool map[]){
   //Base case
   if (idx==str.length())
   {
      cout<<ans<<endl;
      return;
   }
   char currChar=str[idx];
   //Check if charecter already exists
   if (map[currChar-'a'])
   {
      //Duplicate found,skip it
      removeDuplicates(str,idx+1,ans,map);
   }
   else{
      //First occurance
      map[currChar-'a']=true;
      removeDuplicates(str,idx+1,ans+currChar,map);
   }
}
int main (){
    string str="appnnacollege";
    bool map[26]={false};
    removeDuplicates(str,0,"",map);
    return 0;
}
     Time Complexity
O(n)
Space Complexity
O(n)

Friend Pairing Problem
Find total ways i which n friend can be paiired up.
Each friend can only be paired once

n=1 ways=1
n=2 ways=2
n=4 ways=4
             f(n)
             /   \
      Single     Pair
      f(n-1)      f(n-2)
A B         C D E F
2 friends    (n-2)4friends
AB
AC
AD
AE
AF
(n-1)
four for friend
Case 2: One Pair and Two Singles
(AB)(C)(D)
(AC)(B)(D)
(AD)(B)(C)
(BC)(A)(D)
(BD)(A)(C)
(CD)(A)(B)
Case 3: Two Pairs
(AB)(CD)
(AC)(BD)
(AD)(BC)


#include<iostream>
#include<string>
using namespace std;
int friendPairing(int n){
if (n==1||n==2)
{
   return n;
}
   return friendPairing(n-1)+(n-1) * friendPairing(n-2);
}
int main (){
   cout<<friendPairing(4)<<endl;
   return 0;
}

   Binary String Problem
Print all Binary of size N without any consecutive !s


#include<iostream>
#include<string>
using namespace std;
void binString(int n,int lastPlace,string ans){
   if (n==0)
   {
      cout<<ans<<endl;
      return ;
   }
   if(lastPlace!=0){
      binString(n-1,0,ans+'0');
      binString(n-1,1,ans+'1');
   }else{
      binString(n-1,0,ans+'0');
   }
}
void binString(int n,string ans){
   if (n==0)
   {
      cout<<ans<<endl;
      return ;
   }
   if(ans[ans.size()-1]!='1'){
      binString(n-1,ans+'0');
      binString(n-1,ans+'1');
   }else{
      binString(n-1,ans+'0');
   }
}
int main (){
   string ans="";
   binString(3,ans);
   return 0;
}

#include<iostream>
#include<string>
using namespace std;
void binString(int n,string ans){
   if (n==0)
   {
      cout<<ans<<endl;
      return ;
   }
   if(ans[ans.size()-1]!='1'){
       binString(n-1,ans+'0');
       binString(n-1,ans+'1');
   }else{
      binString(n-1,ans+'0');
   }
}
int main(){
      string ans="";
      binString(3,ans);
   }
Binary String Problem-the classic recusion/DP pattern

The Binary String Problem is a classic Recursion and Dynamic Programming (DP) problem.

Problem Statement

Generate or count all binary strings of length n such that no two consecutive 1's appear.

For example, for n = 3:
Valid binary strings:

000        REcursive Approach
001   .If the last digit is 0,we can place   eight 0 or 1
010   .If the last digit is 1,we can only place 0
100
101

Invalid:

011
110
111
Binary String Problem(REcursion)
Problem Statement
Generate all binary string of ength  such that two no two consecutive 1's appear i the string
EXample
for n=3,valid binary string are:
000
001
010
100
101
Invalid strings:

011  (two consecutive 1's)
110  (two consecutive 1's)
111  (three consecutive 1's)
Concept

At every position, we have two choices:

Put 0
Put 1

But there is one condition:

👉 We can place 1 only if the previous character is not 1.

To keep track of the previous character, we use a variable:

lastPlace
lastPlace = 0 → previous digit was 0
lastPlace = 1 → previous digit was 1

n = 3
ans = ""
lastPlace = 0
Step 1

Since previous digit is 0, we can add:

0
or
1
Add 0
ans = "0"
n = 2

Again we can add:

0 or 1
Add 1
ans = "1"
n = 2
lastPlace = 1

Now we cannot add another 1.

Only:

10
Recursion Tree for n = 3
                ""
              /    \
            0        1
          /  \        |
        00   01      10
       / \    |      / \
    000 001 010   100 101

000
001
010
100
101
Base Case
When:
n == 0
means all positions are filled.
Print the answer:
cout << ans << endl;
return;


#include<iostream>
#include<string>
using namespace std;

void binString(int n,int lastPlace,string ans)
{
   //Base Case
   if (n==0)
   {
      cout<<ans<<endl;
      return ;
   }
   //Place 0
   binString(n-1,0,ans+'0');
   //Place 1 only if previous digit is 0
   if(lastPlace==0)
   {
      binString(n-1,1,ans+'1');
   }
}
int main (){
   int n=3;
   binString(n,0,"");
   return 0;
}

#include<iostream>
using namespace std;
int binarySearch(int arr[],int si,int ei,int key){
   //BAse case
   if (si>ei)
   {
      return -1;
   }
   int mid=si +(ei-si)/2;
   //Key found
   if(arr[mid]==key){
      return mid;
   }
   //Search left half
   if(key<arr[mid])
   {
      return binarySearch(arr,si,mid-1,key);
   }
   //Search right half
   return binarySearch(arr,mid +1,ei,key);
}
int main (){
   int arr[]={1,2,3,4,5,6,7};
   int n=7;
   int key=5;
   cout<<binarySearch(arr,0,n-1,key);
   return 0;
}
Time Complexity
O(log n)
Space Complexity (Recursion Stack)
O(log n)


.Question2:ForagivenintegerarrayofsizeN.Youhavetofindalltheoccurrences(indices)ofagivenelement(Key)andprintthem.Usearecursivefunctiontosolvethisproblem.SampleInput:arr[]={3,2,4,5,6,2,7,2,2},key=2SampleOutput:1578


#include<iostream>
using namespace std;

void allOccurrences(int arr[],int n,int i,int key)
{
   //Base Case
   if (i==n)
   {
      return;
   }
   //Check current index
   if (arr[i]==key)
   {
      cout<<i<<" ";
   }
   //Recursive Call
   allOccurrences(arr,n,i+1,key);
}
int main (){
   int arr[]={3,2,4,5,6,2,7,2,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   int key=2;

   allOccurrences(arr,n,0,key);
   return 0;
}

Time Complexity
O(n)
Space Complexity
O(n)

allOccurrences(arr,9,0,2)
        |
        v
allOccurrences(arr,9,1,2) -> print 1
        |
        v
allOccurrences(arr,9,2,2)
        |
        v
...
        |
        v
allOccurrences(arr,9,8,2) -> print 8
        |
        v
allOccurrences(arr,9,9,2) -> return

Question3:WearegivenastringS,weneedtofindthecountofallcontiguoussubstringsstartingandendingwiththesamecharacter.[LeetcodePremiumQs]SampleInput1:S="abcab"SampleOutput1:7Thereare15substringsof"abcab":a,ab,abc,abca,abcab,b,bc,bca,bcab,c,ca,cab,a,ab,bOutoftheabovesubstrings,thereare7substrings:a,abca,b,bcab,c,aandb.So,only7contiguoussubstringsstartandendwiththesamecharacter.SampleInput2:S="aba"SampleOutput2:4Thesubstringsarea,b,aandaba solve this problem
   


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countSubstrings(string s) {
    vector<int> freq(256, 0);

    for (char ch : s) {
        freq[ch]++;
    }

    int count = 0;

    for (int f : freq) {
        count += (f * (f + 1)) / 2;
    }

    return count;
}

int main() {
    string s;
    cin >> s;
    cout << countSubstrings(s) << endl;
    return 0;
}

             Divide & Conquar
   A recursive algorithm

    .............................
    ............................
              big
              /   \
             /     \
   solution1       solution2
        \              /
         \ BigSolution/

Merge Sort--->0(nlogn)
arr[]                 


                       si=0        ei=n-1
                       1 2 3 4 5 6
                       .............
                       :6:3:7:5:2:4:
                       .............
                            :
                            mid
                         /      \
                        /         \
                       /           \
                     left         right
  Merge Sort           \           /
  Approach              \ combine /

1.Divide
                     si+ei          0+5
               mid=........... =..............= 2
                        2             2

      ..............                        0+2
      : 6:3:7:5:2:4:                   lmid=.....=1
      ..............                          2
         /       \                   
        /         \                           3+5
      left       right                  Rmid=.....=4
   :6:3:7:           :5:2:4:                    2
  si=0   ei=2    si=3   :   ei=5
     /     \           4(index)
   6:3     7(si=ei)       /  \
    /\     Base            5:2   4
  6   3    case            /  \
 Bc   Bc                  Bc  Bc
  \   /                    \   /   
    3:6                     2:5  
(2).mergeSort(left)
(3).mergeSort(right)

Merge Sort
Merge/Combine Step
    .............
    :6:3:7:5:2:4:      i=si 
    .............      j=mid+1
        /     \ 
   [6,3,7]     [5,2,4]  
     ms           ms
    :             :             
 si :  mid  mid+1 : ei
   3:6:7        2:4:5
   i=0        j=3

     2:3:4:5:6:7
  ms(arr,si,ei){
  if(si>=ei){
   return;
  }
  mid=(si+ei)/2
  ms(arr,si,mid)//Left
  ms(arr,mid+1,ei)//right
  merge(arr,si,ei,mid)
  }
  merge(arr,si,ei,mid){
  vector<int>
  i=si
  j=mid+1
  while(i<=mid && j<=ei){
   arr[i],arr[j]-->vector
    }
  }
copy vector to Original array

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void merge(int arr[],int si,int mid,int ei){
   vector<int>temp;
   int i=si;
   int j=mid+1;
   while (i<=mid && j<=ei)
   {
      if (arr[i]<=arr[j])
      {
         temp.push_back(arr[i++]);
      }else{
         temp.push_back(arr[j++]);
      } 
   }
   while(i<=mid){
      temp.push_back(arr[i++]);
   }
   while (j<=ei)
   {
      temp.push_back(arr[j++]);
   }
   //vector->org arr
   for (int idx =si,x=0; idx< ei; idx++)
   {
      arr[idx]=temp[x++];
   }
   
}
void mergeSort(int arr[],int si,int ei){
   if(si>=ei){
      return ;
   }
   int mid=(si+ei)/2;//si+(si-ei)/2
   mergeSort(arr,si,mid);//Left half
   mergeSort(arr,mid+1,ei);//right half

   merge(arr,si,mid,ei);//conquar
}
void printArr(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<"";
   }
   cout<<endl;
   
}
int main (){
   int arr[6]={6,3,7,5,2,4};
   int n=6;
   mergeSort(arr,0,n-1);
   printArr(arr,n);
   return 0;
}

Merge Sort 
summary
                 :6:3:7:5:2:4:
                 /    :      \
                /     mid     \
            6:3:7           5:2:4
              /  \           /   \
         :6:3:     :7:     :5:2: :4:   
          / \       /      / \     /
         :3: :6:   :7:    :2: :5:  :4:
           \      /        \   /   /
         :3:6:7:            :2:4:5:
           \
             :2:3:4:5:6:7:


 
#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei) {
    vector<int> temp;

    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    while (j <= ei) {
        temp.push_back(arr[j++]);
    }

    // Copy temp back to original array
    for (int idx = si, x = 0; idx <= ei; idx++) {
        arr[idx] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei) {
    if (si >= ei) {
        return;
    }

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);      // Left half
    mergeSort(arr, mid + 1, ei);  // Right half

    merge(arr, si, mid, ei);      // Merge both halves
}

int main() {
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei) {
    vector<int> temp;

    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    while (j <= ei) {
        temp.push_back(arr[j++]);
    }

    // Copy temp back to original array
    for (int idx = si, x = 0; idx <= ei; idx++) {
        arr[idx] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei) {
    if (si >= ei) {
        return;
    }

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);      // Left half
    mergeSort(arr, mid + 1, ei);  // Right half

    merge(arr, si, mid, ei);      // Merge both halves
}

int main() {
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
What is a Pivot in Quick Sort?

A pivot is a special element chosen from the array that is used to divide the array into two parts.

Elements smaller than the pivot go to the left side.
Elements greater than the pivot go to the right side.
After partitioning, the pivot is in its correct sorted position.
Example

Array:

[6, 3, 9, 8, 2, 5]

Suppose we choose the last element (5) as the pivot.

pivot = 5

After partitioning:

[3, 2, 5, 8, 9, 6]

Notice:

3 and 2 are smaller than 5 → left side
8, 9, and 6 are greater than 5 → right side
5 is now in its final sorted position
.......................................................
| Feature            | Merge Sort | Quick Sort         |
| ------------------ | ---------- | ------------------ |
| Time Complexity    | O(n log n) | O(n log n) average |
| Worst Case         | O(n log n) | O(n²)              |
| Extra Space        | O(n)       | O(log n)           |
| In-place           | No         | Yes                |
| Faster in Practice | No         | Usually Yes        |
........................................................

Partion Function
The partition function returns the correct position of the pivot
    
#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int si,int ei){
   int pivot=arr[ei];
   int i=si-1;
   for (int j = si; j < ei; j++)
   {
      if (arr[j]<pivot)
      {
         i++;
         swap(arr[i],arr[j]);
      }
   }
   i++;
   swap(arr[i],arr[ei]);
   return i;
}
void quickSort(int arr[],int si,int ei){
   if (si<ei)
   {
      int pivotIdx=partition(arr,si,ei);
      quickSort(arr,si,pivotIdx-1);//Leftpart
      quickSort(arr,pivotIdx+1,ei);//Rightpart
   }
   
}

int main (){
   int arr[]={6,3,9,8,2,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   quickSort(arr,0,n-1);
   cout<<"Sorted Array:";
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
  

       Quick Sort
   arr[]
:6:3:7:5:2:4:
                    Pivot & PArtion
                      :
                     special...ending
                     idx        idx

      3,2,4,6,7,5
       :        :                QS(arr,si,ei){
    recursive   recuersive      pivatIdx=partion(arr,si,ei)
    we call     wee call         Qs(s1,pI-1)
   quic sort     quic sort       QS(PI+1,ei)
        :          :              }
    _,2,3         _ 5,6,7
    sA[2,3]         6,7,_
                     :
                  [5,6,7]SA

  :6:3:7:5:2:4:
si=0                     i=si-1
  pivot=arr[ei]           i++;
                          swap(arr[i],arr[j])

                                       arr[ei]

i=itrator
  :6:3:7:5:2:4: original
i=-1           
for Partition Step
partiitio(arr,si,ei){
 i=si-1;pivat=arr[ei]
for(j=si;j<ei;j++)
if(arr[j]<=pivot){
 i++;
 swap(arr[i],arr[j]);
 }
}
 i++;
 swap(arr[i],arr[ei])

#include<iostream>
#include<vector>
using namespace std;
void printArr(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int partition(int arr[],int si,int ei){
   int i=si-1;
   int pivot=arr[ei];

   for (int j = si; j < ei; j++)
   {
      if (arr[j]<=pivot)
      {
         i++;
         swap(arr[i],arr[j]);
      } 
   }
   i++;
   swap(arr[i],arr[ei]); 
   //pivotIdx=1
   return i;
}
void quickSort(int arr[],int si,int ei)  {//O(n*logn)
   if (si>=ei)
   {
      return;
   }
   
   int pivotIdx=partition(arr,si,ei);
   quickSort(arr,si,pivotIdx-1);//left half
   quickSort(arr,pivotIdx+1,ei);//right half
}                


int main (){

   int arr[6]={6,3,7,5,2,4};
   int n=6;

   quickSort(arr,0,n-1);
   printArr(arr,n);
   return 0;
}
   Worst Case Time Complexity=O(N^2)
 :1:2:3:4:5:..>n
 :1:2:3:4:...>n-1        n*(n+1)/2=o(n^2)
 :1:2:3:...>n-2
 :1:2:...>n-3
 :1:


#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int si,int ei){
   int pivot=arr[ei];//Last element is as pivot
   int i=si-1;
   for (int j = si; j< ei; j++)
   {
      if (arr[j]<pivot)
      {
         i++;
         swap(arr[i],arr[j]);
      }
       
   }
   i++;
   swap(arr[i],arr[ei]);//Place pivote at correct position
   return i;//pivote index
}
void quickSort(int arr[],int si,int ei){
   if (si<ei)
   {
      int pivotIdx=partition(arr,si,ei);
      quickSort(arr,si,pivotIdx-1);
      quickSort(arr,pivotIdx+1,ei);
   }
   
}

void printArray(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
using namespace std;
int main (){
 int arr[]={6,3,9,5,2,8};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<"Original Array:";
 printArray(arr,n);
 quickSort(arr,0,n-1);

 cout<<"Sorted Array:"; 
 printArray(arr,n);
}

Search in Rotated Sorted
input:Rotated,sorted array with distinct nums;ascending order
Find index of target=0
:4:5:6:7:0:1:2:
 0 1 2 3 4
   ans=4
Search in Rotated Sorted Array (C++)

A rotated sorted array is a sorted array that has been rotated at some pivot.

Example:

arr = {4, 5, 6, 7, 0, 1, 2}
key = 0
Output:
4
(index of 0)


#include<iostream>
using namespace std;
int searchRotared(int arr[],int n,int key){
   int low=0;
   int high=n-1;
while (low<=high)
{
   int mid=low+(high-low)/2;
   //key found
   if (arr[mid]==key)
   {
      return mid;
   }
   //Left half is sorted
   if (arr[low]<=arr[mid])
   {
      if (key>=arr[low]&& key<arr[mid])
      {
         high=mid-1;
      }else{
         low=mid+1;
      }
   }
   //Right half is sorted
   else{
      if (key>arr[mid] && key<=arr[high])
      {
         low=mid+1;
      }else{
         high=mid-1;
      }
   }
}
return -1;//key not found

}
int main (){
   int arr[]={4,5,6,7,0,1,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   int key=0;
   int index=searchRotared(arr,n,key);
   if (index!=-1)
   {
      cout<<"Element found at index:"<<index<<endl;
   }
   else{
      cout<<"Element not found"<<endl;
   }
   return 0;
}
Time Complexity
O(log n)
Space Complexity
O(1)
                                mid
 si           ei               /   \  
 :4:5:6:7:0:1:2:              L1   L2
                    
Search in Rotated Sorted                                            
Pseudocode
  serach(arr,si,ei,tar){
    mid=si+(ei-si)/2;
    if(arr[mid]==tar)
       return mid;
   if(arr[si]<=arr[mid]){
      if(arr[si]<=tar<=arr[mid])
      left half search(si,mid-1)
   }else
      right half search(mid+1,ei)
  }else{
     if(arr[mid]<=tar<=arr[ei])
  }else
       left searc(si,mid-1)
}

#include<iostream>
#include<vector>
using namespace std;
int search(int arr[],int si,int ei,int tar){
   if (si>ei)
   {
      return -1;
   }
   
   int mid=si+(ei-si)/2;
   if (arr[mid]==tar)
   {
      return mid;
   }
   if (arr[si]<=arr[mid])
   {
      if (arr[si]<=tar && tar<=arr[mid])
      {
         return search(arr,si,mid-1,tar);
      }else{
         return search(arr,mid+1,ei,tar);
      } 
   }else{
      if (arr[mid]<=tar && tar<=arr[ei])
      {
         return search(arr,mid+1,ei,tar);
      }else{
          return search(arr,si,mid-1,tar);
      }
   }
}
int main(){
   int arr[7]={4,5,6,7,0,1,2};
   int n=7;
   cout<<"idx:"<<search(arr,0,n-1,0)<<endl;
   return 0;
}
 Divide&Conquer(AssignmentQuestions)Question1:ApplyMergesorttosortanarrayofStrings.(AssumethatallthecharactersinalltheStringsareinlowercase).(EASY)SampleInput1:arr={"sun","earth","mars","mercury"}SampleOutput1:arr={"earth","mars","mercury",


#include<iostream>
#include<string>
using namespace std;
void merge(string arr[],int si,int mid,int ei){
   int n1=mid-si+ 1;
   int n2=ei-mid;

   string left[n1];
   string right[n2];

   for (int i = 0; i < n1; i++)
   {
      left[i]=arr[si+i];
   }
   for (int i = 0; i <n2; i++)
   {
      right[i]=arr[mid+ 1+ i];
   }
   int i=0,j=0,k=si;
   while (i<n1 && j<n2)
   {
      if (left[i]<=right[j])
      {
        arr[k++]=left[i++];
      }else{
         arr[k++]=right[j++];
      }
   }
   while (i<n1)
   {
      arr[k++]=left[i++];
   }
   while (j<n2)
   {
     arr[k++]=right[j++];
   }
}
void mergeSort(string arr[],int si,int ei){
   if (si>=ei)
   {
      return;
   }
   int mid=si+ (ei-si)/2;
   mergeSort(arr,si,mid);
   mergeSort(arr,mid+1,ei);
   merge(arr,si,mid,ei);
}
int main (){
   string arr[]={"sun","earth","mars","mercury"};
   int n=4;
   mergeSort(arr,0,n-1);
   cout<<"sorted Array:";
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
Since this is in the Divide & Conquer section, we can find the majority element using a Divide & Conquer approach.

Idea
Divide the array into two halves.
Find the majority element in the left half.
Find the majority element in the right half.
If both are the same, return it.
Otherwise, count their occurrences in the current range and return the one with the higher count.
   
#include<iostream>
using namespace std;
int countIntRange(int arr[],int num,int si,int ei){
   int count=0;
   for (int i = si; i < ei; i++)
   {
      if (arr[i]==num)
      {
         count++;
      }  
   }
   return count;
   
}
int majorityElement(int arr[],int si,int ei){
   if (si==ei)
   {
      return arr[si];
   }
   int mid=si+(ei-si)/2;
   int leftMajor=majorityElement(arr,si,mid);
   int rightMajor=majorityElement(arr,mid+1,ei);
   return(leftMajor>rightMajor)?leftMajor:rightMajor;
}
int main (){
   int nums[]={3,2,3};
   int n=sizeof(nums)/sizeof(nums[0]);
   cout<<"Majority Element:"<<majorityElement(nums,0,n-1)<<endl;
   return 0;
}
#include <iostream>
using namespace std;

int merge(int arr[], int si, int mid, int ei) {
    int n1 = mid - si + 1;
    int n2 = ei - mid;

    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++) {
        left[i] = arr[si + i];
    }

    for (int i = 0; i < n2; i++) {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = si;
    int invCount = 0;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];

            // Count inversions
            invCount += (n1 - i);
        }
    }

    while (i < n1) {
        arr[k++] = left[i++];
    }

    while (j < n2) {
        arr[k++] = right[j++];
    }

    return invCount;
}

int mergeSort(int arr[], int si, int ei) {
    int invCount = 0;

    if (si < ei) {
        int mid = si + (ei - si) / 2;

        invCount += mergeSort(arr, si, mid);
        invCount += mergeSort(arr, mid + 1, ei);

        invCount += merge(arr, si, mid, ei);
    }

    return invCount;
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int inversions = mergeSort(arr, 0, n - 1);

    cout << "Inversion Count = " << inversions << endl;

    return 0;
}
    Quick Interview Tips
Single loop → O(n)
Nested loop → O(n²)
Loop halving input → O(log n)
Divide & Conquer → O(n log n)
Recursion depth = n → O(n) space
Arrays → O(1) access
Hash Tables → Average O(1) search/insert
Binary Search → O(log n)
Merge Sort → O(n log n)
Quick Sort → Average O(n log n), Worst O(n²)

| Complexity | Name         | Example                          |
| ---------- | ------------ | -------------------------------- |
| O(1)       | Constant     | Access array element             |
| O(log n)   | Logarithmic  | Binary Search                    |
| O(n)       | Linear       | Traversing array                 |
| O(n log n) | Linearithmic | Merge Sort                       |
| O(n²)      | Quadratic    | Nested loops                     |
| O(n³)      | Cubic        | Matrix multiplication (basic)    |
| O(2ⁿ)      | Exponential  | Recursive Fibonacci              |
| O(n!)      | Factorial    | Traveling Salesman (brute force) |

Time Complexity and Space Complexity (Detailed Explanation)

When analyzing an algorithm, we mainly measure:

Time Complexity → How the running time grows as input size increases.
Space Complexity → How the memory usage grows as input size increases.

The input size is usually represented by n.

1. Time Complexity

Time complexity measures the number of operations an algorithm performs relative to input size.

Instead of exact execution time (which depends on CPU, compiler, etc.), we use Big-O

Order Complexity Analysis

Time Complexity
->NOT actual time taken
->Amount of time taken up by an algorithms as a function of input  size(n).

Constat Time Complexity->o(1)
n-->
ops-->constant
1:2:3:4:5:
sorted array      n=100  ops=1
                  n=1000  ops=1
smallest array 
y  
 ^
 :
 :
 :
1:..................o(n)time compleity
 :.................>x 

int smallest(arr[],int n){
ans=arr[0]-->(1)
const<<ans-->(2)
return ans->(3)
}
->if operation constant it mean time complexity const
->
Big o Notation
Upper Bound-->worsttime complesity

->Linear Search
->Binary Search
->Jump Search
->Interpolation Search
->Exponential Search
->Ternary Search
->Search in Rotated Sorted Array
Example
Array = [10, 20, 30, 40, 50]

Target = 40

10 ❌
20 ❌
30 ❌
40 ✅

Algorithm
Start from index 0.
Compare each element with the target.
If found, return the index.
If the end of the array is reached, return -1.

#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
   for (int i = 0; i < n; i++)
   {
      if (arr[i]==key)
      {
        return i;
      }
      return -1;
   } 
}
int main (){
   int arr[]={10,20,30,40,50};
   int n=sizeof(arr)/sizeof(arr[0]);

   int key=40;
   int index=linearSearch(arr,n,key);
   if (index==-1)
   {
      cout<<"Element not found";
   }
   else{
      cout<<"Element found at index"<<index;
      return 0;
   }
}| Case    | Time |
| ------- | ---- |
| Best    | O(1) |
| Average | O(n) |
| Worst   | O(n) |

Complexity
case                          Time
Best                           o(1)
Averge                         o(n)
Worst                          o(n)
10 20 30 40 50 60 70

Target = 50

Middle = 40

50 > 40

Search Right Half

Middle = 60

50 < 60

Search Left Half

Found 50
Space Complexity
O(1)

#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
   int start=0;
   int end=n-1;
   while (start<=end)
   {
      int mid=start +(end-start)/2;
      if (arr[mid]==key)
      {
         return mid;
      }
      else if (arr[mid]<key)
      {
         start=mid +1;
      }else{
         end=mid-1;
      }
   }
return -1;
}
int main()
{
    int arr[] = {10,20,30,40,50,60,70};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<binarySearch(arr,n,50);

    return 0;
}
    
   #include<iostream>
   using namespace std;
   int binarySearch(int arr[],int start,int end,int key){
      if (start>end)
      
         return -1;
      
      int mid=start + (end-start)/2;

      if (arr[mid]==key)
      
         return mid;
      
      if (arr[mid]>key)
      return binarySearch(arr,start,mid-1,key);
      return binarySearch(arr,mid + 1,end,key);
   
   }
   int main ()
   {
      int arr[]={10,20,30,40,50,60};
      cout<<binarySearch(arr,0,5,40);
      return 0;
   }
   | Case    | Time     |
| ------- | -------- |
| Best    | O(1)     |
| Average | O(log n) |
| Worst   | O(log n) |10 20 30 40 50 60 70 80 90

Jump Size = √9 = 3

10

40

70

Now perform Linear Search

Found

Jump Search

#include <iostream>
#include <cmath>
using namespace std;

int jumpSearch(int arr[], int n, int key)
{
    int step = sqrt(n);
    int prev = 0;

    while(arr[min(step,n)-1] < key)
    {
        prev = step;
        step += sqrt(n);

        if(prev >= n)
            return -1;
    }

    while(arr[prev] < key)
    {
        prev++;

        if(prev == min(step,n))
            return -1;
    }

    if(arr[prev] == key)
        return prev;

    return -1;
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};

    cout<<jumpSearch(arr,9,70);
}
Complexity
Best
O(1)
Average
O(√n)
Worst
O(√n)
Space
O(1)
            Big O Notation
Calculating Big O from functions
TC->3n^2+5n+6    (1)ignore constant
       :         (2)remove smaller terms
   n^2+n+1    n->10^5
              n->10^10
              n->10^5
              1->1

              f(n)
 lim      ..........<infinity
 n->infinity  g(n)
Other Notation
.Big Omega
Lower Bound(best case TC)
.Big Theta
Averge Bound(avg case TC)
   
LB=UB
o(n)=o(n)
Space Complexity
Amount of extra space occupied by an algorithms as a function of input size(n)

Space Complexity is the total amount of memory an algorithm requires to execute as the input size (n) increases.

It includes:

Input Space – Memory required to store the input.
Auxiliary Space – Extra memory used by the algorithm (temporary variables, recursion stack, arrays, etc.).

In DSA, we usually focus on Auxiliary Space.

Formula
Space Complexity=Input Space+Auxiliary Space
Types of Space Complexity
1. O(1) – Constant Space

The algorithm uses a fixed amount of extra memory, regardless of the input size.
  y
  ^        / space comlexity o(n)
  :       /
  :......: 
  :...:  :
  :...:..:......>x
Common time Complexities
:.........>o(2^n)
:>........>o(n^2)
:..........>qo(n)
:.........>o(log n)
:..........>o(1)




                                ops
                                    :
                                    :
                                    :
                                    :........o(1)
                                    :..........>
                                               n
                                 linear graph is stright

o(1)/Constant
int arr[5]={11,2,3,4,5};
cout<<"apnacollege";

o(n)/Linear
int arr[5]={1,2,3,4,5};
int n=5;
for(int i=0;i<n;i++){
cout<<arr[i];
}

i=0     k ops
i=1     k ops  (k*n)
i=2     k ops
:
:
i=n-1   TC=o(k*n)

O(n^2)Quadratic
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
  /some constant work
 }
}

 i=0  j=1 to n-1=(n-1)*k
 i=0  j=2 to n-1=(n-2)*k
 i=0  j=3 to n-1=(n-3)*k
 :    : 
 :  j=(n-1)    1*k
 i=n-1
(n-1)k+(n-2)K+(n-3)K+.....2k+1k+0
k[(n-1)+(n-2)+(n-3)----2+1]

 k((n*(n-1))/2)
 Time complxity o(n^2)

Nested Loops
for(int i=0;i<n;i++){
  for(int j=0;j<i;j++){
   Constant work
  }
}
  total ops 
   i=0  0   1k+2k+3k+.....(n-2)*K
   i=1 i*k   k(1+2+3+4.....(n-2))
   i=2 2*k      
   i=3 3*k       
    :   :....(n-2)*
    :
   i=n-1
          k*(((n-1)*(n-2))/2)

Nested Loops
Practice QS.3

for some k<n
                          n=50
  for(int i=0;i<n;i+k){     :.:..:..:.:.....:.
    for(int j=0;j<=k;j++){  0 5 10 15 20....49
     / constant work     
    }                i=0 ..>  k*P
                     i=5..>   k*p
                     i=10..>  K*P
                     i=15
                      :
                      :
                      :
                     i=45...> k*P
  }
(K*p)*n/k = o(n)
Nested Loops
bble Sort Analysis

void bubbleSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
     for(intj=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
         swap(arr[j],arr[j+1])
      }
    }    [(n-1)k+(n-2)k+(n-3)k+...2k+1k]
  }     k[(n-1)+(n-2)+(n-3)....2+1]
       :
       :
}      ((n-1)*n/2)*k

What ismlog?
 A logrithmis the innverse operation to exponentiation .for a given number x,the logrithms log(x) is the power to which the base b must be raised to obtain x

 log base b(x)=y
 b^y=x

 for eample:
 log base 2(8)=3
 becouse 2^3=8

 Basic Property of Log
 1.Product Rule:
 log base b(xy)=log base b(x)+ log base b(y)

 Binary Search =>log base 2 n=k
  TC=> o(logn)

  n    linear ops     Log/ops(logn) 
  1000  10^3           ~10
  10^5  10^5           ~20
  10^9  10^9           ~30
     Linearsearch     Binary search
Recursion Time Complexity

total work done=recuesive call*work in each call// approach1
Recurrence Relation //approach 2

max Depth of recusion tree * memory in each call//space complexity

Sum of n numbers       
n=0 (BC)               : n=0 :
   int sum(int n){     : n=1 :
   if(n==0){           : n=2 :
    return 0;          : n=3 :
    }                  : n=4 :
    return n+sum(n-1); .......
   }                     Stack

           f(4) main TC o(n)
           :
           f(3)+4   TC(n)=k
           :
           f(2)+3
           :
           f(1)+2
           :
           f(0)+1
factorial of n    f(5)=120
f(n)   
:
f(n-1)*n
:
f(n-2)*(n-1)
:
f(n-3)*(n-2)
:
f(0)BC


TC=maxdepth*timein each call
f(n)=f(n-1)*n;

Nth fibonacci    int fib(int n){
                    if(n==0 ||n==1){
                     return n;}
                     return fib(n-1)+fib(n-2);
}

     f(5).....f(3)..f(1) sc=max.depth*max in each 
     /        /                           call
         f(2) ..f(1)       sc=o(nk)
   f(4)   /f(1)              sc=o(n)
     / \
   f(3) f(2)..f(0)  TC=total call*work in each call
          :             =2^n *k    (2*2*2*..n time)
          f(1)       TC=O(2^n)exponential time
   /  \                      very bad complexity
 f(2)  f(1)
  / \
f(1) f(0)

Master theorms
T(n)=T(n-1)+T(n-2)+k
T(n-1)=T(n-2)+T(n-3)+k
T(n-2)=T(n-3)+T(n-4)+k
 :       :      :    :
 :       :      :    :
T(2)=   T(1) + T(0)+ K

Master Theorem (Divide and Conquer) – Detailed Explanation

The Master Theorem is a mathematical formula used to find the time complexity of recursive algorithms, especially Divide and Conquer algorithms.

It helps solve recurrence relations of the form:

T(n)=aT(
b
n
	​

)+f(n)

Instead of expanding the recursion tree every time, we can directly determine the Big-O complexity.

General Form
T(n)=aT(
b
n
	​

)+f(n)

Where:

T(n) = Time taken to solve a problem of size n
a = Number of recursive calls
b = Factor by which the problem size is divided
f(n) = Work done outside the recursive calls (splitting, merging, comparisons, etc.)
Meaning of Each Term
1. a (Number of Recursive Calls)

This tells how many subproblems are created.

Example:

T(n)=2T(n/2)+n

Here,

a = 2

because two recursive calls are made.

Example:

mergeSort(left);
mergeSort(right);

Two recursive calls → a = 2

2. b (Division Factor)

This tells into how many parts the input is divided.

Example:

T(n)=2T(n/2)+n

Problem size becomes

n/2

Therefore,

b = 2
3. f(n)

This is the work done after recursive calls.

Example:

Merge Sort

merge(left,right);

Merging takes

O(n)

So

f(n)=n
Important Value

Always calculate

n
log
b
	​

a

This value is compared with f(n).

Three Cases of Master Theorem
Case 1

When

f(n)=O(n
log
b
	​

a−ϵ
)

for some ε > 0.

Meaning:

The recursive work is larger than the outside work.

Then

T(n)=Θ(n
log
b
	​

a
)
Steps

Example

T(n)=4T(n/2)+n
Step 1
a = 4
b = 2
f(n)=n
Step 2

Calculate

log
2
	​

4=2

Therefore

n
log
2
	​

4
=n
2
Step 3

Compare

f(n)=n

with

n²

Clearly,

n < n²

This is Case 1.

Answer:

T(n)=Θ(n
2
)
Example
T(n)=9T(n/3)+n

Here

a=9
b=3

Calculate

log
3
	​

9=2

Compare

n

with

n²

Case 1

Answer

Θ(n²)
Case 2

When

f(n)=Θ(n
log
b
	​

a
log
k
n)

where k ≥ 0.

Then

T(n)=Θ(n
log
b
	​

a
log
k+1
n)

If k = 0, then:

T(n)=Θ(n
log
b
	​

a
logn)
Example 1

Merge Sort

T(n)=2T(n/2)+n

Step 1

a=2
b=2

Calculate

log
2
	​

2=1

Thus

n^1=n

Now

f(n)=n

Both are equal.

Hence Case 2.

Answer

T(n)=Θ(nlogn)
Example 2
T(n)=4T(n/2)+n
2

Calculate

log
2
	​

4=2

Then

n²=n²

Equal

Case 2

Answer

Θ(n² log n)
Case 3

When

f(n)=Ω(n
log
b
	​

a+ϵ
)

and

af(n/b)≤cf(n)

for some constant

c<1

Then

T(n)=Θ(f(n))
Example
T(n)=2T(n/2)+n
2

Step 1

a=2
b=2

Calculate

log
2
	​

2=1

Thus

n¹=n

Compare

n²

with

n

Since

n² > n

Case 3

Answer

Θ(n²)
Another Example
T(n)=3T(n/2)+n
2

Calculate

log
2
	​

3≈1.58

Compare

n²

with

n^1.58

Since

n²

is larger

Case 3

Answer

Θ(n²)
Complete Summary Table
Case	Condition	Time Complexity
Case 1	f(n) is smaller than n
log
b
	​

a
	Θ(n
log
b
	​

a
)
Case 2	f(n)=Θ(n
log
b
	​

a
log
k
n)	Θ(n
log
b
	​

a
log
k+1
n)
Case 3	f(n) is larger than n
log
b
	​

a
 (and regularity condition holds)	Θ(f(n))
How to Solve Any Master Theorem Problem

Write the recurrence:

T(n)=aT(n/b)+f(n)
Identify:
a
b
f(n)

Compute:

n
log
b
	​

a
Compare f(n) with n
log
b
	​

a
.
Determine whether it is Case 1, Case 2, or Case 3.
Apply the corresponding formula to obtain the time complexity.
Examples at a Glance
Recurrence	Case	Complexity
T(n)=2T(n/2)+n	Case 2	Θ(nlogn)
T(n)=4T(n/2)+n	Case 1	Θ(n
2
)
T(n)=2T(n/2)+n
2
	Case 3	Θ(n
2
)
T(n)=8T(n/2)+n
2
	Case 1	Θ(n
3
)
T(n)=9T(n/3)+n	Case 1	Θ(n
2
)
T(n)=4T(n/2)+n
2
	Case 2	Θ(n
2
logn)
T(n)=3T(n/2)+n
2
	Case 3	Θ(n
2
)
Limitations

The Master Theorem applies only to recurrences that fit the form T(n)=aT(n/b)+f(n), where a≥1 and b>1 are constants. It does not directly apply to recurrences such as:

T(n)=T(n−1)+n
T(n)=T(
n
	​

)+logn
T(n)=T(n/2)+T(n/3)+n

For these, other techniques like substitution, recursion trees, or the Akra–Bazzi theorem are typically used.

Merge Sort 
    void mergeSort(int arr[],int si,int ei){
    if(si>=ei){
      return;
     }
      int mid=si+(ei-si)/2;
      mergeSort(arr,si,mid);
      mergeSort(arr,mid+1,ei);
      merge(arr,si,mid,ei);
    }
              f(n) ...............n/2^0
              /    \
            f(n/2)  f(n/2).........n/2^1
            /   \    /    \
     f(n/4) f(n/4)  f(n/4) f(n/4)..n/2^2
      : 
      :                   x=logn
      f(1)

 mergesort total TC=O(n)

TC=Total call*time in each o(n)
SC= max.depth*max in each call o(n)

f(n)=f(n/2)+f(n/2)+(n+k)

void(int arr[],int si,int mid,int ei){
  vector<int> temp;   TC=O(1)
  int i=si,j=mid+1;
  
  while(i<=mid && j<=ei){ 
  if(arr[i]<=arr[j]){
   temp.push_back(arr[i++]);
  }else{
  temp.push_back(arr[j++]);
   }                              TC=O(n)
  }
  while(i<=mid){
    temp.push_back(arr[i++]);
  }
    while(j<=ei){
    temp.push_back(arr[j++])
    }
    / copy back to original
    for(int idx=si,x=0;idx<=ei;idx++){
      arr[idx]=temp[x++];
    }
}
Merge Function:Time complexity
TC=O(1)+O(n)+O(n)
= O(2n)
 TC=O(n)
  SC=O(n)

Recurrence Relation
T(n)=2*T(n/2)+nk
2*T(n/2)=4*2*(n/4)+2*n/2*k
4*t(n/4)=8*2*T(n/8)+4*n/4*k
 :          :
 :          :
 :          :
 T(1)=O(1)
  :
  These term cancel onlu one term remender in left
  T(n)and right O(1)
  T(1)=O(1)

  T(n)=O(1)+(n*k)*xlogn

  Power function
  Recurrence Relation

  int pow(int x,int n){  
   if(n==0){
     return 0;
   }
   int halfPow=pow(x,n/2);
   int halfPowSq=halfPow*halfPow*halfPow;

   if(n%2!=0){
   halfPowSq *=x;
   }
   return halfPowSq;
  }

f(x,n)
:               TC=O(logn)
f(x,n/2)        SC=O(logn)
:
f(x,n/4)
:
f(x,n/8)
:
f(x,1)
Q-> Which is better time complexity:O(2^n)orO(n!)?
O(2^n)is better time complexity comare to O(n!)

Q->Which is a better time complexity:
  O(2^n)or o(n^n)
o(2^n) is better time complexity

Qs:Sorted Array-> largest element
    (asending)

How to approach Qs
assume:10^8 operations in 1s

   1s=10^8 ops
   Qs->1s->10^8ops

   n>10^8   o(1)
   n<=10^8   o(n)
   n<=10^6   O(nlog n)
   n<=10^5   O(nlogn)
   n<=10^4   o(n^2)
   n<=500    o(n^3)
   n<=25     o(2^n)

(1)Trapping o(n)
n->2*10^4
o(n^2)->4*10^8>10^8(this ans not satisfied)

     Backtracking
Backtracking in C++ (with Code Example)
What is Backtracking?

Backtracking is an algorithmic technique used to solve problems by trying all possible solutions. If a choice does not lead to a valid solution, the algorithm undoes (backtracks) that choice and tries another one.

It follows the idea:

Choose an option.
Explore further recursively.
If the choice is wrong, undo it.
Try the next option.

This is often called the Choose → Explore → Unchoose technique.


#include<iostream>
using namespace std;

void binaryString(string ans,int n){
   //Base case
   if (ans.length()==n)
   {
     cout<<ans<<endl;
     return;
   }
   //choose 0
   binaryString(ans+"0",n);
   //choose 1
   binaryString(ans+"1",n);
}
int main (){
   int n=3;
   binaryString("",n);
   return 0;
}
   Types of Backtracing
Decision:yes/no
Optimization:Best/one
Enumeration:count total no/sum

Backtracking on Arrays


#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printArr(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
   cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void changeArr(int arr[],int n,int i){
   if(i==n){
   printArr(arr,n);
   return;
   }
   arr[i]=i+1;
   changeArr(arr,n,i+1);
   arr[i]-=2;
}
int main (){
   int arr[5]={0};
   int n=5;
   changeArr(arr,n,0);
   printArr(arr,n);
   return 0;
}
   Find Subsets

   Approach  abc
             /  \
            /    \
        "bc"[a]   [""]"bc".........
        /yes   \no                :
      "c"["ab"] "c" ["a"]     yes /      \no
        yes /  \no      / \         "c"["b"] [""]
         /      \      ["ac"] ["a"]     /\    /\
        ["abc"]    ["ab"]


f(string str,string subset){
   if(str.size()==0)
   cout<<subset<<endl;
   ch=str[o]

   f(str.subset(1,n-1),subset+ch)//yes
   f(str.substr(1,n-1),subset)//no
}
Original: "abc"
          ↑
        str[0] = 'a'

Next: "bc"
      ↑
    str[0] = 'b'

Next: "c"
     ↑
   str[0] = 'c'


#include<iostream>
#include<string>
using namespace std;

void printSubsets(string str, string subset)
{
    // Base Case
    if(str.size() == 0)
    {
        cout << subset << endl;
        return;
    }

    char ch = str[0];

    // Yes Choice
    printSubsets(str.substr(1,str.size()-1), subset + ch);

    // No Choice
    printSubsets(str.substr(1,str.size()-1), subset);
}

int main()
{
    string str = "abc";
    string subset = "";

    printSubsets(str, subset);

    return 0; 
}                       n char   "abc"-->3
                          :
                        2^n subsets TC=>o(2^n)
T(n)=2*T(n-1)+O(1)
                     SC=O(n)

                     Find permutations
Permutations means the different ways of arranging a set of objects where order matters.

For example, if you have the letters A, B, C:

Possible permutations are:

ABC
ACB
BAC
BCA
CAB
CBA

There are 6 permutations because each arrangement is different.

The formula for the number of permutations of n distinct objects is:
Find & print all permutations (arrangments)of a given string.
                "abc"
abc
acb
bac  6 permutaions=>n!
bca
cab
cba
Yes → Include the character.
No → Exclude the character.
                                            ""
                          (abc)
                         /      \
                    Yes a        No a
                     /             \
                 "a"(bc)          ""(bc)
                 /    \           /     \
            Yes b    No b    Yes b     No b
             / \      / \      / \      / \
      Yes c No c Yes c No c Yes c No c Yes c No c
        |     |    |     |    |     |    |     |
      "abc" "ab" "ac" "a" "bc" "b"  "c"  ""
abc
│
├── Choose 'a'
│   │
│   └── Remaining = "bc"
│       │
│       ├── Choose 'b'
│       │   │
│       │   └── Remaining = "c"
│       │       │
│       │       └── abc   ← Base Case
│       │
│       └── Choose 'c'
│           │
│           └── Remaining = "b"
│               │
│               └── acb   ← Base Case
│
├── Choose 'b'
│   │
│   └── Remaining = "ac"
│       │
│       ├── Choose 'a'
│       │   │
│       │   └── bac   ← Base Case
│       │
│       └── Choose 'c'
│           │
│           └── bca   ← Base Case
│
└── Choose 'c'
    │
    └── Remaining = "ab"
        │
        ├── Choose 'a'
        │   │
        │   └── cab   ← Base Case
        │
        └── Choose 'b'
            │
            └── cba   ← Base Case


#include <iostream>
#include <string>
using namespace std;

void permutaions(string str, string ans)
{
    int n = str.size();

    // Base Case
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        char ch = str[i];

        // Remove the current character
        string nextStr = str.substr(0, i) + str.substr(i + 1);

        // Recursive call
        permutaions(nextStr, ans + ch);
    }
}

int main()
{
    string str = "abc";
    string ans = "";

    permutaions(str, ans);

    return 0;
}
Time complexity=O(n!)
What does n == 0 mean?

Here,

int n = str.size();

n stores the length of the remaining string (str).

So,

if (n == 0)

means:

There are no characters left in str to arrange.

This is the base case of the recursion.

Why do we print ans?

During each recursive call:

One character is removed from str.
That character is added to ans.

Eventually, all characters have been picked.

Let's understand why i + 1 is used in this statement:

str.substr(i + 1)

Suppose we have:

string str = "ABCDE";

The indices are:

Character:  A   B   C   D   E
Index:      0   1   2   3   4

Assume:

i = 2;

So the character at index 2 is 'C'.

We want to remove 'C' from the string.

What happens if we write str.substr(i)?
str.substr(2)

Output:

CDE

This includes 'C', which we want to remove.

What happens if we write str.substr(i + 1)?
str.substr(3)

Output:

DE

Now it starts after 'C', so 'C' is skipped.

Complete example
string str = "ABCDE";
int i = 2;

string nextStr = str.substr(0, i) + str.substr(i + 1);
First part
str.substr(0, 2)

Output:

AB
Second part
str.substr(3)

Output:

DE
Join both
AB + DE = ABDE

The character 'C' has been removed.
Role of nextStr

nextStr stores the remaining characters after removing the selected character.

Example:

str = "ABC"
i = 1

Selected character:

ch = 'B'

Now,

nextStr = str.substr(0,1) + str.substr(2);

Output:

nextStr = "AC"

So the recursive call becomes:

permutations("AC", ans + 'B');

This means:

"Continue finding permutations using only the remaining characters (A and C)


#include<iostream>
#include<string>
using namespace std;

void permutations(string str,string ans)
{
   int n=str.size();
   if (n==0)
   {
      cout<<ans<<endl;
      return;
   }
   for (int i = 0; i <n; i++)
   {
      char ch=str[i];
      //Remove the current character
      string nextStr=str.substr(0,i)+str.substr(i+1);
      //is used in the permutation algorithms remove the the caracter at index i from the string
      permutations(nextStr,ans+ch);
   }

}
int main()
{
   string str="abc";
   string ans="";

   permutations(str,ans);
   return 0;
}
Q->place N queens on an N*N chessbord suzh that no 2 queens can attack each other  N=4

    Q->vertically attack
    ->horizantal attack
    ->digonally attack


#include <iostream>
using namespace std;

const int N = 4;

// Print the chessboard
void printBoard(char board[N][N])
{
    cout << "-----------------\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------------\n";
}

// Check if a queen can be placed safely
bool isSafe(char board[N][N], int row, int col)
{
    // Check same column
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')//if queen exist
            return false;
    }

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

// Backtracking function
bool solveNQueen(char board[N][N], int row)
{
    // Base Case
    if (row == N)
    {
        printBoard(board);
        return true;
    }                                

    for (int col = 0; col < N; col++)
    {
        if (isSafe(board, row, col))
        {
            // Place Queen
            board[row][col] = 'Q';

            // Recursive Call
            if (solveNQueen(board, row + 1))
                return true;

            // Backtracking
            board[row][col] = '.';
        }
    }

    return false;
}

int main()
{
    char board[N][N];

    // Initialize board
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = '.';
        }
    }

    if (!solveNQueen(board, 0))
    {
        cout << "No Solution Exists";
    }

    return 0;
}
               Pointer(practice section-16)
Pointer is a var that hold the address of another var

  : int a=20;:
  : int b=40;:
  : int*x=a; :
  ............
difference between Adress and pointer
   Adress                        pointer
   Adrress is location     var that store adress
   of storage
Pass by value   pass by refrence
void func(int a){    void func(int &a){
 a=40;                  a=40;
}                     }
 int main(){          int main (){
 int a=5;             int a=5;
 func(a);             func(a);
 count<<a;            cout<<a;
}                     }
 ouput=5             output= 40

 what will be the output of the following code:
 int x;
 int *ptr;
 x=7;
 ptr=&x;
 cout<<*ptr;
 output=7

 void multipleBy(int &a,int &b,int &c){
   a*=2;
   b*=2;
   c*=2;
 }
   int main(){
   int x=1,y=2,z=3;
   multipleBy2(x,y,z);
   cout<<x<<y<<"\n";
   return 0;
   }
output=246

Q->rwhat will be the output of the following code:
int a=32;
int *ptr=&a;

char ch='A';
char +=a;
*ptr +=ch;
cout<<a<<","<<ch<<endl;

    
#include<iostream>
using namespace std;

int main() {
    int a = 32;
    int *ptr = &a;

    char ch = 'A';   // ASCII value = 65

    ch += a;         // ch = 65 + 32 = 97 ('a')
    *ptr += ch;      // a = 32 + 97 = 129

    cout << a << "," << ch << endl;

    return 0;
}
    Dagling pointer
=>A pointer that points to memory location that does not exist

    
   #include<iostream>
   using namespace std;
   int main (){
      int *ptr=new int(10);
      delete ptr;
      ptr=NULL;
      cout<<*ptr;//Now pointer is a dangling pointer
      return 0;
   }
   //after deleating the memory
   
     #include<iostream>
   using namespace std;
   int *get(){
      int x=10;
      return &x;
   }
   int main (){
      int *ptr=get();
      return 0;
   }
      Find numberof ways to reach from(0,0)to (N-1,M-1)in a NXM Grid.
      Allowed moves-right or down

      Step 2: Recursion Tree

For a 3 × 3 grid:

                 (0,0)
              /          \
          (0,1)         (1,0)
         /    \         /    \
     (0,2) (1,1)    (1,1)  (2,0)
       |     / \      / \      |
     ...   ... ...  ... ...   ...

Notice that (1,1) appears twice.

That means the program solves the same problem repeatedly.

For larger grids, this repetition becomes much worse.

Example (3 × 3)
Depth = 4

Number of calls ≈ 2^4 = 16

Step 3: Number of Calls

Suppose

Rows = n
Columns = m

Maximum path length:

(n − 1) + (m − 1)
= n + m − 2

At each level, there can be up to 2 recursive calls.

So the recursion tree has approximately

2^(n+m-2)

nodes.

Ignoring constants,

Time Complexity = O(2^(n+m))
      
     #include<iostream>
     #include<string>
     using namespace std;
     int gridWays(int r,int c,int n,int m){
         //Destination reached
         if (r==n-1 && c==m-1)
         {
            return 1;
         }
         //Out of bounds
         if (r>=n ||c>=m)
         {
            return 0;
         }
         //Move Right
         int val1=gridWays(r,c+1,n,m);
         //Move down
         int val2=gridWays(r+1,c,n,m);
         return val1+val2;
       }
       int main(){
         int n=3;
         int m=3;
         cout<<gridWays(0,0,n,m);
         return 0;
       }

The grid Ways problem can not be solved in linear time o(n+m)in the general case becouse there are nXm different cells.Any algorithms that compute the number of ways for every cell must,in the worst case process of them

Time complexity:o(nxm)
Space Complexity:(nxm)


#include<iostream>
#include<vector>
using namespace std;
int gridWays(int r,int c,int n,int m,vector<vector<int>>&dp){
   if (r==n-1 && c==m-1)
   {
      return 1;
   }
   if (r>=n||c>m)
   {
      return 0;
   }
   if (dp[r][c]!=-1)
   {
     return dp[r][c];
   }
   int right=gridWays(r,c+1,n,m,dp);
   int down=gridWays(r+1,c,n,m,dp);
   return dp[r][c]=right+down;

}
int main (){
  int n=3,m=3;
  vector<vector<int>>dp(n,vector<int>(m,-1));
  cout<<gridWays(0,0,n,m,dp);
  return 0;
}

Grid ways problem using Space optimized Dynamic Programming
  
#include<iostream>
#include<vector>
using namespace std;
//Function to find the number of ways
int gridWays(int n,int m){
   //Create a !D DP array
   //Initially,the first row has only one way to  reach each cell.
   vector<int>dp(m,1);
   //TRaverse row by row
   for (int i = 1; i< n; i++)
   { 
      for(int j=1;j<m;j++){
     //ways to reach current cell
     //ways from top + Ways from left
     dp[j]=dp[j] + dp[j-1];
   }
 }
 return dp[m-1];
}
int main (){
   int n,m;
   cout<<"Enter number of rows:";
   cin>>n;
   cout<<"enter number of columns:";
   cin>>m;
   int ans=gridWays(n,m);
   cout<<"Number of Grid ways="<<ans<<endl;
   return 0;
}

Sudoku Solver
Approach


#include <iostream>
using namespace std;

const int N = 9;

// Function to print Sudoku
void printBoard(int board[N][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Check if number already exists in row
bool isRowSafe(int board[N][N], int row, int num)
{
    for(int col = 0; col < N; col++)
    {
        if(board[row][col] == num)
            return false;
    }
    return true;
}

// Check if number already exists in column
bool isColSafe(int board[N][N], int col, int num)
{
    for(int row = 0; row < N; row++)
    {
        if(board[row][col] == num)
            return false;
    }
    return true;
}

// Check 3x3 subgrid
bool isBoxSafe(int board[N][N], int startRow, int startCol, int num)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[startRow + i][startCol + j] == num)
                return false;
        }
    }
    return true;
}

// Check whether placing num is safe
bool isSafe(int board[N][N], int row, int col, int num)
{
    return isRowSafe(board, row, num) &&
           isColSafe(board, col, num) &&
           isBoxSafe(board, row - row % 3, col - col % 3, num);
}

// Solve Sudoku using Backtracking
bool solveSudoku(int board[N][N])
{
    int row = -1;
    int col = -1;
    bool empty = false;

    // Find an empty cell
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(board[i][j] == 0)
            {
                row = i;
                col = j;
                empty = true;
                break;
            }
        }
        if(empty)
            break;
    }

    // No empty cell means Sudoku solved
    if(!empty)
        return true;

    // Try numbers 1 to 9
    for(int num = 1; num <= 9; num++)
    {
        if(isSafe(board, row, col, num))
        {
            board[row][col] = num;

            if(solveSudoku(board))
                return true;

            // Backtrack
            board[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    int board[N][N] =
    {
        {3,0,6,5,0,8,4,0,0},
        {5,2,0,0,0,0,0,0,0},
        {0,8,7,0,0,0,0,3,1},
        {0,0,3,0,1,0,0,8,0},
        {9,0,0,8,6,3,0,0,5},
        {0,5,0,0,9,0,6,0,0},
        {1,3,0,0,0,0,2,5,0},
        {0,0,0,0,0,0,0,7,4},
        {0,0,5,2,0,6,3,0,0}
    };

    cout << "Original Sudoku:\n\n";
    printBoard(board);

    cout << "\nSolved Sudoku:\n\n";

    if(solveSudoku(board))
    {
        printBoard(board);
    }
    else
    {
        cout << "No solution exists.";
    }

    return 0;
}



#include <iostream>
using namespace std;

void printSudoku(int sudoku[][9])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Check whether digit can be placed
bool isSafe(int sudoku[9][9], int row, int col, int digit)
{
    // Column check
    for(int i=0;i<9;i++)
    {
        if(sudoku[i][col]==digit)
            return false;
    }

    // Row check
    for(int j=0;j<9;j++)
    {
        if(sudoku[row][j]==digit)
            return false;
    }

    // 3x3 Box check
    int startRow = row - row%3;
    int startCol = col - col%3;

    for(int i=startRow;i<startRow+3;i++)
    {
        for(int j=startCol;j<startCol+3;j++)
        {
            if(sudoku[i][j]==digit)
                return false;
        }
    }

    return true;
}

// Backtracking function
bool sudokuSolver(int sudoku[9][9], int row, int col)
{
    // Base Case
    if(row==9)
    {
        printSudoku(sudoku);
        return true;
    }

    int nextRow=row;
    int nextCol=col+1;

    if(col==8)
    {
        nextRow=row+1;
        nextCol=0;
    }

    // Skip filled cells
    if(sudoku[row][col]!=0)
    {
        return sudokuSolver(sudoku,nextRow,nextCol);
    }

    // Try digits 1-9
    for(int digit=1;digit<=9;digit++)
    {
        if(isSafe(sudoku,row,col,digit))
        {
            sudoku[row][col]=digit;

            if(sudokuSolver(sudoku,nextRow,nextCol))
                return true;

            // Backtracking
            sudoku[row][col]=0;
        }
    }

    return false;
}

int main()
{
    int sudoku[9][9]=
    {
        {3,0,6,5,0,8,4,0,0},
        {5,2,0,0,0,0,0,0,0},
        {0,8,7,0,0,0,0,3,1},
        {0,0,3,0,1,0,0,8,0},
        {9,0,0,8,6,3,0,0,5},
        {0,5,0,0,9,0,6,0,0},
        {1,3,0,0,0,0,2,5,0},
        {0,0,0,0,0,0,0,7,4},
        {0,0,5,2,0,6,3,0,0}
    };

    if(!sudokuSolver(sudoku,0,0))
    {
        cout<<"No Solution Exists!";
    }

    return 0;
}
*/



/*
3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without duplicate characters.
Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.


#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastIndex;

    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < s.length(); right++) {

        // If character already exists in current window
        if (lastIndex.find(s[right]) != lastIndex.end() &&
            lastIndex[s[right]] >= left) {

            left = lastIndex[s[right]] + 1;
        }

        // Update last occurrence
        lastIndex[s[right]] = right;

        // Update answer
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s = "abcabcbb";

    cout << "Length = " << lengthOfLongestSubstring(s);

    return 0;
}

#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int findLengthOfSubstring(string s){
   unordered_map<char,int>lastIndex;

   int left=0;
   int maxLen=0;
for (int right = 0; right < s.length(); right++)
{
   if (lastIndex.find(s[right])!=lastIndex.end() && lastIndex[s[right]]>=left)
   {
      left=lastIndex[s[right]]+1;
   }
   //Update last occurance
   lastIndex[s[right]]=right;
   //Update answer
   maxLen=max(maxLen,right-left+1);
}
 return maxLen;
}
int main (){
   string s="pwwkew";
   cout<<"Length="<<findLengthOfSubstring(s);
   return 0;
}
   1695. Maximum Erasure Value

You are given an array of positive integers nums and want to erase a subarray containing unique elements. The score you get by erasing the subarray is equal to the sum of its elements.

Return the maximum score you can get by erasing exactly one subarray.

An array b is called to be a subarray of a if it forms a contiguous subsequence of a, that is, if it is equal to a[l],a[l+1],...,a[r] for some (l,r).

nums = [4,2,4,5,6]

Window = [4]       sum = 4   ans = 4
Window = [4,2]     sum = 6   ans = 6

Next = 4 (duplicate)

Remove 4
Window = [2]       sum = 2

Add 4
Window = [2,4]     sum = 6

Add 5
Window = [2,4,5]   sum = 11

Add 6
Window = [2,4,5,6] sum = 17

Answer = 17


#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int maximumUniqueSubarray(vector<int>& nums) {
    unordered_set<int> st;

    int left = 0;
    int currSum = 0;
    int maxSum = 0;

    for (int right = 0; right < nums.size(); right++) {

        while (st.count(nums[right])) {
            st.erase(nums[left]);
            currSum -= nums[left];
            left++;
        }

        st.insert(nums[right]);
        currSum += nums[right];

        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {4,2,4,5,6};

    cout << maximumUniqueSubarray(nums);

    return 0;
}
    
   #include<iostream>
   #include<unordered_set>
   #include<vector>
   using namespace std;
   int maximumUniqueSubarray(vector<int>& nums){
        unordered_set<int>st;

        int left=0;
        int currSum=0;
        int maxSum=0;
      for (int right = 0; right < nums.size(); right++)
      {
         while (st.count(nums[right]))
         {
            st.erase(nums[left]);
            currSum-=nums[left];
            left++;
         }
         maxSum=max(maxSum,currSum);
      }
      return maxSum;
   }
   using namespace std;
   int main (){
      vector<int>nums={5,2,1,2,5,2,1,2,5};
      cout<<maximumUniqueSubarray(nums);
      return 0;
   }

. Minimum Consecutive Cards to Pick Up

You are given an integer array cards where cards[i] represents the value of the ith card. A pair of cards are matching if the cards have the same value.

Return the minimum number of consecutive cards you have to pick up to have a pair of matching cards among the picked cards. If it is impossible to have matching cards, return -1.

Example 1:

Input: cards = [3,4,2,3,4,7]
Output: 4
Explanation: We can pick up the cards [3,4,2,3] which contain a matching pair of cards with value 3. Note that picking up the cards [4,2,3,4] is also optimal.


#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int minimumCardPickup(vector<int>& cards) {
    unordered_map<int, int> lastIndex;
    int ans = INT_MAX;

    for (int i = 0; i < cards.size(); i++) {

        if (lastIndex.find(cards[i]) != lastIndex.end()) {
            ans = min(ans, i - lastIndex[cards[i]] + 1);
        }

        lastIndex[cards[i]] = i;
    }

    if (ans == INT_MAX)
        return -1;

    return ans;
}

int main() {
    vector<int> cards = {3, 4, 2, 3, 4, 7};

    cout << minimumCardPickup(cards);

    return 0;
}
    2401. Longest Nice Subarray
Medium
Topics
premium lock icon
Companies
Hint
You are given an array nums consisting of positive integers.

We call a subarray of nums nice if the bitwise AND of every pair of elements that are in different positions in the subarray is equal to 0.

Return the length of the longest nice subarray.

A subarray is a contiguous part of an array.

Note that subarrays of length 1 are always considered nice.

Example 1:
Input: nums = [1,3,8,48,10]
#include <iostream>
using namespace std;

int clearBitsInRange(int num, int i, int j) {
    int left = (~0) << (j + 1);
    int right = (1 << i) - 1;

    int mask = left | right;

    return num & mask;
}

int main() {
    int num = 15;
    int i = 1;
    int j = 3;

    cout << clearBitsInRange(num, i, j);

    return 0;
}
    
#include <iostream>
using namespace std;

int clearBitsInRange(int num, int i, int j) {
    int left = (~0) << (j + 1);
    int right = (1 << i) - 1;

    int mask = left | right;

    return num & mask;
}

int main() {
    int num = 15;
    int i = 1;
    int j = 3;

    cout << clearBitsInRange(num, i, j);

    return 0;
}
    Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]

Output: 1
Approach (Bit Manipulation using XOR)

The XOR (^) operator has these properties:

a ^ a = 0 (same numbers cancel each other)
a ^ 0 = a
XOR is commutative and associative.

Since every number appears twice except one, XORing all the elements leaves only the unique number.

Example
nums = [2, 2, 1]

result = 0

result = 0 ^ 2 = 2
result = 2 ^ 2 = 0
result = 0 ^ 1 = 1

Answer =

#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>&nums){
   int ans=0;
   for (int num:nums)
   {
      ans^=num;
   }
   return ans;
}
int main(){
   vector<int>nums={2,2,1};
   cout<<"Single Number="<<singleNumber(nums);
   return 0;
}
   Complexity
Time Complexity: O(n) (one traversal of the array)
Space Complexity: O(1) (only one variable is used)

29. Divide Two Integers

Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor
This is LeetCode 29: Divide Two Integers.

Since you cannot use *, /, or %, the efficient approach is Bit Manipulation + Repeated Subtraction using Left Shift.

Approach

Instead of subtracting the divisor one by one (which is O(n)), we repeatedly subtract the largest power-of-two multiple of the divisor.

We use:

divisor << k

which is equivalent to:

divisor × 2^k

(using only bit shifting).

Algorithm
Handle the overflow case:
If dividend == INT_MIN and divisor == -1
Return INT_MAX.
Determine the sign of the answer.
Convert both numbers to positive (long long to avoid overflow).
While dividend is greater than or equal to divisor:
Find the largest multiple of divisor using left shift.
Subtract it from dividend.
Add the corresponding power of two to the answer.
Apply the sign.

 #include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor) {
    // Handle overflow case
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    // Determine sign of result
    bool negative = (dividend < 0) ^ (divisor < 0);

    // Convert to positive using long long
    long long dvd = llabs((long long)dividend);
    long long dvs = llabs((long long)divisor);

    int quotient = 0;

    while (dvd >= dvs) {
        long long temp = dvs;
        int multiple = 1;

        // Find the largest multiple of divisor
        while ((temp << 1) <= dvd) {
            temp <<= 1;
            multiple <<= 1;
        }

        dvd -= temp;
        quotient += multiple;
    }

    return negative ? -quotient : quotient;
}

int main() {
    int dividend = 10;
    int divisor = 3;

    cout << divide(dividend, divisor);

    return 0;
}
        Linked list

        1->2->3->4       arr[5]={1,2,3,4,5}in linked 

   100
   ....                   Node..>data(int)
     1                       :....>Node*(ptr)
  .....     500
   500      2            3
            200         NULL
                       300

in linked list store data with next varible adress

          Linked list implitetion

#include<iostream>
using namespace std;

class Node{

public:
  int  data;
  Node* next; 
public:
  Node( int val){
    data=val;
    next=NULL;
  }
};
class List{
  Node* head;
  Node*tail;
public:
  List(){
    head=NULL;
    tail=NULL;
  }
    void push_front(int val){
    Node* newNode=new Node(val);
    if(head==NULL){
    head=tail=newNode;
    }else{
      tail->next=newNode;
      tail=newNode;
     }
    }
  void printList(){
   Node*temp=head;

   while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
   }
 }

};
int main (){
   List ll();
   ll.push_front(3);
   ll.push_front(2);
   ll.push_front(1);
   //1->2->3->NULL
   ll.printList();
   return 0;
}

                  Push Front
LL.push_front(val)
(1)Create a new node
 Node*newNode=new Node(val)
(2)Conection with new node
newNode->next=head
(3)head=newNode

   
   #include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor) {
    // Handle overflow case
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    // Determine sign of result
    bool negative = (dividend < 0) ^ (divisor < 0);

    // Convert to positive using long long
    long long dvd = llabs((long long)dividend);
    long long dvs = llabs((long long)divisor);

    int quotient = 0;

    while (dvd >= dvs) {
        long long temp = dvs;
        int multiple = 1;

        // Find the largest multiple of divisor
        while ((temp << 1) <= dvd) {
            temp <<= 1;
            multiple <<= 1;
        }

        dvd -= temp;
        quotient += multiple;
    }

    return negative ? -quotient : quotient;
}

int main() {
    int dividend = 10;
    int divisor = 3;

    cout << divide(dividend, divisor);

    return 0;
}
        Linked list

        1->2->3->4       arr[5]={1,2,3,4,5}in linked 

   100
   ....                   Node..>data(int)
     1                       :....>Node*(ptr)
  .....     500
   500      2            3
            200         NULL
                       300

in linked list store data with next varible adress

          Linked list implitetion


#include<iostream>
using namespace std;

class Node{

public:
  int  data;
  Node* next; 
public:
  Node( int val){
    data=val;
    next=NULL;
  }
};
class List{
  Node* head;
  Node*tail;
public:
  List(){
    head=NULL;
    tail=NULL;
  }
    void push_front(int val){
    Node* newNode=new Node(val);
    if(head==NULL){
    head=tail=newNode;
    }else{
      tail->next=newNode;
      tail=newNode;
     }
    }
  void printList(){
   Node*temp=head;

   while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
   }
 }

};
int main (){
   List ll;
   ll.push_front(3);
   ll.push_front(2);
   ll.push_front(1);
   //1->2->3->NULL
   ll.printList();
   return 0;
}

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
private:
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    // Insert at front
    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Insert at back
    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Insert at a given position (0-based index)
    void insert(int val, int pos) {
        if (pos == 0) {
            push_front(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid Position\n";
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL)
            tail = newNode;
    }

    void printList() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.push_back(5);

    ll.printList();

    ll.insert(100, 2);

    ll.printList();

    return 0;
}

    LL implimention   Node  Node  Node
                       1     2     3....>NULL
                       ->    ->   ->

node-data
   ->node*
class Node{
   int data;
   Node* next;
}
Insert in LL Middle
Insert node at a given position in the LL
LL.insert(val,pos)
(1)create new Node
(2)find node at pos-1(loop)
(a)newNode->next=temp->next
(b)temp->next=newNode



#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
    ~Node(){
       cout<<"~Node"<<data<<endl;
      if (next!=NULL)
      {
        delete next;
        next=NULL;
      }

    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }
    ~List(){
      cout<<"destructor of list\n";
      if(head!=NULL){
        delete head;
        head=NULL;
      }
    }
    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
   void push_back(int val){
      Node* newNode=new Node(val);

      if (head==NULL)
      {
         head=tail=newNode;
      }else{
         tail->next=newNode;
         tail=newNode;
      }
   }
   void insert(int val,int pos){
     Node*newNode=new Node(val);
     Node*temp=head;
     for (int i = 0; i <pos-1; i++)
     {
      if (temp==NULL)
      {
         cout<<"position is invalid\n";
         return;
      }

      temp=temp->next;
     }
     //temp is now at pos-1 i.e prev/left
     newNode->next=temp->next;
     temp->next=newNode;
   }
};


int main() {
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.display();
    ll.push_back(4);
    ll.push_back(5);
    ll.display();

    ll.insert(100,2);
    ll.display();
    return 0;
}
    pop Front

LL.pop_front()  (1)head->store the value
                  in tempary value
head      tail    Node* temp=head;
 1    2    3      head=head->next
 ->   ->   null
      :
      when value come there this place from head then linked list estart here

      Pop Back
      LL pop_back()
      temp=head
      while(temp->next->next!=NULL){
      temp=temp->next;
      }

#include<iostream>
using namespace std;

class Node{
public:
   int data;
   Node*next;
  Node(int val){
   data=val;
   next=NULL;
  }
};
class List{
   Node* head;
   Node* tail;

   public:
    List(){
      head=NULL;
      tail=NULL;
    }
    ~List(){
      while(head!=NULL){
         Node* temp=head;
         head=head->next;
         delete temp;
      }
      tail=NULL;
    }
    void push_front(int val){
      Node* newNode= new Node(val);
      if (head==NULL)
      {
         head=tail=newNode;
      }else{
         newNode->next=head;
         head=newNode;
      }
    }
    void push_back(int val){
      Node* newNode=new Node(val);
      if (head==NULL)
      {
         head=tail=newNode;
      }else{
         tail->next=newNode;
         tail=newNode;
      }
    }
    void insert(int val,int pos){
      if (pos==0)
      {
         push_front(val);
         return;
      }
      Node* temp=head;
      for (int i = 0; i <pos-1 && temp!=NULL; i++)
      {
        temp=temp->next;
      }
      if (temp==NULL)
      {
         cout<<"Invalid Position\n";
         return;
      }
      Node* newNode=new Node(val);
      newNode->next=temp->next;
      temp->next=newNode;
      if (newNode->next==NULL)
      {
         tail=newNode;
      }
    }
    void pop_front(){
      if (head==NULL)
      {
         cout<<"Linked List is Empty\n";
         return;
      }
      Node*temp=head;
      head=head->next;
      if (head==NULL)
      {
         tail=NULL;
      }
      delete temp;
    }
    void pop_back(){
      if (head==NULL)
      {
         cout<<"Linked List is Empty\n";
         return;
      }
      if (head==tail)
      {
        delete head;
        head=tail=NULL;
        return;
      }
      Node* temp=head;
      while(temp->next!=tail){
         temp=temp->next;
      }
      delete tail;
      tail=temp;
      tail->next=NULL;
    }
    void display(){
      Node* temp=head;
      while (temp!=NULL)
      {
        cout<<temp->data<<"->";
        temp=temp->next;
      }
      cout<<"NULL\n";
    }
    //Recursive helper function
    int helper(Node* temp,int key){
      if (temp==NULL)
      {
        return -1;
      }
      if (temp->data==key)
      {
         return 0;
      }
      int idx=helper(temp->next,key);
      if (idx==-1)
      {
         return -1;
      return idx+1;
      }
    }
    int searchRec(int key){
      return helper(head,key);
    }
   int searchItr(int key){
      Node* temp=head;
      int idx=0;

      while (temp!=NULL)
      {
         if (temp->data==key)
         {
           return idx;
         }
         temp=temp->next;
         idx++;
      }
      return -1;
   }
};
int main() {

    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.display();

    cout << "Recursive Search (2): " << ll.searchRec(2) << endl;
    cout << "Iterative Search (4): " << ll.searchItr(4) << endl;

    ll.pop_back();
    ll.display();

    ll.pop_front();
    ll.display();

    return 0;
}

1   2   3   4    5
->  ->  ->  ->   ->  NULL

  head
  :
  2    3   4
  ->   ->  ->NULL
prev curr  next
     prev   curr
                   next=curr->next
                   curr->next=prev
                   prev=curr
                   curr=next
=>Revese a linked list
#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* next;
   Node(int val){
      data=val;
      next=NULL;
   }
};
class List{
   Node* head;
   Node* tail;
public:
  List(){
    head=tail=NULL;
  }
  void push_back(int val){
   Node* newNode=new Node(val);
   if (head==NULL)
   {
      head=tail=newNode;
   }else{
      tail->next=newNode;
      tail=newNode;
       }
   }
   //Reverse the Linked List
   void reverse(){
      Node* prev=NULL;
      Node* curr=head;
      Node* next=NULL;

      tail=head; //old head become new tail
      while (curr!=NULL)
      {
        next=curr->next;//Store next node
        curr->next=prev; //Revese link
        prev=curr;  //Move prev forward
        curr=next;  //Move curr forward
      }
      head=prev; //Update head
   }
  void display(){
   Node* temp=head;
   while (temp!=NULL)
   {
      cout<<temp->data<<"->";
      temp=temp->next;
   }
   cout<<"NULL"<<endl;
  }
};
int main (){
 List ll;
 ll.push_back(1);
 ll.push_back(2);
 ll.push_back(3);
 ll.push_back(4);
 ll.push_back(5);
 cout<<"Original Linked List:\n";
 ll.display();
 ll.reverse();
 cout<<"Reveresed Liked List:\n";
 ll.display();
 return 0;
}

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void removeNthFromEnd(int n) {

        Node* fast = head;
        Node* slow = head;

        // Move fast pointer n steps ahead
        for (int i = 0; i < n; i++) {
            if (fast == NULL) {
                cout << "Invalid value of n" << endl;
                return;
            }
            fast = fast->next;
        }

        // If fast becomes NULL, remove the head
        if (fast == NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;

            if (head == NULL)
                tail = NULL;

            return;
        }

        // Move both pointers
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        Node* temp = slow->next;
        slow->next = temp->next;

        if (temp == tail)
            tail = slow;

        delete temp;
    }
};

int main() {

    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    cout << "Original List:" << endl;
    ll.display();

    ll.removeNthFromEnd(2);

    cout << "After Removing 2nd Node from End:" << endl;
    ll.display();

    return 0;
}


for delating Nth term form the end
void removeNth(int n){
 Node* prev=head;
 for()int i=1;i<(size-1);i++{
   prev=prev->next;
 }
 Node* todel=prev->next;
 cout<<"going to delete:"<<toDel->data<<endl;
 prev->next=prev->next->next;
}
    

   #include<iostream>
   using namespace std;
   class Node{
   public:
      int data;
      Node* Next;
   Node(int val){
      data=val;
      Next=NULL;
    }
   };
   class List{
      Node*head;
      Node*tail;
   public:
     List(){
       head=tail=NULL;
     }
     void push_back(int val){
       Node* newNode= new Node(val);
       if(head==NULL){
         head=tail=newNode;
       }else{
         tail->Next=newNode;
         tail=newNode;
       }
     }
     void display(){
      Node*temp=head;

      while (temp!=NULL)
      {
        cout<<temp->data<<"->";
        temp=temp->Next;
      }
      cout<<"NULL"<<endl;
     }
     void removeNthFromEnd(int n){
       Node* fast=head;
       Node* slow=head;
       //Move fast pointer n step ahead
       for (int i = 0; i < n; i++)
       {
          if (fast==NULL)
          {
            cout<<"Invalid value of n"<<endl;
            return ;
          }
          fast=fast->Next;
       }
        //If fast become NULL,remove the head
        if(fast==NULL){
         Node*temp=head;
         head=head->Next;
         delete temp;

         if (head==NULL)
         {
            tail=NULL;
         }
         return;
        }
        while(fast->Next!=NULL){ 
         fast=fast->Next;
         slow=slow->Next;
        }
        Node* temp=slow->Next;
        slow->Next=temp->Next;

        delete temp;
     }
   };
   int main (){
          List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    cout << "Original List:" << endl;
    ll.display();

    ll.removeNthFromEnd(2);

    cout << "After Removing 2nd Node from End:" << endl;
    ll.display();

      return 0;
   }
Detect Cycle in linked List(Complete concept)
A cycle in linked list occurce when a node back to  previous node instead of NULL

1 -> 2 -> 3 -> 4 -> 5 -> NULL
No cycle
1 -> 2 -> 3 -> 4 -> 5
          ^         |
          |_________|
cycle Detected

      
#include<iostream>
using namespace std;

class Node
{
   public:
   int data;
   Node* next;

  Node(int val)
  {
     data=val;
     next=NULL;
  }
};
class LinkedList
{
   public:
      Node* head;
      Node* tail;
   LinkedList()
   {
      head=tail=NULL;
   }
   void insert(int val){
      Node* newNode=new Node(val);
      if (head==NULL)
      {
         head=tail=newNode;
         return;
      }
      tail->next=newNode;
      tail=newNode;
   }
   bool detectCycle()
   {
      Node* slow=head;
      Node* fast=head;
   while(fast!=NULL && fast->next!=NULL)
   {
      slow=slow->next;
      fast=fast->next->next;

   if (slow==fast)
   {
     return true;
     }
   }
   return false;
   }
};
int main (){
   LinkedList list;

   list.insert(10);
   list.insert(20);
   list.insert(30);
   list.insert(40);
   list.insert(50);
   //Create cycle
   list.tail->next=list.head->next;

   if (list.detectCycle())
   {
     cout<<"Cycle Found";
   }
   else{
      cout<<"No cycle";
   }
   return 0;
}


   Time complexity o(n)
   Space Complexityo(n)

   Detect a cycle /Loop in aLL
   Floyd's Cycle Finding Algorithms

                                       ptrs
                                       /   \
                                    slow+1  fast+2
                              slow=slow->next  fast=fast->next->next
Here in this condition loop are exixt
o move  o dist
1move   1 dist
2move   2 dist
3 move  3 dist
Here in this condtion are not any loop exit


fast=slow=head
while(fast!=NULL && fast->next!=NULL)
{
   slow=slow->next
   fast=fast->next->next
   if(slow==fast)
   cycle=> break;
}

Removing Cycle in liked list
1 → 2 → 3 → 4 → 5
    ↑           ↓
    └───────────┘
The last node (5) points back to node 2, forming a cycle.

After removing the cycle:

1 → 2 → 3 → 4 → 5 → NULL


#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node* head;
    Node* tail;

    LinkedList()
    {
        head = tail = NULL;
    }

    void insert(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void createCycle(int pos)
    {
        Node* temp = head;
        Node* startNode = NULL;
        int count = 1;

        while(temp->next != NULL)
        {
            if(count == pos)
                startNode = temp;

            temp = temp->next;
            count++;
        }

        temp->next = startNode;
    }

    bool detectCycle()
    {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                return true;
        }

        return false;
    }

    void removeCycle()
    {
        Node* slow = head;
        Node* fast = head;

        // Detect cycle
        do
        {
            if(fast == NULL || fast->next == NULL)
                return;

            slow = slow->next;
            fast = fast->next->next;

        } while(slow != fast);

        // Find start of cycle
        fast = head;

        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        // Find last node of cycle
        Node* temp = slow;

        while(temp->next != slow)
        {
            temp = temp->next;
        }

        temp->next = NULL;
    }

    void display()
    {
        Node* temp = head;

        while(temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL";
    }
};

int main()
{
    LinkedList list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    list.createCycle(2);

    if(list.detectCycle())
        cout << "Cycle Found\n";
    else
        cout << "No Cycle\n";

    list.removeCycle();

    if(list.detectCycle())
        cout << "Cycle Still Exists\n";
    else
        cout << "Cycle Removed Successfully\n";

    list.display();

    return 0;
}

   Removing Cycle in liked list
   In this linked list last element add in mid
     fast                 last
     s
     :        conection
     ..........:............
               :          :
     break this:          :
   conection   :..........:
               L    /\
                    s f this point where both slowand fast    exixt come a cyle
         lastNode->Next=NULL this remove all this Cycle
(1)First form cycle detector

 detection slow and fast point and  move them
(2)And slowpoint come at initial point
   slow=head
And agin stat a loop
(3)
We are mute and create loop
slow mute->+1
fastmute->+1
(4)Break this connection we now about where this place exixt
class Node

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void printList() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

void removeCycle(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    bool isCycle = false;

    // Detect cycle
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            isCycle = true;
            break;
        }
    }

    if (!isCycle)
    {
        cout << "No Cycle Found\n";
        return;
    }

    // Find start of cycle
    slow = head;
    Node* prev = NULL;

    // Special case: cycle starts at head
    if (slow == fast)
    {
        while (fast->next != slow)
        {
            fast = fast->next;
        }

        fast->next = NULL;
        return;
    }

    // General case
    while (slow != fast)
    {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }

    // Remove cycle
    prev->next = NULL;
}

bool detectCycle(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

int main()
{
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    // Create cycle
    ll.tail->next = ll.head;

    if (detectCycle(ll.head))
        cout << "Cycle Found\n";

    removeCycle(ll.head);

    if (!detectCycle(ll.head))
        cout << "Cycle Removed Successfully\n";

    ll.printList();

    return 0;
}

    Removing Cycle in a linked list
    proof
     X+b*d+y=2*(x+a*d+y) 
     bd-2ad=x+y
     d(b-2a)=x+y
     x+y=kd
     x=kd-y
     =(k-1)d+(d-y)

     C++ STL list (Complete Guide)

The list in C++ STL is a doubly linked list. Each element stores:

Data
Pointer to the next node
Pointer to the previous node

Unlike vector, elements are not stored in contiguous memory.

Empty List

list<int> l;
list<int> l(5);

List with Initial Value
list<int> l(5,100);


#include <list>
list<int> l;
    
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    for(int x : l)
        cout << x << " ";

    return 0;
}
| Operation                      | Time Complexity                                            |
| ------------------------------ | ---------------------------------------------------------- |
| `push_front()`                 | O(1)                                                       |
| `push_back()`                  | O(1)                                                       |
| `pop_front()`                  | O(1)                                                       |
| `pop_back()`                   | O(1)                                                       |
| `insert()` (at known iterator) | O(1)                                                       |
| `erase()` (at known iterator)  | O(1)                                                       |
| `front()`                      | O(1)                                                       |
| `back()`                       | O(1)                                                       |
| `size()`                       | O(1)                                                       |
| `clear()`                      | O(n)                                                       |
| `find()` (manual search)       | O(n)                                                       |
| `sort()`                       | O(n log n)                                                 |
| `reverse()`                    | O(n)                                                       |
| `remove(value)`                | O(n)                                                       |
| `unique()`                     | O(n)                                                       |
| `merge()`                      | O(n)                                                       |
| `splice()`                     | O(1) for moving nodes (plus any iterator traversal needed) |

Access Functions
front()
cout<<l.front();
back()
cout<<l.back();
Capacity Functions
empty()
if(l.empty())
    cout<<"Empty";
size()
cout<<l.size();
Iterator
list<int> l={10,20,30};

for(auto it=l.begin();it!=l.end();it++)
{
    cout<<*it<<" ";
}

Output

10 20 30
Reverse Iterator
for(auto it=l.rbegin();it!=l.rend();it++)
{
    cout<<*it<<" ";
}

Output

30 20 10
Sorting
list<int> l={40,10,30,20};

l.sort();

Output

10 20 30 40

Descending

l.sort(greater<int>());

Output

40 30 20 10
Reverse
l.reverse();

Example

Before

10 20 30 40

After

40 30 20 10
Unique

Removes consecutive duplicate elements.

list<int> l={1,1,2,2,3,3};

l.unique();

Output

1 2 3
Merge
list<int> l1={1,3,5};
list<int> l2={2,4,6};

l1.merge(l2);

Output

1 2 3 4 5 6

Note: Both lists should already be sorted before calling merge().

Splice

Moves elements from one list to another.

list<int> l1={1,2,3};
list<int> l2={4,5,6};

l1.splice(l1.end(),l2);

Output

l1

1 2 3 4 5 6

l2

Empty
Remove

Removes all occurrences of a value.

list<int> l={1,2,3,2,4};

l.remove(2);

Output

1 3 4
Resize
list<int> l={1,2,3};

l.resize(5);

Output

1 2 3 0 0
Swap
list<int> l1={1,2,3};
list<int> l2={4,5};

l1.swap(l2);

Output

l1

4 5

l2

1 2 3
             List in stl
.push_front(val)& push_back(val)
.size()
.front()&back()
.pop_front()&pop_back()

Iterator
#include<iterator>
Iterator in c++ are object that allow you to traverse throught the elements of a container
(like arrays,vectors,list,etc)in seqquential manner
ll.begin()->itrof head
ll.end()->itr of tail->next
for(itr=ll.begin;itr!=ll.end;itr++)

#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void printList(list<int>ll){
   list<int>::iterator itr;
    for (itr=ll.begin();itr!=ll.end();itr++)
    {
      cout<<(*itr)<<"->";
    }
    cout<<"NULL"<<endl;
   }
int main (){
   list<int>ll;
   ll.push_front(2);
   ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);
    printList(ll);
    cout<<ll.size()<<endl;

    cout<<"head="<<ll.front()<<endl;
    cout<<"tail="<<ll.back()<<endl;

    ll.pop_front();
    printList(ll);
    return 0;
}
     Mere Sort on LL


#include<iostream>
#include<list>
using namespace std;
void mergeSort(Node* head){
   if(head==NULL || head->next==NULL){
      return;
   }
   Node* rightHead=splitAtMid(head);
   mergeSort(head);
   mergeSort(rightHead);//left Head
   mergeSort(head,rightHead);//right Head
}
int main (){
  List ll;
  ll.push_front(1);
  ll.push_front(2);
   ll.push_front(3);
   ll.push_front(4);

}

#include<iostream>
using namespace std;
class Node
{
   public:
   int data;
   Node* next;
   Node(int val)
   {
      data=val;
      next=NULL;
   }
};
//Linked List class
class List
{
   public:
   Node* head;
   Node* tail;
   List()
   {
      head=tail=NULL;
   }
   void push_front(int val)
   {
      Node* newNode=new Node(val);
      if(head==NULL)
      {
         head=tail=newNode;
      }
      else
      {
         newNode->next=head;
         head=newNode;
         }
      }
      void print(){

         Node* temp=head;
         while(temp!=NULL)
         {
            cout<<temp->data<<"->";
            temp=temp->next;
         }
         cout<<"NULL"<<endl;
      }
   };
   //Find middle and split list
   Node* splitAtMid(Node* head)
   {
      Node* slow=head;
      Node* fast=head->next;
      while(fast!=NULL && fast->next!=NULL)
      {
         slow=slow->next;
         fast=fast->next->next;
      }
      Node* rightHead=slow->next;
      slow->next=NULL;

      return rightHead;
   }
  //Merge two sorted Linked List
 Node* merge(Node* left,Node* right)
 {
   if(left==NULL){
      return right;
   }
   if(right==NULL){
      return left;
   }
   Node* result=NULL;
   if(left->data<=right->data){
      result=left;
      result->next=merge(left->next,right);
   }else{
      result=right;
      result->next=merge(left,right->next);
   }
   return result;
 }
 //Merge Sort
 Node* mergeSort(Node* head)
 {
   if (head==NULL|| head->next==NULL)
   {
      return head;
   }
   Node* rightHead=splitAtMid(head);

   Node* left=mergeSort(head);
   Node* right=mergeSort(rightHead);
   return merge(left,right);
 }
 int main (){
   List ll;
   ll.push_front(1);
   ll.push_front(4);
   ll.push_front(2);
   ll.push_front(5);
   ll.push_front(3);
   cout<<"Original List:"<<endl;
   ll.print();
   ll.head=mergeSort(ll.head);
   cout<<"Sorted List:"<<endl;
   ll.print();
   return 0;
 }
 Time Complexity
Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n log n)

Space Complexity
Auxiliary Space: O(log n) (due to recursion)

A Zig-Zag Linked List rearrage thenodes so that they appear alternately from the first half and the reversed second half of the list

suppose the liked list is:
1->2->3->4->5->6->NULL
Afterzig-zag conversion:

Step 1: Find the Middle

Use Slow and Fast Pointer.


1 → 2 → 3 → 4 → 5 → 6

slow = 1
fast = 1

↓

slow = 2
fast = 3

↓

slow = 3
fast = 5

↓

fast reaches end
midle=3
Split the list
left=>1->2->3
Right=>4->5->6
Reverse the second Half
Before reversing
4->5->6
After reversing
6->5->4
Now
Left
1->2->3->
Right
6->5->4
Take one node from left
1
Take one node from right
1->6
Next left
1->6->2->5->3->4| Operation           | Time     |
| ------------------- | -------- |
| Find Middle         | O(n)     |
| Reverse Second Half | O(n)     |
| Merge               | O(n)     |
| **Total**           | **O(n)** |




#include <iostream>
using namespace std;

// Node Class
class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Linked List Class
class List
{
public:
    Node* head;
    Node* tail;

    List()
    {
        head = tail = NULL;
    }

    // Insert at End
    void push_back(int val)
    {
        Node* newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    // Print List
    void print()
    {
        Node* temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Reverse Linked List
    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;

        while (curr != NULL)
        {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    // Zig-Zag Function
    void zigZag()
    {
        if (head == NULL || head->next == NULL)
            return;

        // Step 1: Find Middle
        Node* slow = head;
        Node* fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Split List
        Node* second = slow->next;
        slow->next = NULL;

        // Step 3: Reverse Second Half
        second = reverse(second);

        // Step 4: Merge Alternately
        Node* first = head;

        while (first != NULL && second != NULL)
        {
            Node* nextFirst = first->next;
            Node* nextSecond = second->next;

            first->next = second;

            if (nextFirst == NULL)
                break;

            second->next = nextFirst;

            first = nextFirst;
            second = nextSecond;
        }
    }
};

int main()
{
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    cout << "Original Linked List:\n";
    ll.print();

    ll.zigZag();

    cout << "\nZig-Zag Linked List:\n";
    ll.print();

    return 0;
}
              Linked list

      Doubly Linked List
   1->2->3->4->5-> linked list travel only one direction 
    
#include<iostream>
using namespace std;
class Node{
   public:
    int data;
      Node* next;
      Node* prev;

      Node(int val){
         data=val;
         next=NULL;
      }
};
class List{
   public:
      Node* head;
      Node* tail;
      List(){
         head=tail=NULL;
      }
     void push_front(int val){
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
     }
     void print(){

        Node* temp=head;
        while(temp!=NULL)
        {
           cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
     }
     void push_back(int val){
         Node* newNode=new Node(val);
         if(head==NULL)
         {
            head=tail=newNode;
         }
         else
         {
            tail->next=newNode;
            tail=newNode;
         }
     }
     void insertAtPosition(int pos,int val){
       if(pos==1){
         Node* newNode=new Node(val);
         newNode->next=head;
         head=newNode;
         return;
       }
       Node* temp=head;
        for(int i=1;i<pos-1 && temp!=NULL;i++)
        {
            temp=temp->next;
        }
        if(temp!=NULL)
        {
            Node* newNode=new Node(val);
            newNode->next=temp->next;
            temp->next=newNode;
        }
     }
};
int main(){
   List ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(40);
    ll.print();

    ll.insertAtPosition(3, 30);
    ll.print();
   return 0;
}

| Operation                            | Time Complexity |
| ------------------------------------ | --------------- |
| Insert at Beginning                  | **O(1)**        |
| Insert at End (with tail pointer)    | **O(1)**        |
| Insert at End (without tail pointer) | **O(n)**        |
| Insert at Position                   | **O(n)**        |
| Insert After a Given Value           | **O(n)**        |
Doubly Linked List (DLL) in C++ – Complete Guide

A Doubly Linked List (DLL) is a linked list in which each node contains:
;

Data
Pointer to the next node
Pointer to the previous node

Unlike a singly linked list, you can traverse a doubly linked list both forward and backward.

Structure of a Doubly Linked List
NULL <- [10] <-> [20] <-> [30] <-> [40] -> NULL


 +-------+---------+--------+
| prev  |  data   |  next  |
+-------+---------+--------+

  

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyList
{
public:
    Node* head;
    Node* tail;

    DoublyList()
    {
        head = tail = NULL;
    }

    // Insert at Beginning
    void push_front(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Insert at End
    void push_back(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    // Delete from Beginning
    void pop_front()
    {
        if(head == NULL)
            return;

        Node* temp = head;
        head = head->next;

        if(head != NULL)
            head->prev = NULL;
        else
            tail = NULL;

        delete temp;
    }

    // Delete from End
    void pop_back()
    {
        if(head == NULL)
            return;

        if(head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;

        delete temp;
    }

    // Print Forward
    void printForward()
    {
        Node* temp = head;

        while(temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Print Backward
    void printBackward()
    {
        Node* temp = tail;

        while(temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }

        cout << "NULL" << endl;
    }
};

int main()
{
    DoublyList dl;

    dl.push_back(10);
    dl.push_back(20);
    dl.push_back(30);

    dl.push_front(5);

    cout << "Forward Traversal:\n";
    dl.printForward();

    cout << "Backward Traversal:\n";
    dl.printBackward();

    dl.pop_front();

    cout << "\nAfter Deleting First Node:\n";
    dl.printForward();

    dl.pop_back();

    cout << "\nAfter Deleting Last Node:\n";
    dl.printForward();

    return 0;
}
    Stack Implimention
    using vector

        Stack
A Stack is a linear data structure that follows the LIFO (Last In, First Out) principle.
Push: 10
Push: 20
Push: 30

Stack:

| 30 | ← Top
| 20 |
| 10 |

Pop()

| 20 | ← Top
| 10 |

| Operation   | Description             | Time |
| ----------- | ----------------------- | ---- |
| `push()`    | Insert an element       | O(1) |
| `pop()`     | Remove the top element  | O(1) |
| `top()`     | Return the top element  | O(1) |
| `isEmpty()` | Check if stack is empty | O(1) |
| `size()`    | Number of elements      | O(1) |


#include<iostream>
using namespace std;

class Stack{
   int arr[100];
   int topIndex;
public:
  Stack(){
     topIndex=-1;
  }
  void push(int x){
   if (topIndex==99)
   {
      cout<<"Stack overflow\n";
      return;
   }
   arr[++topIndex]=x;
  }

  void pop(){
    if(topIndex==-1){
      cout<<"Stack Underflow\n";
      return;
    }
    cout<<arr[topIndex]<<"popped\n";
    topIndex--;
  }
  //Return top element
  int peek(){
   if (topIndex==-1)
   {
      cout<<"Stack is Empty\n";
      return -1;
   }
   return arr[topIndex];
  }
  //Check stack  size is empty
  bool isEmpty(){
    return topIndex==-1;
  }
  //return stack size
  int size(){
    return topIndex+ 1;
  }
  void display(){
    if(topIndex==-1){
      cout<<"Stackis empty\n";
      return;
    }
    cout<<"Stack Element:\n";
    for (int i = topIndex; i >= 0; i--)
    {
      cout<<arr[i]<<endl;
    }
  }
};
int main (){
   Stack s;
   s.push(10);
   s.push(20);
   s.push(30);

   cout<<"Top Elment="<<s.peek()<<endl;
   cout<<"Stack size="<<s.size()<<endl;
   s.display();
   if (s.isEmpty())
   {
      cout<<"Stack is Empty\n";
   }else{
      cout<<"Stack is not Empty\n";
   }
   return;
}
   Stack using vector



#include <iostream>
#include <vector>
using namespace std;

// Stack using vector
class Stack {
    vector<int> vec;

public:
    // Push
    void push(int val) {
        vec.push_back(val);
    }

    // Pop
    void pop() {
        if (isEmpty()) {
            cout << "Stack is Empty.\n";
            return;
        }

        vec.pop_back();
    }

    // Top
    int top() {
        if (isEmpty()) {
            cout << "Stack is Empty.\n";
            return -1;
        }

        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    // Check Empty
    bool isEmpty() {
        return vec.size() == 0;
        // or: return vec.empty();
    }
};

int main() {

    Stack s;

    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
    What Does template <typename T> Mean?
    template <typename T>
class Stack {
    vector<T> vec;
};
T is a placeholder for a data type. When you create an object, you specify the actual type:

Stack<int> s1;      // Stack of integers
Stack<char> s2;     // Stack of characters
Stack<float> s3;    // Stack of floats
Stack<string> s4;   // Stack of strings

Stack<char> s;
s.push('A');
s.push('B');

cout << s.top();

output
 B
 Using templates allows the same Stack class to work with different data types without rewriting the code.

Stack Implementation
using Linked



  #include<iostream>
  #include<vector>
  using namespace std;
  template<typename T>
  class Stack{
   vector<T>vec;
public:
   void push(T val){
      vec.push_back(val);
   }
   void pop(){
      if (isEmpty())
      {
         cout<<"Stack is Empty.\n";
         return;
      }

      vec.pop_back();
   }
    T top(){
      // if (isEmpty())
      // {
      //    cout<<"Stack is Empty.\n";
      //    return -1;
      // }

      int lastIdx=vec.size()-1;
      return vec[lastIdx];
   }
   bool isEmpty(){
      return vec.size()==0;
   }
  };
  int main(){
    Stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty())
    {
      cout<<s.top()<<" ";
      s.pop();
    }
    cout<<endl;
    return 0;
  }


charector type

  #include<iostream>
  #include<vector>
  using namespace std;
  template<typename T>
  class Stack{
   vector<T>vec;
public:
   void push(T val){
      vec.push_back(val);
   }
   void pop(){
      if (isEmpty())
      {
         cout<<"Stack is Empty.\n";
         return;
      }

      vec.pop_back();
   }
    T top(){
      // if (isEmpty())
      // {
      //    cout<<"Stack is Empty.\n";
      //    return -1;
      // }

      int lastIdx=vec.size()-1;
      return vec[lastIdx];
   }
   bool isEmpty(){
      return vec.size()==0;
   }
  };
  int main(){
    Stack<char>s;
    s.push('c');
    s.push('b');
    s.push('a');

    while (!s.isEmpty())
    {
      cout<<s.top()<<" ";
      s.pop();
    }
    cout<<endl;
    return 0;
  }
    String Type
 
  #include<iostream>
  #include<vector>
  #include<string>
  using namespace std;
  template<typename T>
  class Stack{
   vector<T>vec;
public:
   void push(T val){
      vec.push_back(val);
   }
   void pop(){
      if (isEmpty())
      {
         cout<<"Stack is Empty.\n";
         return;
      }

      vec.pop_back();
   }
    T top(){
      // if (isEmpty())
      // {
      //    cout<<"Stack is Empty.\n";
      //    return -1;
      // }

      int lastIdx=vec.size()-1;
      return vec[lastIdx];
   }
   bool isEmpty(){
      return vec.size()==0;
   }
  };
  int main(){
    Stack<string>s;
    s.push("learn");
    s.push("coding");
    s.push("apnacollege");

    while (!s.isEmpty())
    {
      cout<<s.top()<<" ";
      s.pop();
    }
    cout<<endl;
    return 0;
  }

   #include<iostream>
   using namespace std;
   //Node class
   class Node{
      public:
       int data;
       Node* next;
       Node(int val){
         data=val;
         next=NULL;
       }
   };
class Stack{
   private:
     Node* head;
   public:
    Stack(){
      head=NULL;
    }
    void push(int val){
      Node* newNode=new Node(val);
      newNode->next=head;
      head=newNode;
    }
    void pop(){
      if (isEmpty())
      {
        cout<<"Stack Underflow\n";
        return;
      }
      Node* temp=head;
      head=head->next;
      delete temp;
    }
    int top(){
      if (isEmpty())
      {
        cout<<"Stack is empty\n";
        return-1;
      }
      return head->data;
    }
    bool isEmpty(){
      return head==NULL;
    }
    void display(){
      if (isEmpty())
      {
         cout<<"Stack is empty\n";
         return;
      }
      Node* temp=head;
      cout<<"Stack(To to Bottom)";
      while (temp!=NULL)
      {
         cout<<temp->data<<" ";
         temp=temp->next;
      }
      cout<<endl;
    }
};
int main (){
   Stack s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.display();
   cout<<"Top Element"<<s.top()<<endl;
   s.pop();
   cout<<"Top Element="<<s.top()<<endl;
   return 0;
}



  #include <iostream>
  #include<vector>
  #include<stack>
  #include<string>
using namespace std;

// Node class
template <class T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T val) {
        data = val;
        next = NULL;
    }
};

// Stack class
template <class T>
class Stack {
    Node<T>* head;

public:
    // Constructor
    Stack() {
        head = NULL;
    }

    // Push
    void push(T val) {
        Node<T>* newNode = new Node<T>(val);

        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Pop
    void pop() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return;
        }

        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }

    // Top
    T top() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return T();   // Default value of T
        }

        return head->data;
    }

    // Check Empty
    bool isEmpty() {
        return head == NULL;
    }
};

int main() {

    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Stack Elements (Top to Bottom): ";

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;

    REVESE A STRING
 
}
#include <iostream>
#include <stack>
using namespace std;

string reverseString(string str) {
    stack<char> s;

    // Push all characters
    for (char ch : str) {
        s.push(ch);
    }

    string ans = "";

    // Pop all characters
    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }

    return ans;
}

int main() {
    string str = "Vishal";

    cout << "Original String : " << str << endl;
    cout << "Reversed String : " << reverseString(str);

    return 0;
}
    revese a stack using recusion

#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s,int x){
   if (s.empty())
   {
      s.push(x);
      return;
   }
   int top=s.top();
   s.pop();
   insertAtBottom(s,x);
   s.push(top);
}
void reversedStack(stack<int>&s){
   if (s.empty())
   {
      return;
   }
   int top=s.top();
   s.pop();

   reversedStack(s);
   insertAtBottom(s,top);
}
int main(){
   stack<int>s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   reversedStack(s);
    while (!s.empty())
    {
      cout<<s.top()<<" ";
      s.pop();
    }
  return 0;
}
  3.Insert a element at the Bottom of a stack
  if stack become empty,insert the element .otherwise
  keep popping element recursively,insert the new element ,than push back the element removed element
  4.Sort Stack using reccursion
  
#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int x) {

    if (s.empty()) {
        s.push(x);
        return;
    }

    int top = s.top();
    s.pop();

    insertAtBottom(s, x);

    s.push(top);
    
}
void sortStack(stack<int>&s){
   if (s.empty())
   {
      return;
   }
   int top = s.top();
    s.pop();
    sortStack(s);
   
}

int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    insertAtBottom(s, 5);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
| Problem          | Algorithm | Time    | Space  |
| ---------------- | --------- | ------- | ------ |
| Reverse String   | Stack     | `O(n)`  | `O(n)` |
| Reverse Stack    | Recursion | `O(n²)` | `O(n)` |
| Insert at Bottom | Recursion | `O(n)`  | `O(n)` |
| Sort Stack       | Recursion | `O(n²)` | `O(n)` |


 Stock Span Problem
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>stockSpan(vector<int>&price){
   int n=price.size();
   vector<int>span(n);

   stack<int>s;
   span[0]=1;
   s.push(0);

   for (int i = 1; i < n; i++)
   {
      while (!s.empty() && price[s.top()]<=price[i])
      {
         s.pop();
      }
      if (s.empty())
      {
         span[i]=i+1;
      }else{
         span[i]=i-s.top();
      }
      s.push(i);
   }
   return span;
}

int main (){
   vector<int>price={100,80,60,70,60,85,100};
   vector<int>span=stockSpan(price);
   cout<<"stock price:";
   for(int p:price){
      cout<<p<<" ";
   }
   cout<<"\nSpan:";
   for(int x:span){
      cout<<x<<endl;
   }
   return 0;
}


span=maxno.of consecutive days(including current)
for which price<=todays's price
   

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void stockSpanProblem(vector<int>stock,vector<int>span){
   stack<int>s;
   s.push(0);
   span[0]=1;
   for (int i=1;i<stock.size();i++)
   {
      int currPrice=stock[i];
      while (!s.empty() && currPrice>=stock[s.top()] )
      {
          s.pop();
      }
      if(s.empty()){
         span[i]=i+1;
      }else{
         int prevHigh=s.top();
         span[i]=i-prevHigh;
      }
   }
   for (int i = 0; i < span.size(); i++)
   {
      cout<<span[i]<<" ";
   }
   cout<<endl;
}
int main (){
   vector<int>stock={100,80,60,70,60,85,100};
   vector<int>span={0,0,0,0,0,0,0};

   stockSpanProblem(stock,span);
   return 0;
}
   Next Greatest Element
next greater=first greater element that is to the right

arr=[6,8,0,1,3]   ans=[8,-1,1,3,-1]

Next Greater Element (NGE) Using Stack in C++
Given an array, for every element find the next greater element on its right side.
If there is no greater element, print -1.
Example

Input

arr = [6, 8, 0, 1, 3]

Output

8 -1 1 3 -1

Algorithm
Create an empty stack.
Traverse the array from right to left.
While the stack is not empty and stack.top() <= arr[i], pop the stack.
If the stack is empty, the answer is -1.
Otherwise, the answer is stack.top().
Push the current element onto the stack.



#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>nextGreaterElement(vector<int>&arr){
   int n=arr.size();
   vector<int>ans(n);

   stack<int>s;
   //Traverse from right to left
   for (int i = n-1; i >=0; i--)
   {
      while (!s.empty() && s.top()<=arr[i])
      {
         s.pop();
      }
      //If stack is empty
      if(s.empty()){
         ans[i]=-1;
      }else{
         ans[i]=s.top();
      }
      //push current element
      s.push(arr[i]);
   }
   return ans;
}
int main (){
   vector<int>arr={6,8,0,1,3};
   vector<int>ans=nextGreaterElement(arr);
   cout<<"Next Greater Element:\n";
   for (int x:ans)
   {
      cout<<x<<" ";
   }
   return 0;
}
   
#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
void nextGreater(vector<int> arr, vector<int> ans) {//TC o(n)

    stack<int> s;

    int idx = arr.size() - 1;

    ans[idx] = -1;
    s.push(arr[idx]);

    // Traverse from right to left
    for (idx = arr.size() - 2; idx >= 0; idx--) {

        int curr = arr[idx];

        while (!s.empty() && curr >= s.top()) {
            s.pop();
        }

        if (s.empty()) {
            ans[idx] = -1;
        }
        else {
            ans[idx] = s.top();
        }

        s.push(curr);
    }

    // Print answer
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main() {

    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};

    nextGreater(arr, ans);

    return 0;
}


Valid Parentheses Using Stack (C++)
Problem Statement

Given a string containing only:

( )
{ }
[ ]

Determine whether the parentheses are valid.

A string is valid if:

Every opening bracket has a corresponding closing bracket.
Brackets are closed in the correct order.


    
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string str){//O(n)
  stack<int>s;
  for (int i = 0; i <str.size(); i++)
  {
    char ch=str[i];
    if (ch=='(' ||ch=='['|| ch=='{')
    {
      s.push(ch);
    }else{
      if (s.empty())
      {
         return false;
      }
      //mach
      int top=s.top();
      if((top=='(' && ch==')')||
         (top=='[' && ch==']')||
         (top=='{' && ch=='}'))
      {
         s.pop();
      }else{
         return false;
      }

    }

  }
  if (s.empty())
  {
    return true;
  }else{
    return false;
  }


}

int main (){
   string str1="([}])";//Invalid string
   string str2="([{}])";//Valid string
   cout<<isValid(str1)<<endl;
   cout<<isValid(str2)<<endl;

   return 0;
}

Duplicate Parentheses Using Stack (C++)
Problem Statement

Given an expression, determine whether it contains duplicate parentheses.

Duplicate parentheses are unnecessary pairs of brackets that do not enclose any operator or meaningful expression

| Expression      | Output                      |
| --------------- | --------------------------- |
| `((a+b))`       | Duplicate Parentheses Found |
| `(a+(b))`       | Duplicate Parentheses Found |
| `(a+b)`         | No Duplicate Parentheses    |
| `((a+b)+(c+d))` | No Duplicate Parentheses    |


Algorithm
Create an empty stack.
Traverse the expression character by character.
If the current character is not ), push it onto the stack.
If the current character is ):
Count how many characters are inside the current pair of parentheses.
Pop characters until ( is found.
If the count is 0, then there are duplicate parentheses.
Pop the opening (.
If the traversal finishes without finding duplicates, return false.

Dublicate Parentheses
(x+y) false
((x+y)+z) false
((x+y)) true
((x+y)+((z))) true

#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool duplicateParentheses(string str){
   stack<char>s;
  for (int i = 0; i < str.length(); i++)
  {
      char ch=str[i];
      if (ch!=')')
      {
        s.push(ch);
      }
      else{
         int count=0;
         while (!s.empty()&& s.top()!='(')
         {
            s.pop();
            count++;
         }
         //Remove
         if (!s.empty())
         {
            s.pop();
         }
         if (count==0)
         {
            return true;
         }

      }
  }

}
int main (){
   string str;
   cout<<"Enter Expression:";
   cin>>str;
   if (duplicateParentheses(str))
   {
     cout<<"duplicateParentheses found";
   }else{
      cout<<"No DuplicateParentheses";
   }
   return 0;
}
   Q->Given a expression that can contain openeing and closing parentheses,check if it
   contain any duplicate parenthesis or not.
   Input:((x+y))+z
   Output:true
   Expression:Duplicate()found in subexpression((x+y))


   

#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

bool isDublicate(string str){
   stack<char>s;
for (int i = 0; i < str.size(); i++)
{
   char ch=str[i];
   if (ch!=')')
   {//non-closing
      s.push(ch);
   }else{
      if (s.top()=='(')
      {
        return true;
      }
      while(s.top()!='('){
         s.pop();
      }
      s.pop();
   }

}
 return false;
}

int main (){
 string str1="((a+b))";//Invalid:false
 string str2="((a+b)+(c+d))";// valid:tr
 cout<<isDublicate(str1)<<endl;//1
 cout<<isDublicate(str1)<<endl;//0
 return 0;

}

Maximum Area in Histogram (Largest Rectangle in Histogram)
Problem Statement

Given an array representing the heights of histogram bars, find the largest rectangular area that can be formed.
input
 Height=[2,1,5,6,2,3]
 Histogram:

        █
      █ █
      █ █
█     █ █     █
█ █   █ █ █   █
█ █ █ █ █ █ █ █
-------------------
2 1 5 6 2 3

Output=10
The maximum rectangle is formed using the bars with heights 5 and 6, giving:

Area = 5 × 2 = 10

Concept

For every bar, consider it as the smallest bar in a rectangle.

To compute the maximum rectangle using that bar:

Find the Nearest Smaller to Left (NSL).
Find the Nearest Smaller to Right (NSR).

Width = NSR - NSL - 1

Area = Height × Width

| Height | NSL | NSR | Width | Area |
| ------ | --- | --- | ----- | ---- |
| 2      | -1  | 1   | 1     | 2    |
| 1      | -1  | 6   | 6     | 6    |
| 5      | 1   | 4   | 2     | 10   |
| 6      | 2   | 4   | 1     | 6    |
| 2      | 1   | 6   | 4     | 8    |
| 3      | 4   | 6   | 1     | 3    |


Step 3

For every index,

width = nsr[i] - nsl[i] - 1
 #include <iostream>
#include <vector>
#include <stack>
using namespace std;

int maxAreaHistogram(vector<int> &height) {

    int n = height.size();

    vector<int> nsl(n), nsr(n);

    stack<int> s;

    // ---------- Nearest Smaller Left ----------
    for (int i = 0; i < n; i++) {

        while (!s.empty() && height[s.top()] >= height[i])
            s.pop();

        if (s.empty())
            nsl[i] = -1;
        else
            nsl[i] = s.top();

        s.push(i);
    }

    while (!s.empty())
        s.pop();

    // ---------- Nearest Smaller Right ----------
    for (int i = n - 1; i >= 0; i--) {

        while (!s.empty() && height[s.top()] >= height[i])
            s.pop();

        if (s.empty())
            nsr[i] = n;
        else
            nsr[i] = s.top();

        s.push(i);
    }

    int maxArea = 0;

    // ---------- Calculate Area ----------
    for (int i = 0; i < n; i++) {

        int width = nsr[i] - nsl[i] - 1;

        int area = height[i] * width;

        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main() {

    vector<int> height = {2,1,5,6,2,3};

    cout << "Maximum Area = " << maxAreaHistogram(height);

    return 0;
}
    

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int maAreaHistogram(vector<int> height) {

    vector<int> nsl(height.size());
    vector<int> nsr(height.size());

    stack<int> s;

    // Next Smaller Left
    nsl[0] = -1;
    s.push(0);

    for (int i = 1; i < height.size(); i++) {

        int curr = height[i];

        while (!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }

        if (s.empty()) {
            nsl[i] = -1;
        } else {
            nsl[i] = s.top();
        }

        s.push(i);      // Push index
    }

    while (!s.empty()) {
        s.pop();
    }

    // Next Smaller Right
    int n = height.size();

    s.push(n - 1);
    nsr[n - 1] = n;

    for (int i = n - 2; i >= 0; i--) {

        int curr = height[i];

        while (!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }

        if (s.empty()) {
            nsr[i] = n;
        } else {
            nsr[i] = s.top();
        }

        s.push(i);      // Push index
    }

    int maxArea = 0;

    for (int i = 0; i < n; i++) {

        int width = nsr[i] - nsl[i] - 1;
        int area = height[i] * width;

        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main() {

    vector<int> height = {2, 1, 5, 6, 2, 3};

    cout << "Maximum Area = " << maAreaHistogram(height);

    return 0;
}

234. Palindrome Linked List

Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Example 1:

Input: head = [1,2,2,1]
Output: true
Example 2:

Input: head = [1,2]
Output: false


#include<iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked List class
class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = tail = NULL;
    }

    // Insert at end
    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    // Print Linked List
    void printList() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Reverse a linked list
    Node* reverse(Node* head) {

        Node* prev = NULL;
        Node* curr = head;

        while (curr != NULL) {

            Node* next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }

    // Check Palindrome
    bool isPalindrome() {

        // Empty list or single node
        if (head == NULL || head->next == NULL)
            return true;

        // Find middle
        Node* slow = head;
        Node* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        Node* secondHalf = reverse(slow->next);

        // Compare
        Node* firstHalf = head;
        Node* temp = secondHalf;

        while (temp != NULL) {

            if (firstHalf->data != temp->data)
                return false;

            firstHalf = firstHalf->next;
            temp = temp->next;
        }

        return true;
    }
};

int main() {

    List ll;

    // Example 1: 1 -> 2 -> 2 -> 1
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(2);
    ll.push_back(1);

    cout << "Linked List: ";
    ll.printList();

    if (ll.isPalindrome())
        cout << "Output: true";
    else
        cout << "Output: false";

    return 0;
}


Code
394. Decode String

Given an encoded string, return its decoded string.

The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there will not be input like 3a or 2[4].

The test cases are generated so that the length of the output will never exceed 105.

Example 1:

Input: s = "3[a]2[bc]"
Output: "aaabcbc"


#include<iostream>
#include<string>
#include<stack>
using namespace std;
string decodeString(string s){
   stack<int>countStack;
   stack<string>stringStack;

   string curr="";
   int num=0;

   for ( char ch:s)
   {
      if(isdigit(ch)){
         num=num*10+(ch-'0');
      }
      else if(ch=='['){
         countStack.push(num);
         stringStack.push(curr);

         num=0;
         curr="";
      }
      else if (ch==']')
      {
         int repeat=countStack.top();
         countStack.pop();

         string prev=stringStack.top();
         stringStack.pop();

         while (repeat--)
         {
            prev+=curr;
         }
         curr=prev;
      }
      else{
         curr+=ch;
      }
   }
  return curr;
}
int main (){
  string s="3[a]2[bc]";
  cout<<decodeString(s);
}

71. Simplify Path

You are given an absolute path for a Unix-style file system, which always begins with a slash '/'. Your task is to transform this absolute path into its simplified canonical path.

The rules of a Unix-style file system are as follows:

A single period '.' represents the current directory.
A double period '..' represents the previous/parent directory.
Multiple consecutive slashes such as '//' and '///' are treated as a single slash '/'.
Any sequence of periods that does not match the rules above should be treated as a valid directory or file name. For example, '...' and '....' are valid directory or file names.
The simplified canonical path should follow these rules:

The path must start with a single slash '/'.
Directories within the path must be separated by exactly one slash '/'.
The path must not end with a slash '/', unless it is the root directory.
The path must not have any single or double periods ('.' and '..') used to denote current or parent directories.
Return the simplified canonical path.

 

Example 1:

Input: path = "/home/"

Output: "/home"

Explanation:

The trailing slash should be removed.
  
 #include<iostream>
 #include<stack>
 #include<vector>
 #include<string>
 #include<sstream>
 using namespace std;

 string simplifyPath(string path){
   stack<string>st;
   string token;
   stringstream ss(path);

   while(getline(ss,token,'/')){
   if (token=="" || token==".")
   {
     continue;
   }
   else if(token==".."){
      if (!st.empty())
      {
         st.pop();
      }
   }
   else{
      st.push(token);
      }
    }
    vector<string>dirs;
    while(!st.empty()){
      dirs.push_back(st.top());
      st.pop();
    }
    string ans="";

    for (int i = dirs.size()-1; i >=0; i--)
    {
      ans+="/"+dirs[i];
    }
    if (ans.empty())
    {
      return "/";
    }
    return ans;
 }
int main (){
   string path = "/home/user/Documents/../Pictures";

    cout << simplifyPath(path);

    return 0;
}

Queue
FiFo Data structure(first in first out)
Queue has two part
front and back(rear)
inside in Queue element stor in rare

  front           rare
   :               :
   .................      if  element enter 5 then we enter
   :1 :2:3:4:<--         enter the element in rare side
   ............
   enter->rare                  (1)push() o(1)
   remove ->front                (2)pop() o(1)
                                 (3)front() o(1)
enqueue->add
dequeue->remove

push->push_back
pop->pop-front(one element from front)

    
   #include<iostream>
   using namespace std;
   
   class Node{
    public:
    int data;
    Node* next;
     Node(int data){
       this->data=data;
       this->next=NULL;
     }
   };
   class Queue{
        Node*head;
        Node*tail;
   public:
         Queue(){
            head=tail=NULL;
         }
         void push(int data){
            Node* newNode=new Node(data);
            if (head==NULL)
            {
               head=tail=newNode;
            }
            tail->next=newNode;
            tail=newNode;

         }
         void pop(){
            if(empty()){
               cout<<"queue is empty";
               return;
            }
            Node* temp=head;
            head=head->next;
            delete temp;

         }
         int front(){
            return head->data;
            if (empty())
            {
               cout<<"queue is empty";
               return -1; //when not any validvalue present the prsent -1
            }
            return  head->data;
         }
         bool empty(){

             return head==NULL;
         }
   };
   int main (){
         Queue q;
        q.push(1);
        q.push(2);
        q.push(3);
       while(!q.empty()){
         cout<<q.front()<<endl;
         q.pop();
       }
       return 0;

   }

Circular Queue Implimentation
using Array         (1)push()->rear++
front     rare               push
 :         :         (2)pop()->front++
:1:2:3:4:5:6:                   pop

    r f             r  r
       : : : : : : : 
    -1

rara come to last to initial condtion when this round
 rear=(rear+1)%n

       
#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int capacity;
    int currSize;
    int f, r;

public:
    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int data) {
        if (currSize == capacity) {
            cout << "Queue is FULL\n";
            return;
        }

        r = (r + 1) % capacity;
        arr[r] = data;
        currSize++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return;
        }

        f = (f + 1) % capacity;
        currSize--;
    }

    int front() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return -1;
        }

        return arr[f];
    }

    bool empty() {
        return currSize == 0;
    }
    void printRear(){
      cout<<arr[r]<<endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(4);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);   // Queue is FULL

    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;

    q.push(5);

    cout << q.front() << endl;

    return 0;
}

Queue in stl

#include<iostream>
#include<queue>
using namespace std;

int main (){
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);

   while (!q.empty())
   {
      cout<<q.front()<<endl;
      q.pop();
   }
   return  0;
}
   Queue using 2 Stack

   s1----s2
   push o(n)

    s1                s2
   push o(n)         pop o(n)
   pop-- o(1)       push o(1)
   front--o(1)      ront o(1)

push: s1-->s2
     s1.push(data)
     s2-->s1             front():s.top() o(1)
     s2-->s1  o(n)

     Method 1: Push Efficient

We use two stacks:

Stack 1 (s1) → Stores all new elements.
Stack 2 (s2) → Used only while removing or accessing the front element.

push(10)
s1: 10

push(20)
s1: 10 20

push(30)
s1: 10 20 30

Time Complexity:O(1)
S1: 10 20 30
Top is 30,but the queue should remove 10
Step1: Move everything from s1 to s2
s1: Empty

s2:
30
20
10   <- Top
Now the oldest element (10) is on top.
Step 2: Pop from s2

Removed = 10

Step 3: Move remaining elements back to s1

s1:
20
30

Top = 30
Queue becomes
20 30
Time Complexity: O(n)
The process is the same as pop(), except we do not remove the front element.

Move s1 → s2
Return s2.top()
Move s2 → s1
| Operation | Time     |
| --------- | -------- |
| Push      | **O(1)** |
| Pop       | **O(n)** |
| Front     | **O(n)** |
| Empty     | **O(1)** |


#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    // Insert element
    void push(int x) {
        s1.push(x);
    }

    // Remove front element
    void pop() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return;
        }

        // Move elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Remove front element
        s2.pop();

        // Move elements back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // Return front element
    int front() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return -1;
        }

        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        int ans = s2.top();

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }

        return ans;
    }

    // Check if queue is empty
    bool empty() {
        return s1.empty();
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Front: " << q.front() << endl;

    q.pop();
    cout << "Front after pop: " << q.front() << endl;

    q.push(50);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
    
#include<iostream>
#include<stack>
using namespace std;

class Queue{
   stack<int>s1;
   stack<int>s2;
public:
   void push(int data){
   while (!s1.empty())
   {
      s2.push(s1.top());
      s1.pop();
   }
    s1.push(data);
    while (!s2.empty())
    {
      s1.push(s2.top());
      s2.pop();
    }

   }
   void pop(){
      if (empty())
      {
        cout<<"Queue is empty"<<endl;
        return;
      }
      s1.pop();
   }
   int front(){
     if (empty())
      {
        cout<<"Queue is empty"<<endl;
        return -1;
      }
      return s1.top();
   }
   bool empty(){
     return s1.empty();
   }
};
int main (){
  Queue q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  while (!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
  return 0;
}
              Stack using 2 Queues push o(n)
      push->top  (1)Q1--->Q2
      pop->top   (2)Q1.push(data)
                 (3)Q3->Q1
A Stack can be implemented using Queues in two ways:

Push Efficient (push() → O(1), pop() → O(n))
Pop Efficient (push() → O(n), pop() → O(1))

q1 → Main queue
q2 → Temporary queue

Push (O(n))

Suppose the stack is:

Top               Move all element from q1 to q2
3                        q2:
2                         4
1   We want to push 4     3
                          2
                          1
Step 3: Swap q1 and q2

Now

q1: the front of q1 is always the top of the stack.
4
3     pop(o(1))
2     Simple remove from the front of q1
1      Before
      4321
      After pop
      321

      Top (O(1))
      Return
      q1.front();


 #include<iostream>
 #include<queue>
 using namespace std;
 class Stack{
   queue<int>q1;
   queue<int>q2;
public:
   void push(int x){
   while (!q1.empty())
   {
      q2.push(q1.front());
      q1.pop();
   }
   swap(q1,q2);
    q2.push(x);
   }
   void pop(){
      if (q1.empty())
      {
        cout<<"Stack is empty()";
        return;
      }
     q1.pop();
   }
   int top(){
      if (q1.empty())
      {
         cout<<"Stack is empty()";
         return -1;
      }
      return q1.front();
   }
   bool empty(){
      return q1.empty();
   }

 };
 int main (){
   Stack s;
  s.push(10);
  s.push(20);
  s.push(30);

  while(!s.empty()){
     cout<<s.top()<<" ";
     s.pop();
  }
  return 0;

 }

#include<iostream>
#include<queue>
using namespace std;

class Stack{
   queue<int>q1;
   queue<int>q2;
public:
   void push(int data){
      while (!q1.empty())
      {
         q2.push(q1.front());
         q1.pop();
      }
     q1.push(data);
     while (!q2.empty())
     {
       q1.push(q2.front());
       q2.pop();
     }

   }
   void pop(){
      q1.pop();

   }
   int top(){
      return q1.front();
   }
   bool empty(){
        return q1.empty();

   }

};
int main (){
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  while (!s.empty())
  {
    cout<<s.top()<<endl;
    s.pop();
  }
  return 0;

}
  Non repeating letter
Find 1st-repeating letter in a stream of characters
str=aabccxb
 a       a    int freq[26]={0}
 aa     -1   Queue<char>Q
 aab     b   for(i=0 to str.size[])
 aabc    b   ch=str[i]
 aabcc   b   freq[ch]++
 aabccx  b   Q.push(ch)
 aabccxb x while(!queue() &&freq[Q.front])

 Problem Statement

You are given a stream of characters one by one.

After each character arrives, print the first non-repeating character seen so far.

If there is no non-repeating character, print -1.

| Character Read | Stream So Far | First Non-Repeating |
| -------------- | ------------- | ------------------- |
| a              | a             | a                   |
| a              | aa            | -1                  |
| b              | aab           | b                   |
| c              | aabc          | b                   |
| c              | aabcc         | b                   |
| x              | aabccx        | b                   |
| b              | aabccxb       | x                   |

Increase its frequency:

freq[ch]++;

Push it into the queue:

q.push(ch);

While the front of the queue has frequency greater than 1, remove it:

while (!q.empty() && freq[q.front()] > 1)
    q.pop();

If the queue is empty:

print -1

Otherwise:

print q.front()

Visualiation

Incoming Stream
      |
      v
+-----------------+
|   Frequency[]   |
+-----------------+
      |
      v
+-----------------+
|      Queue      |
| a -> b -> c ... |
+-----------------+
      |
      v
Queue Front = First Non-Repeating Character

#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    void firstNonRepeating(string str) {
        queue<char> q;
        int freq[26] = {0};

        for (int i = 0; i < str.length(); i++) {
            char ch = str[i];

            // Increase frequency
            freq[ch - 'a']++;

            // Push current character into queue
            q.push(ch);

            // Remove repeating characters from the front
            while (!q.empty() && freq[q.front() - 'a'] > 1) {
                q.pop();
            }

            // Print first non-repeating character
            if (q.empty())
                cout << -1 << " ";
            else
                cout << q.front() << " ";
        }

        cout << endl;
    }
};

int main() {
    Solution obj;

    string stream;

    cout << "Enter the stream (lowercase letters): ";
    cin >> stream;

    cout << "First non-repeating characters are:\n";
    obj.firstNonRepeating(stream);

    return 0;
}

Given a queue with an even number of elements, interleave its first half with its second half.
First half:
1 2 3 4
Second half:
5 6 7 8
Output Queue
1 5 2 6 3 7 4 8

Algorithm
Create an empty queue firstHalf.
Move the first n/2 elements into firstHalf.
While firstHalf is not empty:
Push firstHalf.front() into the original queue.
Pop from firstHalf.
Push original.front() into the original queue.
Pop from the front of the original queue.
The queue is now interleaved.

#include<iostream>
#include<queue>
using namespace std;

 void interleave(queue<int>&q){
   queue<int>firsthalf;
   int n=q.size();
   for (int i = 0; i < n/2; i++)
   {
      firsthalf.push(q.front());
      q.pop();
   }
   while (!firsthalf.empty())
   {
      q.push(firsthalf.front());
      firsthalf.pop();

      q.push(q.front());
      q.pop();
   }
 }
int main (){
   queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    interleave(q);
    cout<<"Interleaved Queue:";

    while (!q.empty())
    {
      cout<<q.front()<<" ";
      q.pop();
    }
    return 0;
}
    InterLeave 2 Queue

12345678910
16273849510

first                 org
:1:2:3:4::::         :6:7:8:9:10


while(if.empty()){
  org.push(first.front())
  first.pop()
  org.push(org.front())
  org.pop()
}
    

#include<iostream>
#include<queue>
using namespace std;

void interleave(queue<int>&org){//Time Complexity o(n)
   int n=org.size();            //sc o(n)
    queue<int>first;

    for (int i = 0; i < n/2; i++)
    {
      first.push(org.front());
      org.pop();
    }
    while (!first.empty())
    {
      org.push(first.front());
      first.pop();
    }

}
int main(){
   queue<int>org;
   for (int i = 0; i<=10; i++)
   {
      org.push(i);
   }
   interleave(org);
   for (int i = 0; i <=10; i++)
   {
      cout<<org.front()<<" ";
      org.pop();
   }
   cout<<endl;
   return 0;
}

                      Queue Reveseal
Reverse a queue
Time Complexity: O(n)
Space Complexity: O(n)


#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q){
   stack<int>s;
   while (!q.empty())
   {
      s.push(q.front());
      q.pop();
   }
   while (!s.empty())
   {
      q.push(s.top());
      s.pop();
   }

}
int main (){
   queue<int>q;
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);

   cout<<"Original Queue:";
   queue<int>temp=q;
   while (!temp.empty())
   {
      cout<<temp.front()<<" ";
      temp.pop();
   }
   reverseQueue(q);
   cout<<"\nRevesed Queue:";
   while (!q.empty())
   {
      cout<<q.front()<<" ";
      q.pop();
   }
   return 0;
}
Recursive Method(without using stack)

#include<iostream>
#include<queue>
using namespace std;
void reveseQueue(queue<int>&q){
   if (q.empty())
   {
      return;
   }
   int x=q.front();
   q.pop();

   reveseQueue(q);
   q.push(x);
}
int main (){
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);

   while (!q.empty())
   {
      cout<<q.front()<<" ";
      q.pop();
   }
return 0;

}


#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> s;

    // Move all elements from queue to stack
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    // Move all elements back from stack to queue
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();   // Corrected
    }
}

int main()
{
    queue<int> q;

    // Insert elements into queue
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }

    // Reverse the queue
    reverseQueue(q);

    // Print the reversed queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}

What is a Deque?

A Deque (Double Ended Queue) is a linear data structure in which insertion and deletion can be performed from both the front and the rear.


Real-Life Example

Imagine a line of people where:

A person can join from the front or the back.
A person can leave from the front or the back.

This is exactly how a Deque works.
Representation

Front                               Rear
 ↓                                   ↓
+----+----+----+----+----+
| 10 | 20 | 30 | 40 | 50 |
+----+----+----+----+----+

Types of Deque
1. Input Restricted Deque
Insertion is allowed only at the rear.
Deletion is allowed from both ends

Insert  → Rear only
Delete  → Front or Rear


2. Output Restricted Deque
Insertion is allowed from both ends.
Deletion is allowed only from the front.
Insert  → Front or Rear
Delete  → Front only

| Operation    | Description        | Time Complexity |
| ------------ | ------------------ | --------------- |
| push_front() | Insert at front    | O(1)            |
| push_back()  | Insert at rear     | O(1)            |
| pop_front()  | Delete from front  | O(1)            |
| pop_back()   | Delete from rear   | O(1)            |
| front()      | First element      | O(1)            |
| back()       | Last element       | O(1)            |
| empty()      | Check empty        | O(1)            |
| size()       | Number of elements | O(1)            |


#include<iostream>
#include<deque>
using namespace std;

int main (){
   deque<int>deq;

   deq.push_front(2);
   deq.push_front(1);

   deq.push_back(3);
   deq.push_back(4);

   deq.pop_front();
   deq.pop_back();

   cout<<deq.front();
   cout<<deq.back();
   return 0;
}


#include<iostream>
#include<deque>
using namespace std;
int main (){
deque<int>deq;

   deq.push_back(10);
   deq.push_back(20);
   deq.push_front(5);
   deq.push_front(1);

  cout<<"Dequeue elements";
  for ( int x:deq)
  {
     cout<<x<<" ";
  }
  return 0;
}


| Queue Operation | Deque Function | Time Complexity |
| --------------- | -------------- | --------------- |
| Enqueue         | `push_back()`  | O(1)            |
| Dequeue         | `pop_front()`  | O(1)            |
| Front           | `front()`      | O(1)            |
| Rear            | `back()`       | O(1)            |
| Empty           | `empty()`      | O(1)            |
| Size            | `size()`       | O(1)            |



#include<iostream>
#include<deque>
using namespace std;

class Queue{
   deque<int>deq;
   //Enqueue
   public:
   void push(int x){
     deq.push_back(x);
   }
   void pop(){
    if (deq.empty())
    {
      cout<<"Queue is empty\n";
      return;
    }
    deq.pop_front();

   }
   int front(){
      if (deq.empty())
      {
         cout<<"Queue is empty\n";
         return -1;
      }
      return deq.front();

   }
   bool empty(){
      return deq.empty();

   }
   void display(){
      if (deq.empty())
      {
         cout<<"Queue is empty\n";
         return;
      }
      for (int x:deq)
      {
         cout<<x<<" ";
      }
      cout<<endl;

   }
};
int main (){
  Queue q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);

  cout<<"Queue:";
  q.display();

  cout<<"front Element:"<<q.front()<<endl;
  q.pop();

  cout<<"After Dequeue";
  q.display();

  return 0;
}

                Queue using Deque

#include<iostream>
#include<deque>
using namespace std;
class Queue{
  deque<int>deq;
  public:
  void push(int data){
     deq.push_back(data);
  }
  void pop(){
    deq.pop_front();
  }
  int front(){
   return deq.front();
  }
  bool empty(){
   return deq.empty();
  }
};
int main (){
   Queue q;
   for (int i = 1; i <=5; i++)
   {
      q.push(i);
   }
   for (int i = 1; i <=5; i++)
   {
      cout<<q.front()<<endl;
      q.pop();
   }
   return 0;
}

For a stack using a deque:

Push → push_back()
Pop → pop_back()
Top → back()
| Stack Operation | Deque Function | Time Complexity |
| --------------- | -------------- | --------------- |
| Push            | `push_back()`  | O(1)            |
| Pop             | `pop_back()`   | O(1)            |
| Top             | `back()`       | O(1)            |
| Empty           | `empty()`      | O(1)            |
| Size            | `size()`       | O(1)            |


#include<iostream>
#include<stack>
#include<deque>
using namespace std;
class Stack{
   deque<int>deq;
public:
   void push(int x){
      deq.push_back(x);
   }
   void pop(){
      if (deq.empty())
      {
         cout<<"Stack is empty\n";
         return;
      }

      deq.pop_back();

   }
   int front(){
     if (deq.empty())
     {
      cout<<"Stack is empty\n";
      return -1;
     }
     return deq.back();
   }
   bool empty(){
      return deq.empty();
   }
   void display(){
      if (deq.empty())
      {
         cout<<"Stack is empty\n";
         return;
      }
      for (int x:deq)
      {
         cout<<x<<" ";
      }
      cout<<endl;
   }
   
};
int main (){
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  cout<<"Stack:";
  s.display();

  cout<<"Top Element:"<<s.front()<<endl;
  s.pop();

  cout<<"After pop:";
  s.display();

  cout<<"Front Element:"<<s.front()<<endl;
  return 0;

}

2073. Time Needed to Buy Tickets

There are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the (n - 1)th person is at the back of the line.

You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i].

Each person takes exactly 1 second to buy a ticket. A person can only buy 1 ticket at a time and has to go back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, the person will leave the line.

Return the time taken for the person initially at position k (0-indexed) to finish buying tickets.

Example 1:

Input: tickets = [2,3,2], k = 2

Output: 6



Concept

Each person buys 1 ticket per turn.

If a person still needs tickets, they go to the back of the queue.
If they have bought all their tickets, they leave the queue.
We need to find the time when the person at index k finishes buying all tickets.

Optimized Observation (O(n))

Instead of simulating the queue, count how many times each person will buy a ticket before person k finishes.


Let target = tickets[k].

If i <= k, person i can buy at most:

min(tickets[i], target)

If i > k, person i can buy at most:

min(tickets[i], target - 1)

because after person k buys their last ticket, people behind k do not get another turn.
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int timeRequiredToBuy(vector<int>&tickets,int k){
   queue<pair<int,int>>q;

   //store(persion index,ticket remaing)
  for (int i = 0; i <tickets.size(); i++)
  {
     q.push({i,tickets[i]});
  }
  int time=0;
  while (!q.empty())
  {
    pair<int,int>person=g.front();
    q.pop();

    //Buy one ticket
    person.second--;
    time++;                                                                                                                                                                                                                                                                                                                    
  }
  
}
int main (){
   int n;
   vector<int>tickets(n);
   cout<<"Enter number of people:";
   cin>>n;

   cout<<"Enter tickets requird by each persion:";
   for (int i = 0; i < n; i++)
   {
      cin>>tickets[i];
   }
   int k;
   cout<<"enter the position(k):";
   cin>>k;
}

There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.



Example 1:

Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
Output: 3
Explanation:
Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 4. Your tank = 4 - 1 + 5 = 8
Travel to station 0. Your tank = 8 - 2 + 1 = 7
Travel to station 1. Your tank = 7 - 3 + 2 = 6
Travel to station 2. Your tank = 6 - 4 + 3 = 5
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.

Concept

At each station:

You gain gas[i] units of fuel.
You spend cost[i] units to reach the next station.

The fuel left after leaving station i is:

tank = tank + gas[i] - cost[i]

Key Observations
If the total gas < total cost, completing the circuit is impossible, so return -1.
If your tank becomes negative at station i, then none of the stations from the current start to i can be the answer.
Set the next station (i + 1) as the new starting point and continue.

Algorithm
Initialize:
totalGas = 0
totalCost = 0
tank = 0
start = 0
Traverse all stations.
Add gas and cost to totals.

Update:

tank += gas[i] - cost[i];

If tank < 0:
start = i + 1
tank = 0
After the loop:
If totalGas < totalCost, return -1.
Otherwise, return start.

Method1->
 
#include<iostream>
#include<vector>
using namespace std;

int canCompleteCircuit(vector<int>&gas,vector<int>&cost){
         int totalGas=0;
         int totalCost=0;
         int tank=0;
         int start=0;

         for (int i = 0; i <gas.size(); i++)
         {
            totalGas+=gas[i];
            totalCost+=cost[i];

            tank+=gas[i]-cost[i];
            //Cannot reach the next station
            if (tank<0)
            {
               start=i+1;
               tank=0;
            }
         }
         if (totalGas<totalCost)
         {
            return -1;

            return start;
         }
}
int main (){
   int n;
   cout<<"Enter number of gas station:";
   cin>>n;

   vector<int>gas(n),cost(n);

   cout<<"Enter gas array:";
   for (int i = 0; i < n; i++)
   {
      cin>>gas[i];
   }
   cout<<"Enter cost array:";
   for (int i = 0; i < n; i++)
   {
      cin>>cost[i];
   int ans= canCompleteCircuit(gas,cost);

   if (ans==-1)
   {
      cout<<"No possible starting station."<<endl;
   }else{
      cout<<"Starting station Index="<<ans<<endl;
   }
    return 0;
   }
}
   Method2->

#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int canCompleteCircuit(vector<int>&gas,vector<int>&cost){
   int n=gas.size();

   for (int start = 0; start < n; start++)
   {
      deque<int>deq;
      //Build the circular order starting from 'start'
      for (int i = 0; i < n; i++)
      {
         deq.push_back((start+i)%n);
      }
      int tank=0;
      bool possible=true;

      while (!deq.empty())
      {
         int i=deq.front();
         deq.pop_front();

         tank+=gas[i];
         if (tank<cost[i])
         {
            possible=false;
            break;
         }
         tank-=cost[i];
      }
      if (possible)
      {
        return start;
      }
      return -1;

   }

}

int main (){
 int n;
 cout<<"Enter number of station:";
 cin>>n;

 vector<int>gas(n),cost(n);
 cout<<"Enter gas array(n)";
 for (int i = 0; i < n; i++)
 {
  cin>>gas[i];
 }
 cout<<"Enter cost array:";
 for (int i = 0; i < n; i++)
 {
   cin>>cost[i];
 }
 cout<<"Starting station Index="<< canCompleteCircuit(gas,cost)<<endl;

 return 0;
}



Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
int get(int key) Return the value of the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
The functions get and put must each run in O(1) average time complexity.



Example 1:

Input
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
Output
[null, null, null, 1, null, -1, null, -1, 3, 4]

Explanation
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // cache is {1=1}
lRUCache.put(2, 2); // cache is {1=1, 2=2}
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4

Concept

LRU (Least Recently Used) means:

When the cache is full, remove the item that has not been used for the longest time.
Whenever an item is accessed (get) or updated (put), it becomes the Most Recently Used (MRU).

To achieve O(1) time for both get() and put(), use:

Doubly Linked List – stores cache entries in order of use.
Front = Most Recently Used (MRU)
Back = Least Recently Used (LRU)
Hash Map (unordered_map) – maps a key to its node in the linked list for O(1) lookup.


Data Structure
unordered_map<Key, Node*>

                Doubly Linked List

HEAD <-> (3,30) <-> (1,10) <-> (2,20) <-> TAIL
          MRU                              LRU


          Algorithm
get(key)
If key is not present → return -1.
Otherwise:
Move the node to the front (MRU).
Return its value.
put(key, value)
If key already exists:
Update its value.
Move it to the front.
Otherwise:
If cache is full:
Remove the node before tail (LRU).
Delete it from the hash map.
Insert the new node at the front.
Add it to the hash map.

#include <iostream>
#include <unordered_map>
using namespace std;

// Doubly Linked List Node
class Node
{
public:
    int key;
    int value;
    Node *prev;
    Node *next;

    Node(int k, int v)
    {
        key = k;
        value = v;
        prev = next = NULL;
    }
};

class LRUCache
{
private:
    int capacity;
    unordered_map<int, Node*> mp;

    Node *head;
    Node *tail;

    // Add node after head (MRU position)
    void addNode(Node *node)
    {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    // Remove node
    void deleteNode(Node *node)
    {
        Node *previous = node->prev;
        Node *forward = node->next;

        previous->next = forward;
        forward->prev = previous;
    }

public:

    LRUCache(int cap)
    {
        capacity = cap;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key)
    {
        if (mp.find(key) == mp.end())
            return -1;

        Node *node = mp[key];

        deleteNode(node);
        addNode(node);

        return node->value;
    }

    void put(int key, int value)
    {
        if (mp.find(key) != mp.end())
        {
            Node *existing = mp[key];

            deleteNode(existing);
            mp.erase(key);
        }

        if (mp.size() == capacity)
        {
            Node *lru = tail->prev;

            deleteNode(lru);
            mp.erase(lru->key);

            delete lru;
        }

        Node *newNode = new Node(key, value);

        addNode(newNode);

        mp[key] = newNode;
    }
};

int main()
{
    LRUCache cache(2);

    cache.put(1, 1);
    cache.put(2, 2);

    cout << cache.get(1) << endl;

    cache.put(3, 3);

    cout << cache.get(2) << endl;

    cache.put(4, 4);

    cout << cache.get(1) << endl;
    cout << cache.get(3) << endl;
    cout << cache.get(4) << endl;

    return 0;
}

Greedy Approach
Make the greedy choice at all steps
choice the local optimum & hope for global optimum

    
Greedy Algorithm (Detailed Notes with C++ Examples)
What is a Greedy Algorithm?

A Greedy Algorithm is an algorithmic technique that makes the best possible choice at each step with the hope of finding the global (overall) optimum solution.

It never goes back to reconsider previous choices.

Definition

A Greedy Algorithm solves a problem by repeatedly choosing the locally optimal (best immediate) option at each step.

Real-Life Example

Suppose you have ₹100 and you want to make the amount using the minimum number of currency notes.

Available notes:

₹500 ₹200 ₹100 ₹50 ₹20 ₹10 ₹5 ₹2 ₹1

For ₹289:

Take ₹200
Take ₹50
Take ₹20
Take ₹10
Take ₹5
Take ₹2
Take ₹2

The greedy choice is to always take the largest possible note first.

1. Greedy Choice Property

A globally optimal solution can be reached by making locally optimal choices.

Example:

Activity Selection
Fractional Knapsack

. Optimal Substructure

The optimal solution can be built from optimal solutions of subproblems.

Example 1: Coin Change (Indian Coins)
Problem

Find the minimum number of coins to make a given amount.

#include<iostream>
#include<vector>
using namespace std;

int main (){
   vector<int>coins={500,200,100,50,20,10,2,1};
   int amount=189;
   cout<<"Coins Used:";

   for (int coins:coins)
   {
      while (amount>=coins)
      {
         cout<<coins<<" ";
         amount-=coins;
      }

   }
return 0;
}

Example 2: Activity Selection
Problem

Select the maximum number of non-overlapping activities.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity
{
    int start;
    int finish;
};

bool compare(Activity a, Activity b)
{
    return a.finish < b.finish;
}

int main()
{
    vector<Activity> act =
    {
        {1,2},
        {3,4},
        {0,6},
        {5,7},
        {8,9},
        {5,9}
    };

    sort(act.begin(), act.end(), compare);

    cout << "Selected Activities:\n";

    int lastFinish = act[0].finish;
    cout << "(" << act[0].start << "," << act[0].finish << ")\n";

    for (int i = 1; i < act.size(); i++)
    {
        if (act[i].start >= lastFinish)
        {
            cout << "(" << act[i].start << "," << act[i].finish << ")\n";
            lastFinish = act[i].finish;
        }
    }

    return 0;
}

Greedy Approach
choice the local optimum & hope for global optimum

Given element his type
:1:2:3:4:5:6:7:
if we are going to every stepof arry find the max then also findout overall max
find the largest and minimul

optimal sub-structure property

A problem is said to have an optional sub- structure if  it can
be divided into sub-problems whose optional solution are part  of overall optimal solution.

Activity Selection
Select the max no.of activity that can be performed by a single person
(a person can work on one activity at a time)

start=[10,12,20]
end=[20,25,30]
    A0  A1 A2

when activity overlap then select only one
(1)sort activitys on end time
(2)for(i=0 to n)
 non overlapping select
 non-overlap:1st end<=2nd start
                   ................A5
                   ........
      A2............... A3
          A0   A1             ....A4
      ...:.:..:..:.....................
      0  1 2  3  4  5  6  7   8  9
A0 currEnd=2
A1 currEnd=4
A3 currEnd=7
A4 currEnd=9

Why not sort on basis of start time?

start=[0,1,3]
end=[9,2,4]

    ....  ...
  .....................
  ..........................
  0  1  2 3  4 5 6 7 8 9

  we are not sort in start
    
   #include<iostream>
   #include<vector>
   using namespace std;

   int maxActivities(vector<int>start,vector<int>end){
      cout<<"Selecting A0 \n";
      int count=1;
      int currEndTime=end[0];

      for (int i = 0; i <=start.size(); i++)
      {
         if(start[i]>=currEndTime){//non-overlapping
            cout<<"selecing A"<<i<<endl;
            count++;
            currEndTime=end[i];
         }
      }
      return count;
   }

   int main (){
      vector<int>start={1,3,0,5,8,9};
      vector<int>end={2,4,6,7,8,9};

      cout<<maxActivities(start,end)<<endl;

      return 0;
   }

   stL container to store 2 objects

 start=[0,1,3]
 end=[9,2,4]

 A0->(0,9)
 A1->(1,2)
 A2->(3,4)
   
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Compare function to sort according to ending time
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end   = {2, 4, 6, 7, 9, 9};

    int n = start.size();

    // Store activities as (start, end)
    vector<pair<int, int>> activity;

    for (int i = 0; i < n; i++)
    {
        activity.push_back(make_pair(start[i], end[i]));
    }

    // Sort according to ending time
    sort(activity.begin(), activity.end(), compare);

    cout << "Activities after sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Activity " << i + 1 << " : ("
             << activity[i].first << ", "
             << activity[i].second << ")" << endl;
    }

    cout << "\nSelected Activities:\n";

    // Select the first activity
    int count = 1;
    cout << "(" << activity[0].first << ", "
         << activity[0].second << ")" << endl;

    int lastEnd = activity[0].second;

    // Select remaining compatible activities
    for (int i = 1; i < n; i++)
    {
        if (activity[i].first >= lastEnd)
        {
            cout << "(" << activity[i].first << ", "
                 << activity[i].second << ")" << endl;

            count++;
            lastEnd = activity[i].second;
        }
    }

    cout << "\nMaximum Activities = " << count << endl;

    return 0;
}
    Fractional Knapsack

value=[60,100,120]   (1)calculate
weight=[10,20,30]           value/wt=ratio
w=50                         (2)sort(disending)=ratio
ans=240                      (3)for(int i=0 to n){
ratio=[6,5,4]                  if(wt[i]<=w)
ratio come to any arrange      ans+=val[i]
this decending order           w-=wt[i] }
                              else{
                               ans+=(ratio[i]*w)
                               w=0
                               break;
                              }

Time Complexity
Calculating ratios: O(n)
Sorting: O(n log n)
Traversing items: O(n)

Overall Time Complexity: O(n log n)
    
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<double,int>p1,pair<double,int>p2){
   return p1.first>p2.first; //descending
}

int fractionalKnapsack(vector<int>val,vector<int>wt,int W){
  int n=val.size();
  vector<pair<double,int>>ratio(n,make_pair(0.0,0));
  for (int i = 0; i < n; i++)
  {
     double r=val[i]/(double)wt[i];
     ratio[i]=make_pair(r,i);
  }
 sort(ratio.begin(),ratio.end(),compare);
 int ans=0;
  for (int i = 0; i <n; i++)
  {
    int idx=ratio[i].second;
    if (wt[idx]<=W)
    {
       ans+=val[idx];
       W-=wt[idx];
    }else{
      ans+=ratio[i].first*W;
      W=0;
      break;
    }
  }
  cout<<"max value="<<ans<<endl;
  return ans;
}
int main(){
   vector<int>val={60,100,120};
   vector<int>wt={10,20,30,};
   int w=50;

   fractionalKnapsack(val,wt,w);
   return 0;

}
   Min Absolute Difference Pairs
Pair element of A & B to minimize sum of absolute 
differences between pairs.

A[n]={1,2,3}           smaller-->smaller
B[n]={2,1,3}           larger--->larger

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main (){
   vector<int>A={4,1,8,7};
   vector<int>B={2,3,6,5};

   sort(A.begin(),A.end());
   sort(B.begin(),B.end());

   int absDiff=0;
   for (int i = 0; i <A.size(); i++)
   {
      absDiff+=abs(A[i]-B[i]);
   }
   cout<<"MIN abs diff="<<absDiff<<endl;
   return 0;
}
      Max length Chain of Pairs
A pair (c,d)can come after pair(a,b) if b<c.
Find the longest chain which can be formed from a given set
of pairs.

pairs=
(5,24)
(39,60)
(27,40)
(50,90)

    .....................................
    0  10  20  30  40  50  60  70  80  90
    forming logest chain
(1)Sort the pairs=2nd numbers
(2)PO chainLen=1
       currEnd=24
(3)for(int i=1 to n)
  non-overlapping

  ithpair[first]>currSearch

   
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2){
   //asecending
   return p1.second<p2.second;
}

int maxChainLength(vector<pair<int,int>>pairs){
   int n=pairs.size();

   sort(pairs.begin(),pairs.end(),compare);
   int ans=1;
   int currEnd=pairs[0].second;

   for (int i = 0; i < n; i++)
   {
      if (pairs[i].first>currEnd)
      {
         ans++;
         currEnd=pairs[i].second;
      }
   }
   cout<<"max chain length="<<ans<<endl;
   return ans;
}

int main (){
   int n=5;
   vector<pair<int,int>>pairs(n,make_pair(0,0));
 pairs[0]=make_pair(5,24);
pairs[1]=make_pair(39,60);
pairs[0]=make_pair(5,28);
pairs[0]=make_pair(27,40);
pairs[0]=make_pair(50,90);

maxChainLength(pairs);

return 0;
}
Indian Coins
We are given an infinite supply of denominations[1,2,5,10,20,50,100,500,2000]
Find min no. of coins to  make change for value V.

v=121             no of coins(dec)value(inc)=>descending
ans=3(100+20+1)   for(i=n;i>=0 && v>0;i--){
                       if(v>=coins[i]){
v=590                     ans+=v/coins[i]
ans=4(500+50+20+20)        v=v%coins[i]}}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getMinChange(vector<int>coins,int V){
   int ans=0;
   int n=coins.size();

   for (int i =n-1; i >=0 && V>0; i--)
   {
      if (V>=coins[i])
      {
         ans+=V/coins[i];
         V=V%coins[i];
      }
   }
  cout<<"min coins for change="<<ans<<endl;
}

int main(){
   vector<int>coins={1,2,5,20,50,100,500,2000};//o(nlogn)
   int v=590;

   getMinChange(coins,v);
   return 0;
}

Job Sequencing Problem

Maximize the total profit if only one job can be scheduled
at a time

job A=4,20  (1)sort jobs discading basic of broblem
job B=1,10   (2)select jobother
job c=1,40   (3)for(i=0 to n)
job D=1,30

if(job[deadline]>=safeDeadline)
  profit +=job[profit];
  safeDedline++;


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2){
   return p1.second>p2.second;
}

int maxProfit(vector<pair<int,int>>jobs){
  sort(jobs.begin(),jobs.end(),compare);

  int profit=jobs[0].second;
  int safeDeadline=2;

  for (int i = 0; i <jobs.size(); i++)
  {
    if (jobs[i].first>=safeDeadline)
    {
      if(jobs[i].first>=safeDeadline){
         profit+=jobs[i].second;
         safeDeadline++;
      }
    }
   cout<<"max profit from jobs:"<<profit<<endl;
  }

}
int main (){
   int n=4;
   vector<pair<int,int>>jobs(n,make_pair(0,0));
   jobs[0]=make_pair(4,20);
   jobs[1]=make_pair(1,10);
   jobs[2]=make_pair(1,40);
   jobs[0]=make_pair(1,30);

   maxProfit(jobs);

}

      job Sequencing Problem
Job A=4,20(0)
Job B=1,10(1)
Job C=1,40(2)
Job D=1,30(3)  (idx,deadline,profit)


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class job{
    public:
     int idx;
     int deadline;
     int profit;

     job(int idx,int deadline,int profit){
        this->idx=idx;
        this->deadline=deadline;
        this->profit=profit;
     }
};
int maxProfit(vector<pair<int,int>>pairs){
    int n=pairs.size();
    vector<job>jobs;
  for (int i = 0; i < n; i++)
  {
   jobs.emplace_back(i,pairs[i].first,pairs[i].second);//idx,deadline,profit
  }
  sort(jobs.begin(),jobs.end(),[](job &a,job &b){
      return a.profit>b.profit;
  }); //descending order on the basis of profit

    cout<<"selecting job"<<jobs[0].idx<<endl;
    int profit=jobs[0].profit;
    int safeDeadline=2;

    for (int i = 1; i < n; i++)
    {
    if(jobs[i].deadline>=safeDeadline){
       cout<<"selecting Job"<<jobs[i].idx<<endl;
       profit+=jobs[i].profit;
       safeDeadline++;
     }
    }
 cout<<"maxprofit="<<profit<<endl;
 return profit;
}
int main (){
   int n=4;
   vector<pair<int,int>>jobs(n,make_pair(0,0));
   jobs[0]=make_pair(4,20);
   jobs[1]=make_pair(1,10);
   jobs[2]=make_pair(1,40);
   jobs[0]=make_pair(1,30);

  maxProfit(jobs);
  return 0;

}

 #include<iostream>
 #include<string>
 using namespace std;

 class Solution{
   public:
    int balancedStringSplit(string s){
      int balance=0;
      int count=0;

      for(char ch:s){
         if (ch=='R')
            balance++;
         else
            balance--;
         if(balance==0)
            count++;
      }
      return count;
    }
 };
 int main (){
   Solution obj;

   string s="RLRRLLRLRL";
   cout<<"Maximum Balanced Strings="<<obj.balancedStringSplit(s)<<
   endl;
   return 0;
 }
1221. Split a String in Balanced Strings
Easy
Topics
premium lock icon
Companies
Hint
Balanced strings are those that have an equal quantity of 'L' and 'R' characters.

Given a balanced string s, split it into some number of substrings such that:

Each substring is balanced.
Return the maximum number of balanced strings you can obtain.

Example 1:

Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.

#include<iostream>
#include<string>
using namespace std;

class Solution{
   public:
     int balancedStringSplit(string s){
        int balance=0;
        int count=0;

        for(char ch:s){
         if(ch=='R')
            balance++;
         else
            balance--;
         if(balance==0)
           count++;
        }
        return count;
     }

};

int main (){
   Solution obj;
  string s="RLRRLLRLRL";
  cout<<"Maximum Balanced Strings"<<obj.balancedStringSplit(s)<<endl;
  return 0;
}

GreedyAlgorithms(AssignmentQuestions)Question2:LargestOddNumberinStringYouaregivenastringnum,representingalargeinteger.Returnthelargest-valuedoddinteger(asastring)thatisanon-emptysubstringofnum,oranemptystring""ifnooddintegerexists.Asubstringisacontiguoussequenceofcharacterswithinastring.[GotoQs]Examples:Input:num="52"Output:"5"Explanation

You are given a string num representing a large integer.

Return the largest-valued odd integer (as a string) that is a non-empty substring of num. If no odd integer exists, return an empty string "".

input="52"
output:
"5"
Explanation:
"52"is even becouse it ends with 2.
"5" is odd.
Hence,the largest odd substring is "5".

Approach

A number is odd if its last digit is:

1, 3, 5, 7, or 9.

So, start from the end of the string and find the first odd digit.

If found at index i, return num.substr(0, i + 1).
Otherwise, return "".

Time Complexity
O(n) (single traversal)
Space Complexity
O(1) (only two integer variables)

The balance variable tracks the difference between the number of 'R' and 'L' characters:

balance > 0 → more 'R'
balance < 0 → more 'L'
balance == 0 → equal numbers of 'R' and 'L', so a balanced substring is complete. Cutting at every such point maximizes the number of balanced substrings.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution{
   public:

   int balancedStringSplit(string s){
      int balance=0;
      int count=0;
          for(char ch:s){
            if(ch=='R')
             balance++;
            else
             balance--;

             if(balance==0)
             count++;
          }
          return count;
   }

};
int main (){
  Solution obj;
  string s="RLRRLLRLRL";
  cout<<"Maximum Balamce strings"<<obj.balancedStringSplit(s)<<endl;
  return 0;
}

1663. Smallest String With A Given Numeric Value

The numeric value of a lowercase character is defined as its position (1-indexed) in the alphabet, so the numeric value of a is 1, the numeric value of b is 2, the numeric value of c is 3, and so on.

The numeric value of a string consisting of lowercase characters is defined as the sum of its characters' numeric values. For example, the numeric value of the string "abe" is equal to 1 + 2 + 5 = 8.

You are given two integers n and k. Return the lexicographically smallest string with length equal to n and numeric value equal to k.

Note that a string x is lexicographically smaller than string y if x comes before y in dictionary order, that is, either x is a prefix of y, or if i is the first position such that x[i] != y[i], then x[i] comes before y[i] in alphabetic order.



Example 1:

Input: n = 3, k = 27
Output: "aay"
Explanation: The numeric value of the string is 1 + 1 + 25 = 27, and it is the smallest string with such a value and length equal to 3.

Approach (Greedy)

To get the lexicographically smallest string:

Keep the leftmost characters as small as possible ('a').
Fill the string from right to left with the largest characters possible.
Algorithm
Initialize a string of length n with all 'a'.
Since every 'a' contributes 1, subtract n from k.
Now k represents the extra value we need to distribute.
Start from the last character:
Add at most 25 to the current 'a'.
Update the character.
Reduce k.
Continue until k becomes 0.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution{
   public:

    string getSmallestString(int n,int k){
      string ans(n,'a');//Initially fill the string with 'a
      k=k-n;//Every a contribute 1
      for (int i = n-1; i >=0 && k>0; i--)
      {
         int add=min(25,k);
         ans[i]=ans[i]+add;
         k=k-add;
      }
      return ans;
    }
};
int main (){
   Solution obj;
   int n=3;
   int k=27;

   cout<<obj.getSmallestString(n,k);
   return 0;
}

 Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell

Approach (Greedy)

The idea is:

Keep track of the minimum stock price seen so far.
For each day's price, calculate the profit if you sell on that day.
Update the maximum profit.

Algorithm
Initialize:
minPrice = prices[0]
maxProfit = 0
Traverse the array:
Update minPrice if the current price is smaller.
Calculate profit = prices[i] - minPrice.
Update maxProfit if this profit is greater.
Return maxProfit.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
   public:
     int maxProfit(vector<int>&prices){
       int minPrice=prices[0];
       int maxProfit=0;
       for (int i = 1; i <prices.size(); i++)
       {
         minPrice=min(minPrice,prices[i]);
         int profit=prices[i]-minPrice;
         maxProfit=max(maxProfit,profit);
       }
       return maxProfit;
     }

};
int main (){
   Solution obj;
   vector<int>prices={7,1,5,3,6,4};
   cout<<"Maximum Profit="<<obj.maxProfit(prices);
   return 0;
}

410. Split Array Largest Sum

Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

Return the minimized largest sum of the split.
A subarray is a contiguous part of the array.

Example 1:

Input: nums = [7,2,5,10,8], k = 2
Output: 18
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.


This problem can be solved using a Greedy Algorithm.

Idea
Traverse the string from left to right.
Keep a counter:
If the character is 'R', increment the counter.
If the character is 'L', decrement the counter.
Whenever the counter becomes 0, it means the number of 'R' and 'L' seen so far is equal, so we have found one balanced substring.
Increase the answer and continue.

This greedy approach gives the maximum number of balanced substrings.

C++ Code
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int count = 0;

        for (char ch : s) {
            if (ch == 'R')
                balance++;
            else
                balance--;

            if (balance == 0)
                count++;
        }

        return count;
    }
};

int main() {
    Solution obj;

    string s = "RLRRLLRLRL";

    cout << "Maximum Balanced Strings = "
         << obj.balancedStringSplit(s) << endl;

    return 0;
}
Output
Maximum Balanced Strings = 4
Dry Run

Input:

s = "RLRRLLRLRL"
Character	Balance	Count
R	1	0
L	0	1
R	1	1
R	2	1
L	1	1
L	0	2
R	1	2
L	0	3
R	1	3
L	0	4

Final Answer:

4
Time Complexity
O(n) (single traversal)
Space Complexity
O(1) (only two integer variables)
Why does this work?

The balance variable tracks the difference between the number of 'R' and 'L' characters:

balance > 0 → more 'R'
balance < 0 → more 'L'
balance == 0 → equal numbers of 'R' and 'L', so a balanced substring is complete. Cutting at every such point maximizes the number of balanced substrings.
Yesterday 11:45 PM
.Question2:LargestOddNumberinStringYouaregivenastringnum,representingalargeinteger.Returnthelargest-valuedoddinteger(asastring)thatisanon-emptysubstringofnum,oranemptystring""ifnooddintegerexists.Asubstringisacontiguoussequenceofcharacterswithinastring.[GotoQs]Examples:Input:num="52"Output:"5"Explanation

If you're getting:

'k' is not defined

then the problem is not std::min. It means the variable k is not in scope at the place where you're using it.

The line

int add = std::min<int>(25, k);

is correct only if it is inside this function:

string getSmallestString(int n, int k)
{
    string ans(n, 'a');
    k -= n;

    for (int i = n - 1; i >= 0 && k > 0; i--)
    {
        int add = std::min<int>(25, k);
        ans[i] = ans[i] + add;
        k -= add;
    }

    return ans;
}
If k is "not defined", then one of these is happening:

You wrote K instead of k in the function parameter:

string getSmallestString(int n, int K)

Then you must use K, not k.

The for loop is outside the function because of an extra }.

The function parameter k is missing:

string getSmallestString(int n)   // Wrong
Please paste your current code exactly as it is (not the old version). I need to see the code you're compiling, because the code you posted earlier does declare k:
string getSmallestString(int n, int k)

If the compiler says k is not defined, then your current code is different from the code you've shown. Paste the entire file, and I'll point to the exact line causing the error.

 Best Time to Buy and Sell Stock
Easy
Topics
premium lock icon
Companies
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell
LeetCode 121. Best Time to Buy and Sell Stock
Approach (Greedy)

The idea is:

Keep track of the minimum stock price seen so far.
For each day's price, calculate the profit if you sell on that day.
Update the maximum profit.
Algorithm
Initialize:
minPrice = prices[0]
maxProfit = 0
Traverse the array:
Update minPrice if the current price is smaller.
Calculate profit = prices[i] - minPrice.
Update maxProfit if this profit is greater.
Return maxProfit.
C++ Code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            minPrice = min(minPrice, prices[i]);

            int profit = prices[i] - minPrice;

            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};

int main() {

    Solution obj;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit = " << obj.maxProfit(prices);

    return 0;
}
Output
Maximum Profit = 5
Dry Run

Input:

prices = [7,1,5,3,6,4]
Day	Price	Minimum Price	Profit	Maximum Profit
1	7	7	0	0
2	1	1	0	0
3	5	1	4	4
4	3	1	2	4
5	6	1	5	5
6	4	1	3	5

Final Answer:

5
Time Complexity
O(n) (single traversal)
Space Complexity
O(1) (only two variables are used)
Another Version (Without min() and max())

If your compiler gives errors with min() or max(), you can write:

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            if (prices[i] < minPrice)
                minPrice = prices[i];

            int profit = prices[i] - minPrice;

            if (profit > maxProfit)
                maxProfit = profit;
        }

        return maxProfit;
    }
};

int main() {
    Solution obj;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << obj.maxProfit(prices);

    return 0;
}

This version avoids using std::min() and std::max() while producing the same result.

410. Split Array Largest Sum
Hard
Topics
premium lock icon
Companies
Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

Return the minimized largest sum of the split.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [7,2,5,10,8], k = 2
Output: 18
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.


Approach (Binary Search + Greedy)

We need to split the array into exactly k non-empty subarrays while minimizing the largest subarray sum.

Instead of trying every split (which is very slow), we binary search on the answer.

Key Idea

The answer (largest subarray sum) lies between:

Minimum possible: the largest element in the array (max(nums))
Maximum possible: the sum of all elements (sum(nums))

We binary search this range.

For each candidate mid, we check if we can split the array into at most k subarrays, where each subarray sum is ≤ mid.

If yes, try a smaller value.
Otherwise, try a larger value.
 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Returns true if array can be split into at most k subarrays
    // such that each subarray sum <= maxSum
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int subarrays = 1;
        int currSum = 0;

        for (int num : nums) {
            if (currSum + num <= maxSum) {
                currSum += num;
            } else {
                subarrays++;
                currSum = num;

                if (subarrays > k)
                    return false;
            }
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = nums[0];
        int high = 0;

        // Find max element and total sum
        for (int num : nums) {
            if (num > low)
                low = num;
            high += num;
        }

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canSplit(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    cout << "Minimum Largest Sum = " << obj.splitArray(nums, k);

    return 0;
}

         Binary Trees
    Hierachical Data Structure
    Each node has at max 2 children

Binary Trees

A Binary Tree is a hierarchical (non-linear) data structure in which each node has at most two children.

The two children are called:

Left Child
Right Child

A binary tree starts with a root node, and every child can itself have two children, forming a tree-like structure.

                Root
                 A
               /   \
              B     C
             / \   / \
            D   E F   G

Here:

A → Root Node
B, C → Children of A
D, E → Children of B
F, G → Children of C
D, E, F, G → Leaf Nodes (no children)


          1
         / \
        2   3
       / \   \
      4   5   6

Explanation:

Root = 1
Left child of 1 = 2
Right child of 1 = 3
Left child of 2 = 4
Right child of 2 = 5
Right child of 3 = 6

      10
     / \
    20 30
20 and 30 are siblings.

7. Ancestors

All nodes from the root to a given node.

        1
       /
      2
     /
    4
8. Descendants
All nodes below a given node.
             1
     / \
    2   3
   /
  4

  Levels in a Binary Tree
             1        ← Level 0
            / \
           2   3      ← Level 1
          / \   \
         4   5   6    ← Level 2

Height of a Binary Tree

The height is the number of edges on the longest path from the root to a leaf.

        1
       /
      2
     /
    3
   /
  4
Height = 3 edges (or 4 nodes on the path).

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main() {
    // Creating nodes
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    return 0;
}
                                    1
                                    /\
                                   2  3
                                  / \  \
                                 4   5  6
                                 /\      \
                                7  8      9


a.Children of 4: 2[7,8]
b.No of Levels:4
c.Parent of 6:3
d.Level of 2: 2
e.Subtrees of 1 & 2:
f.Ancestors of 8:[4,2,1]

Build Tree from Preorder
[1,2,4,-1,-1,5,-1,-1,3,-1,-1,3,-1,6,-1,-1]

                   1
                   /\
                  2  3
                 / \ / \
                4    5 N 6
               / \   / \ / \
               N  N  N  N N N

 
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int idx = -1;

// Function should return Node*
Node* buildTree(vector<int>& nodes) {
    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

// Preorder Traversal
void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};

    Node* root = buildTree(nodes);

    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}
    Tree Traversals
    preorder Traversal
1.Root
2.Left Subtree
3.Right Subtree

void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

 Tree Traversals
    Ineorder Traversal
1.Left Subtree
2.Root
3.Right Subtree

Tree  Traversals
Postorder traversal
.Left Subtree
.Right Subtree
.Root

Tree traversals

Level Order traversal

Tree Traversal in C++

Tree traversal means visiting every node of a tree exactly once in a specific order.

There are two main types of tree traversal:

Breadth First Search (BFS) → Level Order Traversal
Depth First Search (DFS) → Preorder, Inorder, Postorder


          1
        /   \
       2     3
      / \   / \
     4   5 6   7

Traversal Order:
1
2 3
4 5 6 7

Output:
1 2 3 4 5 6 7

Algorithm
Create an empty queue.
Push the root node into the queue.
While the queue is not empty:
Remove the front node.
Print its value.
Push its left child.
Push its right child.
Repeat until the queue becomes empty.

iQueue
Start
[1]

↓

Pop 1

Output:1

Push 2 3

[2 3]

↓

Pop 2

Output:1 2

Push 4 5

[3 4 5]

↓

Pop 3

Output:1 2 3

Push 6 7

[4 5 6 7]

↓

Pop 4

[5 6 7]

↓

Pop 5

[6 7]

↓

Pop 6

[7]

↓

Pop 7

[]ostream>

#include<iostream>
#include <vector>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int idx = -1;

// Function should return Node*
Node* buildTree(vector<int>& nodes) {
    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

// Preorder Traversal
void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
   if (root==NULL)
   {
      return;
   }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}
void postorder(Node* root){
   if (root==NULL)
   {
      return;
   }

   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
}
void levelOrder(Node* root){
  if(root==NULL){
   return;
  }
  queue<Node*>q;
  q.push(root);
  while(!q.empty()){
    Node* curr=q.front();
    q.pop();
    cout<<curr->data<<" ";
    if(curr->left!=NULL)
      q.push(curr->left);

    if (curr->right!=NULL)
       q.push(curr->right);
  }
}

int main() {
   //  vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

   //  Node* root = buildTree(nodes);

   //  cout << "Preorder Traversal: ";
   //  preorder(root);
   // inorder(root);
   // cout<<endl;

   Node*root=new Node(1);

   root->left=new Node(2);
   root->right=new Node(3);

   root->left->left=new Node(4);
   root->left->right=new Node(5);

   root->right->left=new Node(6);
   root->right->right=new Node(7);

   cout<<"level order Traversal:";
   levelOrder(root);
   return 0;
}
 
  #include<iostream>
#include <vector>
#include<queue>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int idx = -1;

// Function should return Node*
Node* buildTree(vector<int>& nodes) {
    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

// Preorder Traversal
void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
   if (root==NULL)
   {
      return;
   }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}
void postorder(Node* root){
   if (root==NULL)
   {
      return;
   }

   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
}
void levelOrder(Node* root){
  if(root==NULL){
   return;
  }
  queue<Node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    Node* curr=q.front();
    q.pop();
    if (curr==NULL)
    {
      if (q.empty())
      {
         break;
      }
      q.push(NULL);//to tran next line
    }else{

    cout<<curr->data<<" ";
    if(curr->left!=NULL)
      q.push(curr->left);

    if (curr->right!=NULL)
       q.push(curr->right);
    }
  }
}

int main() {
   //  vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

   //  Node* root = buildTree(nodes);

   //  cout << "Preorder Traversal: ";
   //  preorder(root);
   // inorder(root);
   // cout<<endl;

   Node*root=new Node(1);

   root->left=new Node(2);
   root->right=new Node(3);

   root->left->left=new Node(4);
   root->left->right=new Node(5);

   root->right->left=new Node(6);
   root->right->right=new Node(7);

   cout<<"level order Traversal:";
   levelOrder(root);
   return 0;
}

(Breadth-First Search - BFS)
| Feature          | BFS (Level Order)                    | DFS (Preorder/Inorder/Postorder)            |
| ---------------- | ------------------------------------ | ------------------------------------------- |
| Data Structure   | Queue                                | Stack or Recursion                          |
| Traversal        | Level by level                       | Goes deep before backtracking               |
| Time Complexity  | O(n)                                 | O(n)                                        |
| Space Complexity | O(w) (maximum width)                 | O(h) (tree height, recursive stack)         |
| Common Uses      | Level-wise processing, shortest path | Tree traversal, searching, expression trees |

          1
        /   \
       2     3
      / \   / \
     4   5 6   7
Level 0 Sum = 1
Level 1 Sum = 5
Level 2 Sum = 22

Explanation:

Level 0: 1 → Sum = 1
Level 1: 2 + 3 = 5
Level 2: 4 + 5 + 6 + 7 = 22


#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void printLevelSum(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    int level = 0;

    while (!q.empty()) {
        int size = q.size();
        int sum = 0;

        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            sum += curr->data;

            if (curr->left)
                q.push(curr->left);

            if (curr->right)
                q.push(curr->right);
        }

        cout << "Level " << level << " Sum = " << sum << endl;
        level++;
    }
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printLevelSum(root);

    return 0;
}

Height of a Binary Tree (Maximum Distance from Root to Leaf)

The height of a binary tree is the maximum number of edges (or nodes, depending on the definition) on the longest path from the root to any leaf node.

A leaf node is a node that has no left child and no right child.

 Example Tree
            1
          /   \
         2     3
        / \     \
       4   5     6
      /
     7
There are several root-to-leaf paths:

1 → 2 → 4 → 7
1 → 2 → 5
1 → 3 → 6
The longest path is:
1 → 2 → 4 → 7

Height in Terms of Edges
The path contains 3 edges.
1 -- 2 -- 4 -- 7
Height = 3

Height in Terms of Nodes

The same path contains 4 nodes.
1 → 2 → 4 → 7
Height = 4

How Does the Algorithm Work?

To find the height:

Find the height of the left subtree.
Find the height of the right subtree.
Take the larger one.
Add 1 for the current node.

Formula:
Height(root) = max(Height(left), Height(right)) + 1

            1
          /   \
         2     3
        / \     \
       4   5     6
      /
     7
Step1:

Left Height = 0
Right Height = 0

Height = max(0,0)+1
       = 1
step2:Node4

Left Height = 1
Right Height = 0

Height = max(1,0)+1
       = 2
step3:Node5
Height = 1

Step 4: Node 2
Left Height = 2
Right Height = 1

Height = max(2,1)+1
       = 3

step5:Node6
Height = 1

step6:Node3
Left Height = 0
Right Height = 1

Height = max(0,1)+1
       = 2

step7:Root(1)
Left Height = 3
Right Height = 2

Height = max(3,2)+1
       = 4

So, the height of the tree is:
Height = 4 (nodes)

Recursive Tree Visualization
height(1)
│
├── height(2)
│   ├── height(4)
│   │   ├── height(7)
│   │   │   ├── 0
│   │   │   └── 0
│   │   │
│   │   └── returns 1
│   │
│   └── height(NULL)=0
│
└── height(3)
    ├── 0
    └── height(6)
Time Complexity = O(n)
Space Complexity

The recursive call stack stores one call per level of the tree.

Best case (balanced tree): O(log n)
Worst case (skewed tree): O(n)

Height: Longest path from the root to any leaf.
Depth of a node: Distance from the root to that node.
Level of a node: Root is at level 0 (or 1 in some conventions), its children are at the next level.


#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* left;
   Node* right;

   Node(int val){
      data=val;
      left=right=NULL;
   }
};
int height(Node* root){
   if (root==NULL)
   {
      return 0;
   }
   int leftHeight=height(root->left);
   int rightHeight=height(root->right);
   return max(leftHeight,rightHeight)+1;
}
int main (){
  Node* root=new Node(1);

  root->left=new Node(2);
  root->right=new Node(3);

  root->left->left=new Node(4);
  root->left->right=new Node(5);

  root->left->left->left=new Node(7);
  root->right->right=new Node(6);

  cout<<"Height of tree="<<height(root);
  return 0;
}

Q->Height of this tree
            1
           /  \
          2    3
         / \
         4  5
             \
              6
               \
                7
Q->
           1
           /\
         2   3
         /\   \
         4 5   6
Count of Nodes

count(root){
    if(root==NULL)
    return 0;

    left=count(root->left)
    right=count(root->right)
    return leftcount+ rightcount+1
}

int  sum(Node* root){
   if (root==NULL)
   {
      return 0;
   }

    int leftSum=sum(root->left);
    int rightSum=sum(root->right);
    int currSum= leftSum+rightSum+root->data;
    cout<<"Sum="<<currSum<<endl;
    return currSum;

 }

#include <iostream>
#include <vector>
#include <algorithm>   // for max()
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Global index for buildTree
int idx = -1;

// Build tree from preorder traversal
Node* buildTree(vector<int> &nodes) {
    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(nodes[idx]);

    root->left = buildTree(nodes);
    root->right = buildTree(nodes);

    return root;
}

// Function to find height
int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}
int count(Node* root){
   int leftCount=count(root->left);
   int rightCount=count(root->right);

   return leftCount+rightCount+1;

}
int  sum(Node* root){
   if (root==NULL)
   {
      return 0;
   }

    int leftSum=sum(root->left);
    int rightSum=sum(root->right);
    int currSum= leftSum+rightSum+root->data;
    cout<<"Sum="<<currSum<<endl;
    return currSum;

 }
int main() {
    vector<int> nodes = {1,2,4,-1,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(nodes);

   //  cout << "Height: " << height(root) << endl;
   // cout<<"count:"<<count(root)<<endl;
    cout<<"sum of nodes:"<<sum(root)<<endl;
    return 0;
}

Diameter  of a tree
No.of nodes in the longest path between 2

The number of edges on the longest path between any two nodes in the tree.

Some textbooks or interview questions define it as:
    A
   / \
  B   C
 /
D
The longest path is D → B → A → C.

Number of nodes = 4
Number of edges = 3
  
#include <iostream>
#include <vector>
#include <algorithm>   // for max()
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Global index for buildTree
int idx = -1;

// Build tree from preorder traversal
Node* buildTree(vector<int> &nodes) {
    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(nodes[idx]);

    root->left = buildTree(nodes);
    root->right = buildTree(nodes);

    return root;
}

// Function to find height
int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}
int count(Node* root){
   int leftCount=count(root->left);
   int rightCount=count(root->right);

   return leftCount+rightCount+1;

}
int  sum(Node* root){
   if (root==NULL)
   {
      return 0;
   }

    int leftSum=sum(root->left);
    int rightSum=sum(root->right);
    int currSum= leftSum+rightSum+root->data;
    cout<<"Sum="<<currSum<<endl;
    return currSum;

 }
 int diameter(Node*root,int&height){
   if (root==NULL)
   {
     height=0;
     return 0;
   }
   int leftHeight=0;
   int rightHeight=0;

   int leftDiameter=diameter(root->left,leftHeight);
   int rightDiameter=diameter(root->right,rightHeight);

   height=max(leftHeight,rightHeight)+1;
   //Diamter passing throgh current node
   int currDiameter=leftHeight+rightHeight;
   return max(currDiameter,max(leftDiameter,rightDiameter));

 }
int main() {
    vector<int> nodes = {1,2,4,-1,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(nodes);

   //  cout << "Height: " << height(root) << endl;
   // cout<<"count:"<<count(root)<<endl;
    //cout<<"sum of nodes:"<<sum(root)<<endl;
    int height=0;
    cout<<"Diamter="<<diameter(root,height);
    return 0;
}

There are two common approaches to find the diameter of a binary tree. The second approach is the optimized single-traversal (O(n)) approach, which calculates the height and diameter simultaneously.

The diameter of a binary tree is the length of the longest path between any two nodes.

The path:

may or may not pass through the root.
is usually measured in edges (some problems measure in nodes

        1
       / \
      2   3
     / \
    4   5

Longest path
  4 → 2 → 1 → 3
Diameter = 3 edges
Idea Behind Approach 2

Instead of:

calculating height repeatedly (Approach 1), and
making the complexity O(n²),

we calculate:

height
diameter

at the same time during one DFS traversal.

Foer every Node
Diameter through this node =

height(left subtree)
+
height(right subtree)
Example:

       A
      / \
     B   C
Suppose
height(B) = 3
height(C) = 2
Diameter through A

= 3 + 2
= 5

REturn height
1 + max(leftHeight, rightHeight)
          1
         / \
        2   3
       / \
      4   5
Visit Node 4


left = 0
right = 0

diameter = 0

height = 1
return 1

Visit Node 5
left = 0
right = 0

diameter = 0

height = 1
REturn 1

Visit Node 2
left height = 1
right height = 1
Diameter through node
1 + 1 = 2

HEight returned

1 + max(1,1)

=2

Visit Node 3
Height
1

Diameter
0

Visit Node 1
left height = 2
right height = 1

Diameter through root

2 + 1 = 3
Update answer
max(2,3)=3

HEight returned
1 + max(2,1)

=3

Final diameter=3


#include<iostream>
#include<algorithm>
using namespace std;
struct TreeNode{
   int val;
   TreeNode* left;
   TreeNode* right;

   TreeNode(int x){
     val=x;
     left=NULL;
     right=NULL;
   }
};
class Solution{
  private:
   int diameter;//Store the max diameter
public:
   Solution(){
      diameter=0;
   }
   //Function to calculate height
   int height(TreeNode* root)
   {
      if (root==NULL)
      {
         return 0;
      }
     int leftHeight=height(root->left);
     int rightHeight=height(root->right);

     int currentDiameter=leftHeight+rightHeight;
     diameter=max(diameter,currentDiameter);
     return 1+max(leftHeight,rightHeight);
   }
   int diameterOfBinaryTree(TreeNode* root){
      height(root);
      return diameter;
   }

};
int main (){
   TreeNode* root=new TreeNode(1);

   root->left=new TreeNode(2);
   root->right=new TreeNode(3);

   root->left->left=new TreeNode(4);
   root->left->right=new TreeNode(5);

   Solution obj;
   cout<<"Diameterof tree="<<obj.diameterOfBinaryTree(root);
   return 0;


}
For the tree
        1
       / \
      2   3
     / \
    4   5
The recursive call happen in postorder:

height(1)
│
├── height(2)
│   ├── height(4)
│   │   ├── height(NULL) = 0
│   │   └── height(NULL) = 0
│   │   return 1
│   │
│   ├── height(5)
│   │   ├── height(NULL) = 0
│   │   └── height(NULL) = 0
│   │   return 1
│   │
│   return 2
│
├── height(3)
│   ├── height(NULL) = 0
│   └── height(NULL) = 0
│   return 1
│
return 3

#include <iostream>
#include <vector>
#include <algorithm>   // for max()
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Global index for buildTree
int idx = -1;

// Build tree from preorder traversal
Node* buildTree(vector<int> &nodes) {
    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(nodes[idx]);

    root->left = buildTree(nodes);
    root->right = buildTree(nodes);

    return root;
}

// Function to find height
int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}
int count(Node* root){
   int leftCount=count(root->left);
   int rightCount=count(root->right);

   return leftCount+rightCount+1;

}
int  sum(Node* root){
   if (root==NULL)
   {
      return 0;
   }

    int leftSum=sum(root->left);
    int rightSum=sum(root->right);
    int currSum= leftSum+rightSum+root->data;
    cout<<"Sum="<<currSum<<endl;
    return currSum;

 }
 int diameter(Node*root,int&height){
   if (root==NULL)
   {
     height=0;
     return 0;
   }
   int leftHeight=0;
   int rightHeight=0;

   int leftDiameter=diameter(root->left,leftHeight);
   int rightDiameter=diameter(root->right,rightHeight);

   height=max(leftHeight,rightHeight)+1;
   //Diamter passing throgh current node
   int currDiameter=leftHeight+rightHeight;
   return max(currDiameter,max(leftDiameter,rightDiameter));

 }
 pair<int,int>diam2(Node* root){
    pair<int,int>leftInfo=diam2(root->left);
    pair<int,int>rightInfo=diam2(root->right);

    int currDiam=leftInfo.second+rightInfo.second+1;
    int finalDiam=max(currDiam,max(leftInfo.first,rightInfo.first));
    int finalHt=max(leftInfo.second,rightInfo.second)+1;
    return make_pair(finalDiam,finalHt);
 }

int main() {
    vector<int> nodes = {1,2,4,-1,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(nodes);

   //  cout << "Height: " << height(root) << endl;
   // cout<<"count:"<<count(root)<<endl;
    //cout<<"sum of nodes:"<<sum(root)<<endl;
   //  int height=0;
   //  cout<<"Diamter="<<diameter(root,height);
   cout<<"diameter="<<diam2(root).first<<endl;
   return 0;
}

Problem Statement

You are given two binary trees:

root (main tree)
subRoot (another tree)

Return true if subRoot is a subtree of root, otherwise return false.

A subtree is a node in root together with all of its descendants, and it must be identical to subRoot.

Example 1:

Main Tree (root)

        3
       / \
      4   5
     / \
    1   2


Sub Tree (subRoot)

      4
     / \
    1   2
Output:True

Because the subtree rooted at node 4 is exactly the same as subRoot.

Example 2:
Main Tree

        3
       / \
      4   5
     / \
    1   2
       /
      0


Sub Tree

      4
     / \
    1   2

Output:false
Because node 2 in the main tree has an extra child (0), so the trees are not identical.

Concept

We solve this using two recursive functions:

isSameTree() → Checks if two trees are exactly identical.
isSubtree() → Traverses the main tree and checks every node as a possible root of the subtree.

Main Tree

        3
       / \
      4   5
     / \
    1   2
At every node ,ask:
Is subtree starting here equal to subRoot?
If not:

check left subtree
check right subtree

Step 1: Check if Two Trees are Identical
Idea

Two trees are the same if:

both are NULL
values are equal
left subtrees are the same
right subtrees are the same
Recursive Function
bool isSameTree(TreeNode* p, TreeNode* q)

Case 1

Both NULL

NULL    NULL

return : true

Case 2

One NULL

NULL

   5
Return :false

Case 3
Values are different
5

7

Return
false

Case 4

Values are equal

      4
     / \
    1   2

      4
     / \
    1   2

Check both children recursively.

bool isSameTree(TreeNode* p,TreeNode* q)
{
  if(p==NULL && q==NULL)
  return true;

  if(p==NULL || q==NULL)
  return false;

  if(p->val!=q->val)
  return false;

  return isSameTree(p->left,q->left)&&
    isSameTree(p->right,q->right);
}
    Suppose Tree

Main Tree

        3
       / \
      4   5
     / \
    1   2
SubTree

      4
     / \
    1   2


start from root.
Node = 3

Is tree rooted at 3 identical?

No

Move left

Node = 4

Identical?

Yes

Recursive Idia
Check

↓

Same Tree ?

↓

Yes → return true

↓

No

↓

Search Left

↓

Search Right

 
#include<iostream>
using namespace std;

struct TreeNode{
  int val;
  TreeNode *left;;
  TreeNode *right;
  TreeNode(int x){
     val=x;
     left=NULL;
     right=NULL;
  }
};
class Solution{
   public:
   //Function to check wheater twostrings are indentical
   bool isSameTree(TreeNode* p,TreeNode* q)
   {
      //Case1:Both tree are empty
      if (p==NULL && q==NULL)
      {
         return true;
      }
      //Case2:One tree is empty and other is not
      if (p==NULL || q==NULL)
      {
         return false;
      }
      //Case3:Value are differnt
      if (p->val!=q->val)
      {
         return false;
      }
      //Case4:Compare  Left and right subtrees
      return isSameTree(p->left,q->left) &&
             isSameTree(p->right,q->right);
   }
   //Function to check whether subRoot is a subtree of root
   bool isSubtree(TreeNode* root,TreeNode*subRoot){
      //If subtreeis empty
      if (subRoot==NULL)
      {
         return true;
      }
      //If main tree becomes empty
      if (root==NULL)
      {
         return false;
      }
      //check if trees match from currnnt node
      if (isSameTree(root,subRoot))
      {
         return true;
      }
      //otherwise search in left and rightsubtree
      return isSubtree(root->left,subRoot)||
          isSubtree(root->right,subRoot);
   }
};
int main (){
   //For Main Tree
   TreeNode* root=new TreeNode(3);

   root->left=new TreeNode(4);
   root->right=new TreeNode(5);

   root->left->left=new TreeNode(1);
   root->left->right=new TreeNode(2);
   //For sub Tree

   TreeNode* subRoot=new TreeNode(4);
   subRoot->left=new TreeNode(1);
   subRoot->right=new TreeNode(2);

   Solution obj;
   if (obj.isSubtree(root,subRoot))
   {
     cout<<"SubTree Found";
   }
   else{
      cout<<"Subtree Not Found";
   }
   return 0;
}

Subtree of another Tree
Return true if there is a subtree of root with the same structure and node values of

of subRoot and false otherwise.
  root
    1
    /\              subRoot
   2  3              2
   /\  \            / \
  4  5  6          4  5
(1)find subRoot in tree


#include <iostream>
#include <vector>
#include <algorithm>   // for max()
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Global index for buildTree
int idx = -1;

// Build tree from preorder traversal
Node* buildTree(vector<int> &nodes) {
    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(nodes[idx]);

    root->left = buildTree(nodes);
    root->right = buildTree(nodes);

    return root;
}

// Function to find height
int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}
int count(Node* root){
   int leftCount=count(root->left);
   int rightCount=count(root->right);

   return leftCount+rightCount+1;

}
int  sum(Node* root){
   if (root==NULL)
   {
      return 0;
   }

    int leftSum=sum(root->left);
    int rightSum=sum(root->right);
    int currSum= leftSum+rightSum+root->data;
    cout<<"Sum="<<currSum<<endl;
    return currSum;

 }
 int diameter(Node*root,int&height){
   if (root==NULL)
   {
     height=0;
     return 0;
   }
   int leftHeight=0;
   int rightHeight=0;

   int leftDiameter=diameter(root->left,leftHeight);
   int rightDiameter=diameter(root->right,rightHeight);

   height=max(leftHeight,rightHeight)+1;
   //Diamter passing throgh current node
   int currDiameter=leftHeight+rightHeight;
   return max(currDiameter,max(leftDiameter,rightDiameter));

 }
 pair<int,int>diam2(Node* root){
    pair<int,int>leftInfo=diam2(root->left);
    pair<int,int>rightInfo=diam2(root->right);

    int currDiam=leftInfo.second+rightInfo.second+1;
    int finalDiam=max(currDiam,max(leftInfo.first,rightInfo.first));
    int finalHt=max(leftInfo.second,rightInfo.second)+1;
    return make_pair(finalDiam,finalHt);

 }
 bool isidentical(Node* root1,Node* root2){
    if (root1==NULL && root2==NULL)
    {
      return true;
    }else if(root1==NULL || root2==NULL){
      return false;
    }

   if (root1->data!=root2->data)
   {
      return false;
   }
   return isidentical(root1->left,root2->left) &&
          isidentical(root1->right,root2->right);

 }
 bool isSubtree(Node* root,Node* subRoot){
    if (root==NULL && subRoot==NULL)
    {
      return true;
    }else if(root==NULL ||subRoot==NULL){
      return false;
    }

   if (root->data==subRoot->data)
   {
     //Identical for subtrees
     if(isidentical(root,subRoot)){
        return true;
     }
   }
   int isleftSubtree=isSubtree(root->left,subRoot);
   if (!isleftSubtree)
   {
     return isSubtree(root->right,subRoot);
   }
   return true;
 }

int main() {
    vector<int> nodes = {1,2,4,-1,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(nodes);

   //  cout << "Height: " << height(root) << endl;
   // cout<<"count:"<<count(root)<<endl;
    //cout<<"sum of nodes:"<<sum(root)<<endl;
   //  int height=0;
   //  cout<<"Diamter="<<diameter(root,height);
   // cout<<"diameter="<<diam2(root).first<<endl;
   Node*subRoot=new Node(2);
   subRoot->left=new Node(4);
   subRoot->right=new Node(5);
   cout<<isSubtree(root,subRoot)<<endl;
   return 0;
}

              Map in c++
STL Container
map<int,int>m;//creating a map
m[key]=val;//insert in a map
cout<<m[key];//access val using key
m.count(key)//1 if key present,0 if key not present

loop on map
for(auto it:m){
 cout<<m.first<<m.second;
}
   
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main (){
  map<int,string>n;
  n[101]="vishal";
  n[110]="vipin";
  n[131]="vimal";

//   cout<<n.count(101)<<endl;//1
//   cout<<n.count(120)<<endl;//0
for(auto it:n){
   cout<<"Key="<<it.first<<","<<"value="<<it.second<<endl;
}
  return 0;
}

Top View of a Tree
         1            1
         /\          / \
        2  3         2  3
       / \ / \        \
      4  5 4  6        4
output:4,2,1,3,6        \
                         5
                          \
                           6
                           Output:2,1,3,6
from origin
HD origin=0
HD left=-1
HD right=1


 #include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int idx = -1;

// Build Tree from Preorder
Node* buildTree(vector<int>& nodes) {
    idx++;

    if (nodes[idx] == -1)
        return NULL;

    Node* root = new Node(nodes[idx]);

    root->left = buildTree(nodes);
    root->right = buildTree(nodes);

    return root;
}

// Height
int height(Node* root) {
    if (root == NULL)
        return 0;

    return max(height(root->left), height(root->right)) + 1;
}

// Count Nodes
int countNodes(Node* root) {
    if (root == NULL)
        return 0;

    return countNodes(root->left) + countNodes(root->right) + 1;
}

// Sum of Nodes
int sum(Node* root) {
    if (root == NULL)
        return 0;

    return sum(root->left) + sum(root->right) + root->data;
}

// Diameter O(n)
int diameter(Node* root, int &ht) {
    if (root == NULL) {
        ht = 0;
        return 0;
    }

    int lh = 0, rh = 0;

    int ld = diameter(root->left, lh);
    int rd = diameter(root->right, rh);

    ht = max(lh, rh) + 1;

    int currDiam = lh + rh + 1;

    return max(currDiam, max(ld, rd));
}

// Diameter using Pair
pair<int, int> diam2(Node* root) {
    if (root == NULL)
        return {0, 0};

    pair<int, int> leftInfo = diam2(root->left);
    pair<int, int> rightInfo = diam2(root->right);

    int currDiam = leftInfo.second + rightInfo.second + 1;
    int finalDiam = max(currDiam,
                        max(leftInfo.first, rightInfo.first));

    int finalHt = max(leftInfo.second,
                      rightInfo.second) + 1;

    return {finalDiam, finalHt};
}

// Check Identical Trees
bool isIdentical(Node* root1, Node* root2) {

    if (root1 == NULL && root2 == NULL)
        return true;

    if (root1 == NULL || root2 == NULL)
        return false;

    if (root1->data != root2->data)
        return false;

    return isIdentical(root1->left, root2->left) &&
           isIdentical(root1->right, root2->right);
}

// Check Subtree
bool isSubtree(Node* root, Node* subRoot) {

    if (subRoot == NULL)
        return true;

    if (root == NULL)
        return false;

    if (root->data == subRoot->data) {
        if (isIdentical(root, subRoot))
            return true;
    }

    return isSubtree(root->left, subRoot) ||
           isSubtree(root->right, subRoot);
}

// Top View
void topView(Node* root) {

    if (root == NULL)
        return;

    queue<pair<Node*, int>> q;
    map<int, int> mp;

    q.push({root, 0});

    while (!q.empty()) {

        Node* currNode = q.front().first;
        int hd = q.front().second;
        q.pop();

        if (mp.find(hd) == mp.end()) {
            mp[hd] = currNode->data;
        }

        if (currNode->left)
            q.push({currNode->left, hd - 1});

        if (currNode->right)
            q.push({currNode->right, hd + 1});
    }

    for (auto x : mp)
        cout << x.second << " ";

    cout << endl;
}

// Bottom View
void bottomView(Node* root) {

    if (root == NULL)
        return;

    queue<pair<Node*, int>> q;
    map<int, int> mp;

    q.push({root, 0});

    while (!q.empty()) {

        Node* currNode = q.front().first;
        int hd = q.front().second;
        q.pop();

        // Always overwrite
        mp[hd] = currNode->data;

        if (currNode->left)
            q.push({currNode->left, hd - 1});

        if (currNode->right)
            q.push({currNode->right, hd + 1});
    }

    for (auto x : mp)
        cout << x.second << " ";

    cout << endl;
}

int main() {

    vector<int> nodes = {1, 2, 4, -1, -1, -1, 3, -1, 6, -1, -1};

    Node* root = buildTree(nodes);

    cout << "Height: " << height(root) << endl;

    cout << "Count: " << countNodes(root) << endl;

    cout << "Sum: " << sum(root) << endl;

    int ht = 0;
    cout << "Diameter: " << diameter(root, ht) << endl;

    cout << "Diameter (Pair): " << diam2(root).first << endl;

    // Subtree Example
    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);

    if (isSubtree(root, subRoot))
        cout << "Subtree Found" << endl;
    else
        cout << "Subtree Not Found" << endl;

    cout << "Top View: ";
    topView(root);

    cout << "Bottom View: ";
    bottomView(root);

    return 0;
}


  Kth Level of Tree
                1
                /\
               2  3
             /  \  \
            4    5  6

for k=3
Output:4,5,6


Kth Level of Binary Tree

The Kth level of a binary tree means printing all the nodes that are present at a particular level.

There are two common conventions:

Root at Level 1 (most textbooks)
Root at Level 0 (used in some programming problems)

I'll explain using Root = Level 1.

          1            Level 1
        /   \
       2     3         Level 2
      / \   / \
     4  5  6   7       Level 3
    /
   8                  Level 4

K = 1 → 1
K = 2 → 2 3
K = 3 → 4 5 6 7
K = 4 → 8

Method 1: Using Recursion (DFS)
Concept

The idea is simple.

Start from the root at level = 1.
Every recursive call increases the level by 1.
When the current level becomes equal to K, print the node.
Algorithm
If the root is NULL, return.
If level == k, print the node.
Recur for the left child.
Recur for the right child.

void kthLevel(Node* root, int level, int k) {

    if (root == NULL)
        return;

    if (level == k) {
        cout << root->data << " ";
        return;
    }

    kthLevel(root->left, level + 1, k);
    kthLevel(root->right, level + 1, k);
}

Function Call
int k = 3;
kthLevel(root, 1, k);
        1
      /   \
     2     3
    / \   / \
   4  5  6   7

Step:1
kthLevel(root,1,3);
Current Node = 1
Current Level = 1

1 != 3

Step:2
Current Node = 2
Level = 2

2 != 3

Current Node=4
Level=3
3==3

Print 4


Now go to right child of 2.
Node = 5
Level = 3
Print

5

Return to root.
Go right.
Node = 3
Level = 2
Again recurse.

Node = 6
Level = 3
Print

6

Node = 7
Level = 3
Print

7

Output
4 5 6 7

Why return after printing?

if(level==k)
{
    cout<<root->data<<" ";
    return;
}
Suppose you don't return.

After printing node 4, the function would continue to call

kthLevel(root->left,...);
kthLevel(root->right,...);

These calls are unnecessary because you've already reached the desired level. Returning immediately avoids extra recursive calls.


Time Complexity

Every node is visited once.
O(n)
Space (Recursion Stack)
O(h)
where h is the height of the tree.
void kthLevel(Node* root, int k) {

    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    int level = 1;

    while (!q.empty()) {

        int size = q.size();

        if (level == k) {

            while (size--) {
                Node* curr = q.front();
                q.pop();

                cout << curr->data << " ";
            }
            return;
        }

        while (size--) {

            Node* curr = q.front();
            q.pop();

            if (curr->left)
                q.push(curr->left);

            if (curr->right)
                q.push(curr->right);
        }

        level++;
    }
}

#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* left;
   Node* right;

   Node(int val){
      data=val;
      left=NULL;
      right=NULL;
   }
};
//Functionto print kth Level
void printKLevel(Node*root,int k){
   //Base Case
   if (root==NULL)
   {
      return;
   }
   //if k is become is Zero
   if (k==0)
   {
      cout<<root->data<<" ";
      return;
   }
   //Move the next Level
   printKLevel(root->left,k-1);
   printKLevel(root->right,k-1);
}
int main (){
   Node* root=new Node(1);

   root->left=new Node(2);
   root->right=new Node(3);

   root->left->left=new Node(4);
   root->left->right=new Node(5);

   root->right->left=new Node(6);
   root->right->right=new Node(7);
   return 0;
}

Why do we subtract k - 1?

Suppose we want level 2.

Level 0 : 1
Level 1 : 2 3
Level 2 : 4 5 6 7

Initially

k = 2

Move one level down

k = 1

Move another level down

k = 0

When k == 0, we have reached the required level, so we print the node.



Kth level of a Tree
        1
        /\
       2  3
      / \  \
      4  5  6 
for k=3
Output:4,5,6

Lowest Common Ancester(LCA)

Lowest Common Ancestor (LCA) in Binary Tree

The Lowest Common Ancestor (LCA) of two nodes p and q is the lowest (deepest) node in the tree that has both p and q as descendants. A node can also be a descendant of itself.


Exaample:
          1
        /   \
       2     3
      / \     \
     4   5     6

LCA(4,5) = 2
LCA(4,6) = 1
LCA(2,4) = 2
LCA(5,6) = 1

Algorithms

Find Path(root,n1,path1)

Find Path(root,n2,path2)

Compare both vectors.

Last common node = LCA


#include<iostream>
using namespace std;

struct TreeNode{
   int data;
   TreeNode *left;
   TreeNode *right;

   TreeNode(int val){
      data=val;
      left=right=NULL;
   }
};
//Function to find Lowest common Ancestor
TreeNode* lowestCommonAncestor(TreeNode*root,TreeNode*p,TreeNode*q){
   //Base case
   if (root==NULL)
   {
      return NULL;
   }
   if (root==p || root==q)
   {
     return root;
   }
   //Search in left subtree
   TreeNode* left=lowestCommonAncestor(root->left,p,q);
   //Search in right subtree
   TreeNode* right=lowestCommonAncestor(root->right,p,q);
   //If both side return non-NULL
   if (left!=NULL && right!=NULL)
   {
      return root;
   }
   //Otherwise return the non-NULL child
   if (left!=NULL)
     return left;

    return right;
}
int main (){
   TreeNode* root=new TreeNode(3);

   root->left=new TreeNode(5);
   root->right=new TreeNode(1);

   root->left->left=new TreeNode(6);
   root->left->right=new TreeNode(2);

   root->right->left=new TreeNode(0);
   root->right->right=new TreeNode(8);

   root->left->right->left=new TreeNode(7);
   root->left->right->right=new TreeNode(4);

   TreeNode* p=root->left;
   TreeNode* q=root->right->right->right;

   TreeNode*ans=lowestCommonAncestor(root,p,q);
   cout<<"Lowest Common Ancestor="<<ans->data<<endl;
   return 0;
}

       1
      / \
     2   3
    / \   \
   4   5   6
   n1=4,n2=6


   Approach 2

    n1=4,n2=6

       1       if(root->data=n1||n2){
       /\          return root;
      2  3      }
     / \  \     leftSurface(n1,n2)
    4   5  6    rightSurface(n1,n2)
   n1       n2
(1)L=NULL
   R=NULL
   return NULL
(2)L=valid
  R=NULL      (4)  L=valid
  return L         R=valid
(3)L=NULL         return root
   R=valid
   return R





#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int idx = -1;

// Build Tree from Preorder
Node* buildTree(vector<int>& nodes) {
    idx++;

    if (nodes[idx] == -1)
        return NULL;

    Node* root = new Node(nodes[idx]);

    root->left = buildTree(nodes);
    root->right = buildTree(nodes);

    return root;
}

// Height
int height(Node* root) {
    if (root == NULL)
        return 0;

    return max(height(root->left), height(root->right)) + 1;
}

// Count Nodes
int countNodes(Node* root) {
    if (root == NULL)
        return 0;

    return countNodes(root->left) + countNodes(root->right) + 1;
}

// Sum of Nodes
int sum(Node* root) {
    if (root == NULL)
        return 0;

    return sum(root->left) + sum(root->right) + root->data;
}

// Diameter O(n)
int diameter(Node* root, int &ht) {
    if (root == NULL) {
        ht = 0;
        return 0;
    }

    int lh = 0, rh = 0;

    int ld = diameter(root->left, lh);
    int rd = diameter(root->right, rh);

    ht = max(lh, rh) + 1;

    int currDiam = lh + rh + 1;

    return max(currDiam, max(ld, rd));
}

// Diameter using Pair
pair<int, int> diam2(Node* root) {
    if (root == NULL)
        return {0, 0};

    auto leftInfo = diam2(root->left);
    auto rightInfo = diam2(root->right);

    int currDiam = leftInfo.second + rightInfo.second + 1;
    int finalDiam = max(currDiam,
                        max(leftInfo.first, rightInfo.first));

    int finalHt = max(leftInfo.second,
                      rightInfo.second) + 1;

    return {finalDiam, finalHt};
}

// Check Identical Trees
bool isIdentical(Node* root1, Node* root2) {

    if (root1 == NULL && root2 == NULL)
        return true;

    if (root1 == NULL || root2 == NULL)
        return false;

    if (root1->data != root2->data)
        return false;

    return isIdentical(root1->left, root2->left) &&
           isIdentical(root1->right, root2->right);
}

// Check Subtree
bool isSubtree(Node* root, Node* subRoot) {

    if (subRoot == NULL)
        return true;

    if (root == NULL)
        return false;

    if (root->data == subRoot->data) {
        if (isIdentical(root, subRoot))
            return true;
    }

    return isSubtree(root->left, subRoot) ||
           isSubtree(root->right, subRoot);
}

// Top View
void topView(Node* root) {

    if (root == NULL)
        return;

    queue<pair<Node*, int>> q;
    map<int, int> mp;

    q.push({root, 0});

    while (!q.empty()) {

        Node* currNode = q.front().first;
        int hd = q.front().second;
        q.pop();

        if (mp.find(hd) == mp.end())
            mp[hd] = currNode->data;

        if (currNode->left)
            q.push({currNode->left, hd - 1});

        if (currNode->right)
            q.push({currNode->right, hd + 1});
    }

    for (auto x : mp)
        cout << x.second << " ";

    cout << endl;
}

// Bottom View
void bottomView(Node* root) {

    if (root == NULL)
        return;

    queue<pair<Node*, int>> q;
    map<int, int> mp;

    q.push({root, 0});

    while (!q.empty()) {

        Node* currNode = q.front().first;
        int hd = q.front().second;
        q.pop();

        mp[hd] = currNode->data;

        if (currNode->left)
            q.push({currNode->left, hd - 1});

        if (currNode->right)
            q.push({currNode->right, hd + 1});
    }

    for (auto x : mp)
        cout << x.second << " ";

    cout << endl;
}

// Print Kth Level
void kthHelper(Node* root, int k, int currLevel) {
    if (root == NULL)
        return;

    if (currLevel == k) {
        cout << root->data << " ";
        return;
    }

    kthHelper(root->left, k, currLevel + 1);
    kthHelper(root->right, k, currLevel + 1);
}

void kthLevel(Node* root, int k) {
    kthHelper(root, k, 1);
    cout << endl;
}

// Root to Node Path
bool rootToNodePath(Node* root, int n, vector<int>& path) {
    if (root == NULL)
        return false;

    path.push_back(root->data);

    if (root->data == n)
        return true;

    bool isLeft = rootToNodePath(root->left, n, path);
    bool isRight = rootToNodePath(root->right, n, path);

    if (isLeft || isRight)
        return true;

    path.pop_back();
    return false;
}

// Lowest Common Ancestor
int LCA(Node* root, int n1, int n2) {

    vector<int> path1, path2;

    rootToNodePath(root, n1, path1);
    rootToNodePath(root, n2, path2);

    int lca = -1;

    for (int i = 0; i < path1.size() && i < path2.size(); i++) {
        if (path1[i] != path2[i])
            break;

        lca = path1[i];
    }

    return lca;
}
Node*LCA2(Node* root,int n1,int n2){
   if (root==NULL)
   {
      return NULL;
   }
   
  if (root->data==n1 || root->data==n2)
  {
    return root;
  }
  Node* leftLCA=LCA2(root->left,n1,n2);
  Node* rightLCA=LCA2(root->right,n1,n2);

  if (leftLCA!=NULL && rightLCA!=NULL)
  {
    return root;
  }
  return leftLCA==NULL?rightLCA:leftLCA;
}

int main() {

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    idx = -1;
    Node* root = buildTree(nodes);

    cout << "Height: " << height(root) << endl;
    cout << "Count: " << countNodes(root) << endl;
    cout << "Sum: " << sum(root) << endl;

    int ht = 0;
    cout << "Diameter: " << diameter(root, ht) << endl;
    cout << "Diameter (Pair): " << diam2(root).first << endl;

    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);

    if (isSubtree(root, subRoot))
        cout << "Subtree Found" << endl;
    else
        cout << "Subtree Not Found" << endl;

    cout << "Top View: ";
    topView(root);

    cout << "Bottom View: ";
    bottomView(root);

    cout << "3rd Level: ";
    kthLevel(root, 3);

    int n1 = 4, n2 = 5;
    cout << "LCA = " << LCA(root, n1, n2) << endl;
    cout << "LCA2 = " << LCA2(root, n1, n2)->data << endl;

    return 0;
}

Minimum Distance Between Two Nodes in a Binary Tree

The minimum distance between two nodes is the number of edges in the shortest path connecting the two nodes.

Example Tree
          1
        /   \
       2     3
      / \     \
     4   5     6
Suppose we want the minimum distance between 4 and 6.

The path is:
4 → 2 → 1 → 3 → 6

Number of edges = 4
So, the minimum distance is 4.

Concept

The easiest way is to use the Lowest Common Ancestor (LCA)

Node1
   ↑
   ↑
  LCA
   ↓
   ↓
Node2

Distance(Node1, Node2)
=
Distance(LCA, Node1)
+
Distance(LCA, Node2)

find LCA
          1
        /   \
       2     3
      / \     \
     4   5     6

Find distance between 4 and 5
LCA=2
      2
     / \
    4   5
Distance from

2 → 4 = 1

2 → 5 = 1

Minimum distance

1 + 1 = 2

Another Example
Find distance between 4 and 6

Distance
1 → 4 = 2 edges
1 → 6 = 2 edges

Answer
2 + 2 = 4

Algorithm
Step 1
Find the Lowest Common Ancestor.
Step 2
Find the distance from LCA to Node1.
Step 3
Find the distance from LCA to Node2
Step 4

Add both distances.
Answer = d1 + d2

LCA = O(n)
Distance = O(n)
Total = O(n)


#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;          // Fixed
        left = right = NULL;
    }
};

int idx = -1;

Node* buildTree(vector<int>& nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    Node* root = new Node(nodes[idx]);

    root->left = buildTree(nodes);
    root->right = buildTree(nodes);

    return root;
}

// Lowest Common Ancestor
Node* LCA(Node* root, int n1, int n2){
    if(root == NULL)
        return NULL;

    if(root->data == n1 || root->data == n2)   // Fixed
        return root;

    Node* leftLCA = LCA(root->left, n1, n2);
    Node* rightLCA = LCA(root->right, n1, n2);

    if(leftLCA != NULL && rightLCA != NULL)
        return root;

    if(leftLCA != NULL)
        return leftLCA;

    return rightLCA;
}

// Distance from root to target node
int distance(Node* root, int n){
    if(root == NULL)
        return -1;

    if(root->data == n)
        return 0;

    int left = distance(root->left, n);

    if(left != -1)
        return left + 1;

    int right = distance(root->right, n);

    if(right != -1)
        return right + 1;

    return -1;
}

// Minimum Distance Between Two Nodes
int minDistance(Node* root, int n1, int n2){
    Node* lca = LCA(root, n1, n2);

    int d1 = distance(lca, n1);
    int d2 = distance(lca, n2);

    return d1 + d2;
}

int main(){

    // Tree:
    //          1
    //        /   \
    //       2     3
    //      / \     \
    //     4   5     6

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    idx = -1;
    Node* root = buildTree(nodes);

    int n1 = 4;
    int n2 = 6;

    cout << "Minimum Distance between "
         << n1 << " and " << n2
         << " = " << minDistance(root, n1, n2)
         << endl;

    return 0;
}


Kth Ancestor of Node

         1
         /\
        2  3
       / \  \
      4   5  6

      node=5,k=2
      ans=1

idea is:

Search for the target node.
While returning from recursion, decrement k.
When k becomes 0, the current node is the K-th ancestor.


#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
  int data;
  Node* left;
  Node* right;

  Node(int val){
   data=val;
   left=right=NULL;
  }
};
int idx=-1;
Node* buildTree(vector<int>&nodes){
  idx++;

  if (nodes[idx]==-1)
  {
    return NULL;
  }
  Node* root=new Node(nodes[idx]);

  root->left=buildTree(nodes);
  root->right=buildTree(nodes);

  return root;
}
int kthAncestor(Node* root,int node,int &k){
   if (root==NULL)
   {
      return -1;
   }
   if (root->data==node)
   {
     return 0;//current val
   }
   int leftDist=kthAncestor(root->left,node,k);
   int rightDist=kthAncestor(root->right,node,k);

   if (leftDist==-1 && rightDist==-1)
   {
     return -1;
   }
   int dist=max(leftDist,rightDist)+1;

   if (dist==k)
   {
     cout<<"th Ancestor="<<root->data<<endl;
   }
   return dist;
}
int main (){

    // Tree:
    //         1
    //       /   \
    //      2     3
    //     / \     \
    //    4   5     6
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    idx = -1;
    Node* root = buildTree(nodes);

    int node = 6;
    int k = 1;

    kthAncestor(root, node, k);

    return 0;
}

Transform to Sum Tree (Binary Tree)
What is a Sum Tree?

A Sum Tree is a binary tree in which every node contains the sum of the values of its left and right subtrees in the original tree.

The value of every leaf node becomes 0 because it has no children.
The transformation is done in-place, meaning we modify the original tree.

   Original Tree
        10
       /  \
      5    3
     / \    \
    2   1    6
Step-by-step Transformation
Leaf Nodes

Leaves are 2, 1, and 6.

They have no children, so after transformation:

2 → 0
1 → 0
6 → 0

Node 5
Original subtree:  
      5
     / \
    2   1

Original left subtree sum = 2
Original right subtree sum = 1

So,
New value of 5 = 2 + 1 = 3

Node 3
Original subtree
    3
      \
       6
Therefore,
New value of 3 = 6

Root 10

Original left subtree contains
5 + 2 + 1 = 8

Original right subtree contains
3 + 6 = 9

So,
New value of 10 = 8 + 9 = 17

Final Sum Tree

        17
       /  \
      3    6
     / \    \
    0   0    0

Algorithm

We use Postorder Traversal (Left → Right → Root) because we need the sum of both subtrees before updating the current node.

For every node:

Convert left subtree.
Convert right subtree.
Save the current node's original value.
Replace node's value with


Dry Run
        1
       / \
      2   3

Visit Node2
left = 0
right = 0

old = 2

new value = 0
return = 2

Visit Node 3

left = 0
right = 0

old = 3

new value = 0

return = 3

visit Node1
leftSum = 2
rightSum = 3

old = 1

new value = 2+3 = 5

return = 5+1 = 6


#include<iostream>
#include<vector>
using namespace std;

class Node{
   public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
      data=val;
      left=right=NULL;
    }
};
//Build Tree
int idx=-1;
Node* buildTree(vector<int>&nodes){
   idx++;

   if (nodes[idx]==-1)
   {
      return NULL;
   }
   Node* root= new Node(nodes[idx]);

   root->left=buildTree(nodes);
   root->right=buildTree(nodes);

   return root;
}
//Transform into Sum Tree
int transform(Node* root){

   if (root==NULL)
   {
     return 0;
   }
   int leftSum=transform(root->left);
   int rightSum=transform(root->right);

   int oldValue=root->data;
   //Replace node value
   root->data=leftSum+rightSum;
   //Return original subtree sum
   return oldValue+root->data;
}
//Preorder Traversal
void preorder(Node* root){
   if (root==NULL)
   {
     return;
   }
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
}
int main (){
  
    // Original Tree
    //
    //        10
    //       /  \
    //      5    3
    //     / \    \
    //    2   1    6
    vector<int>nodes={10,5,2,-1,-1,1,-1,-1,3,-1,6,-1,-1};
    int idx=-1;

    Node* root=buildTree(nodes);
    transform(root);
    cout<<"Preorder of Sum Tree:\n";
    preorder(root);

    return 0;
}

965. Univalued Binary Tree

A binary tree is uni-valued if every node in the tree has the same value.

Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.

Example 1:
Input: root = [1,1,1,1,1,null,1]
Output: true

Example 2:
Input: root = [2,2,2,5,2]
Output: false


























   BST(Binary Search Tree)

           4
          / \
         2   5
        / \   \
       1   3   6

What is a Binary Search Tree?

A Binary Search Tree is a binary tree where each node has at most two children and follows these rules:

All values in the left subtree are less than the node's value.
All values in the right subtree are greater than the node's value.
Both the left and right subtrees are also Binary Search Trees.
Example
          50
         /  \
       30    70
      / \    / \
    20  40  60  80
Left of 50: 20, 30, 40 (all less than 50)
Right of 50: 60, 70, 80 (all greater than 50)

Algorithm
Compare the target value with the current node.
If equal → Found.
If smaller → Move to left child.
If larger → Move to right child.
Repeat until found or node becomes NULL.          50
         /  \
       30    70
            /  \
          60    80

For ex
Steps:

60 > 50 → Go right
60 < 70 → Go left
Found 60

Time Complexity

Best Case: O(1)
Average Case: O(log n)
Worst Case: O(n) (if the tree becomes skewed)

          50
         /  \
       30    70
            /  \
          60    80
            \
             65

Steps:

65 > 50 → Right
65 < 70 → Left
65 > 60 → Right
Insert

Time Complexity

Average: O(log n)
Worst: O(n)

3. Deletion

Deletion has three cases.
Case 1: Delete a Leaf Node
Delete 20.
    30
   / \
 20  40

after
   30
     \
     40Case 2: Delete a Node with One Child

Delete 60.

Before:

   70
  /
60
 \
 65

 After:

   70
  /
65

Replace the node with its child.

Case 3: Delete a Node with Two Children

Delete 50.

        50
       /  \
     30    70
          /  \
        60    80

Replace 50 with either:

Inorder Successor (smallest node in the right subtree), or
Inorder Predecessor (largest node in the left subtree).
        60
       /  \
     30    70
             \
             80

Tree Traversals

Traversal means visiting every node.

1. Inorder (Left → Root → Right)
        50
       /  \
     30    70
    / \    / \
  20   40 60 80

  20 30 40 50 60 70 80

| Operation         | Average  | Worst |
| ----------------- | -------- | ----- |
| Search            | O(log n) | O(n)  |
| Insert            | O(log n) | O(n)  |
| Delete            | O(log n) | O(n)  |
| Inorder Traversal | O(n)     | O(n)  |



#include<iostream>
#include<vector>
using namespace std;

class Node{
   public:
   int data;
   Node* left;
   Node* right;;

   Node(int val){
      data=val;
      left=right=NULL;
   }
};
//Insert function
Node* insert(Node* root,int val){
   if (root==NULL)
   {
     return new Node(val);
   }
   if (val<root->data)
   {
     root->left=insert(root->left,val);
   }else if(val>root->data){
      root->right=insert(root->right,val);
   }
   return root;
}
//Search function
bool search(Node* root,int key){
   if (root==NULL)
     return false;

   if (root->data==key)
      return true;

   if (key<root->data)
      return search(root->left,key);

   return search(root->right,key);
}
//INorder Traversal
//Left Root Right
void inorder(Node* root){
   if (root==NULL)
   {
      return;
   }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}
//Preorder Traversal
void preorder(Node* root){
   if (root==NULL)
   {
     return;
   }
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
}
//Postorder Traversal
void postorder(Node* root){
      if (root==NULL)
   {
     return;
   }
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
}
//Find Minimum Node
Node* findMin(Node* root){
   while(root->left!=NULL){
      root=root->left;
   }
   return root;
}
//find Maximum Node
Node* findMax(Node* root){
   while(root->right!=NULL){
     root=root->right;
   }
   return root;
}
//Delete Node
Node* deleteNode(Node* root,int key){
   if(root==NULL){
      return NULL;
   }
   if (key<root->data)
   {
      root->left=deleteNode(root->left,key);
   }else if(key>root->data){
      root->right=deleteNode(root->right,key);
   }
   else{
      //Case1:No child
      if (root->left==NULL && root->right==NULL)
      {
         delete root;
         return NULL;
      }
      //Case2:one child
      if(root->left==NULL){
         Node* temp= root->right;
         delete root;
         return temp;
      }
      if (root->right==NULL)
      {
         Node* temp=root->left;
         delete root;
         return temp;
      }
      //Case3:Two children
      Node* temp=findMin(root->right);
      root->data= temp->data;
      root->right=deleteNode(root->right,temp->data);
   }
   return root;
}
//Count Node
int countNodes(Node* root){
   if (root==NULL)
   {
     return 0;
   }
   return 1 + countNodes(root->left)+countNodes(root->right);
}
int height(Node* root){
   if (root==NULL)
   {
     return -1;
   }
   int leftHeight=height(root->left);
   int rightHeight=height(root->right);

   if (leftHeight>rightHeight)
   {
      return leftHeight+1;
   }else{
      return rightHeight+1;
   }

}

int main (){
   Node* root=NULL;
   root=insert(root,50);
   root=insert(root,30);
   root=insert(root,70);
   root=insert(root,20);
   root=insert(root,40);
   root=insert(root,60);
   root=insert(root,80);

cout<<"Inorder Traversal:";
inorder(root);
cout<<"\n";
cout<<"Preorder Traversal:";
preorder(root);
cout<<"\n";
cout<<"Postorder Traversal:";
postorder(root);
cout<<"\n";
cout<<"Minimum:"<<findMin(root)->data<<endl;
cout<<"Maximum:"<<findMax(root)->data<<endl;
if(search(root,60)){
   cout<<"60 found"<<endl;
}else{
   cout<<"60 not Found"<<endl;
}
cout<<"\n Deleting Node 70...\n";
root=deleteNode(root,70);
inorder(root);
cout<<endl;
cout<<"\n";
cout<<"Total countNodes:"<<countNodes(root)<<endl;
cout<<"\n";
cout<<"Height:"<<height(root)<<endl;
return 0;

}

Inorder Traversal of BST gives a sorted sequence.
           4
           /\
          2  5
         / \  \
        1   3  6

sorted:1 2 3 4 5 6

  BST Search
                 search key=3
              in worst case TC O(n)
         5
         /\
        2  6
       / \  \
      1   4  7
          /
         3


         Search in a BST
           8
          / \
         5   10
        / \   \
       3   6   11
      / \       \
     1   4       14

Delete a Node
Case for a node
.No child(leaf Node)
.1 child
.2 children

  Inorder Successor
In BST it is left-most node in right subtre of a node.
(This is always 0 to 1 lelt child)

        4
        /\
       1  5
           \
            9
            /\
           7  10
           \
            8


 Print in Range
           8       start=5,end=12   
          / \
         5   10
        /\    \
       3  6    11
      / \       \
     1   4       14

start=5,end=12


Validate in BST
BST Rules

For every node:

All values in the left subtree must be less than the node's value.
All values in the right subtree must be greater than the node's value.
Both the left and right subtrees must also be valid BSTs.

For example:
        10
       /  \
      5    15
     / \   / \
    2   7 12 20


This is a valid BST because:

Left of 10: 2, 5, 7 are all less than 10.
Right of 10: 12, 15, 20 are all greater than 10.
Each subtree also follows the BST property.

Why checking only parent-child is not enough

Consider this tree:

      10
     /  \
    5    15
        /
       6

If you compare only parents and children:

5 < 10 ✓
15 > 10 ✓
6 < 15 ✓

#include<iostream>
#include<vector>
using namespace std;
class Node{
   public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
       data=val;
       left=right=NULL;
    }
};
Node* insert(Node* root,int val){//O(logn)
   if(root==NULL){
      root=new Node(val);
      return root;
   }
   if (val<root->data)
   {
      root->left=insert(root->left,val);
   }else if(val>root->data){
      root->right=insert(root->right,val);
   }
   return root;
}
Node* buildBST(int arr[],int n){
   Node* root=NULL;
for (int i = 0; i < n; i++)
{
   root=insert(root,arr[i]);
 }
 return root;
}
void inorder(Node* root){
   if (root==NULL)
   {
     return;
   }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}
bool search(Node* root, int key){//o(Height): avg=>O(logn)
   if (root==NULL)
   {
      return false;
   }
   if (root->data==key)
   {
      return true;
   }
   if (key<root->data)
   {
      return search(root->left,key);
   }else{
      return search(root->right,key);
   }
}
Node* getInorderSuccessor(Node* root){
   while (root->left!=NULL)
   {
      root=root->left;
   }
   return root;
}
Node* delNode(Node* root,int val){
   if (root==NULL)
   {
      return NULL;
   }
   if (val<root->data)
   {
    root->left=delNode(root->left,val);
   }else if(val>root->data){
    root->right=delNode(root->right,val);
   }else{
      //case:0 children
      if (root->left==NULL && root->right==NULL)
      {
        delete root;
        return NULL;
      }
      //Case2:1Child
      if (root->left==NULL || root->right==NULL)
      {
        return root->left==NULL?root->right:root->left;
      }
      //Case3:2chilren
      Node* IS=getInorderSuccessor(root->right);
      root->data=IS->data;
      root->right= delNode(root->right,IS->data);
   }
   return root;
}
void printInRange(Node* root,int start,int end){
   if (start<=root->data && root->data<=end)
   {
      cout<<root->data<<" ";
      printInRange(root->left,start,end);
      printInRange(root->right,start,end);
   }else if(root->data<start){
     printInRange(root->right,start,end);
   }else{
      printInRange(root->left,start,end);
   }
}
void printPath(vector<int>path){
   cout<<"path:";
   for(int i=0;i<path.size();i++){
      cout<<path[i]<<" ";
   }
   cout<<endl;
}
void pathHelper(Node* root,vector<int>&path){
   if(root==NULL){
      return;
   }
     path.push_back(root->data);

     if (root->left==NULL && root->right==NULL)
     {
      printPath(path);
      path.pop_back();
      return;
     }
     pathHelper(root->left,path);
     pathHelper(root->right,path);

     path.pop_back();
}
void rootToleafPath(Node* root){
   vector<int>path;
   pathHelper(root,path);
}
bool validateHelper(Node* root,Node* min,Node* max ){
   if (root==NULL)
   {
      return NULL;
   }
   if (min!=NULL && root->data<min->data)
   {
     return false;
   }
   if (max!=NULL && root->data>max->data)
   {
      return false;
   }

   return validateHelper(root->left,min,root)
     && validateHelper(root->right,root,max);
}
bool validateBST(Node* root){
   return validateHelper(root,NULL,NULL);
}

int main (){
   int arr[9]={8,5,3,1,4,6,10,11,14};
   Node* root=buildBST(arr,6);
   inorder(root);
   cout<<endl;
   cout<<search(root,15)<<endl;
   cout<<endl;
   delNode(root,4);
   cout<<endl;
   printInRange(root,5,12);
   cout<<endl;
   rootToleafPath(root);
   if (validateBST(root))
   {
     cout<<"valid BST";
   }else
   cout<<"INvalid Bst";
   return 0;
}
BST Property

For every node:

Left subtree → values less than the node.
Right subtree → values greater than the node.

Example of a valid BST:

        8
      /   \
     4     10
    / \      \
   2   6      20

   Notice:

Left of 8 → 4, 2, 6 (all < 8)
Right of 8 → 10, 20 (all > 8)

The Idea Behind the Code

Instead of checking only the parent, we pass a minimum and maximum value that every node is allowed to have.

Initially, the root can be anything.
Range = (-∞, +∞)

        8
Since 8 is inside the range, it is valid.
Now move to its children.
Left Child

The left child must be less than 8.

Allowed Range = (-∞, 8)

        8
       /
      4
Check:

-∞ < 4 < 8  ✅

Right Child

The right child must be greater than 8.

Allowed Range = (8, +∞)

        8
         \
         10

Check:

8 < 10 < +∞ ✅

Continue Recursively

For node 6

        8
      /
     4
      \
       6

6 must satisfy two conditions:

greater than 4
smaller than 8

So its range becomes

(4, 8)
Check

4 < 6 < 8 ✅

validate bst code in c++ explain in form of array and invalid form

To validate a Binary Search Tree (BST), you need to check whether every node follows the BST property:

All values in the left subtree are smaller than the current node.
All values in the right subtree are greater than the current node.
This rule must hold for every node, not just its immediate children.
C++ Code (Using Min-Max Range)
#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

bool isValid(TreeNode* root, long long minVal, long long maxVal) {
    if (root == NULL)
        return true;

    if (root->val <= minVal || root->val >= maxVal)
        return false;

    return isValid(root->left, minVal, root->val) &&
           isValid(root->right, root->val, maxVal);
}

bool isValidBST(TreeNode* root) {
    return isValid(root, LLONG_MIN, LLONG_MAX);
}

Time Complexity: O(n)
Space Complexity: O(h) (where h is the height of the tree)

Valid BST Example

Tree:

        8
      /   \
     4     10
    / \      \
   2   6      20
Array Representation (Level Order)
[8, 4, 10, 2, 6, null, 20]

Check:

4 < 8 ✅
10 > 8 ✅
2 < 4 < 8 ✅
6 > 4 and < 8 ✅
20 > 10 > 8 ✅

So this is a Valid BST.

Invalid BST Example

Tree:

        8
      /   \
     4     10
    / \
   2   9
Array Representation
[8, 4, 10, 2, 9]

At first glance:

9 > 4 ✅

But notice:

9 is in the left subtree of 8.
Every node in the left subtree of 8 must be less than 8.
9 > 8 ❌

So this is NOT a BST.

Another Invalid Example

Tree:

        5
      /   \
     3     7
          /
         4

Array:

[5, 3, 7, null, null, 4]

Here:

4 < 7 ✅
But 4 is in the right subtree of 5.
Every node in the right subtree must be greater than 5.
4 < 5 ❌

Hence Invalid BST.

Why Immediate Child Checking Is Not Enough

Incorrect approach:

if(root->left && root->left->val >= root->val)
    return false;

if(root->right && root->right->val <= root->val)
    return false;

This only compares a node with its direct children.

Example:

        10
       /  \
      5    15
          /
         6

Array:

[10, 5, 15, null, null, 6]
6 < 15 ✅
But 6 is in the right subtree of 10, so it should be > 10.
Since 6 < 10 ❌, the tree is not a BST.

The min/max range method correctly detects this because every recursive call carries the valid range for that node.

Summary
Array	Valid BST?	Reason
[8,4,10,2,6,null,20]	✅ Yes	All nodes satisfy BST rules.
[8,4,10,2,9]	❌ No	9 is in the left subtree of 8 but is greater than 8.
[5,3,7,null,null,4]	❌ No	4 is in the right subtree of 5 but is less than 5.
[10,5,15,null,null,6]	❌ No	6 is in the right subtree of 10 but is less than 10.

The key idea is that each node must satisfy the constraints imposed by all of its ancestors, not just its parent. That's why the min/max range approach is the standard and correct way to validate a BST.

explain code with concept and digram

The most important concept is that every node has a valid range of values, not just a relationship with its parent.

BST Property

For every node:

Left subtree → values less than the node.
Right subtree → values greater than the node.

Example of a valid BST:

        8
      /   \
     4     10
    / \      \
   2   6      20

Notice:

Left of 8 → 4, 2, 6 (all < 8)
Right of 8 → 10, 20 (all > 8)
The Idea Behind the Code

Instead of checking only the parent, we pass a minimum and maximum value that every node is allowed to have.

Initially, the root can be anything.

Range = (-∞, +∞)

        8

Since 8 is inside the range, it is valid.

Now move to its children.

Left Child

The left child must be less than 8.

Allowed Range = (-∞, 8)

        8
       /
      4

Check:

-∞ < 4 < 8  ✅
Right Child

The right child must be greater than 8.

Allowed Range = (8, +∞)

        8
         \
         10

Check:

8 < 10 < +∞ ✅
Continue Recursively

For node 6

        8
      /
     4
      \
       6

6 must satisfy two conditions:

greater than 4
smaller than 8

So its range becomes

(4, 8)

Check

4 < 6 < 8 ✅

For node 2

        8
      /
     4
    /
   2

Range

(-∞, 4)

Check

-∞ < 2 < 4 ✅

9 > 4

But 9 is inside the left subtree of 8.
So 9 must also satisfy
9 < 8

It doesn't.
Visualising the ranges:
              (-∞, +∞)
                   8
          /                  \
   (-∞,8)                    (8,+∞)
      4                         10
    /    \
(-∞,4)   (4,8)
   2        9 ❌
For node 9

Expected range
(4, 8)

Actual value

9

9 > 8 ❌
Hence the tree is not a BST.

Recursion Tree
isValid(8,-∞,+∞)
        |
   -----------------
   |               |
Left             Right
(4,-∞,8)      (10,8,+∞)
   |               |
-------             |
|     |             |
2     6            20
(-∞,4) (4,8)   (10,+∞)




#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Insert a node into BST
Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    }
    else if (val > root->data) {
        root->right = insert(root->right, val);
    }

    return root;
}

// Build BST from array
Node* buildBST(int arr[], int n) {
    Node* root = NULL;

    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Search in BST
bool search(Node* root, int key) {
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

// Find Inorder Successor
Node* getInorderSuccessor(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Delete Node
Node* delNode(Node* root, int val) {
    if (root == NULL)
        return NULL;

    if (val < root->data) {
        root->left = delNode(root->left, val);
    }
    else if (val > root->data) {
        root->right = delNode(root->right, val);
    }
    else {

        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // Case 2: One child
        if (root->left == NULL || root->right == NULL) {
            Node* child = (root->left != NULL) ? root->left : root->right;
            delete root;
            return child;
        }

        // Case 3: Two children
        Node* IS = getInorderSuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right, IS->data);
    }

    return root;
}

// Print nodes in given range
void printInRange(Node* root, int start, int end) {
    if (root == NULL)
        return;

    if (root->data >= start && root->data <= end) {
        printInRange(root->left, start, end);
        cout << root->data << " ";
        printInRange(root->right, start, end);
    }
    else if (root->data < start) {
        printInRange(root->right, start, end);
    }
    else {
        printInRange(root->left, start, end);
    }
}

// Print one path
void printPath(vector<int> path) {
    cout << "Path: ";

    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << " ";
    }

    cout << endl;
}

// Root to leaf helper
void pathHelper(Node* root, vector<int>& path) {

    if (root == NULL)
        return;

    path.push_back(root->data);

    if (root->left == NULL && root->right == NULL) {
        printPath(path);
        path.pop_back();
        return;
    }

    pathHelper(root->left, path);
    pathHelper(root->right, path);

    path.pop_back();
}

// Root to leaf paths
void rootToLeafPath(Node* root) {
    vector<int> path;
    pathHelper(root, path);
}

// Validate BST
bool validateHelper(Node* root, Node* min, Node* max) {

    if (root == NULL)
        return true;

    if (min != NULL && root->data <= min->data)
        return false;

    if (max != NULL && root->data >= max->data)
        return false;

    return validateHelper(root->left, min, root) &&
           validateHelper(root->right, root, max);
}

bool validateBST(Node* root) {
    return validateHelper(root, NULL, NULL);
}

// Main Function
int main() {

    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

    Node* root = buildBST(arr, 9);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << "\n\n";

    cout << "Search 15: ";
    cout << search(root, 15);

    cout << "\n\n";

    cout << "Deleting node 4...\n";
    root = delNode(root, 4);

    cout << "Inorder after deletion: ";
    inorder(root);

    cout << "\n\n";

    cout << "Nodes in range (5 to 12): ";
    printInRange(root, 5, 12);

    cout << "\n\n";

    cout << "Root to Leaf Paths:\n";
    rootToLeafPath(root);

    cout << "\n";

    if (validateBST(root))
        cout << "Valid BST";
    else
        cout << "Invalid BST";

    return 0;
}


 heaps/ priority 
 
 PQin STL
  priority_queue<int>pq;

push()//O(log n)
pop()//O(log n)
top()//)(logn)

A heap is a specialised tree-based data structure that satisfies the heap property. It is commonly used to implement a priority queue efficiently.

Heap

A heap is usually represented as a complete binary tree, where every level is completely filled except possibly the last, which is filled from left to right.

Max Heap

The parent node is greater than or equal to its children.
The largest element is always at the root.

Example:
     50
    /  \
   30   40
  / \   /
 10 20 35

 Min Heap

The parent node is less than or equal to its children.
The smallest element is always at the root.

Example:

     10
    /  \
   20   15
  / \   /
 30 40 25
| Operation      | Time Complexity |
| -------------- | --------------- |
| Insert         | O(log n)        |
| Delete Root    | O(log n)        |
| Peek (Min/Max) | O(1)            |
| Build Heap     | O(n)            |

| Heap                                         | Priority Queue                                          |
| -------------------------------------------- | ------------------------------------------------------- |
| A data structure                             | An abstract data type (ADT)                             |
| Stores elements in heap order                | Stores elements with priorities                         |
| Efficient implementation of a priority queue | Can be implemented using heaps, arrays, or linked lists |
| Insert/Delete: O(log n)                      | Depends on implementation                               |


#include<iostream>
#include<queue>
using namespace std;

int main (){
   //priority_queue<int>pq; //orderdecrement
   priority_queue<int,vector<int>,greater<int>>pq;//order incriment
   pq.push(5);
   pq.push(10);
   pq.push(9);
   pq.push(7);  pq.push(7);
   pq.push(3);
   cout<<"top:"<<pq.top()<<endl;
   while(!pq.empty()){
      cout<<"top:"<<pq.top()<<endl;
      pq.pop();
   }
   return 0;

}
   Heap
what is the Heap Data structure?
          9
         / \
        4   5             1
       /\                / \
      1  2              2   4
max heap                /\
                        5 9
                        min heap

Heap is acomplete BT(CBT)
.CBT is a BT whereall levels are filled maybe the last one,which is filled from left to right
. Parent>=Children //Max Heap

ex:Max Heap
          90
        /    \
      70      60
     /  \    /
   40   50  30

Building the Heap Dara Strucure

.push() //insert->o(logn)
.push() //pop max or min ->O(log n)
.push() //get max or min->o(1)


=>Heap is not implemented as a class
Heap is impliment as a vector and array

       8
      / \
     4   5
     /\
     1 2

#include <iostream>
using namespace std;

int heap[100];
int size = 0;

Explanation
int heap[100];
Creates an array to store the heap elements.
Since a heap is a Complete Binary Tree (CBT), it can be stored efficiently in an array.
int size = 0;
Keeps track of the number of elements currently in the heap.
Initially, the heap is empty.

void insert(int value)
{
    heap[size] = value;
    int i = size;
    size++;

    while (i != 0 && heap[(i - 1) / 2] < heap[i])
    {
        swap(heap[(i - 1) / 2], heap[i]);
        i = (i - 1) / 2;
    }
}


Step-by-step

Suppose the heap contains:
40 30 20

Tree:

    40
   /  \
 30   20

Now insert 50.

Step 1: Place it at the end.

40 30 20 50

Tree:

      40
     /  \
   30    20
  /
50


Step 2: Compare with its parent (30).
50 > 30
Swap them.
40 50 20 30

Tree:

      40
     /  \
   50    20
  /
30

Step 3: Compare 50 with parent (40).

50 > 40
Swap again.
50 40 20 30

Final heap:

      50
     /  \
   40    20
  /
30

This process is called heapify up.
void deleteMax()
{
    heap[0] = heap[size - 1];
    size--;

    int i = 0;

    while (true)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;

        if (left < size && heap[left] > heap[largest])
            largest = left;

        if (right < size && heap[right] > heap[largest])
            largest = right;

        if (largest != i)
        {
            swap(heap[i], heap[largest]);
            i = largest;
        }
        else
            break;
    }
}
Why a Class Is Not Necessary

A class simply groups the heap array and its functions together.

Without a class

int heap[100];
int size = 0;

void insert(int value);
void deleteMax();
void display();

heap and size become private data members.
Functions become member functions.
This provides encapsulation, keeping the data organised and protected.


Push in Heap


                      Binary Trees
A binary tree is uni-value if every node in the tree has thhe same value
given root of a binary  tree retun ture if given tree is uni-valued,or false




#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
   int data;
   TreeNode* left;
   TreeNode* right;

  TreeNode(int val){
     data=val;
     left=right=NULL;
  }
};
class Solution{
   public:
     bool isUnivalTree(TreeNode* root){
        if (root==NULL)
        {
         return true;
        }
        if (root->left!=NULL)
        {
          if (root->left->data!=root->data)
          {
            return false;
          }
        }
        if (root->right!=NULL)
        {
          if (root->right->data!=root->data)
          {
            return false;
          }
        }
        return isUnivalTree(root->left)&&isUnivalTree(root->right);
     }

};
int main (){
  TreeNode* root=new TreeNode(1);
  root->left=new TreeNode(1);
  root->right=new TreeNode(1);
  root->left->left=new TreeNode(1);
  root->left->right=new TreeNode(1);
  root->right->right=new TreeNode(1);

  Solution obj;
  if (obj.isUnivalTree(root))
  {
   cout<<"true";
  }else{
   cout<<"false";
  }
  return 0;
}

Q.Swapping a binary Tree

#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
   int data;
   TreeNode* left;
   TreeNode* right;

  TreeNode(int val){
     data=val;
     left=right=NULL;
  }
};
class Solution{
   public:
   TreeNode* invrtTree(TreeNode* root){
      if (root=NULL)
      {
        return NULL;
      }
      
      //Swap left and right child
      TreeNode* temp=root->left;
      root->left=root->right;
      root->right=temp;
      invrtTree(root->left);
      invrtTree(root->right);

      return root;
   }
};
void preorder(TreeNode* root){
   if (root==NULL)
   {
      return;
   }
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}
int main (){
  TreeNode* root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
  root->left->left=new TreeNode(4);
  root->left->right=new TreeNode(5);
  root->right->right=new TreeNode(6);

  Solution obj;
  root=obj.invrtTree(root);
  cout<<"preorder Traversal of Inverted root";
  preorder(root);
  return 0;
}



. Delete Leaves With a Given Value
Medium
Topics
premium lock icon
Companies
Hint
Given a binary tree root and an integer target, delete all the leaf nodes with value target.

Note that once you delete a leaf node with value target, if its parent node becomes a leaf node and has the value target, it should also be deleted (you need to continue doing that until you cannot).

Example 1:

Input: root = [1,2,3,2,null,2,4], target = 2
Output: [1,null,3,null,4]
Explanation: Leaf nodes in green with value (target = 2) are removed (Picture in left). 
After removing, new nodes become leaf nodes with value (target = 2)
  

  #include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
   int data;
   TreeNode* left;
   TreeNode* right;

  TreeNode(int val){
     data=val;
     left=right=NULL;
  }
};
class Solution{
  public:
   TreeNode* removeLeafNode(TreeNode* root,int target){
      if (root==NULL)
      {
        return NULL;
      }
      root->left=removeLeafNode(root->left,target);
      root->right=removeLeafNode(root->right,target);
      //Delete current node if it is a leaf and its value is target
      if (root->left==NULL&&
          root->right==NULL&&
          root->data==target)
      {
         delete root;
         return NULL;
      }
      return root;
   }
};
void inorder(TreeNode* root){
   if (root==NULL)
   {
      return;
   }

inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
int main (){
  TreeNode* root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
  root->left->left=new TreeNode(2);
  root->right->left=new TreeNode(2);
  root->right->right=new TreeNode(3);

  int target=2;
  Solution obj;
  cout<<"Inorder before delection";
  inorder(root);
  root=obj.removeLeafNode(root,target);
  cout<<"\Inorder After Delection:";
  inorder(root);
  cout<<endl;
  return 0;
}

652. Find Duplicate Subtrees

Given the root of a binary tree, return all duplicate subtrees.

For each kind of duplicate subtrees, you only need to return the root node of any one of them.

Two trees are duplicate if they have the same structure with the same node values.
Example 1:

Input: root = [1,2,3,4,null,2,4,null,null,4]
Output: [[2,4],[4]]
Example 2:



#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

struct TreeNode{
  int data;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int val){
   data=val;
   left=right=NULL;
  }
};
class Solution
{
   unordered_map<string,int>mp;
   vector<TreeNode*>ans;
   public:
    string solve(TreeNode* root){
      if (root==NULL)
      {
        return "#";
      }
      string left=solve(root->left);
      string right=solve(root->right);

      string curr=to_string(root->data)+","+left+","+right;
      mp[curr]++;
      if(mp[curr]==2){
         ans.push_back(root);
      }
      return curr;
    }
    vector<TreeNode*>findDublicateSubtrees(TreeNode* root){
       solve(root);
       return ans;
     }
   };
   void preorder(TreeNode* root){
      if (root==NULL)
      {
        return;
      }
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
   }
int main(){
  TreeNode* root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
  root->left->left=new TreeNode(4);
  root->right->left=new TreeNode(2);
  root->right->left=new TreeNode(4);
  root->right->left->left=new TreeNode(4);

  Solution obj;

  vector<TreeNode*> dubblicate=obj.findDublicateSubtrees(root);
  cout<<"Dublicate Subtrees Root Value";
  for(TreeNode* node:dubblicate){
    cout<<node->data<<" ";
  }
  cout<<endl;
 return 0;
}


124. Binary Tree Maximum Path Sum

A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root.

The path sum of a path is the sum of the node's values in the path.

Given the root of a binary tree, return the maximum path sum of any non-empty path.
\\
Example 1:


Input: root = [1,2,3]
Output: 6
Explanation: The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 6.

 
#include<iostream>
#include<climits>
using namespace std;

struct TreeNode{
   int data;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int val){
      data=val;
      left=right=NULL;
   }

};
class Solution{
   public:
   int maxSum=INT_MIN;
   int defthfirstSearch(TreeNode* root){
     if(root==NULL)
        return 0;
     int left=max(0,defthfirstSearch(root->left));
     int right=max(0,defthfirstSearch(root->right));
     //max path passing through the current node
     maxSum=max(maxSum,left+right+root->data);
      //Return maximum gain to parent
     return max(left,right)+root->data;
   }
   int maxPathSum(TreeNode* root){
      defthfirstSearch(root);
      return maxSum;
   }

};
int main(){
 TreeNode* root=new TreeNode(1);
 root->left=new TreeNode(2);
 root->right=new TreeNode(3);

 Solution obj;
 cout<<"Maximum Path sum="<<obj.maxPathSum(root);
 return 0;

           Heap

   Heap Sort
   [1,4,2,5,3]

What is heap?
A heap is Binary Tree that satisfies the heap property?
Acomplete Binary Tree means:
Every level is completely filled except possibly the last level
 The last level is filled from left to right;

 there are two type of heaps:
 .Parent node is greater than or equal to its children.
 .Largest element is at the root.

     90
     / \
    70  60
   / \   /\
  40 50 20 30

2.min heap
Parent node is smaller than or equal to its children
Smaller element is at the root.

Example.
    10
    / \
   20  30
   / \  / \
 40 50 60 70

 Heap represention in a array
 Index: 0  1  2  3  4  5  6
 value: 50 30 40 10 20 35 37

          50
          / \
         30  40
         / \  / \
        10 20 35 37
for  index i
left Child=2*i+1
right child;=2*i+2
Parent =(i-1)/2;

for index 2:
Index=2
Value=40
left child=2x2+1=5
Right child=2x2+2=6


#include<iostream>
using namespace std;
//Heap function

//Hepify function
void heapify(int arr[],int n,int i){
   int largest=i;
   int left=2*2+1;
   int right= 2*2+2;

   //left child
   if (left<n && arr[left]>arr[largest])
   {
      largest=left;
   }
   //Right child
   if (right<n && arr[left]>arr[largest])
   {
      largest=right;
   }
   //Swap and heappfiy
   if (largest!=i)
   {
      swap(arr[i],arr[largest]);
      heapify(arr,n,largest);
   }
}
//Heap Sort
void heapSort(int arr[],int n){
   //Build Max Heap
   for (int i = n/2-1; i>=0; i--)
   {
      heapify(arr,n,i);
   }
   //Extract element one by one
   for (int i = n-1; i >=0; i--)
   {
      swap(arr[0],arr[i]);o
      heapify(arr,i,0);
   }
}
//print array
void printArray(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
}
int main (){
   int arr[]={12,11,13,5,6,7};
   int n=sizeof(arr)/sizeof(arr[0]);


   cout<<"Original Array is";
   printArray(arr,n);

   heapSort(arr,n);

   cout<<"Sorted Array:\n";
   printArray(arr,n);
   return 0;

}

Heapin asending order
   
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void heapify(int i,vector<int>&arr,int n){
   int left=2*i+1;
   int right=2*i+2;
   int maxI=i;

   if(left<n && arr[left]>arr[maxI]){
      maxI=left;
   }
   if(right<n && arr[right]>arr[maxI]){
      maxI=right;
   }
   if(maxI !=i){
          swap(arr[i],arr[maxI]);
          heapify(maxI,arr,n);
   }

}

void heapSort(vector<int>&arr){
   int n=arr.size();
     //Step1.build maxheap
     for(int i=n/2-1;i>=0;i--){
        heapify(i,arr,n);
    }
    //step2:taking element to the coreect pos
    for (int i = n-1; i>=0; i--)
    {
       swap(arr[0],arr[i]);
       heapify(i,arr,0);
    }

}

int main (){
   vector<int>arr={1,4,2,5,3};
   heapSort(arr);
   for (int i = 0; i <arr.size(); i++)
   {
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}

Heap in descending order
 #include<iostream>
#include<vector>
#include<queue>
using namespace std;

void heapify(int i,vector<int>&arr,int n){
   int left=2*i+1;
   int right=2*i+2;
   int maxI=i;

   if(left<n && arr[left]<arr[maxI]){
      maxI=left;
   }
   if(right<n && arr[right]<arr[maxI]){
      maxI=right;
   }
   if(maxI !=i){
          swap(arr[i],arr[maxI]);
          heapify(maxI,arr,n);
   }

}

void heapSort(vector<int>&arr){
   int n=arr.size();
     //Step1.build maxheap
     for(int i=n/2-1;i>=0;i--){
        heapify(i,arr,n);
    }
    //step2:taking element to the coreect pos
    for (int i = n-1; i>=0; i--)
    {// O(n*logn)
       swap(arr[0],arr[i]);
       heapify(i,arr,0);
    }

}

int main (){
   vector<int>arr={1,4,2,5,3};
   heapSort(arr);
   for (int i = 0; i <arr.size(); i++)
   {
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
       Nearby Cars
Based on Car Locations(cx,cy)find nearst k cars.

check-rong

#include<iostream>
#include<vector>
#include<queue>
  using namespace std;

  class car{
   public:
      int idx;
      int distSq;

      car(int idx,int distSq){
          this->idx=idx;
          this->distSq=distSq;
      }
      bool operator<(const car &obj){
          return this->distSq>obj.distSq;
      }
  };

  void nearbyCars(vector<pair<int,int>>pos,int k){
    vector<car>cars;

    for (int i = 0; i < pos.size(); i++){//O(n)
       int distSq=(pos[i].first*pos[i].first)+(pos[i].second * pos[i].second);
       cars.push_back(car(i,distSq));
    }
    priority_queue<car>pq(cars.begin(),cars.end());//O(n)

    for (int i = 0; i <cars.size(); i++) {//O(nlogn)
     pq.push(cars[i]);
    }
    for(int i=0;i<k;i++){//o(klogn)
         cout<<"car"<<pq.top().idx<<endl;
         pq.pop();
    }
  }
  int main (){
     vector<pair<int,int>>pos;
     pos.push_back(make_pair(3,3));
     pos.push_back(make_pair(-1,3));
     pos.push_back(make_pair(5,-1));
     pos.push_back(make_pair(-2,4));

     int k=2;
     nearbyCars(pos,k);
     return 0;
  }


  Example

Ropes: 4, 3, 2, 6

Connect 2 and 3 → cost = 5
Remaining: 4, 5, 6
Connect 4 and 5 → cost = 9
Remaining: 6, 9
Connect 6 and 9 → cost = 15

Total cost = 5 + 9 + 15 = 29

If you connect in a different order, for example:

6 + 4 = 10
10 + 3 = 13
13 + 2 = 15

Total cost = 10 + 13 + 15 = 38, which is larger.

Efficient algorithm

Use a min-heap (priority queue):

Insert all rope lengths into a min-heap.
While more than one rope remains:
Extract the two smallest lengths.
Add their sum to the answer.
Insert the sum back into the heap.
The accumulated sum is the minimum total cost.

Time complexity: O(nlogn)
Space complexity: O(n)



#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int minCost(vector<int>& ropes) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int len : ropes)
        pq.push(len);

    int cost = 0;

    while (pq.size() > 1) {
        int first = pq.top(); pq.pop();
        int second = pq.top(); pq.pop();

        int sum = first + second;
        cost += sum;
        pq.push(sum);
    }

    return cost;
}

int main() {
    vector<int> ropes = {4, 3, 2, 6};
    cout << minCost(ropes) << endl;  // Output: 29
    return 0;
}
    

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int connectNRopes(vector<int>& ropes){

   priority_queue<int,vector<int>,greater<int>>pq(ropes.begin(),ropes.end());
   int cost=0;

   while(pq.size()>1){
      int min1=pq.top();
      pq.pop();

      int min2=pq.top();
      pq.pop();

      cost+=min1+min2;
      pq.push(min1+min2);
   }
   cout<<"mincost="<<cost<<endl;
   return cost;
}
int main (){
   vector<int>rops={4,3,2,6};
   connectNRopes(rops);
   return 0;
}
   
  #include<iostream>
  An array stones[], where stones[i] is the number of stones in the ith pile.
An integer K.

It is possible to end with one pile only if

(n−1)%(K−1)==0

Why?

Each merge reduces the number of piles by K-1.
n = 5, K = 3

5 piles
→ merge 3 → 3 piles
→ merge 3 → 1 pile

Reduction:
5 → 3 → 1

Each merge decreases piles by 2.
= minimum cost to merge piles from index i to j as much as possible.

We also need prefix sums to quickly calculate the sum of stones.
Prefix Sum
prefix[i] = total stones from 0 to i-1

So,

sum(i,j)
=
prefix[j+1]-prefix[i]

Example

stones = [3,2,4,1]

prefix
0 3 5 9 10
Sum from 1 to 3
10-3 = 7

State Transition

We try every possible split.

dp[i][j]
=
min(dp[i][mid] + dp[mid+1][j])

But notice:

We only split at

mid += K-1

because only those states are valid.
When do we add merge cost?

Suppose after solving interval

i...j

it becomes exactly K piles.

Then we merge them into one.

Condition:

(length-1)%(K-1)==0

where

length=j-i+1

Then

dp[i][j]+=sum(i,j)


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mergeStones(vector<int>& stones, int k) {
        int n = stones.size();

        // Check if it is possible to merge into one pile
        if ((n - 1) % (k - 1) != 0) {
            return -1;
        }

        // Prefix sum array
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + stones[i];
        }

        const int INF = 1e9;

        // DP table
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Length of interval
        for (int len = k; len <= n; len++) {
            for (int i = 0; i + len <= n; i++) {
                int j = i + len - 1;
                dp[i][j] = INF;

                // Try every valid partition
                for (int m = i; m < j; m += k - 1) {
                    dp[i][j] = min(dp[i][j], dp[i][m] + dp[m + 1][j]);
                }

                // If current interval can be merged into one pile
                if ((len - 1) % (k - 1) == 0) {
                    dp[i][j] += prefix[j + 1] - prefix[i];
                }
            }
        }

        return dp[0][n - 1];
    }
};   // <-- This brace was missing

int main() {
    int n, k;

    cout << "Enter number of stones: ";
    cin >> n;

    vector<int> stones(n);

    cout << "Enter stones: ";
    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }

    cout << "Enter value of K: ";
    cin >> k;

    Solution s;
    cout << "Minimum cost to merge stones: " << s.mergeStones(stones, k) << endl;

    return 0;
}

Weakest Soldier
For an MXN matrix,a row i is wealer  than a row if one of the folowwing is true:
.The number of soldiers in row i is less than the number of 
soldiers in row j.
.Both rows have the same number of soldier and i<j.

Find k weakest rows.

1 0 0 0
1 1 1 1
1 0 0 0
1 0 0 0

k=2

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Row {
public:
    int count; // Number of soldiers
    int idx;   // Row index

    Row(int count, int idx) {
        this->count = count;
        this->idx = idx;
    }

    bool operator<(const Row &obj) const {
        if (count == obj.count)
            return idx > obj.idx;   // Smaller index has higher priority
        return count > obj.count;   // Smaller soldier count has higher priority
    }
};

void weakestSoldier(vector<vector<int>> &matrix, int k) {
    vector<Row> rows;

    for (int i = 0; i < matrix.size(); i++) {
        int count = 0;

        for (int j = 0; j < matrix[i].size() && matrix[i][j] == 1; j++) {
            count++;
        }

        rows.push_back(Row(count, i));
    }

    priority_queue<Row> pq(rows.begin(), rows.end());

    for (int i = 0; i < k && !pq.empty(); i++) {
        cout << "Row " << pq.top().idx << endl;
        pq.pop();
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 1, 1},
        {1, 0, 0, 0},
        {1, 0, 0, 0}
    };

    weakestSoldier(matrix, 2);

    return 0;
}
Sliding window solve by queue


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    // {value, index}
    priority_queue<pair<int, int>> pq;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        // Push current element and its index
        pq.push({nums[i], i});

        // Remove elements that are outside the current window
        while (!pq.empty() && pq.top().second <= i - k) {
            pq.pop();
        }

        // Window is complete
        if (i >= k - 1) {
            ans.push_back(pq.top().first);
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = maxSlidingWindow(nums, k);

    cout << "Sliding Window Maximum: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void slidingWindowMax(vector<int>&arr,int k){
   priority_queue<pair<int,int>>pq;

   for(int i=0;i<arr.size();i++){
      pq.push(make_pair(arr[i],i));
   }
   cout<<"Output:"<<pq.top().first<<" ";
   for(int i=k;i<arr.size();i++){
      while (!pq.empty() && pq.top().second <= (i-k)) {//outside window
         pq.pop();
      }
      pq.push(make_pair(arr[i],i));
      cout<<pq.top().first<<" ";
   }
   cout<<endl;
}

int main(){
   vector<int> arr={1,3,-1,-3,5,3,6,7};
   int k=3;

   slidingWindowMax(arr,k);

   return 0;
}

938. Range Sum of BST

Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].

Example 1:

Input: root = [10,5,15,3,7,null,18], low = 7, high = 15
Output: 32
Explanation: Nodes 7, 10, and 15 are in the range [7, 15]. 7 + 10 + 15 = 32.


concept(using BST Property)
A BST has the property
.left subtree contains smaller values
.right subtree contains greater values

              5
             / \
            3  8


if  low=7
Since 5 <7 every node in the left subtree is also less than 7
So skip left subtree complexity
Go only to:

return rangeSumBST(root->right,low,heigh)

if heigh=18
Since 20>18 every node in the right subtree is also greater than 18
skip the right subtree.

return rangeSumBST(root->left,low,heigh)

3.low<=root->val<=heigh
current node lies in the range

return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high)

Recursive Alorithm

if root==NULL
  return 0
if root->val<low
  search right subtree
Else if root->val>heigh
 search left subtree
Else
  return root->val +left subtree+right subtree
       10
      /  \
      5  15
     / \   \
    3   7   18
low=7,heigh=15
visit 10
10 in range
sum=10
Visit left and right

visit 5
5<7
skip left subtree(3)
Go to 7

visit 7
In range
sum=7

visit 15
In range
sum=15

Visit 15
In range
Sum=15

Visit 18
skip right subtree
left is NULL

Total: 10+7+15=32
Best case:O(log n) many branches are in balanced(BST)
worst case:O(n)all nodes visited ,e.g skewed tree or all values in range

Space Complxity
O(h)recursive call stack ,where h in the right of the subtree


#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to calculate range sum
int rangeSumBST(TreeNode* root, int low, int high) {
    if (root == NULL)
        return 0;

    // Skip left subtree
    if (root->data < low)
        return rangeSumBST(root->right, low, high);

    // Skip right subtree
    if (root->data > high)
        return rangeSumBST(root->left, low, high);

    // Current node lies in the range
    return root->data +
           rangeSumBST(root->left, low, high) +
           rangeSumBST(root->right, low, high);
}

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);

    int low = 7;
    int high = 15;

    cout << "Range Sum = " << rangeSumBST(root, low, high) << endl;

    return 0;
}


Question2:WehaveabinarysearchtreeandatargetnodeK.ThetaskistofindthenodewithminimumabsolutedifferencewithgiventargetvalueK.Examples:8/\511/\\3620Input1:K=5Output1:ans=5(absdiff=0)

Example
        8
       / \
      5   11
     / \    \
    3   6    20

Input:

K = 5

Output:

ans = 5
Absolute Difference = |5 - 5| = 0

Since 5 exists in the BST, its absolute difference from K is 0, which is the minimum possible.


#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

struct TreeNode{
   int data;
   TreeNode* left;
   TreeNode*right;

   TreeNode(int val){
      data=val;
      left=right=NULL;

   }
};
TreeNode* minDifference(TreeNode* root,int k){
   TreeNode* ans=NULL;
   int minDiff=INT_MAX;

   while(root!=NULL){
      int diff=abs(root->data-k);
      if(diff<minDiff){
         minDiff=diff;
         ans=root;
      }
      if(k<root->data){
         root=root->left;
      }else if(k>root->data){
         root=root->right;
      }else{
         break;
      }
   }
   return ans;
}
int main (){
  TreeNode* root=new TreeNode(8);
  root->left=new TreeNode(5);
  root->right=new TreeNode(11);
  root->left->left=new TreeNode(3);
  root->left->right=new TreeNode(6);
  root->right->right=new TreeNode(20);

  int k=5;

  TreeNode* result=minDifference(root,k);
  cout<<"Answer="<<result->data<<endl;
  cout<<"Absolute difference="<<abs(result->data-k)<<endl;
}

230. Kth Smallest Element in a BST
Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

Example 1:
Input: root = [3,1,4,null,2], k = 1
So, the kth node visited during inorder traversal is the kth smallest element.

Example 1
      3
     / \
    1   4
     \
      2

Input:

k = 1

Inorder Traversal:

1 → 2 → 3 → 4

The 1st smallest element = 1

Output:
1


#include<iostream>
using namespace std;
struct TreeNode{
   int data;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int val){
      data=val;
      left=right=NULL;
   }
};
class Solution{
   public:
    int count=0;
    int ans=0;
    void inorder(TreeNode*root,int k){
      if(root==NULL){
         return;
      }
      inorder(root->left,k);
      count++;
      if(count==k){
         ans=root->data;
         return;
      }
      inorder(root->right,k);
    }
    int kthsmallest(TreeNode* root,int k){
      inorder(root,k);
      return ans;
    }

};
int main (){
   TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);

    Solution obj;

    cout << "Kth Smallest = " << obj.kthsmallest(root, 1);

    return 0;
}

Given Two Binary Search Trees (BSTs), Find All Pairs Whose Sum Equals Target (C++)
Problem Statement

Given two Binary Search Trees (BSTs) and a target value x, determine whether there exists a pair (a, b) such that:

a is a node from the first BST.
b is a node from the second BST.
a + b = x.

The example also asks to count the pairs.


BST 1
        5
      /   \
     3     7
    / \   / \
   2   4 6   8
BST 2
         10
        /  \
       6    15
      / \   / \
     3   8 11 18
Target x=16
Inorder Traversal of BST 1:2 3 4 5 6 7 8

BST2
3 6 8 10 11 15 18

Step 1: Store Inorder Traversal
BST1
v1 = [2,3,4,5,6,7,8]
BST2
v2 = [3,6,8,10,11,15,18]

Step 2: Two Pointer Technique

Initialize:

i = 0
j = v2.size()-1

That means
i = 0 → value = 2
j = 6 → value = 18

Iteration 1
2 + 18 = 20

20 > 16

Move right pointer left.
j--

Iteration 2
2 + 15 = 17

Still greater.

Move

j--

Iteration 3
2 + 11 = 13
13 < 16
Move
i++

Iteration 4
3 + 11 = 14
Less
i++

Iteration 5
4 + 11 = 15
Less
i++

Iteration 6
5 + 11 = 16
Found one pair.
(5,11)
Count = 1

Iteration 7
6 + 10 = 16

Second pair.

(6,10)

Count = 2

Move both.

Iteration 8
7 + 8 = 15

Less

Move

i++
Iteration 9
8 + 8 = 16
Third pair.
(8,8)
Count = 3
Loop ends.


#include<iostream>
#include<vector>
using namespace std;

class Node{
 public:
   int data;
   Node* left;
   Node*right;

   Node(int val){
      data=val;
      left=right=NULL;
   }
};
//Insert in BST
Node* insert(Node* root,int val){
   if(root==NULL){
      return new Node(val);
   }
   if(val<root->data){
      root->left=insert(root->left,val);
   }
   else{
      root->right=insert(root->right,val);
   }
   return root;
}
//Inorder Traversal
void inorder(Node* root,vector<int>&v){
   if(root==NULL){
      return;
   }
   inorder(root->left,v);
   v.push_back(root->data);
   inorder(root->right,v);
}
//Find all pairs
int countPairs(Node* root1,Node* root2,int target){
   vector<int>v1,v2;
   inorder(root1,v1);

   inorder(root1,v1);
   inorder(root2,v2);

   int i=0;
   int j=v2.size()-1;
   int count=0;

   while(i<v1.size() && j>=0){
      int sum=v1[i]+ v2[j];
      if(sum==target){
          cout<<"("<<v1[i]<<","<<v2[j]<<")"<<endl;
          count++;

          i++ ;
          j--;
      }
      else if(sum<target){
         i++ ;
      }
      else{
         j++ ;
      }
   }
}

int main(){

}
                       Hasing
Hash Table

Unorderd Data Structure(key,value)

Insert Operation //O(1) avg case
Search Operation //O(1) avg case
Remove Operation //O(1)avg case

Collisions



A Hash Table is a data structure that stores (Key, Value) pairs.

| Key   | Value |
| ----- | ----- |
| India | 150   |
| China | 140   |
| USA   | 100   |


Key = Country Name
Value = Population (or any associated data)

The main advantage of a hash table is that insert, search, and delete operations are very fast (average O(1) time).


Real-Life Example

Think of a library.

Instead of searching every shelf, the librarian looks up the book's code in a catalog and goes directly to the correct shelf.

A hash function acts like that catalog.

Key ------------> Hash Function ------------> Index

India  -----> 2

China  -----> 4

USA    -----> 1

Then the values are stored at those indices.

Step 1: Node Class
class Node{
public:
    string key;
    int val;
    Node* next;

    Node(string key,int val){
        this->key = key;
        this->val = val;
        next = NULL;
    }
};

Why Node?

We use Separate Chaining to handle collisions.

Each bucket contains a linked list.

Example:
Index 0
NULL

After inserting

India
Index 0
India -> NULL

Insert another key with the same index
USA
Index 0
USA -> India -> NULL

So every bucket stores a linked list.

Step 2: Hash Table Variables
int totSize;
int currSize;
Node** table;
totSize

Size of hash table.
Example
totSize = 5
Means

0 1 2 3 4 

Five buckets.
currSize

Number of elements currently stored.

Initially
currSize = 0
After inserting
India

China
currSize = 2

table
Node** table;

This is an array of pointers.
table

↓

+----+
| *  |----> NULL
+----+

| *  |----> NULL
+----+

| *  |----> NULL
+----+

| *  |----> NULL
+----+

| *  |----> NULL
+----+
Each pointer represents one bucket.

Step 3: Constructor
HashTable(int size=5){

    totSize=size;

    currSize=0;

    table=new Node*[totSize];

    for(int i=0;i<totSize;i++)
        table[i]=NULL;
}
0 -> NULL

1 -> NULL

2 -> NULL

3 -> NULL

4 -> NULL

Step 4: Hash Function
int hashfunction(string key){

    int idx=0;

    for(int i=0;i<key.size();i++){

        idx=(idx + key[i]*key[i])%totSize;
    }

    return idx;
}

Why do we need a hash function?

A key is a string.
India
But array indices are integers.
We must convert the string into an integer.


The function computes an index using these values and % totSize, ensuring the result stays between 0 and totSize - 1.

Step 5: Insert
void insert(string key,int val){

    int idx=hashfunction(key);

    Node* newNode=new Node(key,val);

    newNode->next=table[idx];

    table[idx]=newNode;

    currSize++;
}

Step 6: Search
int search(string key){

    int idx=hashfunction(key);

    Node* temp=table[idx];

    while(temp!=NULL){

        if(temp->key==key)
            return temp->val;

        temp=temp->next;
    }

    return -1;
}

Suppose

Bucket

USA -> India -> NULL

Searching

India

Compare

USA

↓

No

Move

India

↓

Yes

Return

150

| Operation | Average | Worst Case |
| --------- | ------- | ---------- |
| Insert    | O(1)    | O(n)       |
| Search    | O(1)    | O(n)       |
| Delete    | O(1)    | O(n)       |
| Rehash    | O(n)    | O(n)       |

#include<iostream>
using namespace std;

class Node{
public:
    string key;
    int val;
    Node* next;

    Node(string key,int val){
        this->key=key;
        this->val=val;
        next=NULL;
    }

    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};

class HashTable{

    int totSize;
    int currSize;
    Node** table;

    int hashfunction(string key){

        int idx=0;

        for(int i=0;i<key.size();i++){

            idx=(idx + key[i]*key[i])%totSize;
        }

        return idx;
    }

    void rehash(){

        Node** oldTable=table;

        int oldSize=totSize;

        totSize*=2;

        table=new Node*[totSize];

        for(int i=0;i<totSize;i++)
            table[i]=NULL;

        currSize=0;

        for(int i=0;i<oldSize;i++){

            Node* temp=oldTable[i];

            while(temp!=NULL){

                insert(temp->key,temp->val);

                temp=temp->next;
            }

            if(oldTable[i]!=NULL)
                delete oldTable[i];
        }

        delete[] oldTable;
    }

public:

    HashTable(int size=5){

        totSize=size;

        currSize=0;

        table=new Node*[totSize];

        for(int i=0;i<totSize;i++)
            table[i]=NULL;
    }

    void insert(string key,int val){

        int idx=hashfunction(key);

        Node* newNode=new Node(key,val);

        newNode->next=table[idx];

        table[idx]=newNode;

        currSize++;

        double lambda=currSize/(double)totSize;

        if(lambda>1)
            rehash();
    }

    bool exists(string key){

        int idx=hashfunction(key);

        Node* temp=table[idx];

        while(temp!=NULL){

            if(temp->key==key)
                return true;

            temp=temp->next;
        }

        return false;
    }

    int search(string key){

        int idx=hashfunction(key);

        Node* temp=table[idx];

        while(temp!=NULL){

            if(temp->key==key)
                return temp->val;

            temp=temp->next;
        }

        return -1;
    }

    void remove(string key){

        int idx=hashfunction(key);

        Node* temp=table[idx];

        Node* prev=NULL;

        while(temp!=NULL){

            if(temp->key==key){

                if(prev==NULL)
                    table[idx]=temp->next;
                else
                    prev->next=temp->next;

                temp->next=NULL;

                delete temp;

                currSize--;

                return;
            }

            prev=temp;

            temp=temp->next;
        }
    }
};

int main(){

    HashTable ht;

    ht.insert("India",150);
    ht.insert("China",140);
    ht.insert("USA",100);
    ht.insert("Nepal",30);
    ht.insert("UK",60);

    if(ht.exists("India")){

        cout<<"India Population = "<<ht.search("India")<<endl;
    }

    ht.remove("India");

    cout<<"After Deletion"<<endl;

    if(ht.exists("India"))
        cout<<ht.search("India");
    else
        cout<<"India Not Found"<<endl;

    return 0;
}

STL Containers

STL Containers in C++ (Complete Explanation with Concepts)
What is STL?

STL (Standard Template Library) is a collection of ready-made classes and functions in C++ that help you perform common programming tasks efficiently.

STL has three main components:

             STL
              |
    ---------------------
    |        |         |
Containers Algorithms Iterators
Containers → Store data.
Algorithms → Perform operations (sort, search, reverse, etc.).
Iterators → Traverse containers.

Typs os SSTL Containers
│
├── Sequence Containers
├── Associative Containers
├── Unordered Associative Containers
└── Container AdaptorsTL container

| Operation           | Complexity       |
| ------------------- | ---------------- |
| Access              | O(1)             |
| Insert at End       | O(1) (amortized) |
| Insert at Beginning | O(n)             |
| Delete at End       | O(1)             |


1. Sequence Containers

These store elements in a linear order.

Examples:

vector
list
deque
array
forward_list
(A) Vector

A vector is a dynamic array.

Concept
Stores elements in contiguous memory.
Automatically resizes when full.
Fast random access.

Memory:

Index : 0   1   2   3

Value :10  20  30  40
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int x : v)
        cout << x << " ";
}

(B) List

A list is a doubly linked list.

Memory:

NULL
  ↑
10 ⇄ 20 ⇄ 30 ⇄ 40
                 ↓
               NULL
Features
Fast insertion/deletion anywhere if you have the iterator.
No random access.
#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> l;

    l.push_back(20);
    l.push_front(10);
    l.push_back(30);

    for(int x : l)
        cout << x << " ";
}
| Operation       | Complexity |
| --------------- | ---------- |
| Insert Front    | O(1)       |
| Insert Back     | O(1)       |
| Delete          | O(1)       |
| Access by Index | O(n)       |

C) Deque (Double Ended Queue)

Insertion and deletion are efficient at both ends.

Front                       Back

10 20 30 40
Code
#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(10);

    for(int x : dq)
        cout << x << " ";
}

Output

(D) Array

Fixed-size array.

#include <array>
#include <iostream>
using namespace std;

int main() {

    array<int,5> arr = {1,2,3,4,5};

    for(int x : arr)
        cout << x << " ";
}

2. Associative Containers

These store elements in sorted order (usually implemented using balanced BSTs like Red-Black Trees).

Examples:

set
multiset
map
multimap

#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(20);

    for(int x : s)
        cout << x << " ";
}
| Operation | Complexity |
| --------- | ---------- |
| Insert    | O(log n)   |
| Find      | O(log n)   |
| Erase     | O(log n)   |


(B) Multiset

Allows duplicate values.

multiset<int> ms;

ms.insert(10);
ms.insert(10);
ms.insert(20);

Output

10 10 20

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string,int> mp;

    mp["India"] = 150;
    mp["USA"] = 100;

    for(auto p : mp)
        cout << p.first << " " << p.second << endl;
}


3. Unordered Associative Containers

Implemented using Hash Tables.

Examples:

unordered_set
unordered_map
unordered_multiset
unordered_multimap
Unordered Set
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    unordered_set<int> us;

    us.insert(30);
    us.insert(10);
    us.insert(20);

    for(int x : us)
        cout << x << " ";
}

Output order is not guaranteed.

Average complexity:

Insert : O(1)

Search : O(1)
Unordered Map
unordered_map<string,int> ump;

ump["India"] = 150;
ump["USA"] = 100;

Very fast average lookup.

4. Container Adaptors

These are built using other containers.

Examples:

stack
queue
priority_queue
Stack (LIFO)

Last In First Out

Top

30

20

10

Code

#include <stack>
#include <iostream>
using namespace std;

int main() {

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top();
}

Output

30
Queue (FIFO)

First In First Out

Front           Rear

10 20 30

Code

#include <queue>
#include <iostream>
using namespace std;

int main() {

    queue<int> q;

    q.push(10);
    q.push(20);

    cout << q.front();
}

Output

10
Priority Queue

By default, it is a Max Heap.

#include <queue>
#include <iostream>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(20);
    pq.push(50);
    pq.push(10);

    cout << pq.top();
}

Output

50


      For unoder map

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
   unordered_map<string,int>m;
   m["China"]=150;
   m["India"]=150;
   m["US"]=50;
   m["Nepal"]=10;

   //cout<<m["India"]<<endl;
   for (pair<string,int>country:m)
   {
      cout<<country.first<<","<<country.second<<endl;
   }
   if(m.count("Nepal"))
   {
      cout<<"Nepal exists\n";
   }else{
      cout<<"Nepal doesn't exist\n";
   }
   return 0;
}

for map

#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
   map<string,int>m;
   m["China"]=150;
   m["India"]=150;
   m["US"]=50;
   m["Nepal"]=10;

   //cout<<m["India"]<<endl;
   for (pair<string,int>country:m)
   {
      cout<<country.first<<","<<country.second<<endl;
   }
   if(m.count("Nepal"))
   {
      cout<<"Nepal exists\n";
   }else{
      cout<<"Nepal doesn't exist\n";
   }
   return 0;
}

#include<iostream>
#include<unordered_set>
using namespace std;

int main (){
   unordered_set<int>s;
   s.insert(1);
   s.insert(5);
   s.insert(3);
   s.insert(2);
   // s.insert(2);
   // s.insert(2);
   // s.insert(2);
   cout<<s.size()<<endl;
   if (s.find(3)!=s.end())
   {
      cout<<"3 exists\n";
   }else{
      cout<<"3 does not exist\n";
   }
   for(auto el:s){
      cout<<el<<" ";
   }
   cout<<endl;
   return 0;

}

   Normal set

#include<iostream>
#include<unordered_set>
using namespace std;

int main (){
   unordered_set<int>s;
   s.insert(1);
   s.insert(5);
   s.insert(3);
   s.insert(2);

   cout<<s.size()<<endl;
   if (s.find(3)!=s.end())
   {
      cout<<"3 exists\n";
   }else{
      cout<<"3 does not exist\n";
   }
   // for(auto el:s){
   //    cout<<el<<" ";
   // }
   // cout<<endl;
   // return 0;
}
Pair sum
[1,2,7,11,15,5,9]   target=9


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
   int arr[7]={1,2,7,11,15,5,9};
   int n=7;
   int target=9;
   unordered_map<int,int>m;

   for (int i = 0; i < n; i++)
   {
     int comp=target-arr[i];
     if (m.count(comp))
     {
       cout<<"ans="<<m[comp]<<","<<i<<endl;
       break;
     }
     m[arr[i]]=i;
   }
   return 0;
}

Majority Element
Find element that  appear more than n/3 times
[1,2,3,5,1,3,1,5,1]
                           key      val




#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void majorityElement(vector<int> nums) {
    unordered_map<int, int> m; // element and frequency

    // Count frequencies
    for (int i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
    }

    // Print elements appearing more than n/3 times
    for (auto p : m) {
        if (p.second > nums.size() / 3) {
            cout << p.first << " ";
        }
    }

    cout << endl;
}

int main() {
    vector<int> nums = {1, 3, 2, 5, 1, 3, 1, 5, 1};
    vector<int> nums2 = {1, 2};

    majorityElement(nums);
    majorityElement(nums2);

    return 0;
}

   Valid Anagram

   s="tulip" t="tipid"
     t=1   l=1
     u=1   i=2
     l=1   p=1
     i=1   d=1
     p=1

     s="race"           key(char)       val(freq)
                         r             1
                         a             1
                         c             1
                         e             1
      t="care"


 #include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;

    vector<int> count(26, 0);

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int x : count) {
        if (x != 0)
            return false;
    }

    return true;
}

int main() {
    cout << isAnagram("anagram", "nagaram") << endl; // 1 (true)
    cout << isAnagram("rat", "car") << endl;         // 0 (false)
    return 0;
}

#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;

bool validAnagram(string s,string t){
   if (s.size()!=t.size())
   {
      return false;
   }
   unordered_map<char,int>freq;
  for(int i=0;i<s.size();i++){
   if (freq.count(s[i]))
   {
      freq[s[i]]++;
   }else{
      freq[s[i]]=1;
     }
  }
 for(int i=0;i<t.size();i++){
   if (freq.count(s[i]))
   {
      freq[t[i]]--;
      if (freq [t[i]]==0)
      {
         freq.erase(t[i]);
      }
      
   }else{
      freq[s[i]]=1;
     }
  }
   return freq.size()==0;
}

int main (){
   string s="race";
   string t="care";
   return 0;
   cout<<validAnagram(s,t)<<endl;
   return 0;
}

Count Distincut


The Count Distinct problem asks you to find how many unique elements are present in an array.

Problem Statement

Given an array of integers, count the number of distinct (unique) elements.

Example 1

Input:
arr = [10, 20, 20, 10, 30, 40, 30]

Output:
4

Explanation
The distinct elements are:

10, 20, 30, 40

So, the answer is 4.

Concept

A distinct element is an element that appears at least once, regardless of how many times it repeats.

Example:

Array:
[5, 5, 5, 2, 2, 1]

Distinct elements:
5, 2, 1

Count = 

Approach 1: Using unordered_set (Best Approach)
Why unordered_set?

A set stores only unique elements.

Whenever you insert:

If the element is new → it is added.
If the element already exists → it is ignored.

Example:

Array:
10 20 20 10 30

Step 1:
Insert 10
Set = {10}

Step 2:
Insert 20
Set = {10,20}

Step 3:
Insert 20
Already present
Set = {10,20}

Step 4:
Insert 10
Already present
Set = {10,20}

Step 5:
Insert 30
Set = {10,20,30}

Size of set = 3
   
  #include<iostream>
  #include<unordered_set>
  using namespace std;

  int countDistinct(int arr[],int n){
   unordered_set<int>s;
   for(int i=0;i<n;i++){
      s.insert(arr[i]);
   }
   for(int el:s){
      cout<<el<<" ";
   }
   cout<<endl;
   return s.size();
  }
  int main (){
     int arr[] = {10,20,20,10,30,40,30};

     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<countDistinct(arr,n);
     return 0;
  }

Union and intersection
[7,3,9]   [6,3,9,2,9,4]


Union and Intersection are common operations on sets.

1. Union (|)

The union of two sets contains all unique elements from both sets.

Example:

A = {1, 2, 3, 4}
B = {3, 4, 5, 6}

union_set = A | B
print(union_set)

Output:

{1, 2, 3, 4, 5, 6}

You can also use the union() method:

A = {1, 2, 3}
B = {3, 4, 5}

print(A.union(B))

Output:

{1, 2, 3, 4, 5}
2. Intersection (&)

The intersection of two sets contains only the common elements present in both sets.

Example:

A = {1, 2, 3, 4}
B = {3, 4, 5, 6}

intersection_set = A & B
print(intersection_set)

Output:

{3, 4}

You can also use the intersection() method:

A = {10, 20, 30}
B = {20, 30, 40}

print(A.intersection(B))

Output:

{20, 30}

  
 #include<iostream>
 #include<set>
 #include<algorithm>
 #include<iterator>
 using namespace std;

 int main(){
   set<int>A={1,2,3,4};
   set<int>B={3,4,5,6};

   set<int>unionSet,intersection;

   set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(unionSet,unionSet.begin()));

    set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(intersection,intersection.begin()));

    cout<<"Uninon:";
    for(int x:unionSet){
      cout<<x<<" ";
    }

    cout<<"\nIntersection:";
    for ( int x:intersection)
    {
      cout<<x<<" ";
    }
    return 0;

 }
    
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

void printUninon(vector<int>arr1,vector<int>arr2){
   unordered_set<int>s;

   for(int el:arr1){
      s.insert(el);
   }
   for (int el:arr2)
   {
      s.insert(el);
   }
   //print union
   for (int el:arr2)
   {
      cout<<el<<" ";
   }
   cout<<endl;
}
void printintersection(vector<int>arr1,vector<int>arr2){
   unordered_set<int>s;
   for(int el:arr1){
      s.insert(el);
   }
   for(int el:arr2){
      if(s.find(el)!=s.end()){
         cout<<el<<" ";
      }
   }
   cout<<endl;
}


int main (){
    vector<int>arr1={1,2,3,4};
   vector<int>arr2={3,4,5,6};

   cout<<"union :";
   printUninon(arr1,arr2);


   cout<<"Intersection :";
   printintersection(arr1,arr2);
   return 0;
}

Itinerary from Tickects
Chennai->Bengaluru
Mumbai->Delhi
Goa->Chennai
Delhi->Goa


Given the tickets:

Chennai → Bengaluru
Mumbai → Delhi
Goa → Chennai
Delhi → Goa

The task is to find the complete itinerary (starting city to ending city).

Logic
Find the starting city (a city that appears only as a source and never as a destination).
Follow the source → destination mapping until no next destination exists.

Here:

Sources: Chennai, Mumbai, Goa, Delhi
Destinations: Bengaluru, Delhi, Chennai, Goa

Mumbai is the only source that never appears as a destination, so it is the starting city.

The itinerary is:

Mumbai -> Delhi -> Goa -> Chennai -> Bengaluru


#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

void prinntItinerarty(unordered_map<string,string>tickets){
   //Starting Point
   unordered_set<string>to;

   for(pair<string,string>ticket:tickets){
      to.insert(ticket.second);
   }

   string start="";
   for(pair<string,string>ticket:tickets){
      if(to.find(ticket.first)==to.end()){
         start=ticket.first;
      }
   }
   //plan print
   cout<<start<<"->";
   while (tickets.count(start))
   {
      cout<<tickets[start]<<"->";
      start=tickets[start];
   }
   cout<<"destination";
}

int main(){
   unordered_map<string,string>tickets;
   tickets["chennai"]="Bengaluru";
   tickets["Mumbai"]="Delhi";
   tickets["Goa"]="chennai";
   tickets["Delhi"]="Goa";

   prinntItinerarty(tickets);
}

Largest Subarray with Sum 0;

The Largest Subarray with Sum 0 problem is efficiently solved using a prefix sum + unordered_map.

Idea
Calculate the prefix sum while traversing the array.
If the same prefix sum occurs again, the elements between those indices have sum 0.
Store the first occurrence of each prefix sum in a hash map.
Keep track of the maximum length.
Example

Input:

arr = {15, -2, 2, -8, 1, 7, 10, 23}

Output:

Length = 5

The largest subarray with sum 0 is:

{-2, 2, -8, 1, 7}


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int solve(vector<int>&arr){
   unordered_map<int,int>mp;
   int prefixSum=0;
   int maxLen=0;
for (int i = 0; i < arr.size(); i++)
{
   prefixSum+=arr[i];

   //If prefix sum is 0,subarray start from index 0
   if (prefixSum=0)
   {
      maxLen=i+1;
   }
   //If prefix sum is seen before
   if (mp.find(prefixSum)!=mp.end())
   {
      maxLen=max(maxLen,i-mp[prefixSum]);
   }else{
      //store fist occurrence
      mp[prefixSum]=i;
   }

}

}
int main (){
   vector<int>arr={15,-2,2,-8,1,7,10,23};

    cout << "Largest subarray length with sum 0 = "
         << solve(arr);

    return 0;
}

    

    #include<iostream>
    #include<vector>
    #include<unordered_map>
    #include<unordered_set>
    using namespace std;

    int largestSubWith0Sum(vector<int>arr){
      unordered_map<int,int>m;
      int sum=0;
      int ans=0;

      for (int j = 0; j< arr.size(); j++)
      {
         sum+=arr[j];

         if (m.count(sum))
         {
            int currLen=j-m[sum];
            ans=max(ans,currLen);
         }else{
            m[sum]=j;
         }
      }
      return ans;

    }
int main(){
   vector<int>arr={15,-2,2,-8,1,7,10};
   cout<<"Largest subarray withsum 0:"<<largestSubWith0Sum(arr)<<endl;
   return 0;
}


    #include<iostream>
    #include<vector>
    #include<unordered_map>
    #include<unordered_set>
    using namespace std;

    int subarrayCountWithK(vector<int>arr,int k){
      unordered_map<int,int>m;
      m[0]=1;
      int sum=0;
      int ans=0;

      for (int j= 0; j < arr.size(); j++)
      {
        sum+=arr[j];
        if(m.count(sum-k)){
         ans +=m[sum-k];
        }
        if(m.count(sum)){
          m[sum]++;
        }else{
          m[sum]=1;
        }
      }
      return ans;
    }
int main (){
   vector<int>arr={10,2,-2,-20,10};
   int k=-10;

   cout<<"subarray count="<<subarrayCountWithK(arr,k)<<endl;
   return 0;
}


This code finds the number of subarrays whose sum is equal to k using the Prefix Sum + Hash Map technique. Its time complexity is O(n).

Example

The three subarrays are:

{10, 2, -2, -20}
{2, -2, -20, 10}
{-20, 10}





Last Stone Weight

You are given an array of integers stones where stones[i] is the weight of the ith stone.

We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:

If x == y, both stones are destroyed, and
If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
At the end of the game, there is at most one stone left.

Return the weight of the last remaining stone. If there are no stones left, return 0.

Example 1:

Input: stones = [2,7,4,1,8,1]
Output: 1
Explanation:
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.

Concept

In every turn, we need to:

Find the largest stone.
Find the second largest stone.
Smash them together.
If they are different, insert the remaining stone back.
Repeat until one or zero stones remain.

The best data structure for repeatedly getting the largest element is a Max Heap (Priority Queue).

Why?

Getting the largest element → O(1) (top())
Removing the largest element → O(log n) (pop())
Inserting a new element → O(log n) (push())

Example
Input:

stones = [2,7,4,1,8,1]


explain all code and give the code
LeetCode 1046: Last Stone Weight (Complete Explanation + C++ Code)
Problem Statement

You are given an array of stone weights.

On each turn:

Choose the two heaviest stones.
Smash them together.

Let:

x = second heaviest stone
y = heaviest stone (x <= y)

There are two cases:

Case 1

If

x == y

Both stones are destroyed.

Example

8 8

↓

No stone remains.
Case 2

If

x != y

The smaller stone is destroyed.

The larger stone becomes

y - x

Example

8 7

↓

8-7 = 1

The new stone of weight 1 is inserted back.

Example

Input

stones = [2,7,4,1,8,1]

Initially

2 7 4 1 8 1

We always pick the two largest stones.

Step 1

Largest stones

8
7

Smash

8-7 = 1

Remaining

2 4 1 1 1
Step 2

Largest

4
2

Difference

2

Remaining

2 1 1 1
Step 3

Largest

2
1

Difference

1

Remaining

1 1 1
Step 4

Largest

1
1

Difference

0

Both disappear.

Remaining

1

Answer

1
Which Data Structure Should We Use?

Every time we need

Largest element
Second largest element

A Max Heap (Priority Queue) is the best choice.

Why?
Operation	Priority Queue
Largest Element	O(1)
Delete Largest	O(log n)
Insert	O(log n)
Max Heap

Suppose

2 7 4 1 8 1

Priority Queue stores

        8
      /   \
     7     4
    / \   /
   1   2 1

Top is always

8
Algorithm
Step 1

Insert every stone into the priority queue.

Priority Queue

8 7 4 2 1 1
Step 2

While the queue has more than one stone

size > 1
Step 3

Take largest

int y = pq.top();
pq.pop();

Suppose

8
Step 4

Take second largest

int x = pq.top();
pq.pop();

Suppose

7
Step 5

Compare

If

8 == 7

Destroy both.

Else

8-7 = 1

Insert

pq.push(y-x);
Step 6

Repeat until

size == 1

or

size == 0
Step 7

If queue becomes empty

Return

0

Else

Return

pq.top();

Time Complexity
Insert all n stones into the priority queue: O(n log n) (or O(n) if built directly as a heap).
Each smash performs:
2 pop() operations → O(log n) each
Up to 1 push() operation → O(log n)
At most n - 1 smash operations.

Overall time complexity:

O(n log n)



#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int lastStoneWeight(vector<int>&stones){
   //Max Heap(priorrity Queue)
   priority_queue<int>pq;
   //insert all stone into heap
   for ( int stone:stones)
   {
      pq.push(stone);
   }
   //Continue until one or no stone remains
while (pq.size()>1)
{
   //Largest stone
   int y=pq.top();
   pq.pop();

   //Second largest stone
   int x=pq.top();
   pq.top();

   //if weight are different
   //insert the remaning weight
   if(y!=x){
      pq.push(y-x);
   }
}
//If no stone remains
 if(pq.empty())
    return 0;

    //Return the last remaining stone
    return pq.top();
}

int main (){
  vector<int>stones={2,7,4,1,8,1};
  cout<<"Last Stone weight="<<lastStoneWeight(stones);

  return 0;
}


215. Kth Largest Element in an Array
Medium
Topics
premium lock icon
Companies
Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

Can you solve it without sorting?

 

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5


LeetCode 215: Kth Largest Element in an Array
Problem Statement

Given an integer array nums and an integer k, return the kth largest element.

Note:

It is the kth largest element in the sorted order.
It is not the kth distinct element.
Example

Input

nums = [3,2,1,5,6,4]

k = 2
Step 1: Sort in Descending Order
6 5 4 3 2 1
Step 2

The 2nd largest element is

5

Output

5
Approach 1: Sorting (Simple)
Algorithm
Sort the array.
Return the (n-k)th element.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findkthLargest(vector<int>&nums,int k){
   sort(nums.begin(),nums.end());
   return nums[nums.size()-k];
}

int main(){
   vector<int>nums={3,2,1,5,6,4};
   int k=2;
   cout<<findkthLargest(nums,k);
   return 0;
}
Complete C++ Code (Min Heap)

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int findkthLargest(vector<int>&nums,int k)
{
   //minHeap
   priority_queue<int,vector<int>,greater<int>>pq;

   for (int num:nums)
   {
      pq.push(num);

      //kepp only k elements
      if (pq.size()>k)
      {
         pq.pop();
      }
   }
   return pq.top();
}
int main(){
  vector<int>nums={3,2,1,5,6,4};
  int k=2;
  cout<<"kth Largest Element="<<findkthLargest(nums,k);
  return 0;
}

| Approach    | Time                      | Space                              | Interview Preference                   |
| ----------- | ------------------------- | ---------------------------------- | -------------------------------------- |
| Sorting     | O(n log n)                | O(1) or O(log n) (depends on sort) | Easy                                   |
| Min Heap    | O(n log k)                | O(k)                               | ⭐ Better                               |
| Quickselect | Average O(n), Worst O(n²) | O(1)                               | ⭐ Best average-case interview solution |




621. Task Scheduler

You are given an array of CPU tasks, each labeled with a letter from A to Z, and a number n. Each CPU interval can be idle or allow the completion of one task. Tasks can be completed in any order, but there's a constraint: there has to be a gap of at least n intervals between two tasks with the same label.

Return the minimum number of CPU intervals required to complete all tasks.

Example 1:

Input: tasks = ["A","A","A","B","B","B"], n = 2

Output: 8

Problem Statement

You are given:

An array of CPU tasks (A to Z)
A cooling time n
Rule

If you execute a task A, then you cannot execute A again for the next n intervals.

During the cooling period, you can:

Execute another task, or
Keep the CPU Idle.

Your goal is to find the minimum CPU intervals required to finish all tasks.

Example
Input
tasks = [A, A, A, B, B, B]

n = 2

Frequency

A = 3

B = 3
Wrong Schedule
A A A B B B

Not allowed because there is no gap between identical tasks.

correct schedule
A  B  Idle  A  B  Idle  A  B
| Time | 1 | 2 | 3    | 4 | 5 | 6    | 7 | 8 |
| ---- | - | - | ---- | - | - | ---- | - | - |
| Task | A | B | Idle | A | B | Idle | A | B |
Answer

8
Another Example
tasks = [A,A,A,B,B,B]

n = 0

No cooling time.

Schedule

A A A B B B

Answer

6
Important Concept

The task with the highest frequency determines the minimum schedule length.

Example

A = 6

B = 1

C = 1

Even if we finish B and C quickly, we must wait between each A.

So the most frequent task controls the answer.

Mathematical Formula

Let:

maxFreq = maximum frequency of any task.
countMax = number of tasks having that maximum frequency.

Then

Answer = max( totalTasks,
              (maxFreq-1) × (n+1) + countMax )
Why This Formula Works

Suppose

A A A

Frequency

maxFreq = 3

Cooling

n = 2

Arrange the most frequent task first.

A _ _ A _ _ A

There are

maxFreq - 1 = 2

gaps.

Each gap must contain

n = 2

intervals.

Each block size is

n+1

because it includes one occurrence of the most frequent task.

A _ _

Size = 3.

Number of such blocks

maxFreq - 1

Hence

(maxFreq-1)*(n+1)

Finally, add the last occurrence(s) of the maximum-frequency task(s).

Example
A = 3

B = 3

n = 2
maxFreq = 3

countMax = 2

Formula

(3-1)*(2+1)+2

=2*3+2

=8

Total tasks

6

Answer

max(6,8)=8

Correct.

Another Example
A=3

B=3

C=3

n=2

Formula

(3-1)*(2+1)+3

=6+3

=9

Schedule

A B C
A B C
A B C

No idle time.

Answer

9



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int leastInterval(vector<char>& tasks, int n)
{
    // Frequency of 26 uppercase letters
    vector<int> freq(26, 0);

    // Count frequency of each task
    for (char task : tasks)
    {
        freq[task - 'A']++;
    }

    // Find maximum frequency
    int maxFreq = *max_element(freq.begin(), freq.end());

    // Count how many tasks have maximum frequency
    int countMax = 0;

    for (int f : freq)
    {
        if (f == maxFreq)
            countMax++;
    }

    // Calculate required intervals
    int intervals = (maxFreq - 1) * (n + 1) + countMax;

    // Final answer
    return max((int)tasks.size(), intervals);
}

int main()
{
    vector<char> tasks = {'A','A','A','B','B','B'};
    int n = 2;

    cout << "Minimum CPU Intervals = "
         << leastInterval(tasks, n);

    return 0;
}


Design a simplified version of Twitter where users can post tweets, follow/unfollow another user, and is able to see the 10 most recent tweets in the user's news feed.

Implement the Twitter class:

Twitter() Initializes your twitter object.
void postTweet(int userId, int tweetId) Composes a new tweet with ID tweetId by the user userId. Each call to this function will be made with a unique tweetId.
List<Integer> getNewsFeed(int userId) Retrieves the 10 most recent tweet IDs in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user themself. Tweets must be ordered from most recent to least recent.
void follow(int followerId, int followeeId) The user with ID followerId started following the user with ID followeeId.
void unfollow(int followerId, int followeeId) The user with ID followerId started unfollowing the user with ID followeeId.


Example 1:

Input
["Twitter", "postTweet", "getNewsFeed", "follow", "postTweet", "getNewsFeed", "unfollow", "getNewsFeed"]
[[], [1, 5], [1], [1, 2], [2, 6], [1], [1, 2], [1]]
Output
[null, null, [5], null, null, [6, 5], null, [5]]


#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Twitter {

    int timer;

    // user -> list of (time, tweetId)
    unordered_map<int, vector<pair<int,int>>> tweets;

    // follower -> set of followees
    unordered_map<int, unordered_set<int>> following;

public:

    Twitter() {
        timer = 0;
    }

    void postTweet(int userId, int tweetId) {

        tweets[userId].push_back({timer++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {

        vector<pair<int,int>> feed;

        // Add user's own tweets
        for(auto tweet : tweets[userId])
            feed.push_back(tweet);

        // Add followees' tweets
        for(int person : following[userId])
        {
            for(auto tweet : tweets[person])
                feed.push_back(tweet);
        }

        // Sort by time descending
        sort(feed.begin(), feed.end(),
        [](pair<int,int>& a, pair<int,int>& b)
        {
            return a.first > b.first;
        });

        vector<int> ans;

        for(int i=0;i<feed.size() && i<10;i++)
        {
            ans.push_back(feed[i].second);
        }

        return ans;
    }

    void follow(int followerId,int followeeId)
    {
        if(followerId!=followeeId)
            following[followerId].insert(followeeId);
    }

    void unfollow(int followerId,int followeeId)
    {
        following[followerId].erase(followeeId);
    }
};

int main()
{
    Twitter twitter;

    twitter.postTweet(1,5);

    vector<int> feed=twitter.getNewsFeed(1);

    cout<<"Feed : ";

    for(int x:feed)
        cout<<x<<" ";

    cout<<endl;

    twitter.follow(1,2);

    twitter.postTweet(2,6);

    feed=twitter.getNewsFeed(1);

    cout<<"Feed : ";

    for(int x:feed)
        cout<<x<<" ";

    cout<<endl;

    twitter.unfollow(1,2);

    feed=twitter.getNewsFeed(1);

    cout<<"Feed : ";

    for(int x:feed)
        cout<<x<<" ";

    return 0;
}
                    Trie Data Structure

                     a
                    / \
                  i    p
                 / \    \
                 r  m    q

k-ary(generic)tree
words[]={"the","a","there","their","any","there"}

                          root)
                        /      \
                      a         t
                     *          |
                     |          h
                     n          |
                     |          e*
                     y*       /   \
                             r     i
                             |      |
                             e*     r*

What is Search in a Trie?

Searching in a Trie means checking whether a complete word exists in the Trie.

For example, suppose the Trie contains:

the
there
their
a
any
Search Examples
Word	Result
the	✅ Found
there	✅ Found
their	✅ Found
any	✅ Found
an	❌ Not Found
then	❌ Not Found

Notice that "an" is a prefix of "any", but it is not a complete word, so the search returns false.

Trie Node

Each node contains:

An array of child pointers (26 for lowercase English letters)
A boolean flag isEnd to indicate the end of a word
class TrieNode {
public:
    TrieNode* children[26];
    bool isEnd;

    TrieNode() {
        isEnd = false;

        for (int i = 0; i < 26; i++)
            children[i] = NULL;
    }
};

Trei:
.Used for Retrieval Queries
.Used gen.for Insert& Search ops
.Searches in o(L) ,L=key length but uses extra space




#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Node {
public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node() {
        endOfWord = false;
    }
};

class Trie {
    Node* root;

public:
    Trie() {
        root = new Node();
    }

    // Insert a word
    void insert(string key) {
        Node* temp = root;

        for (int i = 0; i < key.size(); i++) {

            if (temp->children.count(key[i]) == 0) {
                temp->children[key[i]] = new Node();   // Fixed
            }

            temp = temp->children[key[i]];
        }

        temp->endOfWord = true;
    }

    // Search a word
    bool search(string key) {
        Node* temp = root;

        for (int i = 0; i < key.size(); i++) {

            if (temp->children.count(key[i]) == 0) {
                return false;
            }

            temp = temp->children[key[i]];
        }

        return temp->endOfWord;
    }
};

// Recursive helper
bool helper(Trie &trie, string key) {

    if (key.size() == 0) {
        return true;
    }

    for (int i = 0; i < key.size(); i++) {

        string first = key.substr(0, i + 1);
        string second = key.substr(i + 1);

        if (trie.search(first) && helper(trie, second)) {
            return true;
        }
    }

    return false;
}

// Word Break Function
bool wordBreak(vector<string> dict, string key) {

    Trie trie;

    for (int i = 0; i < dict.size(); i++) {
        trie.insert(dict[i]);
    }

    return helper(trie, key);
}

int main() {

    vector<string> words = {"the", "a", "there", "their", "any"};

    Trie trie;

    for (int i = 0; i < words.size(); i++) {
        trie.insert(words[i]);
    }

    cout << "Search 'their' : " << trie.search("their") << endl;
    cout << "Search 'there' : " << trie.search("there") << endl;
    cout << "Search 'the'   : " << trie.search("the") << endl;
    cout << "Search 'an'    : " << trie.search("an") << endl;
    cout << "Search 'any'   : " << trie.search("any") << endl;

    // Dictionary for Word Break
    vector<string> dict = {
        "i", "like", "sam", "sung",
        "samsung", "mobile", "ice",
        "cream", "icecream", "man", "go", "mango"
    };

    cout << "\nWord Break (ilikesamsung): "
         << wordBreak(dict, "ilikesamsung") << endl;

    return 0;
}

Prefix Problem
Find shortest unique prefix for each word.(no word is prefix of another)

words={"zebra","dog","duck","dove"}

ans[]={"z","dog","du","dov"}
                        (root)
                       /      \
                      z        d
                      |      /   \
                      e     o     u
                      |    / \     |
                      b   g*  v     c
                      |       |     |
                      r       e*    k*
                      |
                      a*
 
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Node {
public:
    unordered_map<char, Node*> children;
    bool endOfWord;
    int freq;

    Node() {
        endOfWord = false;
    }
};

class Trie {
    Node* root;

public:
    Trie() {
        root = new Node();
        root->freq=-1;
    }

    // Insert a word
    void insert(string key) {
        Node* temp = root;

        for (int i = 0; i < key.size(); i++) {

            if (temp->children.count(key[i]) == 0) {
                temp->children[key[i]] = new Node();
                temp->children[key[i]]->freq=1;   // Fixed
            }else{
               temp->children[key[i]]->freq++;
            }

            temp = temp->children[key[i]];
        }

        temp->endOfWord = true;
    }
    string getPrefix(string key){//O(L)
       Node* temp=root;
       string prefix=" ";

       for(int i=0;i<key.size();i++){
          prefix+=key[i];
          if(temp->children[key[i]]->freq==1){
            return prefix;
          }
          temp=temp->children[key[i]];
       }
       return prefix;
    }
};

void prefixProblem(vector<string>dict){//(n+L)
   Trie trie;
   for (int i = 0; i < dict.size(); i++)
   {
      trie.insert(dict[i]);
   }

    for (int i = 0; i < dict.size(); i++)
   {
      cout<<trie.getPrefix(dict[i])<<endl;
    
   }
}

int main() {
  vector<string>dict={"zebra","dog","duck","dove"};
  prefixProblem(dict);
  return 0;
}


Start with Problem
complete this for a trie:bool startswith(string prefix)
words[]={"applle","app","mango","man","woman"}

                                              (root)
                          /        |         \
                         a         m          w
                         |         |          |
                         p         a          o
                         |         |          |
                         p*        n*         m
                         |         |          |
                         l         g          a
                         |         |          |
                         e*        o*         n*


#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Node {
public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node() {
        endOfWord = false;
    }
};

class Trie {
    Node* root;

public:
    Trie() {
        root = new Node();
    }

    // Insert a word
    void insert(string key) {
        Node* temp = root;

        for (int i = 0; i < key.size(); i++) {

            if (temp->children.count(key[i]) == 0) {
                temp->children[key[i]] = new Node();   // Fixed
            }

            temp = temp->children[key[i]];
        }

        temp->endOfWord = true;
    }

    // Search a word
    bool search(string key) {
        Node* temp = root;

        for (int i = 0; i < key.size(); i++) {

            if (temp->children.count(key[i]) == 0) {
                return false;
            }

            temp = temp->children[key[i]];
        }

        return temp->endOfWord;

    } 

    bool startsWith(string prefix){
      Node* temp=root;

      for (int i = 0; i < prefix.size(); i++)
      {
         if (temp->children[prefix[i]])
         {
            temp=temp->children[prefix[i]];
         }else{
            return false;
         }
      }
      return true;
    }

   int countNodes(){

   }
};

    int countUniqueSubstr(string str){
           Trie trie;
           //find Suffix
           for(int i=0;i<str.size();i++){
             string suffix=str.substr(i);
             trie.insert(suffix);
           }
           return trie.countNodes();
        }

// Recursive helper
bool helper(Trie &trie, string key) {

    if (key.size() == 0) {
        return true;
    }

    for (int i = 0; i < key.size(); i++) {

        string first = key.substr(0, i + 1);
        string second = key.substr(i + 1);

        if (trie.search(first) && helper(trie, second)) {
            return true;
        }
    }

    return false;
}

// Word Break Function
bool wordBreak(vector<string> dict, string key) {

    Trie trie;

    for (int i = 0; i < dict.size(); i++) {
        trie.insert(dict[i]);
    }

    return helper(trie, key);
}

int main() {

   //  vector<string> words = {"the", "a", "there", "their", "any"};

   //  Trie trie;

   //  for (int i = 0; i < words.size(); i++) {
   //      trie.insert(words[i]);
   //  }

   //  cout << "Search 'their' : " << trie.search("their") << endl;
   //  cout << "Search 'there' : " << trie.search("there") << endl;
   //  cout << "Search 'the'   : " << trie.search("the") << endl;
   //  cout << "Search 'an'    : " << trie.search("an") << endl;
   //  cout << "Search 'any'   : " << trie.search("any") << endl;

   //  // Dictionary for Word Break
   //  vector<string> dict = {
   //      "i", "like", "sam", "sung",
   //      "samsung", "mobile", "ice",
   //      "cream", "icecream", "man", "go", "mango"
   //  };

   //  cout << "\nWord Break (ilikesamsung): "
   //       << wordBreak(dict, "ilikesamsung") << endl;

   vector<string>words={"applle","app","mango","man","woman"};
   Trie trie;
   for(int i=0;i<words.size();i++){
      trie.insert(words[i]);
   }
    cout<<trie.startsWith("moon")<<endl;
    return 0;
}

Count Unique Substrrings
count total distinct substring in a string
str="ababa",ans=10;



#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Node {
public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node() {
        endOfWord = false;
    }
};

class Trie {
    Node* root;

public:
    Trie() {
        root = new Node();
    }

    // Insert a word
    void insert(string key) {
        Node* temp = root;

        for (int i = 0; i < key.size(); i++) {

            if (temp->children.count(key[i]) == 0) {
                temp->children[key[i]] = new Node();   // Fixed
            }

            temp = temp->children[key[i]];
        }

        temp->endOfWord = true;
    }

    int countHelper(Node* root){
      int ans=0;

      for(pair<char,Node*>child:root->children){
         ans+=countHelper(child.second);
      }
      return ans+1;
    }

   int countNodes(){
        return countHelper(root);
   }
};

int countUniqueSubstr(string str){
           Trie trie;
           //find Suffix
           for(int i=0;i<str.size();i++){
             string suffix=str.substr(i);
             trie.insert(suffix);
           }
           return trie.countNodes();
        }


int main() {
string str="abc";

cout<<countUniqueSubstr(str)<<endl;
return 0;
}


       longest Word with allprefix

   Longest word such all of its prefixes exist in array
   dict[]={"a","banana","app","appl","ap","apply","apple"}


                             (root)
                           /         \
                          a*          b
                          |           |
                          p*          a
                          |           |
                          p*          n
                          |           |
                          l*          a
                         /  \         |
                       e*   y*        n
                                     |
                                     a*


#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Node {
public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node() {
        endOfWord = false;
    }
};

class Trie {
    Node* root;

public:
    Trie() {
        root = new Node();
    }

    // Insert a word
    void insert(string key) {
        Node* temp = root;

        for (int i = 0; i < key.size(); i++) {

            if (temp->children.count(key[i]) == 0) {
                temp->children[key[i]] = new Node();   // Fixed
            }

            temp = temp->children[key[i]];
        }

        temp->endOfWord = true;
    }

    void longestHelper(Node* root,string &ans,string temp){
      for(pair<char,Node*>child:root->children){
         if(child.second->endOfWord){
         temp+=child.first;

         if ((temp.size()==ans.size()&&temp<ans)||(temp.size()>ans.size()))
         {
            ans=temp;
         }
         longestHelper(child.second,ans,temp);
         temp=temp.substr(0,temp.size()-1);
       }
     }

    }
    string longestStringWithEOW(){
        string ans="";
        longestHelper(root,ans,"");
        return ans;

    }

};

string longestString(vector<string>dict){
   Trie trie;

   for(int i=0;i<dict.size();i++){
      trie.insert(dict[i]);
   }
   return trie.longestStringWithEOW();
}


int main() {
vector<string>dict={"a","banana","app","appl","ap","apply","apple"};

cout<<longestString(dict)<<endl;
return 0;

}

295. Find Median from Data Stream

The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.

For example, for arr = [2,3,4], the median is 3.
For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.
Implement the MedianFinder class:

MedianFinder() initializes the MedianFinder object.
void addNum(int num) adds the integer num from the data stream to the data structure.
double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.

Example 1:

Input
["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]
[[], [1], [2], [], [3], []]
Output
[null, null, null, 1.5, null, 2.0]

Explanation
MedianFinder medianFinder = new MedianFinder();
medianFinder.addNum(1);    // arr = [1]
medianFinder.addNum(2);    // arr = [1, 2]
medianFinder.findMedian(); // return 1.5 (i.e., (1 + 2) / 2)
medianFinder.addNum(3);    // arr[1, 2, 3]
medianFinder.findMedian(); // return 2.0

LeetCode 295: Find Median from Data Stream

Design a data structure that supports two operations efficiently:

addNum(num) → Add a number from the data stream.
findMedian() → Return the median of all numbers added so far.



addNum(1)
addNum(2)
findMedian()
addNum(3)
findMedian()

Output

1.5
2.0


#include<iostream>
#include<queue>
using namespace std;

class MedianFinder{
   //Max Heap(smaller half)
   priority_queue<int>leftHeap;

   //Min Heap(Largest half)
   priority_queue<int,vector<int>,greater<int>>rightHeap;

   public:

    MedianFinder(){

    }
    void addNum(int num){
      //Insert into appropriate heap
      if(leftHeap.empty()||num<=leftHeap.top()){
         leftHeap.push(num);
      }else{
         rightHeap.push(num);
      }
      //Balance heaps
      if (leftHeap.size()>rightHeap.size()+1)
      {
        rightHeap.push(leftHeap.top());
        leftHeap.pop();
      }
      else if(rightHeap.size()>leftHeap.size()+1){
          leftHeap.push(rightHeap.top());
          rightHeap.pop();
      }
    }
    double findMedian(){
       if (leftHeap.size()==rightHeap.size())
       {
          return (leftHeap.top() + rightHeap.top())/2.0;
       }
       else if(leftHeap.size()>rightHeap.size()){
           return leftHeap.top();
       }
       return rightHeap.top();
    }
};

int main (){
  MedianFinder mf;

  mf.addNum(1);
  mf.addNum(2);

  cout<<"Median="<<mf.findMedian()<<endl;
  mf.addNum(3);

  cout<<"Median="<<mf.findMedian()<<endl;
  return 0;
}

Graph and dp ***** most imortant

        0
      /   \
     1-----2
     |     |
     |     |
     3-----4
Vertices:

0 1 2 3 4

Edges:

0 - 1
0 - 2
1 - 2
1 - 3
2 - 4
3 - 4
1. Adjacency List (Most Used)
Diagram
0 → 1 → 2

1 → 0 → 2 → 3

2 → 0 → 1 → 4

3 → 1 → 4

4 → 2 → 3


Edges

Uni-Direction Un-Direction        Bi-Direction
A->B          A-B                  A<=>B


Types:

        Weighted                 UnWeighted

         9
   1   4/                         same dig
    \ / \
     6   3

List in c++ STL
#include<list>
.Doubly Linked List
.push_front();push_back()
.pop_front();pop_back()
.front;back();size()

Storing a Graph
.AdjacentList
.Adjacency Matrix
.Edge List
.2DMatrix(Implicit Graph)

Adjacent List
list of neighbour

0->[1]      list<int>   0
1->[0,2,3]  list<int>    \   2
2->[1,3]    list<int>     \ / \
3->[1,2]    list<int>      1...3

we store this in vector form    vector<list<int>> or store in list  arr<list<int>>


.Adjacency Matrix
        0 1 2 3 4
      +-----------
0  -> |0 1 1 0 0
1  -> |1 0 1 1 0
2  -> |1 1 0 0 1
3  -> |0 1 0 0 1
4  -> |0 0 1 1 0

space O(v^2)


Edge List
Edges={{0,1},{1,2},{1,2},{1,3},{22,3}}

Edge is combination of {u,v}

Implicit graph:

imagin the graph find the index of neber

                N1
                |
          N3 -- X--->N2
                |
                N4
X(i,j)
N1(i-1,j)
N2(i,j+1)
N3(i+1,j)
N4(i,j-1)

Create a Graph
Adjacency List
list<int>[v]
         4
  0    2/
   \  / \
    1    3

  
 #include<iostream>
 #include<vector>
 #include<list>
 using namespace std;
 class Graph{
   int v;
   list<int>*l;
public:
   Graph(int v){
      this->v=v;
      l=new list<int>[v];
   }
   void addEdge(int u,int v){
      l[u].push_back(v);
      l[v].push_back(u);
   }
   void print(){
      for (int u = 0; u< v; u++)
      {
         list<int>neighbors=l[u];
         cout<<u<<":";
         for(int v:neighbors){
         cout<<v<<" ";
         }
         cout<<endl;
      }
   }
 };
 int main (){
   Graph graph(5);
   graph.addEdge(0,1);
   graph.addEdge(1,2);
   graph.addEdge(1,3);
   graph.addEdge(2,3);
   graph.addEdge(2,4);

   graph.print();
  return 0;
 }
//Graph Traversals
.Breadth First Search(BFS)
.Depth First Search(DFS)

  Travel to Immediate Neighbour first
    1....3
   /     | \
  0      |   5          Queue<int>q(always use queue)
   \     |  / \        vector<bool>vis(v,false)
    2....4 /   6

   1,2,3,4,5,6

   Q->push->visit
   graph.bfs();
  return 0;
 }

 Keepgoing to 1st unvisited Neighbour


 Depth first Search(DFS)

\                 Keep going to unvisited Neighbour
    1....3
   /     | \
  0      |   5
   \     |  / \
    2....4 /   6
                                 dfs(u,vis[]){
   1,2,3,4,5,6                   vis[u]=true
                                 cout<<u;
                                 for(neighbors)
                                 (vis[v]!=true)
                                 dfs(v,vis)}


 #include<iostream>
 #include<vector>
 #include<queue>
 #include<list>
 using namespace std;
 class Graph{
   int v;
   list<int>*l;
public:
   Graph(int v){
      this->v=v;
      l=new list<int>[v];
   }
   void addEdge(int u,int v){
      l[u].push_back(v);
      l[v].push_back(u);
   }
   void print(){
      for (int u = 0; u< v; u++)
      {
         list<int>neighbors=l[u];
         cout<<u<<":";
         for(int v:neighbors){
         cout<<v<<" ";
         }
         cout<<endl;
      }
   }
   void bfs(){//O(V+E) breadth first search
      queue<int>q;
      vector<bool>vis(v,false);   //size vis=visited ho gaye ga
      q.push(0);  //in starting put sorce vlaue 0
      vis[0]=true;

      while(q.size()>0){ //jabtak qkhali nahi go jati hai
         int u=q.front();//curr vertex u value pop from q
         q.pop();
         cout<<u<<" ";

         list<int>neighbores=l[u];// u all nebi add inn q
         for(int v:neighbores){ //if we are not wijited than add in q
            if (!vis[v])
            {
               vis[v]=true; //here visit v and print in q
               q.push(v);
            }
         }
      }
      cout<<endl;
   }
   void dfs(int u,vector<bool>&vis){//)(v+E) dfs mean depth first traverl
      vis[u]=true; //vist the current code
      cout<<u<<" ";

      list<int>neighbors=l[u]; //for a current node we start a loop on neighbors
      for ( int v: neighbors) //all neb become 1
      {
         if(!vis[v]){when neb are unvisited until we call on us
           dfs(v,vis);  for neb visited of v value are fall and 
         }              //call them
      } //here dfs prisint we right v forthe next node vis right for vist

   }
 };
 int main (){
   Graph graph(7);
   graph.addEdge(0,1);
   graph.addEdge(1,2);
   graph.addEdge(1,3);
   graph.addEdge(2,4);
   graph.addEdge(3,4);
   graph.addEdge(3,5);
   graph.addEdge(4,5);
   graph.addEdge(5,6);

   vector<bool>vis(7,false);
   graph.dfs(0,vis);
   return 0;

 }


 #include<iostream>
 #include<vector>
 #include<queue>
 #include<list>
 using namespace std;
 class Graph{
   int v;
   list<int>*l;
public:
   Graph(int v){
      this->v=v;
      l=new list<int>[v];
   }
   void addEdge(int u,int v){
      l[u].push_back(v);
      l[v].push_back(u);
   }
   void print(){
      for (int u = 0; u< v; u++)
      {
         list<int>neighbors=l[u];
         cout<<u<<":";
         for(int v:neighbors){
         cout<<v<<" ";
         }
         cout<<endl;
      }
   }
  
   //For  haspath we create a helper function
   bool pathHelper(int src,int dest,vector<bool>&vis){
         if (src==dest)//in this case path exist and return true
         {
            return true;
         }
         vis[src]=true;
         list<int>neighbours=l[src];//in this condition findout all neb from list
        for(int v:neighbours){
          if (!vis[v])//unvisited v then
          {
            if(pathHelper(v,dest,vis)){//if path hlper returne true then rturn also
               return true;

            }
          }
        }
        return false;
   }
   bool hasPath(int src,int dest){//)(v+E)
      vector<bool>vis(v,false);
      return pathHelper(src,dest,vis);

   }

};
int main (){
    Graph graph(7);
   graph.addEdge(0,1);
   graph.addEdge(1,2);
   graph.addEdge(1,3);
   graph.addEdge(2,4);
   graph.addEdge(3,4);
   graph.addEdge(3,5);
   graph.addEdge(4,5);


   cout<<graph.hasPath(0,5)<<endl;
   return 0;
}
   Disconnected Componenets

         9                5
        /                /
1     4    8            2
 \   / \  /              \
   6    3                 0
         \
          7


#include <iostream>
#include <list>
#include <vector>
#include <queue>

using namespace std;

class Graph {
    int v;
    list<int>* l;

public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print() {
        for (int u = 0; u < v; u++) {
            list<int> neighbors = l[u];

            cout << u << ":";

            for (int v : neighbors) {
                cout << v << " ";
            }

            cout << endl;
        }
    }

    void bfsHelper(int st, vector<bool>& vis) {
        queue<int> q;

        q.push(st);
        vis[st] = true;

        while (q.size() > 0) {
            int curr = q.front();
            q.pop();

            cout << curr << " ";

            list<int> neighbors = l[curr];

            for (int neigh : neighbors) {
                // To ensure that one node is added only once to the queue
                if (!vis[neigh]) {
                    vis[neigh] = true;
                    q.push(neigh);
                }
            }
        }

        cout << endl;
    }

    void bfs() {
        vector<bool> vis(v, false);

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                bfsHelper(i, vis);
                cout << endl;
            }
        }
    }

    void dfsHelper(int u, vector<bool>& vis) {
        cout << u << " ";
        vis[u] = true;

        list<int> neighbors = l[u];

        for (int v : neighbors) {
            if (!vis[v]) {
                dfsHelper(v, vis);
            }
        }
    }

    void dfs() {
        vector<bool> vis(v, false);

        for (int i = 0; i < v; i++) {
            // Start DFS only if node is NOT visited
            if (!vis[i]) {
                dfsHelper(i, vis);
                cout << endl;
            }
        }

        cout << endl;
    }

    // Helper function for hasPath
    bool pathHelper(int src, int dest, vector<bool>& vis) {
        if (src == dest) {
            return true;
        }

        vis[src] = true;

        list<int> neighbours = l[src];

        for (int v : neighbours) {
            if (!vis[v]) {
                if (pathHelper(v, dest, vis)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool hasPath(int src, int dest) {
        vector<bool> vis(v, false);

        return pathHelper(src, dest, vis);
    }
};

int main() {
    Graph graph(7);

    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);

    cout << graph.hasPath(0, 5) << endl;

    return 0;
}



           Cycle in graph
A cycle in a graph means you can start from a vertex and follow edges and come back to the same vertx
         0
         /\
         1.2
   0->1->->0
so o-1-2-0 is cycle
1,cycle detection

For an undirected graph,we can detect a cycle using Dfs(defth first Search)

visited[]->whether a vertex has alredy been visited

parent->the vertex from which we reached the current vertex
if we find

if we find neighbor that is 
already  visited
AND
neighbour!parent

why do we  we check neighbor != parent?
Suppose  we have:
0--1
starting from 0
0->1


#include<iostream>
#include<vector>
using namespace std;

class Graph{
   int V;
   vector<vector<int>>adj; //adj=adjacent
public:
  Graph(int v){
   this->V=V;
   adj.resize(v);
  }
  //Add an undirected edge
  void addEdge(int u,int v){
   adj[u].push_back(v);
   adj[v].push_back(u);
  }
  //DFS function
  bool dfs(int node,int parent,vector<bool>&visited){
   //Mark current node as visited
   visited[node]=true;
   //visited all adjacent node
   for(int neighbor:adj[node]){
         //if nebour are not visited
         if(!visited[neighbor]){//DFS on neighbor
            if(dfs(neighbor,node,visited))
               return true;
         }
         else if(neighbor!=parent){//If neighbor is visited and not parent
           return true;
         }
      }
      return false;
  }
      // check Cycle in complete graph
      bool hasCycle(){
         vector<bool>visited(V,false); 
         //Imortant for disconnect graph
         for(int i=0;i<V;i++){
            if (!visited[i])
            {
               if(dfs(i,-1,visited)){
                  return true;
               }

         }
      }
   };
};
int main (){
   Graph g(5);
   g.addEdge(0,1);
   g.addEdge(1,2);
   g.addEdge(2,0);
   g.addEdge(0,1);
   g.addEdge(3,4);

   if (g.hasCycle())
      cout<<"Cycle exists";
   else
      cout<<"Cycle does not exits";
   return 0;
}


CycleDection code



#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
    int v;
    list<int>* l;
    bool isUndir;

public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
        this->isUndir=isUndir;
    }

    void addEdge(int u, int v) {//here add u-->vin direction not add v
        l[u].push_back(v);
        if(isUndir)//for undirected graph value ere false
          l[v].push_back(u);

    }

    void print() {
        for (int u = 0; u < v; u++) {
            cout << u << ": ";

            for (int neighbor : l[u]) {
                cout << neighbor << " ";
            }

            cout << endl;
        }
    }

    bool underCycleHelper(int src, int par, vector<bool>& vis) {
        vis[src] = true;

        for (int neighbor : l[src]) {

            // If the neighbor has not been visited
            if (!vis[neighbor]) {

                if (underCycleHelper(neighbor, src, vis)) {
                    return true;
                }

            }
            // If the neighbor is already visited and
            // is not the parent, then a cycle exists
            else if (neighbor != par) {
                return true;
            }
        }

        return false;
    }

    bool isCycleUnderline() {
        vector<bool> vis(v, false);

        // Check all vertices because the graph may be disconnected
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (underCycleHelper(i, -1, vis)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool dirCycleHelper(int src,vector<bool>&vis,vector<bool>&recPath){
      vis[src]=true;
      recPath[src]=true;
      list<int>neighbors=l[src];

      for (int v:neighbors)
      {
       if(!vis[v]){//if this unvistited then do it visited with helep of reursion
         dirCycleHelper(v,vis,recPath);
          return true;
       }else{
         if(recPath[v]){
            return true;
         }
       }
      }
      recPath[src]=false;
      //if Cycle is not findout then print false
      return false;
    }
    bool isCyleDir(){
      vector<bool>vis(v,false);
       vector<bool>recPath(v,false);//pass a recursion path

       for (int i = 0; i < v; i++)
       {
       if(dirCycleHelper(i,vis,recPath)){
           return true;
       }
       }
       return false;

    }
};

int main() {
    int v = 5;
    Graph graph(v);

    graph.addEdge(1, 0);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    //graph.addEdge(1, 2);


    cout << graph.isCycleUnderline() << endl;
    cout<<graph.isCyleDir()<<endl;

    return 0;
}
Dircted grapgh-DFS
Dry Run

0-->1<---2
       / :
      3  4


1. What is a Bipartite Graph?

A bipartite graph is a graph whose vertices can be divided into two separate groups such that:

No two vertices within the same group are connected by an edge.

Suppose the two groups are:

Set A = {A₁, A₂, A₃}
Set B = {B₁, B₂}

Edges are allowed only between A and B.

       A₁ ───── B₁
      /  \       |
     /    \      |
   A₂ ───── B₂
    \
     \
      A₃
For example:

       A₁ ───── B₁
      /  \       |
     /    \      |
   A₂ ───── B₂
    \
     \
      A₃

Here:

A₁, A₂, A₃ belong to one group.
B₁, B₂ belong to the other group.
There is no edge between A₁ and A₂, A₂ and A₃, etc.
Every edge goes from one group to the other.

So this is a bipartite graph.

2. Main Concept

The word bi means two.

Therefore:

Bipartite = two parts/groups

Mathematically, a graph

G=(V,E)

is bipartite if its vertex set V can be divided into two disjoint sets V
1
	​

 and V
2
	​

 such that

V
1
	​

∩V
2
	​

=∅

and every edge has:

one endpoint in V
1
	​

the other endpoint in V
2
	​

.

In simple words:

Edges can cross between the two groups, but edges cannot exist inside a group.

3. Easy Real-Life Example

Imagine a college with:

Students
Rahul
Priya
Amit
Courses
Mathematics
Physics

Suppose:

Rahul takes Mathematics
Rahul takes Physics
Priya takes Mathematics
Amit takes Physics

We can represent this as:

Students              Courses

 Rahul ───────────── Mathematics
    |
    └─────────────── Physics

 Priya ───────────── Mathematics

 Amit ────────────── Physics

There are two types of vertices:

Students ↔ Courses

We don't connect:

Rahul ─ Priya

because both are students.

We also don't connect:

Mathematics ─ Physics

because both are courses.

This is naturally a bipartite graph.

4. How to Identify a Bipartite Graph?

There are several important ways.

Method 1: Try to divide vertices into two groups

Take a graph and try coloring every vertex using two colors.

For example:

     A
    / \
   B   C
    \ /
     D

Try:

A = Red
D = Red
B = Blue
C = Blue

So:

Red:   A, D
Blue:  B, C

Every edge connects Red → Blue.

Therefore, the graph is bipartite.

5. Two-Coloring Concept

This is one of the most important concepts.

A graph is bipartite if and only if it can be colored using two colors so that adjacent vertices have different colors.

For example:

       🔴 A
       /   \
      🔵   🔵
      B     C
       \   /
       🔴 D

Notice:

Red vertices are never directly connected to Red vertices.
Blue vertices are never directly connected to Blue vertices.

Therefore, the graph is bipartite.

Important theorem
Graph is bipartite⟺Graph is 2-colorable
	​

6. The Most Important Property: Odd Cycle

Here is a very important theorem for exams:

A graph is bipartite if and only if it contains no odd cycle.

An odd cycle has an odd number of vertices/edges.

Examples:

Triangle
     A
    / \
   B───C

This contains a cycle of length 3.

3=odd

Therefore:

Triangle is NOT bipartite
	​


Why?

Try coloring:

A = Red
B = Blue
C must be Red because it is connected to B.

But A and C are connected, and both are Red.

Impossible.

7. Even Cycle

Consider:

A ─── B
|     |
D ─── C

The cycle is:

A→B→C→D→A

It has length 4.

Since:

4=even

it can be divided into two groups:

V
1
	​

={A,C}
V
2
	​

={B,D}

Therefore it is bipartite.

8. Odd Cycle vs Even Cycle

Remember this table:

Cycle	Bipartite?
3-cycle	❌ No
4-cycle	✅ Yes
5-cycle	❌ No
6-cycle	✅ Yes
7-cycle	❌ No
8-cycle	✅ Yes

So:

Odd cycle⇒Not bipartite
	​


and

No odd cycle⇒Bipartite
	​

9. Complete Bipartite Graph

A special type of bipartite graph is called a complete bipartite graph.

It is represented by:

K
m,n
	​


where:

m = number of vertices in first group
n = number of vertices in second group.

Every vertex in the first group is connected to every vertex in the second group.

For example, K
2,3
	​

:

Group A             Group B

 A₁ ─────────────── B₁
 │ ╲─────────────── B₂
 │  ╲────────────── B₃
 │
 A₂ ─────────────── B₁
   ╲─────────────── B₂
    ╲────────────── B₃

There are:

2×3=6

edges.

Therefore, the number of edges in K
m,n
	​

 is:

∣E∣=mn
	​

10. Important Examples
K
1,n
	​


This is a star graph.

For example K
1,4
	​

:

       B
       |
       |
A ─────C───── D
       |
       |
       E

It has one central vertex and four outer vertices.

It is bipartite.

K
2,2
	​


This is essentially a 4-cycle:

A₁ ───── B₁
|         |
|         |
A₂ ───── B₂

It is bipartite.

11. Important Properties of Bipartite Graphs
Property 1

A bipartite graph can have no odd cycle.

Property 2

A bipartite graph can have even cycles.

Property 3

A bipartite graph can contain no triangle.

Because a triangle is an odd cycle.

Property 4

A bipartite graph can be colored using two colors.

Property 5

The two groups do not need to have the same number of vertices.

For example:

V
1
	​

={A,B,C,D,E}
V
2
	​

={X,Y}

is perfectly valid.

12. Disconnected Bipartite Graph

A graph doesn't have to be connected.

For example:

A ─ B       X ─ Y
|           |
C           Z

The first component can be bipartite and the second component can also be bipartite.

Therefore the entire graph is bipartite.

A graph is bipartite if every connected component is bipartite.

13. Bipartite Graph and BFS/DFS

In computer science, we often determine whether a graph is bipartite using BFS or DFS.

The idea is simple:

Pick a vertex.
Give it color 0.
Give all its neighbors color 1.
Give their neighbors color 0.
Continue.
If you ever find an edge connecting two vertices having the same color, the graph is not bipartite.

For example:

A ─ B ─ C ─ D

Color:

A = 0
B = 1
C = 0
D = 1

Everything works.

Therefore it is bipartite.

14. Why BFS/DFS Works

Suppose we start at A.

The distance from A determines the color:

Even distance → Color 0
Odd distance → Color 1

So:

Distance 0 → A → Color 0
Distance 1 → B → Color 1
Distance 2 → C → Color 0
Distance 3 → D → Color 1

If we find an edge between two vertices at the same parity level, we get a contradiction.

That contradiction corresponds to an odd cycle.

This is why:

Bipartite⟺No odd cycle
	​

15. Bipartite Graph vs Complete Bipartite Graph

Don't confuse these.

Bipartite graph

Only requires:

Vertices can be divided into two groups with no edges inside the same group.

Some cross-group edges may be missing.

Complete bipartite graph

Requires:

Every vertex in Group 1 must connect to every vertex in Group 2.

So every complete bipartite graph is bipartite, but not every bipartite graph is complete bipartite.

16. Applications

Bipartite graphs are extremely useful because many real-world relationships naturally have two different types of objects.

Student–Course
Students ↔ Courses
Employee–Project
Employees ↔ Projects
User–Movie
Users ↔ Movies
Job–Applicant
Applicants ↔ Jobs
Person–Hobby
People ↔ Hobbies

These are called two-mode or two-part relationships.

17. Bipartite Matching

One of the biggest applications is matching.

Suppose:

Students        Jobs

A ───────────── X
A ───────────── Y
B ───────────── Y
C ───────────── X
C ───────────── Z

We want to assign students to jobs so that each student gets at most one job and each job goes to at most one student.

This is called a bipartite matching problem.

For example:

A → Y
B → ?
C → Z

Finding the maximum number of such assignments is called the maximum bipartite matching problem.

This has applications in:

job allocation
college admission
task assignment
resource allocation
recommendation systems
scheduling
18. Exam-Level Summary

Remember these five statements:

Definition
Vertices can be divided into two sets with no same-set edges
	​

Coloring
Bipartite⟺2-colorable
	​

Cycle
Bipartite⟺contains no odd cycle
	​

Complete bipartite graph
K
m,n
	​

	​


with

∣E∣=mn
	​

Matching

Bipartite graphs are widely used for matching and assignment problems.


in this set one part in one set and second part in second set

Bipartite graph
No edge connects of same set



    
#include <iostream>
#include <vector>
#include<queue>
#include <list>
using namespace std;

class Graph {
    int v;
    list<int>* l;
    bool isUndir;

public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
        this->isUndir=isUndir;
    }

    void addEdge(int u, int v) {//here add u-->vin direction not add v
        l[u].push_back(v);
        if(isUndir)//for undirected graph value ere false
          l[v].push_back(u);

    }

    void print() {
        for (int u = 0; u < v; u++) {
            cout << u << ": ";

            for (int neighbor : l[u]) {
                cout << neighbor << " ";
            }

            cout << endl;
        }
    }

    bool underCycleHelper(int src, int par, vector<bool>& vis) {
        vis[src] = true;

        for (int neighbor : l[src]) {

            // If the neighbor has not been visited
            if (!vis[neighbor]) {

                if (underCycleHelper(neighbor, src, vis)) {
                    return true;
                }

            }
            // If the neighbor is already visited and
            // is not the parent, then a cycle exists
            else if (neighbor != par) {
                return true;
            }
        }

        return false;
    }

    bool isCycleUnderline() {
        vector<bool> vis(v, false);

        // Check all vertices because the graph may be disconnected
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (underCycleHelper(i, -1, vis)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool dirCycleHelper(int src,vector<bool>&vis,vector<bool>&recPath){
      vis[src]=true;
      recPath[src]=true;
      list<int>neighbors=l[src];

      for (int v:neighbors)
      {
       if(!vis[v]){//if this unvistited then do it visited with helep of reursion
         dirCycleHelper(v,vis,recPath);
          return true;
       }else{
         if(recPath[v]){
            return true;
         }
       }
      }
      recPath[src]=false;
      //if Cycle is not findout then print false
      return false;
    }
    bool isCyleDir(){
      vector<bool>vis(v,false);
       vector<bool>recPath(v,false);//pass a recursion path

       for (int i = 0; i < v; i++)
       {
       if(dirCycleHelper(i,vis,recPath)){
           return true;
       }
       }
       return false;

    }
    bool isBipartite(){
       queue<int>q;
       vector<bool>vis(v,false);
       vector<int>color(v,-1);

       q.push(0);
       color[0]=0;

       while(q.size()>0){
         int curr=q.front();
         q.pop();//for current value out  the all neighbor
         list<int>neighbors=l[curr];

         for(int v:neighbors){
            if(!vis[v]){//if neb unvisited then visit this retten true
               vis[v]=true;
               color[v]=!color[curr];
               q.push(v);
            }else{//if neb are also present and color of nem are same as neb then rettren false
               if(color[v]==color[curr]){
                  return false;
               }
            }
         }
       }
       return true;//after loop if not find outBidirection graph then present true
    }

};

int main() {
    int v = 4;
    Graph graph(v);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3); 
    graph.addEdge(2, 3);
    //graph.addEdge(1, 2);


    cout << graph.isCycleUnderline() << endl;
    cout<<graph.isCyleDir()<<endl;

    cout<<graph.isBipartite()<<endl;

    return 0;
}
Bipatite Grapg

Acyclic TRUE

Even True True

odd Cycle False

when numberare even the coloring are possible

All paths Problem
Print all paths from src to dest for a directed graph

5                  4
| \........0.......|
|           |      |
2           |      1
 \..........3....../

    s=5 ,d=1

    only two path (1)5-0-3-1
    (2)5-2-3-1
approach:
    dfs(src,vis[])
    vis[src]=true
    path.pushback(src)

    for(v=0 to neighbor)
    if(!vis[v])
    dfs(v)
   path=path.psubset(0,path.size)
   vis[src]=false




#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <string>

using namespace std;

class Graph {
    int v;
    list<int>* l;
    bool isUndir;

public:
    Graph(int v, bool isUndir) {
        this->v = v;
        l = new list<int>[v];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);

        if (isUndir) {
            l[v].push_back(u);
        }
    }

    void print() {
        for (int u = 0; u < v; u++) {
            cout << u << ": ";

            for (int neighbor : l[u]) {
                cout << neighbor << " ";
            }

            cout << endl;
        }
    }

    bool underCycleHelper(int src, int par, vector<bool>& vis) {
        vis[src] = true;

        for (int neighbor : l[src]) {

            if (!vis[neighbor]) {
                if (underCycleHelper(neighbor, src, vis)) {
                    return true;
                }
            }
            else if (neighbor != par) {
                return true;
            }
        }

        return false;
    }

    bool isCycleUnderline() {
        vector<bool> vis(v, false);

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (underCycleHelper(i, -1, vis)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool dirCycleHelper(
        int src,
        vector<bool>& vis,
        vector<bool>& recPath
    ) {
        vis[src] = true;
        recPath[src] = true;

        for (int neighbor : l[src]) {

            if (!vis[neighbor]) {
                if (dirCycleHelper(neighbor, vis, recPath)) {
                    return true;
                }
            }
            else if (recPath[neighbor]) {
                return true;
            }
        }

        recPath[src] = false;
        return false;
    }

    bool isCyleDir() {
        vector<bool> vis(v, false);
        vector<bool> recPath(v, false);

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (dirCycleHelper(i, vis, recPath)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool isBipartite() {
        vector<bool> vis(v, false);
        vector<int> color(v, -1);

        for (int start = 0; start < v; start++) {

            if (vis[start]) {
                continue;
            }

            queue<int> q;

            q.push(start);
            vis[start] = true;
            color[start] = 0;

            while (!q.empty()) {
                int curr = q.front();
                q.pop();

                for (int neighbor : l[curr]) {

                    if (!vis[neighbor]) {
                        vis[neighbor] = true;
                        color[neighbor] = 1 - color[curr];
                        q.push(neighbor);
                    }
                    else if (color[neighbor] == color[curr]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }

    void pathHelper(
        int src,
        int dest,
        vector<bool>& vis,
        string& path
    ) {
        if (src == dest) {
            cout << path << dest << endl;
            return;
        }

        vis[src] = true;
        path += to_string(src);

        for (int neighbor : l[src]) {
            if (!vis[neighbor]) {
                pathHelper(neighbor, dest, vis, path);
            }
        }

        path = path.substr(0, path.size() - 1);
        vis[src] = false;
    }

    void printAllPath(int src, int dest) {
        vector<bool> vis(v, false);
        string path = "";

        pathHelper(src, dest, vis, path);
    }

    ~Graph() {
        delete[] l;
    }
};

int main() {
    Graph graph(6, false);

    graph.addEdge(0, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);

    graph.print();

    // cout << graph.isCycleUnderline() << endl;
    // cout << graph.isCyleDir() << endl;
    // cout << graph.isBipartite() << endl;

    graph.printAllPath(5, 1);

    return 0;
}


Topological Sorting

used for Directed Acyclic Graphs(DAG)
Linear order of vertices such that for every u->v
,u comesbefore v in sequence.
 u->v it mean v dependent on u
   1-->2
    \ /
     3
     1->2
     1->3
     2->3
in graph sorting mean findout order of vertex
dependencies
c---->c++
c++-->DSA
c-->OOPS
OOPS-->DSA

in which  graph recommanded Cycle forthere not findout topological

5->0
4->0
5->2
2->3
3->1
4->1

5 4 0 2 3 1 0 orer e

dfs(src,vis[],stack s){
 vis[src]=true
}

for(neighbor)
if(!vis[v])
dfs(v,vis[])

s.push(src)

Topological Problem

#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<stack>
using namespace std;

class Graph{
   int v;
   list<int>*l;
   bool isundir;
public:
  Graph(int v,bool isUndir=true){
   this->v=v;
   l=new list<int>[v];
   this->isundir=isUndir;
  }
  void addEdge(int u,int v){
    l[u].push_back(v);
    if(isundir){
       l[v].push_back(u);
    }
  }
  void topoHelper(int src,vector<bool>&vis,stack<int>&s){

   vis[src]=true;

   list<int>neighbors=l[src];
   for(int v:neighbors)
   {   if(!vis[v]){
         topoHelper(v,vis,s);
    }
   }
  }
  void topoSort(){
   vector<bool>vis(v,false);
   stack<int>s;

   for (int i = 0; i <v; i++)
   {
      if(!vis[i]){
         topoHelper(i,vis,s);
      }
   }
   while(s.size()>0){
      cout<<s.top()<<endl;
      s.pop();
   }
  cout<<endl;
  }
};
int main (){

   Graph graph(6,false);
   graph.addEdge(2,3);
   graph.addEdge(3,1);

   graph.addEdge(4,0);
   graph.addEdge(4,1);

    graph.addEdge(5,0);
    graph.addEdge(5,2);

    graph.topoSort();
    return 0;

}

Cource Schedule I
For given cource &theirpre- requist ,rturn if it is possible for finish them or not.




#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    bool isCycle(int src, vector<bool>& vis, vector<bool>& rec,
                 vector<vector<int>>& graph) {

        vis[src] = true;
        rec[src] = true;

        for (int v : graph[src]) {

            // If node is not visited, visit it
            if (!vis[v]) {
                if (isCycle(v, vis, rec, graph)) {
                    return true;
                }
            }
            // If node is already in the current recursion stack
            else if (rec[v]) {
                return true;
            }
        }

        // Remove from current recursion stack
        rec[src] = false;

        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> graph(numCourses);

        // prerequisite = [course, prerequisite]
        // prerequisite -> course
        for (auto edge : prerequisites) {
            int course = edge[0];
            int prerequisite = edge[1];

            graph[prerequisite].push_back(course);
        }

        vector<bool> vis(numCourses, false);
        vector<bool> rec(numCourses, false);

        for (int i = 0; i < numCourses; i++) {

            if (!vis[i]) {
                if (isCycle(i, vis, rec, graph)) {
                    return false;
                }
            }
        }

        return true;
    }
};




Topological sorting work on directed Acyclic Graph(DAG),It gives an ordering ofvertices such as that for every u->v,u comes before v
Course Schedule II


#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution{
   public:

       bool isCycle(int src, vector<bool>& vis, vector<bool>& rec,
                 vector<vector<int>>& graph) {

        vis[src] = true;
        rec[src] = true;

        for (int v : graph[src]) {

            // If node is not visited, visit it
            if (!vis[v]) {
                if (isCycle(v, vis, rec, graph)) {
                    return true;
                }
            }
            // If node is already in the current recursion stack
            else if (rec[v]) {
                return true;
            }
        }

        // Remove from current recursion stack
        rec[src] = false;

        return false;
    }
    void topoSort(int src,vector<bool>&vis,stack<int>&s,vector<vector<int>>&graph)
    {
      vis[src]=true;
      
      for(int i=0;i<graph.size();i++){
         int u=graph[i][1];
         int v=graph[i][0];

         if (u==src)
         {
           if(vis[v]){
            topoSort(v,vis,s,graph);
           }
         }

      }
      s.push(src);
    }
     



    vector<int>findOrder(int numCourses,vector<vector<int>>&graph){//TC O(V+E)
      //for Cycle dedection
       int V=numCourses;
       vector<bool>vis(V,false);
       vector<bool>rec(V,false);
       vector<int>ans;

       for(int i=0;i<V;i++){
          if(!vis[i]){
            if(isCycle(i,vis,rec,graph)){
               return ans;
            }
          }
       }
       //topological sorting
       vector<bool>vis2(V,false);
       stack<int>s;
       for(int i=0;i<V;i++){
      if(!vis2[i]){
         topoSort(i,vis2,s,graph);
        }
       }
       while (s.size()>0)
       {
         ans.push_back(s.top());
         s.pop();
       }
       return ans;

    }
};

Topological Sorting
using BFS(Kahn's Algorithms)

          5         4
          | \      /|
          |  >..0<  |
          >         1
          2..>3....>|

          In degree:incomingedes count
          Outdegree:Outgoinh edges count
          u-->v
          indeg[v]++

a DAG has atlestone vertx with in-degree 0 &
atlest one vertex with out-degree 0




#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<stack>
using namespace std;

class Graph{
   int v;
   list<int>*l;
   bool isundir;
public:
  Graph(int v,bool isUndir=true){
   this->v=v;
   l=new list<int>[v];
   this->isundir=isUndir;
  }
  void addEdge(int u,int v){
    l[u].push_back(v);
    if(isundir){
       l[v].push_back(u);
    }
  }
  void topoHelper(int src,vector<bool>&vis,stack<int>&s){

   vis[src]=true;

   list<int>neighbors=l[src];
   for(int v:neighbors)
   {   if(!vis[v]){
         topoHelper(v,vis,s);
    }
   }
  }
  void topoSort(){
   vector<bool>vis(v,false);
   stack<int>s;

   for (int i = 0; i <v; i++)
   {
      if(!vis[i]){
         topoHelper(i,vis,s);
      }
   }
   while(s.size()>0){
      cout<<s.top()<<endl;
      s.pop();
   }
  cout<<endl;
  }

  void calcIndegree(vector<int>indeg){
     for (int u= 0; u < v; u++)
     {
      list<int>neighbors=l[u];
      for (int v:neighbors){//u->V
        indeg[v]++;
      }
     }

  }

 void topoSort2(){//kahn's algo
   vector<int>indeg(v,0);
   calcIndegree(indeg);
   queue<int>q;
   //
   for (int i = 0; i < v; i++)
   {
      if (indeg[i]==0)
      {
        q.push(i);
      }
   }
   while(q.size()>0){
      int curr=q.front();
      q.pop();

      list<int>neighbor=l[curr];
      for(int v:neighbor){
         indeg[v]--;
         if(indeg[v]==0){
            q.push(v);
         }
      }
   }
   cout<<endl;
  }
};
int main (){

   Graph graph(6,false);
   graph.addEdge(2,3);
   graph.addEdge(3,1);

   graph.addEdge(4,0);
   graph.addEdge(4,1);

    graph.addEdge(5,0);
    graph.addEdge(5,2);

    graph.topoSort2();
    return 0;

}


Kahn's Algo for Cycles
if,after processing all nodes,some some nodes still non-zero indicates the prenceof cycle

   1<
   |  \
   |   \
   >2.> 3
   |
   |
   0

Dijkstra's Algorithms
Shorest path fromsrc to  all vertices from wighted graph.

   1.....>3
 /       | \
0        |  5
 \       | /
  2.....>.4



    
   #include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <stack>
#include <climits>

using namespace std;

class Edge {
public:
    int v;
    int wt;

    Edge(int v, int wt) {
        this->v = v;
        this->wt = wt;
    }
};

void dijkstra(int src, const vector<vector<Edge>>& graph, int v) {
    // pair<distance, vertex>
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    vector<int> dist(v, INT_MAX);

    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (Edge e : graph[u]) {
            if (dist[u] != INT_MAX &&
                dist[e.v] > dist[u] + e.wt) {

                dist[e.v] = dist[u] + e.wt;

                pq.push(make_pair(dist[e.v], e.v));
            }
        }
    }

    for (int d : dist) {
        cout << d << " ";
    }

    cout << endl;
}

int main() {
    int v = 6;

    vector<vector<Edge>> graph(v);

    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 7));

    graph[2].push_back(Edge(4, 3));

    graph[0].push_back(Edge(5, 1));
    graph[0].push_back(Edge(3, 2));
    graph[0].push_back(Edge(2, 5));

    dijkstra(1, graph, v);

    return 0;
}


Bellman Ford Algorithms
Shoretest path from src to all vertices for weightted graph with negative wt.

 0 1  2 3 4
 ..........
 0 2 -2 0 4

 perform this operation v-i times

 for all edges(u,v)
  if dist[u]+wt(u,v)<dist[v]
  dist[v]=dist[u]+wt(u,v)

why v-1?
note-BF doesn't work for Negative Weight Cycles
(cycles with overall negative weight)

#include<iostream>
#include<vector>
#include<list>
#include<climits>
using namespace std;

class Edge{
   public:
    int v;
    int wt=wt;

    Edge(int v,int wt){
      this->v=v;
      this->wt=wt;
    }
};
void bellmanFord(vector<vector<Edge>>graph,int v,int src){ //TC O(V+E)
   vector<int>dist(v,INT_MAX);
   dist[src]=0;

   for (int i = 0; i < v-1; i++)
   {
      for(int u=0; u<v;u++){//for travel every single ege
         for(Edge e:graph[u]){//come all ege of u node
            if(dist[e.v]>dist[u]+e.wt){
               dist[e.v]=dist[u]+e.wt;
            }

         }
      }
   }
   for(int i=0;i<v;i++){
      cout<<dist[i]<<" ";
   }
   cout<<endl;
}

int main (){
   int v=5;
   vector<vector<Edge>>graph(v);

   graph[0].push_back(Edge(1,2));
   graph[0].push_back(Edge(2,4));
   graph[0].push_back(Edge(2,-4));
   graph[0].push_back(Edge(3,2));
   graph[0].push_back(Edge(4,4));

  bellmanFord(graph,v,0);
  return 0;
}

Minimum Spanning Tree(MST)
MST is a subset of the edges of a connected,edge-weighted undirected graph that connents all the vertices together,without
any cycles and with the minimum possible total weight.



#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<climits>
using namespace std;

class Graph{
   int v;
   list<pair<int,int>>*l;//in this condition int store neighbor with weigth
   bool isUndir;
public:
   Graph(int v,bool isUndir=true){
      this->v=v;
      l=new list<pair<int,int>>[v];
      this->isUndir=isUndir;
   }
   void addEdge(int u,int v,int wt){//undirected graph u-->v(weight)
      l[u].push_back(make_pair(v,wt));
      if (isUndir)
      {
         l[v].push_back(make_pair(u,wt));
      }
   }
   void primAlgo(int src){
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
      vector<bool>mst(v,false);

      pq.push(make_pair(0,src));
      int ans=0;

      while (pq.size()>0)
      {
         int u=pq.top().second;
         int wt=pq.top().first;
         pq.pop();

         if(!mst[u]){
            mst[u]=true;
            ans+=wt;

            list<pair<int,int>>neighbors=l[u];
            for(pair<int,int>n:neighbors){
               int v=n.first;
               int currWt=n.second;
                pq.push(make_baik(currWt,v));
            }
         }
      }
      cout<<"final cost of MST="<<ans<<endl;
   }
};
int main (){
  Graph graph(4);

  graph.addEdge(0,1,10);
  graph.addEdge(0,2,15);
  graph.addEdge(0,3,30);
  graph.addEdge(1,3,40);
  graph.addEdge(2,3,50);

  return 0;


}

Cheapest flights within within K stops
flights=[[0,1,100],[1,2,100],[0,2,500]] src=0; dst=2,k=1

      1
100  / \100
    /   \
   0.....2
    500
    age wight alwyes postive

we use bfs solve this equetion;
chepest flights withn k stop



class Solution{
   public:
     class Info{
       int u;
       int cost;
       int stops;
       Info(int u,int cost,int stops){
        this->u=u;
        this->cost=cost;
        this->stop=stop;
       }
     };
     int findChepestPrice(int v,vector<vector<int>>&flights ,int src,intdst,int k){

     queue<Info>q;
     vector<int>dist(v,INT_MAX);

     dist[src]=0;
     q.push(Info(src,0,-1));

     while(q.size()>0){
      Info curr=q.front();
      q.pop();

      for(int i=0;i<flight.size();i++){
        int v=flights[i][1];
        int wt=flights[i][2];

        if(dist[v]>curr.cost+ wt && curr.stop<=k){
         dist[v]=curr.cost + wt;
         q.push(Info(v,dist[v],curr.stop+1))
         }
       }
      }
     }
      if(dist[dst]==INT_MAX){
        return -1;
      }
        return dist[dst];
};


               Disjoint Set DS
Union Find
  we have foue element
   1 2 3 4

   (1,2)  (3,4)
   aet1    set2

   unionByRank(a,b)
   find(x)
       :
       set?

Optimied Implemntation

Parent & Rank Concept
union(0,2)
find(2)
union(1,3)
union(2,5)
find(2)
union(0,4)

rank val low the =>priority high
if low then=>priority low

union(a,b)
parA=find(a)
parB=find(b)

(1)rank[parA]==rank[parB]
(2)rank[parA]>rank[parB]
(3)rank[parA]<rank[parB]

l C++\output> & .\'DATA_STUCTURE_ALGORITHM.exe'
0
0
0:0,2
1:0,1
2:0,0
3:1,0
4:0,0
5:0,0

Disjoint Set Ds

   0
    \
     1
      \
       3
        \
         6
path compression Optimisation
 it mean sort the path
        0
      / | \
      3 1 6
height max short then find out lenth is easy


#include<iostream>
#include<vector>
using namespace std;

class DisjointSet{
   public:
    int n;
    vector<int>par;
    vector<int>rank;

    DisjointSet(int n){
      this->n=n;

    for(int i=0;i<n;i++){
       par.push_back(i); 
       rank.push_back(0);//Here par is zero for all
     }
    }
   int find(int x){//find function return a logic
     if (par[x]==x)
     {//if par[x] is x then it also leader x
      return x;
     }
     return par[x]=find(par[x]);  //when par[x] not equal to x then get a new parent par[x] return to assign
   }
   void unionByRank(int a,int b){
      int parA=find(a);
      int parB=find(b);

      if(rank[parA]==rank[parB]){
         par[parB]=parA;
         rank[parA]++;//Becouse on par same length add below in doun so lenth will be increment

      }else if(rank[parA]>rank[parB]){
           par[parB]=parA;
      }else{
         par[parA]=parB;
      }
   }
   void getInfo(){
      for (int i = 0; i < n; i++)
      {
         cout<<i<<":"<<par[i]<<","<<rank[i]<<endl;
      }
   }
};

int main(){
   DisjointSet dj(6);
   dj.unionByRank(0,2);
   cout<<dj.find(2)<<endl;
   dj.unionByRank(1,3);
   dj.unionByRank(2,5);
   dj.unionByRank(0,3);
   cout<<dj.find(2)<<endl;
   dj.unionByRank(0,4);

    //dj mean dis joint data struture
    dj.getInfo();
   return 0;
}

Kruskals's Algorithms
Gready approach for MST

        0
 10   /   \ 15
     1     2
40    \   / 50
        3
(1)Sort all the Edges

parA==parB then Cyclecondtion form



Sorted Edge   Weight
 (0,1)         10
 (0,2)         15
 (0,3)         30
 (1,5)         40
 (2,3)         50


#include<iostream>
#include<vector>
using namespace std;

class DisjointSet{
   public:
    int n;
    vector<int>par;
    vector<int>rank;

    DisjointSet(int n){
      this->n=n;

    for(int i=0;i<n;i++){
       par.push_back(i); 
       rank.push_back(0);//Here par is zero for all
     }
    }
   int find(int x){//find function return a logic
     if (par[x]==x)
     {//if par[x] is x then it also leader x
      return x;
     }
     return par[x]=find(par[x]);  //when par[x] not equal to x then get a new parent par[x] return to assign
   }
   void unionByRank(int a,int b){
      int parA=find(a);
      int parB=find(b);

      if(rank[parA]==rank[parB]){
         par[parB]=parA;
         rank[parA]++;//Becouse on par same length add below in doun so lenth will be increment

      }else if(rank[parA]>rank[parB]){
           par[parB]=parA;
      }else{
         par[parA]=parB;
      }
   }
   void getInfo(){
      for (int i = 0; i < n; i++)
      {
         cout<<i<<":"<<par[i]<<","<<rank[i]<<endl;
      }
   }
};

class Edge{
   public:
    int u;
    int v;
    int wt; 

    Edge(int u,int v,int wt){
      this->u=u;
      this->v=v;
      this->wt=wt;

    }
};
class Graph{
   public:
  vector<Edge>edges;
   int V;
   vector<int>par; //inside the constructor we initilize par array and rank array
   vector<int>rank;

   Graph(int V){
      this->V=V;

      for(int i=0; i<V;i++){
         par.push_back(i);
         rank.push_back(0);
      }
   }
   int find(int x){
      if(par[x]==x){
         return x;
      }
      return par[x]=find(par[x]);
   }

  void unionByRank(int u,int v){
    int parU=find(u);
    int parV=find(v);

    if(rank[parU]==rank[parV]){
      par[parV]=parU;
      rank[parU]++;
    }else if(rank[parU]>rank[parV]){
      par[parV]=parU;
    }else{
       par[parU]=parV;
    }
  }

   void addEdge(int u,int v,int wt){
      edges.push_back(Edge(u,v,wt));
   }

   void Kruskals(){
      sort(edges.begin(),edges.end(),[](Edge &a, Edge &b){return a.wt<b.wt;});
      int minCost =0;
      for(int i=0;i<edges.size();i++){
         Edge e=edges[i];
         int parU=find(e.u);//u and v findout Becouse check that any cycle are not perform
         int parV=find(e.v);

         if (parU != parV)
         {
            unionByRank(parU,parV);
            minCost+=e.wt;
         }
      }
      cout<<"min cost="<<minCost<<endl;
   }
};
int main(){
  Graph graph(4);
  graph.addEdge(0,1,10);
  graph.addEdge(0,2,15);
  graph.addEdge(0,3,30);
  graph.addEdge(1,3,40);
  graph.addEdge(2,3,50);

  graph.Kruskals();
   return 0;
}


Flood fill Algorthms
image=[[1,1,1],[1,1,0],[1,0,1]] sr=1,sc=1,color=2

Food fill algorithms

A common example is the paint bukect tool in MS. Paint when you 
click inside an area,all connected pixels of the same color are changed

Supposewe have the matrix
1 1 1 2
1 1 2 2
1 2 1 1

if we start at(0,0) and replace 1with 9;
9 9 9 2
9 9 2 2
9 2 1 1

Only the connected 1s are changed



#include<iostream>
#include<vector>
using namespace std;

void floodFill(vector<vector<int>>&image,int r,int c,int oldColor,int newColor ){
   //Check boundries
   if (r<0 ||r>=image.size() || c <0 || c>=image[0].size())
   {
      return;
   }
   //Stop if color is not the old color
   if (image[r][c]!=oldColor)
   {
      return;
   }
   //change the color
   image[r][c]=newColor;
   //Move Up
   floodFill(image,r-1,c,oldColor,newColor);
   //Move Down
   floodFill(image,r+1,c,oldColor,newColor);
   //Move Left
   floodFill(image,r,c-1,oldColor,newColor);
   //Move Right
   floodFill(image,r,c+1,oldColor,newColor);
}

int main(){

   vector<vector<int>>image={
     {1,1,1,2},
     {1,1,2,2},
     {1,2,1,1}
   };
   int startRow=0;
   int startCol=0;
   int newColor=9;

   int oldcolor=image[startRow][startCol];
   //Avoid infinite recursion
   if (oldcolor!=newColor)
   {
     floodFill(image,startRow,startCol,oldcolor,newColor);
   }
   //print result
   for (auto row :image)
   {
     for (auto value:row)
     {
        cout<<value<<" ";
     }
     cout<<endl;
   }
   return 0;
}




                   Dyanamic Programming
It called optimied recursion

Fibonacci
0 1 1 2 3 5 8 13 21..........

fib recurrance relation
fib(n)=fib(n-1)+fib(n-2)

TC=O(2^n)

#include<iostream>
#include<vector>
using namespace std;
int fibDP(int n,vector<int>&f){
   if (n==0 || n==1)
   {
    return n;
   }
   if (f[n]!=-1)
   {
     return f[n];
   }
   f[n]=fibDP(n-1,f)+fibDP(n-2,f);
   return f[n];
}

int main (){
   int n=6;
   vector<int>f(n+1,-1);
   cout<<fibDP(n,f)<<endl;
   return 0;

}

   what is Dp
.optimised recurasion
.Optimal Substructure(recursion with choice i.e multiple branches)
.
memoization:
  recurstion+storage

  Tabulation(work on bottom up)

.In tabulation we use loop

arr 0 1 2 3 4 5 6
i=f(i)
n=0  therse arenot count so we take this in smallest form
n=1

for(int i=2;i<=n;i++){//here start i=2 becouse allready we calculate for value i=0 and i=1
  fib[i]=fib[i-1]+fib[i-2]
  i=2
}

#include<iostream>
#include<vector>
using namespace std;
int fibDP(int n,vector<int>&f){
   if (n==0 || n==1)
   {
    return n;
   }
   if (f[n]!=-1)
   {
     return f[n];
   }
   f[n]=fibDP(n-1,f)+fibDP(n-2,f);
   return f[n];
}
//For tabulation
int fibTab(int n){//TC: O(n)
   vector<int>fib(n+1,0);//fib[i]=>ith fib
   fib[0]=0;
   fib[1]=1;
   for (int i = 2; i<=n; i++)
   {
     fib[i]=fib[i-1]+fib[i-2];
   }
   return fib[n];

}

int main (){
   int n=6;
   vector<int>f(n+1,-1);
   cout<<fibDP(n,f)<<endl;
   cout<<fibTab(n)<<endl;
   return 0;

}

Types of DP

Memoiation                               Tabulation(use in long tmie is usefull)
Recursive                                 Iterative

Important Concepts


.Climbing Stairs
Count ways to reach the nth stair .A persion an climb 1 to 2 stair at a time

Tabulation uses most prefer        n=0 it mean we are on the ground

ways(n)=ways(n-1)+ways(n-2)



#include<iostream>
#include<vector>
using namespace std;
int countWaysRec(int n){
   if(n==0 || n==1){
      return 1;
   }
   return countWaysRec(n-1)+countWaysRec(n-2);
}

int main (){
   int n=5;

   cout<<countWaysRec(n)<<endl;
   return 0;
}

Climbing Stairs
Memoization(top doun)

in rec if f(2) call one time thensecond time for call we are not call




#include <iostream>
#include <vector>
using namespace std;

// Recursive approach
// Time Complexity: O(2^n)
// Space Complexity: O(n) due to recursion stack
int countWaysRec(int n) {

    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }

    return countWaysRec(n - 1) + countWaysRec(n - 2);
}


// Memoization approach
// Time Complexity: O(n)
// Space Complexity: O(n)
int countWaysMem(int n, vector<int>& dp) {

    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }

    // If already calculated, return stored value
    if (dp[n] != -1) {
        return dp[n];
    }

    // Calculate and store the answer
    dp[n] = countWaysMem(n - 1, dp) +
            countWaysMem(n - 2, dp);

    return dp[n];
}


int main() {

    int n = 5;

    // Create DP array
    // Initially every value is -1
    vector<int> dp(n + 1, -1);

    cout << "Number of ways: "
         << countWaysMem(n, dp)
         << endl;

    return 0;
}

Climbing Stairs

Tabulation(bottom up)
                            0 1 2 3 4 5 dp
n=5
n=0


#include <iostream>
#include <vector>
using namespace std;

// Recursive approach
// Time Complexity: O(2^n)
// Space Complexity: O(n) due to recursion stack
int countWaysRec(int n) {

    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }

    return countWaysRec(n - 1) + countWaysRec(n - 2);
}


// Memoization approach
// Time Complexity: O(n)
// Space Complexity: O(n)
int countWaysMem(int n, vector<int>& dp) {

    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }

    // If already calculated, return stored value
    if (dp[n] != -1) {
        return dp[n];
    }

    // Calculate and store the answer
    dp[n] = countWaysMem(n - 1, dp) +
            countWaysMem(n - 2, dp);

    return dp[n];
}

int coutWaysTab(int n){
   vector<int>dp(n+1,0);
   dp[0]=1;
   dp[1]=1;

   for (int i = 2; i < n; i++)
   {
       dp[i]=dp[i-1]+dp[i-2];
   }
   return dp[n];
}


int main() {

    int n = 5;

    // Create DP array
    // Initially every value is -1
   //  vector<int> dp(n + 1, -1);

   //  cout << "Number of ways: "
   //       << countWaysMem(n, dp)
   //       << endl;

   cout<<coutWaysTab(n)<<endl;
    return 0;
}


Climbing Stair Variation
Count ways to reach the nth stair . Apersion can Climb 1,2,3 3 stair at atime.


#include <iostream>
#include <vector>
using namespace std;

// Recursive approach
// Time Complexity: O(2^n)
// Space Complexity: O(n) due to recursion stack
int countWaysRec(int n) {

    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }

    return countWaysRec(n - 1) + countWaysRec(n - 2);
}


// Memoization approach
// Time Complexity: O(n)
// Space Complexity: O(n)
int countWaysMem(int n, vector<int>& dp) {

    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }

    // If already calculated, return stored value
    if (dp[n] != -1) {
        return dp[n];
    }

    // Calculate and store the answer
    dp[n] = countWaysMem(n - 1, dp) +
            countWaysMem(n - 2, dp);

    return dp[n];
}

int coutWaysTab(int n){
   vector<int>dp(n+1,0);
   dp[0]=1;
   dp[1]=1;
   dp[2]=2;

   for (int i = 3; i < n; i++)
   {
       dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
   }
   return dp[n];
}


int main() {

    int n = 5;

    // Create DP array
    // Initially every value is -1
   //  vector<int> dp(n + 1, -1);

   //  cout << "Number of ways: "
   //       << countWaysMem(n, dp)
   //       << endl;

   cout<<coutWaysTab(n)<<endl;
    return 0;
}

.QHouse robar and house thepar

   Knapsack Problems
   .Fractional Knapsack(Gready)
   .0-1 Knapsack
   .Unbounded Knapsack

   0-1 Knapsack

   var[]={15,14,10,45,30}
   wt[]={2,5,1,3,4}=7
)


          item
          /  \
       include exch'
       (1)      (0)

       max Project(val[],wt[],W,n)

 ItemWt<=W
     /    \
 include   exclude
profit+itemVal  x
W=W-itemWt



#include<iostream>
#include<vector>
using namespace std;

int knapsackRec(vector<int>val,vector<int>wt,int W,int n){//)(2^n)
    int itemWt=wt[n-1];
    int itemVal=val[n-1];

    if(itemWt <= W){//Valid wt
        if (n==0 || W==0)
        {
            return 0;
        }
         //include
        int ans1= knapsackRec(val,wt,W-itemWt,n-1)+itemVal;


         //exclude
         int ans2=knapsackRec(val,wt,W,n-1);
       return max(ans1,ans2);
    }else{
        //exclude
         return knapsackRec(val,wt,W,n-1);


    }
}
int main (){
    vector<int>val={15,14,10,45,30};
    vector<int>wt={2,5,1,3,4};
    int W=7;
    int n=5;
    cout<<knapsackRec(val,wt,W,n)<<endl;
    return 0;
}

output:75

Memoization code

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsackMem(vector<int> val, vector<int> wt, int W, int n,
                vector<vector<int>>& dp) {//TC O(n*w)

    // Base case
    if (n == 0 || W == 0) {
        return 0;
    }

    // Already calculated
    if (dp[n][W] != -1) {
        return dp[n][W];
    }

    int itemWt = wt[n - 1];
    int itemVal = val[n - 1];

    if (itemWt <= W) {

        // Include
        int ans1 = knapsackMem(val, wt, W - itemWt, n - 1, dp) + itemVal;

        // Exclude
        int ans2 = knapsackMem(val, wt, W, n - 1, dp);

        // Take maximum
        dp[n][W] = max(ans1, ans2);

    } else {

        // Exclude
        dp[n][W] = knapsackMem(val, wt, W, n - 1, dp);
    }

    return dp[n][W];
}

int main() {

    vector<int> val = {15, 14, 10, 45, 30};
    vector<int> wt = {2, 5, 1, 3, 4};

    int W = 7;
    int n = 5;

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));

    cout << knapsackMem(val, wt, W, n, dp) << endl;
    cout<<"memoizationmatrix"<<endl;
    for(int i=0;i<n+1;i++){
      for(int j=0;j<W+1;j++){
         cout<<dp[i][j]<<" ";
      }
      cout<<endl;
    }

    return 0;
}
Target sum subset


#include<iostream>
#include<vector>
using namespace std;

bool targetSum(vector<int>nums,int target){
   int n=nums.size();
   vector<vector<int>>dp(n+1,vector<int>(target+1,0));

   for (int i = 1; i <=n; i++)
   {
     for(int j=1;j<=target;j++)
     if(nums[i-1]<=j){
      dp[i][j]=max(nums[i-1]+dp[i-1][j-nums[i-1]],dp[i-1][j]);
     }else{
       dp[i][j]=dp[i-1][j];
     }
   }
     for (int i = 1; i <=n; i++)
   {
     for(int j=1;j<=target;j++){
      cout<<dp[i][j]<<" ";
     }
     cout<<endl;
   }
   return dp[n][target]==target;
}
int main(){
   vector<int>nums={4,2,7,1,3};
   int target=10;

   cout<<targetSum(nums,target)<<endl;
   return 0;
}
*/
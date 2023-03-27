// #include<iostream>
// using namespace std;
//     bool prime(int n){
//         for (int i = 2; i < = n; i++){
//             if (n%i == 0){
//                 return false ;
//             }
//             return true ;
//         }
//     }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     for (int i = 1; i <= num; i++){
//         if(prime(i)){
//             cout << i << endl ;
//         }
//     }

//     return 0 ;
//     }





// #include<iostream>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int a, b, count = 0;
//     bool found_lucky = false;
//     cin >> a >> b;
//     for (int i = a; i <= b; i++) {
//         int j = i, temp_count = 0, digits = 0;
//         while (j > 0) {
//             digits++;
//             if ((j % 10 == 4 || j % 10 == 7))
//                 temp_count++;
//             j = j / 10;
//         }
//         if (temp_count == digits) {
//             count++;
//             cout << i << " ";
//             found_lucky = true;
//         }
//     }
//     if (!found_lucky)
//         cout << -1;
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int a;
//     char s;
//     cin >> s >> a;
//     int b[a];
//     for (int i = 0; i < a; i++){
//         cin >> b[i];
//         for(int j = 0; j < b[i]; j++ ){
//                 cout << s;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     char s = '*';
//     int a;
//     cin >> a;
//     for (int i = 0; i < a; i++){
//         for (int j = 0; j <= i; j++){
//             cout << s;
//         }
//         cout << endl;
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {

// int n, reversed_number = 0, remainder;

// cout << "Enter an integer: ";
// cin >> n;

// while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
// }

// cout << "Reversed Number = " << reversed_number;
// return 0;
// }



// reverse numpers 



// #include <iostream>
// #include <string>
// using namespace std;
// void reverse (string& str){
//     for (int i = str.length()-1; i >= 0; i--){
//         cout << str[i] << ' ';
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int a;
//     cin >> a ;
//     string s[a];
//     for (int j =0; j < a; j++){
//         cin >> s[j];
//     }
//     for (int i = 0; i < a; i++){
//         reverse(s[i]);
//         cout << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// void nums (int a,int b){
//     int sum = 0; 
//     if (a>b){
//         for (int i = b; i <= a; i++){
//             cout << i << ' ';
//             sum += i;
//         }
//     }
//     else {
//         for (int i = a; i <= b; i++){
//             cout << i << ' ';
//             sum += i;
//         }    
//     }
//     cout << "sum =" << sum;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int a, b;
//     for (;;){
//         cin >> a >> b;
//         if ((a<=0)||(b<=0)){
//             break;
//         }
//         nums(a,b);
//         cout << endl;
//         continue;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// void sums (int a,int b){
//     int sum = 0; 
//     if (a>b){
//         for (int i = b+1; i < a; i++){
//             if (i%2!=0)
//                 sum += i;
//         }
//     }
//     else {
//         for (int i = a+1; i < b; i++){
//             if (i%2!=0)
//                 sum += i;
//         }    
//     }
//     cout << sum << endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, a, b;
//     cin >> n ;
//     for (int i = 0; i < n; i++){
//         cin >> a >> b;
//         sums(a,b);
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     char s = '*';
//     cin >> n ;
//     for (int i = 1; i <= n; i++){
//         for (int j=n-i; j>0; j--){
//             cout << ' ';
//         }
//         for (int b = 0; b<(i*2-1);b++){
//             cout << s;
//         }
//         cout << endl;
//     }
//     for (int i = n; i >=1; i--){
//         for (int j=0; j<n-i; j++){
//             cout << ' ';
//         }
//         for (int b = (i*2-1); b>0;b--){
//             cout << s;
//         }
//         cout << endl;
//     }

//     return 0;
// }
//   *
//  ***
// *****
//*******
//*******
// *****
//  ***
//   *




// #include <iostream>
// using namespace std;
// int getsum(int n, int val)
// {
//     if (n < 10) {
//         val = val + n;
//         return val;
//     }
//     return getsum(n / 10, (n % 10) + val);
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, a, b, sum = 0;
//     cin >> n >> a >> b;
//     for (int i = 1; i <= n; i++){
//         if ((getsum(i, 0)>=a)&&(getsum(i, 0)<=b)){
//             sum+=i;
//         }
//     }
//     cout << sum;

// }




// #include <iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, nb, sum = 0, out = 0;
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         cin >> nb;
//         if ((nb==1)||(nb==2)){
//             cout << '1' << endl;
//             continue;
//         }
//         while(nb != 0){
//             sum += nb%2;
//             nb /= 2;
//         }
//             for (int j = 0; j < sum; j++){
//             out +=(pow(2,j));
//             }
//         cout << out << endl;
//         out = 0;
//         sum = 0;
//     }

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, t1 = 0, t2 = 1, nextTerm = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         if(i == 1) {
//             cout << t1 << " ";
//             continue;
//         }
//         if(i == 2) {
//             cout << t2 << " ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;

//         cout << nextTerm << " ";
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// #include<cmath>
// #include <iomanip>


// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int AB;
//     double pi = 3.14159265359;
//     double a;
//     cin >> a >> AB;
//     double R =(sqrt(a/pi));
//     double DC = sqrt(2*pow(R,2));
//     double AREA = 0.5*(AB*DC);
//     cout  << fixed << setprecision(6)<< AREA;
//     return 0;
// }
// // amir elsayed 24.0000000  24.0000000', expected '24.000000   100.530965 6






// #include <iostream>
// #include<cmath>
// #include <iomanip>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     double matchs, goals, count1 = 0, count2 = 0, max = 0;
//     cin >> matchs;
//     for(int i = 0; i < matchs; i++){
//         cin >> goals;
//         if (goals != 0)
//             count1++;
//             if(count1 > max){
//                 max=count1;
//             }
//         else if(goals == 0) {
//             count1 = count2;
//             count2=max;
//         }
//     }
//     if (max == 0)
//         cout <<  "Bad Luck";
//     else {
//         cout << count1 ;
//     }
//     return 0;
// }




// min value and its index




// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int  n, min=0, index=0;
//     cin >> n;
//     int arr[n], sorted[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     min = arr[0];
//     for (int j=1; j<n; j++){
//         if(arr[j]<=min){
//             min = arr[j];
//         }
//     }
//     for(int s=1; s<=n; s++){
//         if(arr[s-1]==min){
//             index = s;
//         }
//     }
//     cout << min << ' ' << index;
//     return 0;
// }



// bubble sorting


// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, temp = 0;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int j=0; j<n-1; j++){
//         for(int s=0; s<n-j-1; s++){
//             if(arr[s]>arr[s+1]){
//                 temp = arr[s];
//                 arr[s]=arr[s+1];
//                 arr[s+1]=temp;
//             }
//         }
//     }
//     for (int haha=0; haha<n; haha++){
//         cout << arr[haha] << ' ';
//     }
//     return 0;
// }
// 4
// 5 2 7 3




// return the minumam sum of numbers




// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m;
//     cin >> n;
//     for(int test = 0; test<n; test++){
//     long long minsum=1000000000, sum = 0;
//         cin >> m;
//         int arr[m];
//         for(int i=0; i<m; i++){
//             cin >> arr[i];
//         }
//         for(int i = 1; i < m; i++){
//             for(int j = 2; j < m+1; j++){
//                 if(i>=j){
//                     continue;
//                 }
//                 sum = arr[i-1]+arr[j-1]+(j-i);
//                 // cout << sum << ' ';
//                 if(sum<minsum){
//                 minsum = sum;
//                 }
//             }
//         }
//         cout << minsum << endl;
//     }
//     return 0;
// }
// 4
// 5 2 7 3     Ai + Aj + j - i 





// getting min and max at the same time

// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, min =100000000, max = 0, ind1, ind2;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int j=0; j<n; j++){
//         if(arr[j]<min){
//             min = arr[j];
//         }
//         if(arr[j]>max){
//             max=arr[j];
//         }
//     }
//     for(int c=0; c<n; c++){
//         if(arr[c]==min){
//             ind1=c;
//         }
//         if(arr[c]==max){
//             ind2=c;
//         }
//     }
//     swap(arr[ind1],arr[ind2]);
//     for(int s=0; s<n; s++){
//         cout << arr[s] << ' ';
//     }
//     return 0;
// }
// // 4
// // 5 2 7 3     Ai + Aj + j - i  8 8 9 5 9




// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n,min=10000;
//     cin >> n;
//     int arr[n];
//     int c[n]{0};
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int j=0; j<n; j++){
//         while(arr[j]%2==0){
//             // cout << arr[j] << ' ';
//             arr[j]/=2;
//             c[j]++;

//         }
//     }
//     for(int b=0; b<n; b++){
//         if(c[b]<min){
//             min=c[b];
//         }
//     }
//     cout << min;
//     return 0;
// }

// //  im proud of this code


// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n,count = 0;
//     cin >> n;
//     int arr[n],arr2[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int j=0; j<n; j++){
//         cin >> arr2[j];
//     }
//     sort(arr, arr+n);
//     sort(arr2, arr2+n);
//     for(int a=0; a<n; a++){
//         if(arr[a]==arr2[a]){
//             count++;
//         }
//     }
//     if(count == n){
//         cout << "yes";
//     }
//     else{
//         cout << "no";
//     }
//     return 0;
// }

// //  im proud of this code




// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int a, b, c, state=0;
//     cin >> a >> b;
//     int arr[a][b];
//     for(int i=0; i<a; i++){
//         for(int j=0; j<b; j++){
//             cin >> arr[i][j];
//         }
//     }
//     cin >> c;
//     for(int x=0; x<a; x++){
//         for(int y=0; y<b; y++){
//             if(arr[x][y]==c){
//                 state=1;
//             }
//         }
//     }
//     if(state==1){
//         cout << "will not take number";
//     }
//     else{
//         cout <<  "will take number" ;
//     }
//     return 0;
// }

// //  im proud of this code








// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m, d=1;
//     cin >> n >> m;
//     int arr[n], fre[m]{0};
//     for(int i=0; i<n ;i++){
//         cin >> arr[i];
//     }
//     for(int j=0; j<n; j++){
//             fre[arr[j]-1]++;
//         }
//     for(int d=0; d<m; d++){
//         cout << fre[d] << endl;
//     }
//     return 0;
// }

// //  im proud of this code  1 2 3 4 5 3 2 1 5 






// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin >> arr[i][j];
//         }
//     } 
//     for(int a=0; a<n; a++){
//         for(int b=m-1; b>=0; b--){
//             cout << arr[a][b] << ' ' ; 
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;

// void PrefixSum(int arr[], int n, long long prefixSum[])
// {
//     prefixSum[0] = arr[0];
//     for (int i = 1; i < n; i++)
//         prefixSum[i] = prefixSum[i - 1] + arr[i];
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m, i1, i2, res;
//     scanf("%d%d",&n,&m);
//     int arr[n];
//     long long pf[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",arr+i);
//     }

//     PrefixSum(arr, n, pf);

//     for(int j=0; j<m; j++){
//         scanf("%d%d",&i1,&i2);
//         if(i1==i2){
//             printf("%d\n",arr[i1-1]);
//             continue;
//         }
//         if(i1==1){
//             cout << pf[i2-1] << endl;
//         }
//         else{
//             cout << pf[i2-1]-pf[i1-2] << endl;
//         }
//     }
//     return 0;
// }


//    bynary search


// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;


// int binarySearch(int arr[], int l, int r, int x)
// {
//     if (r >= l) {
//         int mid = l + (r - l) / 2;
//         if (arr[mid] == x)
//             return mid;
//         if (arr[mid] > x)
//             return binarySearch(arr, l, mid - 1, x);
//         return binarySearch(arr, mid + 1, r, x);
//     }
//     return -1;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m, c;
//     cin >>  n >> m;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     sort(arr, arr+n);
//     for(int j=0; j<m; j++){
//         cin >> c;
//         int result = binarySearch(arr, 0, n - 1, c);
//         if(result==-1){
//             cout << "not found" << endl;
//         } 
//         else{
//             cout << "found" << endl;
//         }
//     }
//     return 0;
// }




// supsequance of an array oh my god that was hard



// #include <iostream>
// #include<math.h>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int a, b, count=0, i1=0, i2=0;
//     cin >> a >> b;
//     int arr[a], arr2[b];
//     for(int i=0; i<a; i++){
//         cin >>arr[i];
//     }
//     for (int j=0; j<b; j++){
//         cin >> arr2[j];
//     }
//     for(int d=0; d<a; d++){
//         for(int f=0; f<b; f++){
//             if(arr2[f]==arr[d]){
//                 i1=d;
//                 if(i1>=f){
//                     count++;
//                     arr[d]=-1;
//                     i2=i1;
//                     i1=0;
//                 }
//             }
//         }
//     }
//     if(count == b){
//         cout << "YES";
//     }
//     else{
//         cout << "NO" ;
//     }
//     return 0;
// }



// 120 180 166 175 172 

// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     string s;
//     cin >> s;
//     int arr[26]{0};
//     for(int j=0; j<s.size(); j++){
//         arr[int(s[j])-97]++;
//     }
//     for(int a=0; a<26; a++){
//         if(arr[a]!=0){
//             cout << char(a+97) << " : " << arr[a] <<endl;
//         }
//         else {
//             continue;
//         }
//     }
//     return 0;
//     }


// THIS IS GOOD

// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     string s, c;
//     char str[50];
//     cin >> n;
//     for(int i=0; i<n; i++){
//         cin >> s >> c;
//         if(s.size()<=c.size()){
//             for(int j=0; j<s.size(); j++){
//                 cout << s[j] << c[j];
//             }
//             int siz = c.size()-s.size();
//             // c.copy(str,siz,s.size());
//             size_t length = c.copy(str,siz,s.size());
//             str[length]='\0';
//             cout << str << endl;
//         }
//         else if(s.size()>=c.size()){
//             for(int j=0; j<c.size(); j++){
//                 cout << s[j] << c[j];
//             }
//             int siz = s.size()-c.size();
//             // s.copy(str,siz,c.size());
//             size_t length = s.copy(str,siz,c.size());
//             str[length]='\0';
//             cout << str << endl;
//         }
//     }
//     return 0;
// }



// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     string str, strr;
//     strr="hello";
//     cin >> str;
//     int i=0; 
//     int z=0;
//     while(true){
//         if((i==str.size())|| (z==strr.size())){
//             break;
//         }
//         if(str[i]==strr[z]){
//             z++;
//         }
//         i++;
//     }
//     if(z==5){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }
//     return 0;
// }



//                string score



// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, count=0;
//     char c;
//     string s;
//     cin >> n >> s;
//     for(int i=0; i<s.size(); i++){
//         switch (s[i])
//                 {
//                 case 'V':
//                     count+=5;
//                     break;
//                 case 'W':
//                     count+=2;
//                     break;
//                 case 'X':
//                     if(i!= s.size()-1){
//                         s[i+1]='0';
//                     }
//                     break;
//                 case 'Y':
//                     if(i!= s.size()-1){
//                         s.push_back(s[i+1]);
//                         s[i+1]='0';
//                     }
//                     break;
//                 case 'Z':
//                     if(i!=s.size()-1){
//                         if(s[i+1]=='V'){
//                             count/=5;
//                         s[i+1]='0';
//                         }
//                         else if(s[i+1]=='W'){
//                             count/=2;
//                         s[i+1]='0';
//                         }
//                     }
//                     break;
//                 }
//             }
//     cout << count << endl;
//     return 0;
// }


//                 count words

// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, count=0;
//     string s, val;
//     getline(cin, s);
//     // ('!', '.', '?' and ',')
//     for(int i=0; i<s.size(); i++){
//         if(s[i]!=32 && s[i]!='!' && s[i]!='.' && s[i]!='?' && s[i]!=','){
//             val+=s[i];
//         }
//         if((s[i]==32 || s[i]=='!' || s[i]=='.' || s[i]=='?' || s[i]==','|| i==s.size()-1)&&(val.size()!=0)){
//             count++;
//             val="";
//         }
//     }
//     cout << count << endl;
//     return 0;
// }



//           gettinh each word and reverse it.


// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     string s, val, out;
//     getline(cin, s);
//     for(int i=0; i<s.size(); i++){
//         if(s[i]!=32){
//             val+=s[i];
//         }
//         if((s[i]==32 || i==s.size()-1)&&(val.size()!=0)){
//             reverse(val.begin(), val.end());
//             if(i==s.size()-1){
//                 cout << val;
//             }
//             else{
//             cout << val << ' ';
//             val="";
//             }
//         }
//     }
//     return 0;
// }





// return the alphabetic order string 




// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     string s, m;
//     int n;
//     cin >> s >> m;
//     if(s.size()>=m.size()){
//         n = s.size();
//     }
//     else{
//         n = m.size();
//     }
//     // if(s[0]<m[0]){
//     //     cout << s;
//     //     break;
//     // }
//     // else if(s[0]>m[0]){
//     //     cout << m;
//     //     break;
//     // }
//     // else{
//         for(int i=0; i<n; i++){
//             if(s[i]<m[i]){
//                 cout << s;
//                 break;
//             }
//             else if(s[i]>m[i]){
//                 cout << m;
//                 break;
//             }
//             else if(i==n-1){
//                 cout << s;
//             }
//             else{
//                 continue;
//             }
//         }
//     // }
//     return 0;
// }


//            HOW MANY TIMES DOESA  SUBSTRING APPEARS IN A STRING




// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     string str, strr;
//     strr="egypt";
//     int arr[5]{0};
//     int n=100000;
//     cin >> str;
//     for(int a=0; a<str.size(); a++){
//         str[a]=tolower(str[a]);
//     }
//     for(int i=0; i<str.size(); i++){
//         for(int j=0; j<5; j++){
//             if(str[i]==strr[j]){
//                 arr[j]++;
//             }
//         }
//     }
//     for(int i=0; i<5; i++){
//         if(arr[i]<n){
//             n=arr[i];
//         }
//     }
//     cout << n;
//     return 0;
// }

//        tashfeer elkalemat ya gamaed syper security

// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     string key      = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
//     string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
//     string s;
//     int n;
//     cin >> n >> s;
//     for(int i=0; i<s.size(); i++){
//         if(n==1){
//             for(int j=0; j<key.size(); j++){
//                 if(s[i]==original[j]){
//                     cout << key[j];
//                 }
//             }
//         }
//         else{
//             for(int j=0; j<key.size(); j++){
//                 if(s[i]==key[j]){
//                     cout << original[j];
//                 }
//             }
//         }
//     }
//     return 0;
//



//                            FIND A SUBSTRING AND REPLACE IT





// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     string s, name="EGYPT", val=" ";
//     int n, count = 0;
//     cin >> s;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]=='E'){
//             for(int j=0; j<5; j++){
//                 if(s[i+j]==name[j]){
//                     count++;
//                 }
//                 else{
//                     count=0;
//                     break;
//                 }
//             }
//             if(count==5){
//                 s.replace(i,5,val);
//                 count=0;
//             }
//         }
//     }
//     cout << s;
//     return 0;
// }


// ZaoQR        ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ




// this code is for comparing words and return the minumam



// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     string s, a="", b, ss, small; 
//     cin >> s; 
//     small=s;
//     ss=s;
//     for (int i=0; i<s.size()-1; i++){
//         a+=s[i];
//         b=ss.erase(0,1);
//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());
//         small = min(small, a+b);
//     }
//     cout << small;
//     return 0;
// }


// ZaoQR        ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ   acmicpc



//                       converting to bynary and chicking for blandrom

// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;


// bool blandr(int n){
//     string s,ss;
//     int num;
//     while(n){
//         num=n%2;
//         n/=2;
//         if(num==0){
//             s+='0';
//         }
//         else {
//             s+='1';
//         }
//     }
//     ss=s;
//     reverse(s.begin(), s.end());
//     if(s==ss){
//         return true;
//     }
//     else {
//         return false;
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n ;
//     if(n%2==0){
//         cout << "NO";
//     }
//     else if(blandr(n)){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }
//     return 0;
// }


//                      brime number chicker


// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;

// bool brime(int n){
//     if(n==1){
//         return false;
//     }
//     else{
//         for(int i=2; i<=sqrt(n); i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         cin >> m;
//         if(brime(m)){
//             cout << "YES" << endl;
//         }
//         else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }




//                                    functon that almost make me cry


// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;

// long long summ(int n, int m){
//     long long count=(pow(n,0)-1);
//     for(int i=2; i<=m; i+=2){
//         count+=pow(n,i);
        
//     }
//     return count;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m;
//     cin >> n >> m;
//     cout << summ(n, m);
//     return 0;
// }
// // S = (X0 - 1) + (X2) + (X4) + (X6) + ............... + (XN)



//                   shifter 


// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;

// void shift(int arr[], int n, int size){
//     int arr2[size]{0};
//     for(int i=1; i<=n; i++){
//         arr2[n-i]=arr[size-i];
//     }
//     for(int j=n; j<size; j++){
//         arr2[j]=arr[j-n];
//     }
//     for(int i=0; i<size; i++){
//         if(i==size-1){
//             cout << arr2[i];
//             return;
//         }
//         else{
//             cout << arr2[i] << ' ';
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m, a;
//     cin >> n >> m;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     if(m%n==0){
//         for(int i=0; i<n; i++){
//             if(i==n-1){
//                 cout << arr[i];
//                 break;
//             }
//             cout << arr[i] << ' ';
//         }
//     }
//     else{
//         a=m%n;
//         shift(arr, a, n);
//     }
//     return 0;
// }
// //                                 this code is written by Amir Alsayed





//                    unique valeus
// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;


// int unique(int arr[], int n){
//     int res = 1;
//     for (int i = 1; i < n; i++) {
//         int j = 0;
//         for (j = 0; j < i; j++)
//             if (arr[i] == arr[j])
//                 break;
//         if (i == j)
//             res++;
//     }
//     return res;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n;
//     if(n==0){
//         cout << n;
//     }
//     else{
//         int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     sort(arr, arr+n);
//     cout << unique(arr, n);
//     }
//     return 0;
// }
// //                                 this code is written by Amir Alsayed



// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int a, b, c, d;
//     cin >> a >> b;
//     int arr[a][b];
//     for(int i=0; i<a; i++){
//         for(int j=0; j<b; j++){
//             cin >> arr[i][j];
//         }
//     }
//     cin >> c >> d;
//     int arrr[c][d];
//     for(int i=0; i<c; i++){
//         for(int j=0; j<d; j++){
//             cin >> arrr[i][j];
//         }
//     }
//     long long res[a][d], counter=0;
//     int n=0;
//     for(int i=0; i<a; i++){
//         for(int j=0; j<d; j++){
//             res[i][n]+=arr[i][j]*arrr[j][i];
//         }
//         n++;
//     }
//     for(int i=0; i<a; i++){
//         for(int j=0; j<d; j++){
//             cout << res[i][j] << ' ';
//             if(j==d-1){
//                 cout << endl;
//             }
//         }
//     }
// }
// //                                 this code is written by Amir Alsayed
// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;
// long long sum(long long n){
//     return (n*(n+1))/2;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         int c=1;
//         for(int j=1; j<=i; j++){
//             cout << c << ' ';
//             c = c*(i-j)/j;
//         }
//         cout << endl;
//     }
// }
// //                                 this code is written by Amir Alsayed






// #include <iostream>
// #include<math.h>
// #include<string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     string s; 
//     int n, ss;
//     cin >> s >> n;
//     long long res=0;
//     for(int i=0; i<s.size(); i++){
//         res*=10;
//         res+=s[i]-48;
//         res%=n;
//     }
//     if(res==0){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }
// }
// //                                 this code is written by Amir Alsayed
#include <iostream>
#include <iomanip>
#include<math.h>
#include<string>
#include <algorithm>
using namespace std;
void byramid(int n, int c){
    if(c==n){
        return;
    }
    byramid(n, c+1);
    for (int i=1; i<n-c; i++){
        cout << ' ';
    }
    for(int i=0; i<c*2-1; i++){
        cout << '*';
        }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    byramid(n+1,1);
    return 0;
}
//                                 this code is written by Amir Alsayed










#include <iostream>
#include <iomanip>
#include<math.h>
#include<string>
#include <algorithm>
using namespace std;
int n, m, c1=0, c2=0;
void summ(int n, int m, int arr[n][m], int arr2[n][m], int res[n][m]={0}, int c1, int c2){
    if(c1==n&&c2==m){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << arr[i][j] << ' ';
            }
            cout << endl;
        }
        return;
    }
    res[c1][c2]=arr[c1][c2]+arr2[c1][c2];
    summ(n, m, arr, arr2, res, c1+1, c2+1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[n][m], arr2[n][m], int res[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr2[i][j];
        }
    }
    summ(n, m, arr, arr2, res, 0, 0);
    return 0;
}
//                                 this code is written by Amir Alsayed

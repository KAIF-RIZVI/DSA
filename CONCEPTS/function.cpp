//+
//sum of digits
// #include<iostream>
// using namespace std;
// int f(int number){
//     int lastdigit;
//   int digits_sum=0;
//   cout<<"ENTER A NUMBER:"<<endl;
//   for(cin>>number;number>0;number/=10)
//   { lastdigit=number%10;
//     digits_sum+=lastdigit;
//   } 
//   return digits_sum;
// }
// int main()
// {int number;
//    cout<<"sum of digits="<<f(number)<<endl;
//   return 0;
// }

//+
//nCr
// #include<iostream>
// using namespace std;

// int combination(int n, int r){
//   int i,factn=1,factr=1,factnr=1;//factorial n (factn,)and factorial r (factr)and factorial n-r(factnr)

//   for(i=1;i<=n;i++)  //factorial n
//   {factn=factn*i;}

//    for(i=1;i<=r;i++) //factorial r
//   {factr=factr*i;}

//  for(i=1;i<=(n-r);i++) //factorial n-r
//   {factnr=factnr*i;}

// int nCr=(factn)/((factr)*(factnr));
// return nCr;
// }

// int main(){
//   int n,r;
//   cout<<"For the nCr value:"<<endl;
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   cout<<"Enter r:"<<endl;
//   cin>>r;

//   cout<<"nCr="<<combination(n,r)<<endl;
//   return 0;
// }

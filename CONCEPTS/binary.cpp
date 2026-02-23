// +
// "DECIMAL TO BINARY"
// #include<iostream>
// using namespace std;

// int binary(int number){
//     int lastdigit,binary=0,pow=1;
//     for(;number>0;number/=2)
//     {
//        lastdigit=number%2;
//        binary=binary+lastdigit*pow;
//         pow*=10;
//     }
//     return binary;
// }

// int main()
// {
//     for(int i=0 ;i<=10;i++)
//     {cout<<"ANSWER IN BINARY:"<<'('<<i<<')'<<binary(i)<<endl;}
//     return 0;
// }


// +
// // "BINARY TO DECEMAL"
// #include<iostream>
// using namespace std;

// int DECIMAL(int binary){
//  int lastdigit,decimal=0,pow=1;
 
//       while(binary>0)
//     {
//         lastdigit=binary%10;
//         decimal+=(lastdigit*pow);
//         pow*=2;
       
//     }
//     return decimal;
// }


// int main(){

//     cout<<DECIMAL(1001);
//     return 0;
// }
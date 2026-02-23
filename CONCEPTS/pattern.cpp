// Pattern problems
// Some basics 

// square pattern


// +
// *****
// *****
// *****
// *****
// *****
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n=5;

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// +
// 12345
// 12345
// 12345
// 12345
// 12345
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n=5;

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// +
// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE
// #include<iostream>
// using namespace std;
// int main(){
//    int i,j,n=5;
   
//    for(i=0;i<n;i++)
//    {  char ch='A';
//      for(j=0;j<n;j++)
//      {
//         cout<<ch;
//         ch++;
//      }
//      cout<<endl;    
//    }
//     return 0;
// }
// OR
// #include<iostream>
// using namespace std;
// int main(){
//    int i,n;
//    char j;
//    cout<<"Enter the number of lines(upto 26):";
//    cin>>n;

//    for(i=0;i<n;i++)
//    {
//     for(j='A';j<=('A'+(n-1));j++)
//     {
//         cout<<j;
//     }
//         cout<<endl;
//    }
//     return 0;
// }


// +
// 1 2 3 
// 4 5 6
// 7 8 9
// #include<iostream>
// using namespace std;
// int main(){
//    int i,j,n=3,K=1;
   
//    for(i=0;i<n;i++)
//    {  
//      for(j=0;j<n;j++)
//      {
//         cout<<K<<" ";
//         K++;
//      }
//      cout<<endl;    
//    }
//     return 0;
// }

// +
// A B C D E 
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y
// #include<iostream>
// using namespace std;
// int main()
// {
//    int i,j,n=5;
//    char ch='A';

//    for(i=0;i<n;i++)
//    {
//      for(j=0;j<n;j++)
//      {
//         cout<<ch<<" ";
//         ch++;
//      }
//      cout<<endl;
//    }
//     return 0;
// }


// TRIANGLE PATTERN

//+
// *
// **
// ***
// ****
// *****
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n=5;

//     for(i=0;i<n;i++)
//     {
//       for(j=0;j<i+1;j++)
//       {
//         cout<<"*";
//       }
//       cout<<endl;
//     }
//     return 0;
// }


//+
// 1
// 22
// 333
// 4444
// 55555
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n=5;

//     for(i=0;i<n;i++)
//     {
//       for(j=0;j<i+1;j++)
//       {
//         cout<<i+1;
//       }
//       cout<<endl;
//     }
//     return 0;
// }

//+
// A
// BB
// CCC
// DDDD
// EEEEE
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n=5;
//     char ch='A';
    
//     for(i=0;i<n;i++)
//     {
//       for(j=0;j<i+1;j++)
//       {
//         cout<<ch;
//       }
//       ch++;
//       cout<<endl;
//     }
//     return 0;
// }


//+
// 1
// 12
// 123
// 1234
// 12345
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n=5;
   
//     for(i=0;i<n;i++)
//     {
//       for(j=0;j<i+1;j++)
//       {
//         cout<<j+1;
//       }
//       cout<<endl;
//     }
//     return 0;
// }

// REVERSE TRIANGLE PATTERN

// +
// 1
// 21
// 321
// 4321
// 54321
// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j,n=5;
//     for(i=0;i<n;i++)
//     {    int k=i+1;
//         for(j=0;j<i+1;j++)
//         {
//           cout<<k;
//           k--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OR
// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j,n=5;
//     for(i=0;i<n;i++)
//     {    
//         for(j=i+1;j>0;j--)
//         {
//           cout<<j;
//         }
//         cout<<endl; 
//     }
//     return 0;
// }

// FLOYD'S TRIANGLE PATTERN

//+
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// #include<iostream>
// using namespace std;
// int main(){
//    int i,j,n=5,K=1;
   
//    for(i=0;i<n;i++)
//    {  
//      for(j=0;j<i+1;j++)
//      {
//         cout<<K<<" ";
//         K++;
//      }
//      cout<<endl;    
//    }
//     return 0;
// }

//+
// A 
// B C
// D E F
// G H I J
// K L M N O
// #include<iostream>
// using namespace std;
// int main(){
//    int i,j,n=5;
//    char ch='A';

//    for(i=0;i<n;i++)
//    {  
//      for(j=0;j<i+1;j++)
//      {
//         cout<<ch<<" ";
//         ch++;
//      }
//      cout<<endl;    
//    }
//     return 0;
// }


//+
//pyramid pattern
//         1
//        121
//       12321
//      1234321
//     123454321
//    12345654321
//   1234567654321
//  123456787654321
// 12345678987654321

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j,k,n=9;

//   for (i=0;i<n;i++)
//   {
//       for(j=0;j<n-i-1;j++)     //spaces
//       {cout<<" ";}

//       for(j=0;j<=i;j++)  // initial no.
//       {cout<<j+1;}

//           k=i;
//       for(j=1;j<i+1;j++)  // 2nd no. portion
//       {   cout<<k;
//           k--;
//       }               //we  can also run i to 0 and print i

//       cout<<endl;


//   }
// return 0;
// }
// hollow diamond pattern



// +

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// Designing a Butterfly pattern

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,n;//for iterating the loop declaring i,j
//     cout<<"ENTER THE SIZE FOR THE PATTERN:"<<endl;
//     cin>>n;

    // printing the top half of the butterfly pattern
    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<i+1;j++)             //top left * portion
    //     {cout<<"*";}
        
    //     for(j=0;j<2*(n-1-i);j++)       //spaces
    //     {cout<<" ";}

    //     for(j=0;j<i+1;j++)             //top right * portion
    //     {cout<<"*";}
    //     cout<<endl;                //next line
    // }

    // printing the bottom half of the butterfly pattern

//     for(i=0;i<n;i++)
//     {
//        for(j=0;j<n-i;j++)     //bottom left * portion
//        {cout<<"*";}

//        for(j=0;j<2*i;j++)      //spaces
//        {cout<<" ";}

//        for(j=0;j<n-i;j++)  //bottom right * portion
//        {cout<<"*";}
//        cout<<endl;       //end of line
//     }
   
//     return 0;
// }
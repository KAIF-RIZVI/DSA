#include<iostream> //program for array sum and product

int sum_array(int a[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    return sum;
}
int product_array(int a[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        product*=a[i];
    }
    return product;
}
int main(){
    int a[5];
    std::cout<<"Enter the elements of an array:"<<std::endl;
    for(int i=0;i<5;i++){
       std::cin>>a[i];
    }
    std::cout<<"The sum:"<<sum_array(a,5)<<std::endl;
    std::cout<<"The product:"<<product_array(a,5)<<std::endl;

    return 0;

}
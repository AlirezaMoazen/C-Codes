#include <iostream>
#include <string>
using std::string;
int fib(int n){
    if (n==0){
        return 0;}
    else if (n==1){
        return 1;
    }
    else {
        return (fib(n-1)+fib(n-2));}
}
int sum(int a, int b){
    return a+b;}
int main() {
    int a(7),b(9);
    string c="fuckTuhh";
    std::cout<<"tuhh exam"<<std::endl;
    std::cout<<sum(a,b)<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<"enter ur fabinuchi number\n"<<std::endl;
    int x;
    std::cin>>x;
    x=fib(x);
    std::cout<<x<<":ur fib number"<<std::endl;
    return 0;}
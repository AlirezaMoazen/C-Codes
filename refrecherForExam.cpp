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
class pokeman{
    public:
        int lvl;
        int exp;
        int* poLvl = &lvl;
        int* poExp = &exp;
    pokeman(int x,int  y){
        exp = x;
        lvl = y;
    }
    void upgrade(int gainedexp){
        exp += gainedexp;
        if (exp>=4000){
            lvl ++; exp-= 4000;
        }
    }
};

int main() {
    pokeman fukano(4200, 17);
    fukano.upgrade(3000);
    std::cout<<"lvl="<<*(fukano.poLvl)<<" exp:"<<*(fukano.poExp)<<std::endl;
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
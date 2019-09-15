/*the namespace are like classes but it avoid naming collision between two or more class/liibraries.
we use scope resolution operator for access static members but here
we can use it  namespace wirthout declaring a metghod or variable static.
nested namespace also possible.
*/



#include<iostream>

//first namespace declaration
namespace apple_say{
    void say()
    {
        std::cout<<"first namespace apple called";
    }

    //a methhod for namespace.
    int add(int a,int b,int c){
        return a+b+c;
    }
}

//second namespace declaration
namespace orange_say{
    void say(){
        std::cout<<"second namespace orange called";
    }

    //a second method for namespace checking.
    int add(int a,int b){
        return a+b;
    }
}

int main()
{
    apple_say::say();//say( method invoked for apple_say namespace)
    orange_say::say();//say( method invoked for orange_say namespace)

    namespace a=apple_say;

                //this is like class declaration by which we declare it nam,espace or rename it as a alias.

    namespace b=orange_say;
    

    std::cout<<a::add(2,3,5);
       //methods are called.
    std::cout<<b::add(1,2);
}

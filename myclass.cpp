#include <iostream>

using namespace std;

class A{
  public:
    virtual void f(int a){
       cout<<"A::virtual f(int )"<<endl;
    }
    void g(float b){
      cout<<"A::void g(float)"<<endl;
    }
    void h(float c){
      cout<<"A::void h(float)"<<endl;
    }

};

class B:public A{
   public:
      void f(int a){
        cout<<"B::void f(int a)"<<endl;
      }
      void g(int b){
       cout<<"B::void g(int b)"<<endl;
      }
      void h(float c){
        cout<<"B::void h(float c)"<<endl;
      }
};

int main(){
   B d;
   A* p = &d;
   B* q = &d;
   int aa = 1;
   float bb =2.03;
   p->f(aa);
   p->g(aa);
   p->h(bb);
   cout<<"***********"<<endl;
   q->A::f(aa);
   q->A::g(aa);
   q->A::h(bb);
   return 0;

}

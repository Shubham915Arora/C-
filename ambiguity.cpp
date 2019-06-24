   #include<iostream>
  using namespace std;

       class ClassA
       {
              public:
              ClassA()
              {
                     cout<<"\n This is class A bieng executed ";

              }
       };

       class ClassB : public ClassA
       {
              public:
              ClassB(){
              cout<<"\n This is class B bieng executed ";
              }
       };
       class ClassC : public ClassA
       {
              
              public:
              ClassC(){

              cout<<"\n This is class C bieng executed ";
              }
       };

       class ClassD : public ClassB, public ClassC
       {
              public: 
              ClassD()
              {       
              cout<<" \n This is Class D bieng Executed ";
              }
       };

       int  main()
       {

			  ClassD obj;

		

			 

	      return 0;

       }
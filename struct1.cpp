#include<iostream >
#include<cstdlib>
using namespace std; 
struct emp
{
	int ecode;
	char name[50];
	int age ;
	float salary;
    char ch1;

};
int main()
{
	emp e[1];
    for(int i=0;i<=1;i++){
    	cout<<"\n Please Enter the details of the Employee : "<<i;
    	cout<<"\n Employee code  :";
    	cin>>e[i].ecode;
    	cout<<"\n Name           :";
    	cin>>e[i].name;
    	cout<<"\n Age 			 :";
    	cin>>e[i].age;
    	cout<<"\n Salary 		 :";
    	cin>>e[i].salary;

    }
    int ch,ec,ch2,c1=0,ch3,min;
    char ch1;
    do{
    	system("clear");
    	cout<<"\n Please Enter Your choice : ";
    	cout<<"\n 1. Exit "; 
    	cout<<"\n 2. Display ";
        cout<<"\n 3. Change ";
        cout<<"\n 4. Sort ";
    	cin>>ch;
    	switch(ch){
    		case 2:{
        		cout<<"\n Please Enter the ecode of the employee of whom you wish to see the details :";
        		cin>>ec;
        		int c=0;
        		for(int j=0;j<=1;j++){
        			if(e[j].ecode==ec){
        				cout<<"\n Name of the employee   :"<<e[j].name;
        				cout<<"\n Age of the employee    :"<<e[j].age;
        				cout<<"\n Salary of the Employee :"<<e[j].salary;
        				
        			}
        			else 
        				c++;


        		}
        		if(c==2){
        			cout<<"\n You Enetered a Wrong choice ";
        		  
        		}



    	       }
               break;

             
    		case 1:exit(0);

    		

    		default :{cout<<"\n SORRY!!!! , You entered a Wrong choice \n Press any key to try again ";

                        break;
                }

            case 3: {
                cout<<"\n Please enter the ecode of the employee of whom you want to change the details : ";
                cin>>ec;
                for(int k=0;k<=1;k++){
                    
                    if(e[k].ecode==ec){
                        cout<<"\n Please choose what do you want to change :";
                        cout<<"\n 1.) Name ";
                        cout<<"\n 2.) Age  ";
                        cin>>ch2;
                        switch(ch2){
                            case 1:{
                                cout<<"\n Exsisting Name of the Employee :"<<e[k].name;
                                cout<<"\n Please Enter the new name : ";
                                cin>>e[k].name;
                                break;
                                
                            }
                            case 2:{
                                cout<<"\n Exsisting age of the Employee : "<<e[k].age;
                                cout<<"\n Please Enter the new age of the employee";
                                cin>>e[k].age;
                                break;
                            }
                        }
                    }
                    else 
                        c1++;
                }
                if(c1==2)
                    cout<<"\n You Entered a wrong ecode!!";

                break;

               }
            case 4:{
                int choice;
                cout<<"\n Please Enter your choice : ";
                cout<<"\n 1.) Age "
                cout<<"\n 2.) Salary ";
                cin>>ch3;
                switch(choice){
                    case 1:{
                        for(int i=0,j=0;i<5){
                            if(e[i].age>e[i+1].age){
                                i++;
                            }
                            else{
                                struct temp;
                                temp=e[i];
                                e[i]=e[i+1];
                                e[i+1]=temp;
                                i--;
                            }


                        }
                        for(int i=0;i<5;i++){
                            cout<<e[i]
                        }              


                    
                    }
                }



            }   
             
             
                

    	}
    	cout<<"\n Do you wish to continue (Y/N) ? ";
    	cin>>ch1;
        
    }while(ch1=='y'||ch1=='Y');


}
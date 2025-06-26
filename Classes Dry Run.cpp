//============================================================================
// Name        : Classes Dry Run
// Author      : Muanna Hamid
// Copyright   : (c) Reserved
//============================================================================

        #include <iostream>

        using namespace std;

        class Car{
            private:
                int a=1;
                int b=2;
            public:
                Car(int x,int y)
                {
                    a=x;
                    b=y;
                }
            void display()
            {
                cout<<a<<b;
            }
        };

        int main() 
        {
            Car car(1,2);
            car.display();

            return 0;
        }
        ------------------------------------------------------------------------------------------------------------------Constructor Overkoading ------------------

        #include <iostream>

        using namespace std;

        class Car{
            private:
                int a=1;
                int b=2;
            public:
                Car(int x=0,int y=0)
                {
                    a=x;
                    b=y;
                }
            void display()
            {
                cout<<a<<b<<endl;
            }
        };

        int main() 
        {
            Car car1;
            Car car2(1);
            Car car3(1,1);
            car1.display();
            car2.display();
            car3.display();

            return 0;
        }

        ------------------------------ member static , polymorphism, inheritence ---------------------------------------------------------------

        #include <iostream>

        using namespace std;

        class Car{
            protected:
                int a, b;
                static int count;
                static bool show;
            public:
                Car()
                {
                    cout<<"CAR START\n";
                    count++;
                }

                Car(int x, int y): a(x),b(y) {}

                virtual void Start()=0;
                virtual void Stop()=0;
        };

        class Rome : public Car
        {
            
            public:
                Rome(int x,int y)
                {
                    cout<<"Rome00\n";
                    count++;
                }
                void Start()override
                {
                    cout<<"start at "<<a<<b<<endl;
                }
                void Stop() override
                {
                    cout<<"stop\n" ;
                }

                static int getCount()
                {
                    return count;
                } 

                static void setCount(int x)
                {
                    count=x;
                    cout<<count;
                } 

                friend ostream& operator <<( ostream& out, Rome r)
                {
                    if(show==true)
                    {
                        out<<"\n\n--------\n\n";
                        show=false;
                    }
                    
                    return out;
                } 
        };
        int Car:: count=0;
        bool Car:: show=true;

        int main()
        {
            Car* c1= new Rome(1,1); 
            Rome::getCount();
            Rome::setCount(10);
            c1->Start();

            Rome r1(1,0);
            cout<<r1;
            cout<<r1;

        }
  
        ------------------------------------------------------------------------------------------------------------ Class array = Constructor Call----------------------------------

        #include <iostream>

        using namespace std;

        class Car{
            private:
                int a=1;
                int b=2;
            public:
                Car(int x=0,int y=0)
                {
                    a=x;
                    b=y;
                }
            void display()
            {
                cout<<a<<b<<endl;
            }
        };

        int main() 
        {
            Car car[3];
            car[0].display();
            car[1].display();
            car[2].display();

            return 0;
        }
        --------------------------------------------------------------------------              copy constructor

        #include <iostream>

        using namespace std;

        class Car{
            private:
                int a;
                int b;
            public:
                Car(int x=0,int y=0)
                {
                    a=x;
                    b=y;
                }
                Car(Car& car)
                {
                    a=car.a;
                    b=car.b;
                }
                void funct(Car& car)
                {
                    
                }
        };

        int main() 
        {
            Car car1,car2; // Constructor call
            car1=car2;     // Copy Constructor call (copying obj)  
            car1.funct(car2); // Copy Constructor call (passing /returning obj)

            return 0;
        }
        --------------------------------------------------------------------------             setx(3) /sety(2) and getx() {return} /gety() {return }
        #include <iostream>

        using namespace std;

        class Car{
            private:
                int a;
                int b;
            public:
                Car(int x=0,int y=0)
                {
                    a=x;
                    b=y;
                }
                
                void setx(int x)
                {
                    a=x;
                }
                
                void sety(int y)
                {
                    b=y;
                }
                int getx()
                {
                    return a;
                }
                int gety()
                {
                    return b;
                }
        };

        int main() 
        {
            Car car;
            car.setx(1);
            car.sety(2);
            cout<<car.getx()<<" "<<car.gety();

            return 0;
        }
        -----------------------------------------------------------------------            Destructor Start where Constructor Stop

        #include <iostream>

        using namespace std;

        class Car{
            
            public:
                string a;
                
                Car()
                {
                    cout<<"Default constructor call h\n";
                }
                Car(string b)
                {
                    a=b;
                    cout<<"Para.. constructor call"<<a<<endl;
                } 
                
                ~Car()
                {
                    cout<<"Destructor call "<<a<<endl;
                }        
        };

        int main() 
        {
            Car car;
            Car* mar=new Car("kk");
            Car lar("mk");
            Car* par;
            {
                Car har("tete");
                par=new Car("hehe");
                delete mar;
            }
            Car kar("meme");
            
            delete par;
            
            return 0;
        }
        -----------------------------------------------------------------------------------------------------------




































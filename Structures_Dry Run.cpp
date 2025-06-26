//============================================================================
// Name        : Structures_Dry Run
// Author      : Muanna Hamid
// Copyright   : (c) Reserved
//===========================================================================


    ========================================================    data member &  member function  ====================

    #include <iostream>

    using namespace std;

    struct Area
    {
        // data member
        int a =2;
        int b=3;
        // member function
        int AreaOfRectangle()
        {
            return a*b;
        }
    };
    int main() 
    {
        Area area;
        int b=area.AreaOfRectangle();
        cout<<b;        
        return 0;
    }
--------------------------------------------------------------------------------------   Constructor
      #include <iostream>

      using namespace std;

      struct Car
      {
          Car( string model,float prize)
          {
              cout<<model<<" "<<prize<<" ";
          }
      };

      int main() 
      {
          Car car{"ROM", 12000}; 
          
          return 0;
      }
    ---------------------------------------------------------------------------------------------- passing stucture( object ) to member fuction-
    #include <iostream>

    using namespace std;

    struct Car{
        string model;
        int num;
        float prize;
        
        void printCar(Car car)
        {
            cout<<car.model<<" "<<car.prize;
        }
    };

    int main() 
    {
        Car car;
        car.model="ROM";
        car.num=16;
        car.prize=120000;
        car.printCar(car);
        
        return 0;
    }
--------------------------------------------------------------------------------------    struct inside struct
      #include <iostream>

      using namespace std;

      struct Student
      {
          string name;
          double gpa;
          int age;
      };
      
      struct Adress{
          int squardistance;
          Student student;
      };

      int main() 
      {  //   accessing Student entity using Adress
          Adress adress;
          adress.squardistance=10;
          adress.student.name="muanna";
          adress.student.gpa=2.4;
          return 0;
      }
-------------------------------------------------------------          +   Passing struct Members as argument
    #include <iostream>

    using namespace std;

    struct Student
    {
        string name;
        double gpa;
        int age;
    };
    
    struct Adress{
        int squardistance;
        Student student;
    };
    
    void display(string name, int square, int gpa)
    {
        cout<<name<<" "<<square<<" "<<gpa;
    }
    int main() 
    {
        Adress adress;
        adress.squardistance=10;
        adress.student.name="muanna";
        adress.student.gpa=2.4;
        
        display(adress.student.name, adress.squardistance,adress.student.gpa);
        return 0;
    }

-------------------------------------------------------------              array inside struct
      #include <iostream>

      using namespace std;

      struct Car{
          string model[3];
      };

      int main()
      {
          Car car;
          car.model[0]="ROME1";
          car.model[1]="ROME2";
          car.model[2]="ROME3";
          
          for(int i=0;i<3;i++)
          {
              cout<<car.model[i]<<" ";
          }
          return 0;
      }
    --------------------------------------------------------------------  -------------------           struct  arrays  ---------------------------------------------

    #include <iostream>

    using namespace std;

    struct Student
    {
        string name;
        double gpa;
        int age;
    };


    int main() 
    {
        Student  student[3]={{"muanna",3.0,18},  // must initialize in same line
                                              {"ali", 2.2, 22},
                                              {"khan",3.3,19}};
        for(int i=0;i<3;i++)
        {
            cout<<student[i].name<<" "<<student[i].gpa<<" "<<student[i].age<<endl;
        }
        return 0;
    }
---------------------------------------------------------------------
#include <iostream>
using namespace std;

struct Book{
    string title;
    float price;
};

int main()
{
    Book book[1]={"all",22};
    cout<<book[0].title;
    return 0;
}
---------------------------------------------------------------             passing struct array
#include <iostream>
using namespace std;

struct Book{
    string title;
    float price;
};

void display(Book book[3])
{
     for(int i=0;i<3;i++)
    {
        cout<<book[i].title<<endl;
        cout<<book[i].price<<endl;
    }    
}
int main()
{
    Book book[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter book : "<<i+1<<" ";
        cin>>book[i].title;
        cout<<"enter price : "<<i+1<<" ";
        cin>>book[i].price;
    }
    cout<<"\n Display :\n";
    
    display(book);

    return 0;
}
-----------------------------------------------------------------                   pointers inside struct array(- -)  
#include <iostream>

using namespace std;

struct Book{
    string title;
    string *ptr= &title;
};

void display(Book book[2])
{
     for(int i=0;i<2;i++)
    {
        cout<<*(book[i].ptr)<<endl;
    }    
}
int main()
{
    Book book[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter book : "<<i+1<<" ";
        cin>>book[i].title;
    }
    cout<<"\n Display :\n";
    
    display(book);
    return 0;
}
----------------------------------------------------------------------------------------   pointer inside struct   
      #include <iostream>
      using namespace std;

      struct Car
      {
          string model="ALMANDO";
          int* prize;
          int num=16;
      };

      int main() 
      {
          Car car;
          car.prize=&car.num;
          cout<<*(car.prize);
          
          return 0;
      }
----------------------------------------------------------------------------------------------             struct   pointer 
      #include <iostream>

      using namespace std;

      struct Car
      {
          string model="ALMANDO";
          float prize=0;
      };

      int main() 
      {
          Car car;
          Car* ptr=&car;
          cout<<ptr->model<<" "<<ptr->prize<<" ";
          cout<<car.model<<" "<<car.prize;        
          
          return 0;
      }
-------------------------------------------------------------   Passing struct Pointers 
       #include <iostream>

        using namespace std;

        struct Student
        {
            string name="muanna";
            double gpa=2.4;
            int age;
        };

        void display(Student* ptr)
        {
            cout<<ptr->name;
        }
        int main() 
        {
            Student student;
            display(&student);
            
            return 0;
        }
    ---------------------------------------------------------------  + returning struct pointer
        #include <iostream>

        using namespace std;

        struct Student
        {
            string name;
            double gpa;
            int age;
        };

        Student* display(Student* ptr)
        {
            ptr->name="muanna";
            ptr->gpa=2.4;
            
            return ptr;
        }
        int main() 
        {
            Student student;
            Student* result=display(&student);
            
            return 0;
        }
    -------------------------------------------------------------------------           return hole structure from fuction
    #include <iostream>

    using namespace std;

    struct Student
    {
        double gpa;
        int age;
    };

    // return struct ( both gpa and age)
    Student returnStruct(double gpa, int age)
    {
        Student student;
        student.gpa=age;
        student.age=gpa;
        
        return student;
    }

    int main()
    {
        Student student;
        
        student={2.2,4};
        
        cout<<"before swapping\n";
        cout<<student.gpa<<" "<<student.age<<endl;

        cout<<"before swapping\n";
        student=returnStruct(2.2,4);  
        cout<<student.gpa<<" "<<student.age<<endl;
        return 0;
    }
-----------------------------------------------------------------------------  return hole structure from fuction :  e.g 
      #include <iostream>

      using namespace std;

      struct Car
      {
          string model;
          int num;
          float prize;
          
          void printCar()
          {
              cout<<model<<" "<<prize<<" ";
          }
      };

      Car initialize()
      {
          Car car={"ROM", 16, 12000};
          return car;
      }

      int main() 
      {
          Car car; 
          car=initialize();
          car.printCar();
          
          return 0;
      }
---------------------------------------------------------------------------        assigning hole object to other object  
  #include <iostream>
  using namespace std;

  struct Car {
      string brand;
      float price;
  };

  int main() 
  {
      Car car1;
      car1.brand = "Toyota";
      car1.price = 25.5;

      Car car2;
      car2.brand = "Honda";
      car2.price = 28.7;
      
      cout<<"Car1 : "<<car1.brand<<" "<<car1.price<< endl;
      cout<<"Car2 : "<<car2.brand<<" "<<car2.price<< endl;
      
      car1 = car2;
      
      cout<<"Car1 : "<<car1.brand<<" "<<car1.price<< endl;
      cout<<"Car2 : "<<car2.brand<<" "<<car2.price<< endl;

      return 0;
  }

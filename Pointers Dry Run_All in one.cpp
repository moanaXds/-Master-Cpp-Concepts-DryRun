//============================================================================
// Name        : pointers_Dry Run_All in one
// Author      : Muanna Hamid
// Copyright   : (c) Reserved
//============================================================================


      --------------------------------------------------------------------------   constant and pointers ----------------------------------------------------------
      // both const =  run
      // 0nly pointer const=  run
      // 0nly int/char const =error
        #include <iostream>

        using namespace std;

        int main() 
        {
           int x=9;
           const int* p=&x;
           // error
      //   const int x=9;
      //   int* p=&x;     
           
           
           const int str[]={1,2,3,4,5,6};
           const int* ptr=str;
           ptr=ptr+2;
           cout<<*ptr<<endl;
           cout<<ptr<<endl;
           
           const char arr[]="progr aming";
           const char* ptr2=arr;
           cout<<*ptr2<<endl;// first letter
           cout<<ptr2;

            return 0;
        }
        //=====================================================================================
        #include <iostream>

        using namespace std;


        int main() 
        {
            const int* p;
            int x=9;
            p=&x;
          //*p=11;
            x=11;
            return 0;
        }
        ------------------------------------------------------------------------------------------------------------------------------------
        #include <iostream>

        using namespace std;

        int main() 
        {
            const int* p;
            int x=9;
            p=&x;
            *p=11;  // can't update
            x=11;
            int y=12;
            p=&y;    // yes it can
            return 0;
        }
       ------------------------------------------------------------------------------------------------------------------------------------ 
        #include <iostream>

        using namespace std;

        int main() 
        {
            int x=10;
            int y=50;

            // const 1 for x and y
            // const 2 for p
            const int* const p=&x;                       //   int* const p=&x (vice versa)       vs       const int* p=&x  (No need to initia.. quik...  Also can point to new address)
            
            *p=9;
            p=&y
            
            return 0;    
        }                                                               
      ---------------------------------------------------------------------------------------- pointers   arthimetics --------------------------------------------  
        #include <iostream>

        using namespace std;


        int main() 
        {
            int x=10;
            int y=50;

            int* p=&x;
            int* q=&y;
            
            int* result=*p +*q ;
            int* s= p;

            return 0;    
        }  
       ------------------------------------------------------------------------------------------------------------------------------------
         #include <iostream>

        using namespace std;

        int main() 
        {
            int x=10;
            int* p=&x;
            cout<<x<<endl;
            cout<<*p<<endl;
            
            //   same
            cout<<&x<<endl;
            cout<<p<<endl;
            
            //  int jump 4
            cout<<p+1<<endl;
            cout<<p+2<<endl;

            return 0;    
        }  
        ------------------------------------------------------------------------------------------------------------------------------------
          
        #include <iostream>

        using namespace std;

        int main() 
        {
          
          int arr[5]={1,2,3,4,5};
          int* p=arr;
          
          cout<<*(p+0)<<endl;
          cout<<*(p+1)<<endl;   // double derefernce  if p was a pointer array =(*p)[5]    s0 ..... *(*p+1)
          cout<<*(p+2)<<endl;
          //     same
          cout<<*(arr+0)<<endl;
          cout<<*(arr+1)<<endl; 
          cout<<*(arr+2)<<endl;
          
          return 0;    
        }  
       --------------------------------------------------------------------------------------   d/w between char* and  int*--------------------------------------------
        #include <iostream>

        using namespace std;

        int main() 
        {
           
           int str[]={1,2,3,4,5,6};
           int* ptr=&str[0];
           cout<<*ptr<<endl;
           cout<<ptr<<endl;
           cout<<str<<endl;
           
           char arr[]="progr aming";
           char* ptr2=arr;
           cout<<*ptr2<<endl;
           cout<<ptr2<<endl;
           cout<<arr;

            return 0;
        }
      =======================================   1     D ARRAY  ALLOCATION 
      //  
      int* arr=new int [r];

      delete[]arr;

      =======================================   2     D ARRAY  ALLOCATION 
      int** arr=new int*[r];
      for(int i=0;i<r;i++)
      {
          arr[i]=new int[c];
      }
      -------------------------------------
      for(int i=0;i<r;i++)
      {
          delete[]arr[i];
      }
      delete[]arr;

      =======================================   3     D ARRAY  ALLOCATION 

      int*** arr[]=new int** [x];
      for(int i=0;i<x;i++)
      {
          arr[i]=new int*[y];
          for(int j=0;j<y;j++)
          {
              arr[i][j]=new int[k]
          }
      }

      --------------------------------------------------
      for(int i=0;i<x;i++)
      {
          for(int j=0;j<y;j++)
          {
              delete[] arr[i][j];
          }
          delete[]arr[i];
      }
      delete[]arr;

        =============================================     4 D allocation=========================================
        #include <iostream>

      using namespace std;

      int main()
      {
          int r=2,c=3,z=4,p=5;
          int**** arr=new int***[r];
          for(int i=0;i<r;i++)
          {
              arr[i]=new int** [c];
              
              for(int j=0;j<c;j++)
              {
                  arr[i][j]=new int* [z];
                  
                  for(int k=0;k<z; k++)
                  {
                      arr[i][j][k]=new int [k];
                  }
              }
          }
          return 0;
      }

       //=======================================  
        #include <iostream>

        using namespace std;

        int main()
        {
            int* arr=new int[3];
            arr[0]=0;
            arr[1]=1;
            arr[2]=0;
            for(int i=0;i<3 ;i++)
            {
                cout<<arr[i];
            }
            cout<<endl;
            
            int p=7;
            for(int i=0;i<3 ;i++)
            {
                arr[i]=p;
                p++;
            }
            for(int i=0;i<3 ;i++)
            {
                cout<<arr[i];
            }   
            delete []arr;
            return 0;
        }
        ===============================================    2 D      ========================================
       #include <iostream>

        using namespace std;

        int main()
        {
            int r=3;
            int c=3;
            
            int** arr=new int*[r];
            for(int i=0;i<r;i++)
            {
                arr[i]=new int[c];
            }
            int p=0;    
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c ;j++)
                {
                    arr[i][j]=p;
                    cout<<arr[i][j];
                    p++;
                    
                }
            }
            for(int i=0;i<r;i++)
            {
                delete[] arr[i];
            }    
            delete []arr;
            return 0;
        }


        //========================================================== null ,dangling, typecasting ==========================================
        // Online C++ compiler to run C++ program online
      #include <iostream>

      using namespace std;

      int main() 
      {
          void* ptr=nullptr;
          int* arr=new int[3];
          int x=2;
          ptr=&x;
          cout<<x<<endl;
          cout<<*(int*)ptr<<endl;
          cout<<*(static_cast<int*>(ptr));
          delete arr;
          arr=nullptr;
          
          return 0;
      }
      ================================================     function pointer   ============================================
      // Online C++ compiler to run C++ program online
      #include <iostream>

      using namespace std;

      int add(int a,int b,int c)
      {
          return a+b-c;
      }

      int main()   // return type and parameters of pointer function == called one
                   // int(*functptr)(int a,int b,int)==int add(int a,int b,int c)
      {
          int(*functptr)(int a,int b,int)=add;
          cout<<add(3,4,1);
          cout<<(*functptr)(3,2,1); // check
          return 0;
      }
      =========================================================================
      #include <iostream>

      using namespace std;

      int add(int* ptr1, int* ptr2, int* ptr3)
      {
          int sum=*ptr1+*ptr2+*ptr3;
          return sum;
      }
      int main()
      {
          
          int a=10,b=10,c=10;
          int *ptr1,*ptr2,*ptr3;
          ptr1=&a;
          ptr2=&b;
          ptr3=&c;
          int (*fuctptr)(int* ptr1, int* , int* )=add;
          cout<<add(ptr1, ptr2 ,ptr3)<< endl << fuctptr(ptr1, ptr2 ,ptr3);                                // dont need (&ptr1, &ptr2 ,&ptr3) as they already had adresses
          
          return 0;
      }
      ==========================================     1 d and 2 d pointer array ===============================

      #include <iostream>

      using namespace std;

      int main()
      {
          int arr[3]={1,2,3};
          int (*ptr)[3]=&arr;   // error-->>  int (*ptr)[3]=arr;
          cout<<(*ptr)[2]<<endl;
          
          for(int i=0;i<3;i++)
          {
              cout<<(*ptr)[i]<<" ";
          }
          cout<<endl;
          
          for(int i=0;i<3;i++)
          {
              cout<<*(*ptr+i)<<" ";  //   2 times derefference for both 1D and 2D pointers
          }
          cout<<endl;    
          -----------------------------------------------------------------------------------------
          int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
          int (*ptr2)[2][3] = &arr2;
          
          for(int i=0; i<2;i++)
          {
              for(int j=0;j<3;j++)
              {
                  cout<<(*ptr2)[i][j]<<" ";   // *(*(*ptr2+i)+j) 
              }
          }
          cout<<endl;
          for(int i=0; i<2;i++)
          {
              for(int j=0;j<3;j++)
              {
                  cout<<*((*ptr2)[i]+j)<<" ";  
              }
          } 
          return 0;
      }

      ===================================================      string to pointer arrays       ======================


      #include <iostream>

      using namespace std;

      int main()
      {
              char* ptr1[4][3]={ {"muann","khan","hamid"},//0
                                              {"muansn","tkhan","hamid"},//1 row
                                              {"muanasn","ykhan","hamid"},//2
                                              {"muansaan","gkhan","hamid"}} ;//3     
              for(int i=0;i<4;i++)
              {
                  for(int j=0;j<3;j++)
                  {
                      cout<<*(*(ptr1+i)+j)<<" ";   // int ki tarah andar * nhi attaaa kabhi bhi (ptr1+i)
                  }
                  cout<<endl;
              }                  
              cout<<ptr1<<endl;// addres
              cout<<*ptr1<<endl;// addres
              cout<<**ptr1<<endl;// muanna   (*==type of array)
              cout<<***ptr1<<endl;//m
   ------------------------------------------------------------------------------------------       
              char* ptr2[3]={"muann","khan","hamid"};
              for(int i=0;i<3;i++)
              {
                  cout<<*(ptr2+i)<<" ";
              }
              cout<<ptr2<<endl;// address
              cout<<*ptr2<<endl;// muanna   (*==type of array)
              cout<<**ptr2<<endl;//m
              cout<<*(ptr2+1)<<endl;// khan
  ------------------------------------------------------------------------------------            
              char* str="khan";
              cout<<str<<endl;// khan  (*==type of array)
              cout<<*str;
              cout<<endl;
-----------------------------------------------------------------  d/w char array and char pointer array?????????????-------------------------------------------------
              char arr[]={"muanna"}; // muanna act as a single row 
              char arr1[2][10]={"muanna",
                                            "hameed"}; // elment =row and character= column
              
              return 0;
      }
      =============================================================  d/w  int  pointer array  & char pointer array============

#include <iostream>

using namespace std;

int main()
{
        int arr[]={1,2,3};     
        int *ptr=arr;
        cout<<*ptr<<endl;

        int(*ptr1)[3]=&arr;
        for(int i=0;i<3;i++)
        {
            cout<<*(*ptr1+i)<<" ";//* inside and alway 2
        }
        cout<<endl;
        

        char* ptr2[3]={"muann","khan","hamid"};
        for(int i=0;i<3;i++)
        {
            cout<<*(ptr2+i)<<" ";  //* outside
        }
        return 0;
} 


      ===============================================       (Dry Runs)   ==========================
  



  #include <iostream>

  using namespace std ;

  int main() 
  {
      int x=5,y=10;
      int z=((++x * y--)||(++x * y--));
      cout<<(z+y);
      
      return 0;
  } 
===========================================================================

#include <iostream>

int main() 
{
    char* str1="Self defence is all you need : write?";
    char str2[80];
    char* src=str1;
    char* dest=str2;
    
    while(*src)
        *dest++ = *src++;    
    *dest='\0';
    cout<<str2;
    
    return 0;
} 

  ===========================================================================


    #include<iostream>

    using namespace std;

       int main()
    {     
           void* vp;
           char ch='g';
           char *cp="gloofy\n";
           int j=20;
           vp=&ch;
           cout<<(char*)vp<<endl;
           vp=&j;
           cout<<*(int*)vp<<endl;
           vp=cp;
           cout<<(char*)vp+1<<endl;

           return 0;
    }
  
 ===========================================================================
 
 #include <iostream>

  using namespace std;
  void mystery(int* &ptr,int s)
  {
      ptr= new int[s]();
      for(int i=0,j=s; i<s; ++i,j--)
      *(ptr+i)=j;  
  }
  int main() 
  {
      int* ptr,s=5;
      mystery(ptr, s);
      for(int i=0; i<s; ++i)
      cout<<ptr[i]<<" ";
      
      delete[] ptr;
      ptr=NULL;
      return 0;
  }
   ==========================================================================

        #include <iostream>

        using namespace std;

            int main()
            {
                int x[10]={0,1,2,3,4,5,6,7,8,9};
                int* ptr1, *ptr2;
                ptr1=x+2; //2
                ptr2=&x[9]; //9
                cout<<* ptr1 * *ptr2;  // xing
                
            return 0;
            }
            
      =========================================================================
      
        #include <iostream>

        using namespace std;

            int main()
            {
                int num[5]={1,2,3,4,5};
                int* p;
                p=num;
                
                *p=20 ;// num[0]=20
                p=&num[1]; // 2
                *(++p)=30 ; // 3=30 
                
                p=num+4; // num[4]=5;
                *p=30; // 5=30
                p=num;// from start
                *(p+3)=40; 
                for(int i=0; i<5; i++)
                {
                    cout<< num[i]<<"  ";
                }
                return 0;
            }
            
  =============================================================================================
 
 #include <iostream>

  using namespace std;

  int main()
  {
      void* v;
      int a=6.9;
      v=&a;
      cout<<&a<<endl;
      cout<<&v<<endl;
      cout<<*(float*)v<<endl;
      cout<<*(float**)v<<endl;
      cout<<*(float***)v<<endl;
      cout<<*(float******)v<<endl;
      return 0;
  }
        =============================================================================================
 
 #include<iostream>

    using namespace std;

    int main()
    {     
           int a=1;
           int  *x=&a;
           int** pt=&x;
         
           
           cout<<"a       : "<<a<<endl;
           cout<<"*x     : "<<*x<<endl;  
           cout<<"* &x : "<<* &x<<endl;  // pointing the address at address
           cout<<"& *x : "<<& *x<<endl; // address of pointer
           cout<<"* (&x): "<<* (&x)<<endl;
           cout<<"* (&a): "<<* (&a)<<endl;
           cout<<"**pt : "<<**pt<<endl;
           

           return 0;
    }

====================================================================================================

#include <iostream>

using namespace std;

const char* c[]={"pf","exam","pfmid_1","mad"};// 1 row
const char**cp[]={c+2,c+3,c,c+1};
char const***cpp=cp;

int main()
{
    cout<<*cpp[1]<<endl;
    cout<<*(*(*(cpp+2)+2)+3)<<endl;
    cout<<(*cpp)[-1]<<endl;
    cout<<*(cpp+3)[-1]<<endl;
    
	return 0;
}
      =========================================================================
    #include<iostream>

    using namespace std;

    int main()
    {         
      
    int a=10;
    int* p=&a;
    *p=5;
    *p=5+1;
    
    cout<<"p=  "<<p<<"\n"<<"*p=  "<<*p<<"\n";
    cout<<"(p+1)=  "<<p+1<<"\n"<<"(*p+1)=  "<<*p+1<<"\n"<<endl;
    
    
    int** p2=&p;
    cout<<"*(*p2)  "<<*(*p2)<<endl;
    cout<<"p2  "<<p2<<endl;
    **p2=*p+1;
    cout<<"*(*p2)  "<<*(*p2)<<endl;
    cout<<"p2  "<<p2<<endl<<endl; 
    
    
    int***p3=&p2;
    cout<<"(*(*(*p3)))=  "<<(*(*(*p3)))<<endl;
    cout<<"p3=  "<<p3<<endl;
    ***p3=10;
    cout<<"(*(*(*p3)))=  "<<(*(*(*p3)))<<endl;
    cout<<"p3=  "<<p3<<endl;
    cout<<"(*(*(*p3-1)))  "<< (*(*(*p3-3)))<<"\n"<<"p3-3  "<< p3-3<<endl<<endl;

  
    char* ch;
    ch=(char*)p;
    cout<<"sizeofcharacter= "<<sizeof(char)<<endl;
    cout<<"*ch "<<*ch<<endl;
    cout<<"ch "<<ch<<endl;

    return 0;
    }     

==========================================================================
  #include <iostream>

  using namespace std;

  int main()
  {
      void* vp;
      void**vvp=&vp;
      int a=69;
      vp=&a;
      

      //       E
      cout<<(char*)*vvp<<endl;
      cout<<*(char*)(*vvp)<<endl;
      cout<<*((char*)*vvp)<<endl;
      cout<<*(char*)(int*)(float*)(*vvp)<<endl;
      
      
      //   adress
      cout<<&a<<endl;
      cout<<&vp<<endl;
      cout<<&vvp<<endl;
      cout<<*vvp<<endl;
      
      cout<<(void*)vvp<<endl;
      cout<<(void*)(void*)(char**)(int*)(float*)(vvp)<<endl;
      cout<<&(*vvp)<<endl;
      cout<<(void*)(*vvp)<<endl;
      cout<<(void*)(char*)(*vvp)<<endl;
      cout<<(char**)(vvp)<<endl;
      
    
      
      return 0;
  }

   =========================================================================
   #include<iostream>

    using namespace std;

       int main()
    {     
           int a=1;
           int  *x=&a;
           int** pt=&x;
           
           char ch='a';
           char *ptr=&ch;
           char** sup=&ptr;
           
           float price=6.0f;
           float *pptr=&price;
           float** superprice=&pptr; 
           
           cout<<"pt :"<<*pt<<endl;
           cout<<"*pt :"<<pt<<endl;
           cout<<"**pt :"<<**pt<<endl;
           
           cout<<"*x  :"<<*x<<endl;
           cout<<"* pptr  :"<<* pptr<<endl;
           
           cout<<"** sup  :"<<**sup<<endl;
           cout<<" sup  :"<< sup<<endl;
           
           cout<<"x   :"<<x<<endl;
           
           cout<<"** superprice  :"<<** superprice<<endl;
           cout<<" superprice  :"<< superprice<<endl;

         //  int y=square(*);
           //cout<<y;
      
           return 0;
    }

===================================================================================
    #include<iostream>

    using namespace std;


    void write(char* arr)
    {
        int i=0;
        while(*arr!='\0')
        {
            cout<<*arr;
            arr++;
        }
    }
    
    int main()
    {
        
     char arr[]="hello";
     char arr2[5];
     write(arr);
     
     //=================     
     char* ptr=arr;
     cout<<ptr<<endl;
     cout<<*ptr<<endl;
     cout<<*(ptr+5)<<endl;// \0
     cout<<*(ptr+1)<<endl;
     //     vs
     cout<<*ptr+1<<endl; // int
     cout<<int(*ptr+1)<<endl;
     //=================

     
     return 0;
    }        
      =========================================================================

  #include <iostream>

  using namespace std;


  int main() 
  {
          const char* str[]={"AAAAA","BBBBB","CCCCC","DDDDD"} ;
          
          char const** sptr[]={ str+3, str+2,str+1,str};
          
          char const*** pp=sptr;
          
          ++pp;
          
          cout<<**pp<<endl;
          cout<<**pp+1<<endl;
          cout<<**pp+2<<endl;
          cout<<**pp+3<<endl;
          
 // increment before dereferencing
          cout<<**++pp+1<<endl;
          cout<<**++pp+2<<endl;
          cout<<**--pp+3<<endl;

      return 0;
  }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        

//============================================================================
// Name        : Array & Functions
// Author      : Muanna Hamid
// Copyright   : (c) Reserved
//============================================================================


        #include <iostream>
        #include <iomanip>

        using namespace std;
        
        bool foo(int n, int i=2)
        {
              if(n==2)
              return (i==2)?true: false;
              
              if(n%i!=0)
              
                return true;
              
              return foo(n, i+1);
        }
        int main()
        {
            int n=35;
            if(foo(n))
            cout<<"yes";
            
            else
            cout<<"no";
            
            return 0;
            
         }   
   //============================================================================================         


  #include <iostream>
  #include <cmath> // Include <cmath> for the pow function
  #include <bitset>

  using namespace std;

  int main()
  {   
      const int n=3;
      int a[]={3,2,1};
      int b[]={0};
      for(int i=0; i<3 ;i++)// 3 times
      {
          int len=1;
          
          while(a[i]!=1)
          {
              if(a[i] % 2) // if odd
              {
                  a[i]=a[i]*3+1;//10 5 2
              }
              else
                  a[i]/=2;//5
                  ++len;//2 3 4
          }
          b[i]=len;
          // first iteration
          cout<<b[0]<<endl;
          cout<<b[1]<<endl;
          cout<<b[2]<<endl;
      }
      return 0;
  }

//===========================================================================


      #include <iostream>

      using namespace std;

      void reverse(char arr[])
      {
          int start=0;
          int end=0;
          int len=0;
          
          while( arr[len]  !='\0' )
          {
              len++;
           }
           end=len;
           
           for( int i=len-1; i>=0; i--)
           {
               if( arr[i]==' ' || i==0 )
               {
                    start= (i==0) ? i : i+1;
                    for( int j = start ; j < end ; j++)
                    {
                         cout<<arr[j];
                     }
                     if( i !=0)
                     {
                          cout<<' ';
                      }
                      end=i;
                 }
             }    
       }
    int main()
    {
          char arr[100];
          cout<<"enter an array\n";
          cin.get(arr,100);
          
          reverse(arr);
          
          return 0;
      }    
  //========================================================================================
  
            #include <iostream>

        using namespace std;

        void mirror(string name="muanna", int age=8, float x=9)
        {
            cout<<name<<age<<x;
        }

        int main()
        {
            string name;
            int age;
            float x;
            mirror();
            cout<<endl;
            mirror("ali",2,3);
            cout<<endl;
            mirror("aliali",2);
            cout<<endl;
            mirror("aliahmad",2,3.0);
            
            return 0;
        }

        //-------------------------------------------------   union -------------------------------------------------------------------------------
        #include<iostream>

        using namespace std;

        int main()
        {
            int arr1[]={1,2,3,6,7,9,88,0,66,55};
            int arr2[]={1,4,3,5};
            int un[14];
            int counter;
            
            // add 1st array in union
            for(int i=0; i<10 ;i++)
            {
                  un[counter++]=arr1[i];
            }
            
            // compare 2nd array with all element of union to check repeatition
            
            for(int i=0;i<4;i++)
            {
                  bool match=false;
                  for(int j=0; j<14 ;j++)
                  {
                      if(arr2[i]==un[j])
                      {
                          match =true;
                          break;
                      }
                      
                  }
                  if(!match)
                  {
                      un[counter++]=arr2[i];
                  }
                
            }
            for(int i=0; i<counter; i++)
            {
                  cout<<un[i]<<"  ";
            }
            return 0;
        }

        //================================================    sqaure root  ============================
        
  #include<iostream>

  using namespace std;

  int square(int n)
  {
      int i=0;
      
      while(i*i<=n)
      {
          i++;
      }
      if(n -(i-1)*(i-1)<=(i*i-n) )
      {
          return i-1;
      }
      else
      return i;
     
  }
  int main()
  {
      int n;
      cout <<"Enter a number\n";
      cin>>n;
      cout<<square(n);
  }


  //==================================================================================================

  #include <iostream>
  #include <cmath> // Include <cmath> for the pow function
  #include <bitset>

  using namespace std;

  int list [ ]={2,4,8,10,-1};
  int nxtlist[5]={3,-1,0,1,-1};
  int start=2;
  int tree=4;

  void magic(int val=5,int position=2)
  {
      int start=::start;//2
      for(int i=0; i<position-1;i++ )
      start=nxtlist[start];//0
      list[tree]=val; // -1 replace by val=5
      nxtlist[tree]=nxtlist[start]; //-1
      nxtlist[start]=tree;
      ///////   update
      /*
      int list []={2,4,8,10,5};
      int nxtlist[5]={4,-1,0,1,3};*/
  }

  void magic()
  {
      int start=::start;
      while(start!=-1)
      { 
          cout<<list[start]<<"->";//8 2 10 4*
                                   //8 2 5 10 4*
          start=nxtlist[start];//0 3 1 -1
      }                        //0 4 3 1 -1
      cout<<"*"<<endl;
      
  }
  int main()
  {   
        magic();        
        magic(5,2);
        magic();
      
      return 0;
  }

  //==============================================================================================

  #include <iostream>
  #include <cmath> // Include <cmath> for the pow function

  using namespace std;

  int main()
  {   
      int i, j, sum=10;
      
      for(i=0; i<5; i++)
      
          if(i%2)
          
              for(j=0; j<=3; sum +=j++);
          
          else
          
              for(j=3; j>0; sum +=--j);
              
          cout<<sum<<" ";    
           
      return 0;
  }
  ///================================================================================


  #include <iostream>

  using namespace std;

  int main() 
  {
      int row,col;
      cout<<"press row and col: ";
      cin>> row>>col;
      cout<<"Printing size dynamically : \n";
      
      int **arr= new int* [row];
      for(int i=0 ;i<row; i++)
      {
          arr[i]=new int[col];
      }
      //////////////   don ////////////
      for(int i=0 ;i<row; i++)
      {
          for(int j=0; j<col ;j++)
          {
              cin>>arr[i][j];
          }
      }  
      //////////   de-alocation //////////
      for(int i=0 ;i<row; i++)
      {
          delete arr[i];
      }

      return 0;
  } 


//==================================================================================================

        #include<iostream>
                                                                                                                                                                                                                                                                                      
        using namespace std;


        int main()
        {
            int arr1[]={1,2,3,6,7,9,88,0,66,55};
            int arr2[]={1,4,3,5};

            cout<<"A-B\n\n\n";

            
            for(int i=0;i<10;i++)
            {
                bool match=false;
                for(int j=0; j<4 ;j++)
                {
                    if(arr1[i]==arr2[j])
                    {
                        match =true;
                        break;
                    }
                    
                }
                if(!match)
                {
                    cout<<arr1[i] <<"  ";      
                }
                
            }

        }
        
//==================================================================================================














































































































































































































































































































































        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        

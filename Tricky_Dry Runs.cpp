//============================================================================
// Name        : Tricky Dry Runs
// Author      : Muanna Hamid
// Copyright   : (c) Reserved
//============================================================================



  #include <iostream>
  #include <cmath> // Include <cmath> for the pow function

  using namespace std;

  int main() 
  {
      cout << (int)(float)(5.9 + 2) << endl;         
      cout << 5.0 / 2 << endl;           
      cout << (int)pow(2, 4) % 3 << endl;    

      return 0;
  }
  //=================================================================


  #include <iostream>

  using namespace std ;

  int main() 
  {
      int i=12;
      int count=5;
      while((i-1))
      {
          count++;
          i--;
      }
      cout<<count;
      return 0;
  } 


   //============================================================================================        

  #include <iostream>

  using namespace std ;

  int main() 
  {
      int i=12;
      int count=5;
      while((i-1))
      {
          count++;
          i--;
      }
      cout<<count;
      return 0;
  } 
  //===========================================================================
  #include <iostream>

  using namespace std ;

  int main() 
  {
      int x=5,y=10;
      int z=((++x * y--)||(++x * y--));
      cout<<(z+y);
      
      return 0;
  } 
//============================================================================= 
  #include <iostream>
  #include <cmath> // Include <cmath> for the pow function

  using namespace std;

  int main() {
      cout<<(20 && -3 && "this is craze")<<endl;
      cout<<(!1&&!2.0)<<endl;
      cout<<(int)(5.9+2.1)<<endl;
      
      return 0;
  }


   //============================================================================================         
  #include <iostream>

  using namespace std;

  int main()
  {   
    int flag=(int(1.5+6)%4);
    if(!!!!!flag)
    cout<<flag;
    else
    cout<<"a";
    return 0;
  }
  //=========================================================================================================

  #include <iostream>
  using namespace std;

  int main()
  {   
      cout<<(int)'a';
      cout<<('\0' && "this is craze")<<endl;
      return 0;
  }

  //==============================================================================================
  #include <iostream>

  using namespace std ;

  int main() 
  {
      int y=981;
      if(y%4==0  &&  y%400==0 || y%100!=0)
      cout<<"wow";
      else
      cout<<"oww";
      
      return 0;
  } 
  //=============================================================
  #include <iostream>

  using namespace std ;

  int main() 
  {
      int y=-10,a=4,b=2,x=-5;
      int z;
      z=x++ - --y * b/a;
      cout<<z;
      return 0;
  } 
  //==============================================================
  #include <iostream>

  using namespace std ;

  int main() 
  {
      int a=10,b=0xFF;
      cout<<b<<endl; // F=1111 FUrther use calculator to convert to decimal
      b+=a++ - a++;
      cout<<b++;
      return 0;
  } 


  //===========================================================
  #include <iostream>

  using namespace std ;

  int x=1; // must

  int main() 
  {
      
      int x=20;
      cout<<::x++<<endl;
      cout<<x+::x<<endl;
      return 0;
  } 
  //=================================================================
  #include <iostream>

  using namespace std ;

  void func(int brr[][3])
  {
      brr+=2; // jump over rows
      brr[0][1]=9;// arr[2][1]
  }
  int main() 
  {
      int arr[][3]={{1,2,3},{1,4,5},{4,5,7}};//2 9
      func(arr);
      cout<<arr[2][1];
      
      return 0;
  } 

  //========================================================================
  #include <iostream>

  using namespace std;

  int main() {
     int n=4;    
     cout<<(n=4)<<endl;
     cout<<(n==4)<<endl;
     cout<<(n>3)<<endl;
     cout<<(n<4)<<endl;
     cout<<(n=0)<<endl;  
     cout<<(n==0)<<endl;
     cout<<(n>0)<<endl;
     cout<<(n&&4)<<endl;
     cout<<(n||4)<<endl;
     cout<<(!n)<<endl;
     
     return 0;
    } 

  ///================================================================================

  #include <iostream>

  using namespace std;

  int main() {
    int n = 4;
    int k = 2;
    
    cout<< ++n << endl << n <<endl;//5 5
    cout<< n++ << endl << n <<endl;//5 6
    cout<< -n << endl << n <<endl;//-6 6
    cout<< --n << endl << n <<endl;//5 5
    cout<< n-- << endl << n <<endl;//5 4 
    cout<< n+k << endl << n <<endl;//6 4
    cout<< k << endl << n << k <<endl;//2 4 2
    cout<< n << endl << n <<endl;//-7        -7
    cout<< "n" <<endl;//n
    cout<< "n*n= " << endl << n*n <<endl;//n*n 49
    cout<< 'n' << endl;//n
    
    return 0;
   } 
  //============================================================================

  #include <iostream>
  #include <cmath>

  using namespace std;

  int main() 
  {
    
    cout<<3*5/4*2%4+!5*( static_cast<float>(6) )/12<<endl;
    cout<<(3==10 || 6<=10*-200)<<endl;    
    cout<<((int)'b'&& (int)'Z') << endl;
    cout<<static_cast<char>(11/7*3*2*39%102+55)<<endl;
    cout<<pow(8,730%9)-pow(2,5/2)/2;
    
    return 0;
   } 

  #include <iostream>

  using namespace std ;

  void e(int n)
  {
      static int x=3;
      if(n>0);
          cout<<n<<" " <<x<<endl;
      n--;// limited
      x--;
  }

  int main() 
  {
      int a =10;
      e(a--);
      e(a--);
      e(a--);
      return 0;
  } 

//======================================================

#include <iostream>

  using namespace std;

  int main()
  {   
        for(char ch=65; ch<=70; ch++)
        {cout<<('\0' && "this is craze")<<endl;
    
            int i='A';
            while(true)
            {
                  if(i++ % 2==0)
                  continue;
                  if(i>ch)// i INCREMENTED
                  break;
                  cout<<ch<<" ";
            }
            cout<<endl;
        }
      
      return 0;
  }
  //==============================================================================================
    #include <iostream>

    using namespace std;
    
    int main()
    {   
        for(int i=0; i<5 ;i++)
        
        if(i%2)
        
        cout<<"ali"<<" ";
        cout<<"raza"<<" "; // lead to error
        else 
        cout<<"rahaman"<<" ";
        cout<<"a";
            
        return 0;
    }   
//===============================================================================

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
  
//==========================================================================

 #include <iostream>

using namespace std;

    void doubled(int* arr,int size)// int* arr=arr ( address of 1st index)
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }   
        cout<<endl;
    }
    int main()
    {
        int arr[]={1,2,3,4};
        int size= sizeof(arr)/sizeof(arr[0]);
        doubled(arr,size);
      //doubled(*arr,size);
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }   
  //==================================================================================================

#include <iostream>

using namespace std;

int f( int n=1, int m=2)
{
    static int memo[100]={0};
    if(n<=1)
    {
        return n;
    }
    if(memo[n]==0)
    {
        for(int i=0; i<2 ;++i)
        {
            memo[n]=(n-1)+(n-2);
            cout<<memo[n]<<endl;
        }
    }
    else 
    cout<<memo[n]<<endl;
    return memo[n];
}

int main() 
{
    static int n=3;
    cout<<f(5)<<endl;
    cout<<f(10)<<endl;
    cout<<f(5)<<endl;
    
    return 0;
} 
//=======================================================================================
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
  //==============================================================================================================


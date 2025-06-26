//============================================================================
// Name        : Recursion_Dry Run
// Author      : Muanna Hamid
// Copyright   : (c) Reserved
//============================================================================


    -------------------------------------------------------------    factorial       ------------------------------------
    #include <iostream>

    using namespace std;

    int factorial(int n)
    {
        if(n<2)
        {
            return 1;// 1!=1 and 0!=1
        }
        return( n * factorial( n-1 ) );// n*(n-1)! or 6!=5*4!
    }

    int main() 
    {
        int n;
        cout<<"enter a number :";
        cin>>n;
        int result=factorial(n);
        cout<<"result : "<<result;

        return 0;
    }
      ---------------------------------------------          even numbers  ---------------

    #include <iostream>

    using namespace std;

    void EvenNumbers(int n,int i=0)
    {
        if(i%2==0)  
        {
            cout<<i<<" \n\n";
        } 
        if(i<n)
        {
            EvenNumbers(n,i+1);
        }
    }
    int main() 
    {
        int n;
        cout<<"enter a number :";
        cin>>n;
        cout<<"Even numbers till entered number :\n";
        EvenNumbers(n);
        return 0;
    }
    -----------------------------------------------------------------------------------------   power of int ------------------
    #include<iostream>

    using namespace std;

    int power(int a,int b)
    {
        if(b==0)
        {
            return 1;
        } 

        return a*power(a, b-1);
    }

    int main()
    {
        int a=2;
        int b=3;
        cout<< power(a,b);
    }


    //-------------------------------------------------------------------------------------------------------------
    // fabiconcci 1 1 2 3 5 8 13 21---- sum of 2 previous e.g 2=1+1  and 21=13+8
    //                                                      sum of n = (n-1)+(n-2) 
    #include <iostream>

    using namespace std;

    int fabiconcci(int n=4)
    {
        if(n==0 || n==1)
        {
            return 1;  //    fibonacci(0) = 1
        }                     //    fibonacci(1) = 1
        return (fabiconcci(n-1) + fabiconcci( n-2 ));// sum of n = (n-1)+(n-2) 
    }

    int main() 
    {
        int n;
        cout<<"enter a number :";
        cin>>n;
        int result=fabiconcci(n);
        cout<<"result : "<<result;

        return 0;
    }
    --------------------------------------------------------------------                   --------------------------------------------------------
    #include <iostream>

    using namespace std;

    bool pallindrome(char* arr, int n,int m,int count)
    {
        if(count==0)return true;
        if(arr[n]!=arr[m])return false;
        return pallindrome(arr, n+1, m-1, count-1);
    }

    int main() 
    {
        int n,m;
        int count=0;

        char arr[]="muanna";
        while(arr[count]!='\0')count++;
        n=0;
        m=count-1;

        bool result=pallindrome(arr,n,m,count);
        cout<<"result : "<<result;

        return 0;
    }
    ---------------------------------------------------------------------------------------------------------    shapeeeeeeee--------------------------------
    #include <iostream>

    using namespace std;

    void pat2(int n)
    {
        if(n==0)return;
        cout<<"* ";
        
        return pat2(n-1);
    }

    void pat1(int n,int row=0)
    {
        if(n==0)return;
        pat2(n);
        cout<<endl;
        
        return pat1(n-1);
    }

    int main() 
    {
        int n=5;
        pat1(n);
        return 0;
    }    
    //-----------------------------------------------------------------------------------------------------------------------------------------

    #include<iostream>

    using namespace std;	

    void star2ndhalf(int q)
    {
	    if(q==5)
	    {
		    return;
	    }
	    cout<<"*";
	    
	    return star2ndhalf(q+1);		
    }

    void starhalf(int p)
    {
	    cout<<"*";
	    if(p==5)
	    {
		    return;
	    }
	    
	    return starhalf(p+1);	
    }

    void space(int n)
    {
	    cout<<" ";
	    if(n==0)
	    {
		    return;
	    }
	    return space(n-1);
    }		

    void line(int n,int p,int q)
    {
	    if( p==0)
	    {
		    return;
	    }
	    space(n);
	    starhalf(p);
	    star2ndhalf(q);
	    cout<<endl;
	    return line(n-1,p-1,q-1);		
    }


    int main()
    {
	    int n=5;
	    int p=5;
	    int q=5;
	    line(n,p,q);
	    
	    return 0;
    }	

    //-------------------------------------------------------------------------------------------------------------------------------------------------------------
    #include<iostream>

    using namespace std;

    int main()
    {

	    int source=123;
	    int temp=0;
	    int destination=0;
	    
	    int x=source%10;
	    temp=source/10;
	    int y=temp%10;
	    destination=temp/10;
	    int z=destination%10;
	    
	    cout<<x<<" "<<y<<" "<<z;
				    
	    return 0;

    }
    //===================================================          rectangle       -----------------------------------------------------------------===

    #include <iostream>

    using namespace std;

    void printcolumn(int cols,int sidestars)
    {
	    if(cols==0)
	    {
		    return;
	    }
	    if(cols==1 || cols==sidestars)
	    {
		    cout<<"*";
	    }
	    else
	    {
		    cout<<" ";
	    }	
	    return printcolumn(cols-1, sidestars);		
    }

    void printrows(int rows,int upstar)
    {
	    if(rows==0)
	    {
		    return;
	    }
	    
	    if(rows==upstar || rows==1)
	    {
		    for(int i=0;i<upstar;i++)
		    {
			    cout<<"*";
		    }
	    }				
	    else
	    {
		    printcolumn(5, 5);
	    }	

	    cout<<endl;
	    
	    return printrows(rows-1,upstar);
    }

    int main()
    {
	    int rows=5;
	    int star=5;
	    
	    printrows(rows,star);
	    
    }
    ===============---------------------------------------------------  sum of element of arraryyyyyyyy      -----------------------------------------------------------------===
    #include <iostream>

    using namespace std;

    void printsum(int* arr,int& sum,int i)
    {
	    if(i==5)
	    {
		    return;
	    }
	    sum+=arr[i];
	    
	    return printsum(arr,sum,i+1);	
    }
    int main()
    {
	    int arr[]={1,2,0,4,0};
	    int sum=0;
	    int i=0;
	    
	    printsum(arr,sum,i);
	    cout<<sum;	
    }
    ------------------------------------------------------------------------------------    no of digit in a number int
    #include<iostream>

    using namespace std;

    void digit(int n,int count)
    {
        if(n==0)
        {
            cout<<count;
            return;
        }    
        
        count++;
        
        return digit(n/10,count);     
    }
    int main()
    {
        int n=12100;
        int count=0;
        digit(n,count);
    }
    ---------------------------------------------------------------------------------------------
    #include <iostream>

    using namespace std;

    int main()
    {
	    char name[]="muanna hamid i\ns my name";
	    cout<<name;	
    }
    -------------------------------------------------------------------------------------------



    #include <iostream>

    using namespace std;

    void checkRepeat(char name[100],int size,char ch,int i)
    {
	    if(i==size)
	    {
		    return;
	    }
	    if(ch==
    }

    void searchForrepeat(char name[100],int size,int i)
    {
	    char ch=name[i];
	    if(i==size)
	    {
		    return;
	    }
	    checkRepeat(name,size;ch,i);
	    return searchForrepeat( name,size,i+1);
	    
    }
    int main()
    {
	    char name[]="muanna hamid is my name";
	    int size=0;
	    int count=0;
	    int i=0;
	    while(name[count++]!='\0')
	    {
		    size=count;
	    }	
	    
	    searchForrepeat(name,size,i);		
    }
    /==========================================================================
    #include <iostream>

    using namespace std;

    void star(int n)// control no of columns
    {
              if(n==5)
              {
                  return;
              }
              cout<<"*";
              return star(n+1);
    }

    void row(int n)// control no of line
    {
              if(n==5)
              {
                  return;
              }  
              star(n);
              cout<<endl;
              return row(n+1);
    }

    void block(int n)// control no of block
    {
              if(n==5)
              {
                  return;
              }
              row(0);
              cout<<endl;
              
              return block(n+1);
    }
    void line(int m) // control no of block of block
    {
	      if(m==5)
	      {
		      return;
	      }
	      block(m);
	      cout<<"------------------------------------------\n";
	      
	      return line(m+1);
    }	
		    
    int main() 
    {
              int m=0;
              line(m);
           
              return 0;
    }    
    ----------------------------------------------------------------------------------------------         pyramid boundary       ---------------------------------------
    #include <iostream>

    using namespace std;

    void star(int n)
    {
	    if(n==0)
	    {
		    return;
	    }
	    cout<<"*";
	    return star(n-1);	
    }

    void space (int n)
    {
	    if(n==0)
	    {
		    return;
	    }
	    cout<<" ";
	    
	    return space(n-1);
    }

    void pyramidBoundary(int n,int row)	
    {
	    if(row==6)
	    {
		    return;
	    }
	    space(n-row);	
	    
	    if(row==1 || n==row)
	    {
		    star(2*row-1);	
	    }
	    else
	    {
		    cout<<"*";
		    space(2*(row-1)-1); //(row-1) cuz already last one in *
		    cout<<"*";
	    }
	    cout<<endl;
	    pyramidBoundary(n, row+1);	
		    
    }
		    
    int main()
    {
	    int n=5;
	    pyramidBoundary(n);
	    return 0;
    }	

    //=======================================================================

    #include <iostream>

    using namespace std;

    int evenIndex(int* arr,int size,int index)
    {
	    if(index>=size)
	    {
		    return 0;
	    }
	    if(index%2==0)
	    {
		    return arr[index]+evenIndex(arr,size,index+1);
	    }
	    else
	    {
		    return evenIndex(arr,size,index+1);
	    }	
			    
    }

    int main()
    {
	    int arr[]={1,2,3,4,5};
	    int size=sizeof(arr[0])/sizeof(arr);
	    int index=0;

	    int result=evenIndex(arr,size,index);
	    cout<<result;

    return 0;
    }


    // weather an array is sorted or not?


    #include <iostream>

    using namespace std;

    bool isSorted(int arr[], int size) 
    {
	    if (size==0)
	    {
		    return true;
	    }
	    if (arr[0]>arr[1])
	    {
		    return false; 
	    }
	    return isSorted(arr+1,size-1);
    }

    int main() {

	    int size=5;
	    int arr[]={1,2,3,4,5};

	    if (isSorted(arr, size)) 
	    {
	    
		    cout << "Array  is sorted." << (isSorted(arr, size))<<endl;
	    } 
	    else
	    {
		    cout << "Array  is not sorted." << endl;
	    }

	    return 0;
    }
    //==========-0-------------------------------------------------------------------------               v shape   -------------------------------------------

    #include <iostream>

    using namespace std;

    void space(int n,int n1)
    {
        if(n1==0)
        {
            return;
        }  
        cout<<" ";
        return space(n,n1-1);
    }

    void print(int n,int n1)
    {
        if(n==0)
        {
            return;
        }
        space(n,n1);
        cout<<"*";
        space(n1,n);
        cout<<"^";
        cout<<endl;
        
        return print(n-1,n1+1);
    }

    int main()
    {
        int n=10;
        int n1=n-n;
        print(n,n1);

        return 0;
    }
        ----------------------------------------------------------------------------------------------------          number printing -------------------------------------------------------
        #include <iostream>

        using namespace std;

        void number(int c,int row)
        {
            if(c==0)return;
            cout<<row<<" ";
            
            return number(c-1,row);
            
        }
        void print(int n,int row,int c)
        {
            if(row>n) return;
            number(c,row);
            cout<<endl;
            return print(n,row+1,c+1);
        }
        int main()
        {   
            int n=5;
            int row=1;
            print(n,row,1);
            return 0;
        }
       ----------------------------------------------------------------------------------------------------          number printing 2-------------------------------------------------------
        #include <iostream>

        using namespace std;

        void number(int c,int row)
        {
            if(c==0)return;
            cout<<row<<" ";
            
            return number(c-1,row-1);        
        }
        void print(int n,int row,int c)
        {
            if(row>n) return;
            number(c,row);
            number(c-1,row);
            cout<<endl;

            return print(n,row+1,c+1);
        }
        int main()
        {   
            int n=5;
            int row=1;
            print(n,row,1);
            return 0;
        }
    ---------------------------------------------------------------------           use of  backtracking         ---------------------------------------------------


    #include <iostream>

    using namespace std;

    void space(int n)
    {
        if(n==0) return;
        cout<<" ";
        return space(n-1);
        
    }
    void print(int n,int row)
    {
        if(row>n) return;
        space(n-row);
        cout<<"*"<<endl;
        
        print(n,row+1);//   use of  backtracking       
        
        space(n-row);
        cout<<"^"<<endl;
    }
    int main()
    {
        int n=5;
        int row=1;
        print(n,row);
        return 0;
    }

    //================================================                  X            shape          =========== use of  backtracking       
    #include <iostream>
    using namespace std;

    // Function to print spaces
      void space(int n) {
          if (n==0)
          {
              return;
          }
          cout <<" ";
          space(n-1);
      }
      void print(int n,int row)
      {
          if(row>n) return;
          space(row-1);//0
          cout<<"*";
          space(2*(n-row));//18
          if(n!=row)
          {
              cout<<"^";
          }
          cout<<endl;
          print(n,row+1);// below part also run same time oppositely

          if(row<n)// not at the base condition
          {
             // back tracking
              space(row-1);
              cout<<"^";
              space(2*(n-row));
              cout<<"*";
              cout<<endl;
          }    
      }

      int main() 
      {
          int n = 3; // Size of the X shape
          int row=1;
          print(n,row);
          return 0;
      }

    //-------------------------------------------------------------------------,,,,,,,,,   diamond              -----use of  backtracking       

    #include<iostream>
    using namespace std;	
    void star2(int n,int p)
    {
        if(p==5)return;
        cout<<"*";
        star2(n,p+1);
    }
    void star(int n,int p)
    {
        cout<<"*";
        if(p==5)return;
        
        star(n,p+1);
    }

    void space(int n)
    {
        if(n==0)return;
        cout<<" ";
        return space(n-1);
    }
    void line(int n,int p=5,int q=5)
    {
        if(n==0)return;
        space(n);
        star(n,p);
        star2(n,p);
        cout<<endl;
        line(n-1,p-1,q-1);

        space(n);
        star(n,p);
        star2(n,p);
        cout<<endl;
    }

    int main()
    {
	    int n=5;
	    line(n);
	    
	    return 0;
    }	
    //-----------------------------------------------------------------------------------------------------   dimond inside empty    ---------use of  backtracking       
    #include <iostream>
    using namespace std;

    void space(int n)
    {
        if(n==0) return;
        cout<<" ";
        return space(n-1);
    }
    void star(int row)
    {
        if(row==0) return;
        cout<<"*";
        return star(row-1);
    }
    void diamond(int n,int row)
    {
        if(row>n) return;
        
        space(n-row);// to chang n at other than return statement
        cout<<"*";
        space(row-1);
        star(1);
        space(row-1);
        star(1);
        cout<<endl;

        diamond(n,row+1);
        if(row<n)
        {
            space(n-row);// to chang n at other than return statement
            cout<<"*";
            space(row-1);
            star(1);
            space(row-1);
            star(1);
            cout<<endl;
        }
    }

    int main() 
    {
        int n = 5;
        int row=1;
        diamond(n,row);
        return 0;
    }
================================================                crazy shape--------use of  backtracking       
#include<iostream>

using namespace std;

void print(char ch,int n, int row=1)
{
       if(row>n)return;
       cout<<ch;

       return print(ch,n,row+1);

}
void pattren(int n, int row=1)
{
       // row=1 to row=5 
       if(row>n)return;
       print('*',row);
       print(' ',n+1-row);
       print('o',n+1-row);
       cout<<endl;
       
       pattren(n, row+1);

       // row=5 to row=1 
       print(' ',row);
       print('o',n+1-row);
       print(' ',n+1-row);
       print('*',row);
       cout<<endl;
}

int main()
{
       int n=5;
       pattren(n);
}








#include <iostream>
using namespace std;

void reverseWord(string& str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void reverseOddLengthWords(string& str) 
{
    int n = str.length();
    int Start = 0;
    
    for (int i = 0; i <= n; i++) 
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int word=i-Start;
            if (word%2==1) {
                reverseWord(str,Start, i - 1);
            }
            Start = i + 1;  
        }
    }
}

int main() {
    string str = "my name is moana hamid";
    cout << "Original: " << str << endl;
    
    reverseOddLengthWords(str);
    
    cout << "Modified: " << str << endl;
    return 0;
}
























































































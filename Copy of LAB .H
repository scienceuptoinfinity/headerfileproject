/*
   __LAB_H


   by  sumit nirmal and raj krishna under guidence of mr. gaurav tripathi


*/




#ifndef LAB_H                               // decliaration of user defined headerfile named LAB_H
#define LAB_H



 #include<stdlib.h>                   // includation of headerfile of standerd library function


/*
a class for assigning data type & size
and for operating the functions
*/
 class g
{
    protected:
      char a[5];
      char X[5];            int xyz;
      char n[5];                         //members of equation type
      int A;
      int N;
      int status;


   char c[10];



public :
char D[90];

g()
{
     char a[5]="g";
      char x[5]="g";      int xyz;                         //constructor
     char n[5]="g";
      int A=0;
      int N=0;
      int status=0;

}



 g(char p[],char q[],char r[])
   {  status=1;                                     // copy cunstructor



   for(int i=0;p[i]!='\0';i++)
       {  a[i]=p[i];

       }

      for( i=0;q[i]!='\0';i++)
       {  X[i]=q[i];

       }


	for( i=0;r[i]!='\0';i++)
       {  n[i]=r[i];

       }


  }


g(char p[],char q[],int r)
   {
 status=2;
       for(int i=0;p[i]!='\0';i++)                              //copy constructor
       {  a[i]=p[i];

       }

      for( i=0;q[i]!='\0';i++)
       {  X[i]=q[i];

       }
       N=r;

}



g(int p,char q[],char r[])
{
 status=3;                                                 //copy constructor

       A=p;

       for(int i=0;q[i]!='\0';i++)
       {  X[i]=q[i];

       }



	for( i=0;r[i]!='\0';i++)
       {  n[i]=r[i];

       }



}





g(int p,char q[],int r)                                       //copy constructor
{
status=4;
      A=p;

      for(int i=0;q[i]!='\0';i++)
       {  X[i]=q[i];

       }

       N=r;


}



g(int p ,int q,int r)
{                                               //copy constructor
status=5;
xyz=q;
A=p;
N=r;
 }


/*

   function for diffrentiating the monomial functions
*/


void der(char arr[])
{diff();
for(int j=0;D[j]!='\0';j++)
{ arr[j]=D[j];}
}


/*void show()
{



	  for(int d=0;D[d]!='\0';d++ )

	     {cout<<D[d];   }

 }
*/


   void diff(  )
{
int x=0  ;
int y=0;


/*
  it is the differentiation of monomial function
  f(x)=a*x^n
  d'f(x)=a*n*x^(n-1)

*/


if(status==1)
{
  for(y=0;a[y]!='\0';y++,x++)
      {
	  D[x]=a[y];
      }
D[x]='*';D[++x]='(';x++ ;
      for(int j=0;n[j]!='\0';x++,j++)
	{
	    D[x]=n[j];

	}
     D[x]=')';x++;

     for( j=0;X[j]!='\0';x++,j++)
	{
	    D[x]=X[j];

	}
	D[x]='^';D[++x]='(';x++  ;

	 for( j=0;n[j]!='\0';x++,j++)
	{
	    D[x]=n[j];

	}

D[x]='-';
D[++x]='1';
D[++x]=')';
D[++x]='\0';


}

/*
  it is the differentiation of monomial function
  f(x)=a*x^4
  d'f(x)=4a*x^3

*/


if(status==2)
{


      itoa((N-1) ,c,10);                   //integer to char conversion

       itoa(N ,n,10);

for(y=0;a[y]!='\0';y++,x++)
      {
	  D[x]=a[y];
      }

D[x]='*';D[++x]='(';x++ ;
      for(int j=0;n[j]!='\0';x++,j++)
	{
	    D[x]=n[j];

	}
     D[x]=')';x++;
     for( j=0;X[j]!='\0';x++,j++)
	{
	    D[x]=X[j];

	}

D[x]='^';D[++x]='(';x++  ;
 for( j=0;c[j]!='\0';x++,j++)
	{
	    D[x]=c[j];

	}

D[x]=')';
D[++x]=')';
D[x++]='\0';
 }

/*
  it is the differentiation of monomial function
  f(x)=5*x^n
  d'f(x)=5n*x^(n-1)

*/


if(status==3)

{      itoa(A,a,10) ;                     //integer to char conversion
  for(y=0;a[y]!='\0';y++,x++)
      {
	  D[x]=a[y];
      }
D[x]='*';x++ ;
      for(int j=0;n[j]!='\0';x++,j++)
	{
	    D[x]=n[j];

	}
   for( j=0;X[j]!='\0';x++,j++)
	{
	    D[x]=X[j];

	}
D[x]='^';D[++x]='(';x++ ;
      for( j=0;n[j]!='\0';x++,j++)
	{
	    D[x]=n[j];

	}


    D[x]='-';
     D[++x]='1';
     D[++x]=')';x++;
 }



/*
  it is the differentiation of monomial function
  f(x)=5x^6
  d'f(x)=30x^5

*/
if(status==4)
{     int p=A*N;
itoa(p,c,10);                           //integer to char conversion
  for(y=0;c[y]!='\0';y++,x++)
      {
	  D[x]=c[y];
      }
     for(int j=0;X[j]!='\0';x++,j++)
	{
	    D[x]=X[j];

	}
	p=(N-1) ;
itoa(p,c,10);

D[x]='^';x++ ;
      for( j=0;c[j]!='\0';x++,j++)
	{
	    D[x]=c[j];

	}
D[x++]='\0';
}


/*
  it is the differentiation of monomial function
  f(x)=3
  d'f(x)=0

*/

if(status==5)
{     itoa(0,c,10);                                  //integer to char conversion
  for(y=0;c[y]!='\0';y++,x++)
      {
	  D[x]=c[y];
      }
}
char cc[4]=" ";

for(int i=0;i<4;i++,x++)
{
 D[x]=cc[i]  ;
}
}
 };                 //end of class


 /*
    all possible function
    taken by the user
    */
void deriv(char*,char*,char*,char*);
void deriv(char a[],char x[],char n[],char z[])
{g m(a,x,n);
m.der(z);
}

void deriv(char*,char*,int,char*);
void deriv(char a[],char x[],int n,char z[])
{g m(a,x,n);
m.der(z);
}
void deriv(int,char*,char*,char*);
void deriv(int a,char x[],char n[],char z[])
{g m(a,x,n);
m.der(z);
}

void deriv(int,char*,int,char*);
void deriv(int a,char x[],int n,char z[])
{g m(a,x,n);
m.der(z);
}
void deriv(int,int,int,char*);
void deriv(int a,int x,int n,char z[])
{g m(a,x,n);
m.der(z);
}
#endif
 /*
   ending of headerfile LAB_H
   */

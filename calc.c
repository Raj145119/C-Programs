#include< iostream. h > #include<conio.h>
#include<math.h> #include<process.h>
#include<fstream.h>
class calc
{
  public:
  long double add (long double x , long double y)
 {
   long double z;
   z=x+y;
   return (z) ;
  }
  long double subtract(long double x, long double y)
 {
   long double z;
   z=x-y ;
   return (z) ;
  }
  long double multiplication(long double x, long double y)
 {
   long double z;
   z=x*y;
   return (z) ;
  }
  long double division(long double x, long double y)
 {
   long double z;
   z=x/y;


 if (y==0)
 {
 cout<<"DIVISION NOT POSSIBLE, ENTER ANOTHER SECOND      NUMBER";
 cin>>y;
 }
 else
{
  z=x/y;
 }
  return (z) ;
 }
long double percentage(long double x, long double y)
{
   long double z; 
   z=(y*x)/100;                                                        
  return (z) ;
 }
long double power(long double x, long double y)
{
  int z= pow (x,y);
  return (z) ;
 }
long double logarithm(long double x)
{
  long double y;
  char c;
  cout<<"DO YOU WANT NATURAL LOGARITHM OR
  COMMON LOGARITHM?? \n [n] NATURAL \n [c]
  COMMON “;
  cin>>q;
  if(c=='n')
  y=log(x);
  else if( c=='c')

   y=log (10);
   return (y) ;
  }
 long double trigonometry (long double x)
{
  char c;
  long double y;
  cout<<” WHICH FUNCTION WOULD LIKE TO USE ?? \n
  Sin(s), Cosine(c), Tan(t)?? “;     
  cin>>c;
  y= (22*x)/( 180*7);
  if(c=='s'|| c=='S')
  y=sin(x);
  else if(c=='c'||c=='C')
  y=cos(x);
  else if(c=='t'||c=='T')
  y=tan(x) ;
  return (y);	
  }
} s;
void main()
{
  long double x, y;
  char ch, ar;
  ofstream fl(“CALC.dat",ios:: binary| ios: :out);
  do
 {
   clrscr() ;
   cout<<”\n\n\n\n\ \t\t\t*** WELCOME TO CASIO FX 100
   CALCULATOR*** “;
   cout<< n\n\n This is a calculator containing the following
   functions\n “;

   cout<<“\n     #  Addition “;
   cout<<”\n     #   Subtraction ";
   cout<<"\n     #   Multiplication ":
   cout<<”\n     #   Division";
   cout<<“\n     #   Percentage ":
   cout<<"\n     #   Power";
   cout<<"\n     #   Logarithm ";
   cout<<"\n     #   Trigonometry";
cout<<n\n\n\t\t TYPE \n [+] for Addition \n [-] for Subtraction               \n  [*] for Multiplication \n [\] for Division \n [%] for Percentage \n [^]   for Power \n [l] for Logarithm \n [g] for Trigonometry \n [d] for   Details and Troubleshooting \n";
   cout<<"Enter Function To use ":
   cin>>ch;
  cout<<endl;
 / /For addition
  if(ch==’+’)
 {
   clrscr( ) ;
   cout<<"YOU ARE USING ADDITION";
   cout<<”\n\n Enter First Number=";
   cin>>x;
   cout<<"\n Enter Second Number=";
   cin>>y;
   cout<<”\n Your Answer is “<<s.add(x,y);
   f1.write((char*)&s,sizeof(s));
   f1.close();
  }
 / /For subtraction
  if(ch==’-‘)
{
   clrscr() ;
   cout<<\n YOU ARE USING SUBTRACTION “;
   cout<<\ n\n Enter First Number= ";
   cin>>x;
   cout<< "\n Enter Second Number= ";
   cin>>y;
   cout<<"\n Your answer is " <<s.subtract(x, y);
   f1.write((char*)&s,sizeof(s));
   f1.close();
  }
 / /For multiplication
  if(ch=='*')
{
 clrscr();
  cout<<\n YOU ARE USING MULTIPLICATION ";
  cout<<\n\n Enter First Number= ":
  cin>>x;
  cout<<"\n Enter Second Number= ";
  cin>>y;
  cout<<"\n Your answer is "<<s.multiplication(x, y);
 f1.write((char*)&s,sizeof(s));
 f1.close() ;
 }
/ /For division
 if(ch=='/')
{
 clrscr();
 cout<<\n YOU ARE USING DIVISION ";
  cout<<"\n\n Enter First Number= ";
  cin>>x;
 cout<<\n Enter Second Number= ";
 cin>>y;
 if(y==0)
 {
   cout<<"\n DIVISION IMPOSSIBLE ";
    cout<<"\n Enter another second number ";
    cin>>y;
    cout<<"\n Your answer is "<<s.division(x, y);
    f1.write((char*)&s,sizeof(s));
    f1.close();
   }
   else
 {
   cout<<"\n Your answer is "<<x/y;
  }
 }
//For percentage
 if(ch=='%')
{
  clrscr();
  cout<<"\n YOU ARE USING PERCENTAGE ";
  cout<<"\n\n Enter First Number= ";
   cin>>x;
  cout<<"\n Enter Percentage= ";
  cin>>y;
  cout<<"\n Your answer is "<<s.percentage(x,y);
  f1.write((char*)&s,sizeof(s));
  f1.close(); .
 }
//For Power
 if(ch=='^')
{
  clrscr();
  cout<<"\n YOU ARE USING POWER ";
  cout<<"\n\n Enter First Number= ":
  cin>>x;
  cout<<”\n Enter Power=  “;
  cin>>y;
  cout<<"\n Your answer is "<<s.power(x, y);
  f1.write((char*)&s,sizeof(s));
  f1.close();
 }
//For log
 if(ch= =' l ')
{
  clrscr();
  cout<<"\n YOU ARE USING LOGARITHM ";
  cout<<"\n\n Enter The Number= ";
  cin>>x;
  y=s.logarithm(x) ;
  cout<<y;
  f1.write((char*)&s,sizeof(s));
  f1.close();
 }
//For trigonometry
 if(ch=='g') 	.'
{
 clrscr() ;
 cout<<"\n YOU ARE USING TRIGONOMETRY ";
 cout<<"\n\n Enter The Angle in Radians = ";
 cin>>x;
 y=s.trigonometry(x) ;
 cout<<y;
 f1.write((char*)&s,sizeof(s));
 f1.close();
} 
if(ch=='d' || ch=='D')
{ 
 clrscr();
  cout<<"\t\t\t$$$DEVELOPING TEAM$$$ \n\n\n\ASIF ALI NAS\n
  BEFFY JEORGE BENNY\n”;
,
  cout<<"\n\n\n\n ## AN ISO 9001 REGISTERED PRODUCT
  ## \n\n\n”;
  cout<<"\t\t^TROUBLESHOOTING^\n\t*SOME COMMON
  PROBLEMS*\n 1.SHOWING DIVISION IMPOSSIBLE??\n
  YOU MIGHT HAVE GIVEN THE SECOND NUMBER
  ZERO>\n\n\n2.UNABLE TO  MULTIPLY LONG
  NUMBERS??  \n THERE IS A MAX NO OF CHARACTERS
  FOR THIS  CALCULATOR <IF THE NO>OF CHARACTERS
  EXCEED IT  PROCESSES MAY BECOME IMPOSSIBLE";
 }
 cout<<endl;
 cout<<"\\n\n\n Do you want to continue ... Y/N? ";
 cin>>ar;
 }
 while(ar=='Y'||ar=='y');
 if(ar=='N' || ar=='n')
{
  cout<<"\n Thank you for using this calculator.\n Good bye ... ";
  cout<<"\n Press any key to exit 	";
 }
 getch() ;
}

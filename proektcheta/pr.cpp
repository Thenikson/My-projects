
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;
class clientData             
{ public:
   int accountNumber;         
   char lastName[10];
   char firstName[10];
   double balance;
   clientData(){}	
   clientData(int number, char lname[], char fname[], double bal )//, int size=10
   {accountNumber=number; strcpy(lastName, lname); strcpy(firstName, fname); balance=bal; }
  	
};
int main()
{int i; 
   clientData clientsArray[5];  
   clientData *pclient; 
        
  for ( i = 1;i<= 5; i++)                        
   {  
      pclient =new clientData; 
      pclient->accountNumber=i;
	  cout << "Enter lastname, firstname, balance\n?";
	      
      cin >> pclient->lastName >> pclient->firstName>> pclient->balance; 
      clientsArray[i-1] =*pclient ; 
      delete pclient;                                     
   } 
   
   ofstream outCredit( "credit3.dat", ios::out | ios::in | ios::binary );
   if ( !outCredit )
   {  cerr << "File could not be opened." << endl;
      system("PAUSE");
      exit( 1 );
   }
                            
  for ( i = 1;i <= 5;i++)                      
   {    
      outCredit.seekp( ( i - 1 ) * sizeof( clientData ) );                        
      outCredit.write(reinterpret_cast<const char *>( clientsArray+ i-1), sizeof( clientData ) );                    
   }
   outCredit.close();                   
   cout << endl;
   system("PAUSE");
   return 0;
}

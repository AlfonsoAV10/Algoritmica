#include <iostream>
using namespace std;
int main()
{
  int caso;


 cout<<"Puntaje 0-10"<<endl;
  cout<<"Dame el puntaje: "<<endl;
  cin>>caso;
  switch(caso)
  {
  case 10:
  cout<<"Tienes una A"<<endl;
  break;

  case 9:
  cout<<"Tienes una A"<<endl;
  break;
  case 8:
 cout<<"Tienes una B"<<endl;
  break;
   case 7:
 cout<<"Tienes una C"<<endl;
  break;
   case 6:
  cout<<"Tienes una D"<<endl;
  break;
   default:cout<<"Tienes una F"<<endl;
   break;
}
cout<<"Tu calificacion es: "<<caso<<endl;
return 0;
}

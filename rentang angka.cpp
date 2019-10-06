
#include<iostream>

using namespace std;
main ()
{
double NilaiUjian;
char skor;

cout<<"=======FACHREZA NORRAHMA=======\n"; 
cout<<" Masukan Nilai Ujian : ";
cin>>NilaiUjian;

if(NilaiUjian >= 85)
skor= 'A' ;
else

if(NilaiUjian >= 70)
skor= 'B';
else

if(NilaiUjian >= 60)
skor= 'C';
else 

if(NilaiUjian >= 50)
skor= 'D';
else
skor= 'E';
    
cout<<" Skor : "<<skor<<endl;

}

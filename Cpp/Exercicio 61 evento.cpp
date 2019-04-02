#include<iostream>
#include<string>
#include<time.h>

using namespace std;
int main(void)
{
    int DiaI, HoraI, MinI, SegI;
    int DiaF, HoraF, MinF, SegF;
    int dia,hora,mint,seg;
    char d[5],h,m;
    time_t tempo;
    struct tm ini;
    struct tm fim;
    int seconds;

    cin>>d>>DiaI;
    cin>>HoraI>>h>>MinI>>m>>SegI;
    cin>>d>>DiaF;
    cin>>HoraF>>h>>MinF>>m>>SegF;

    time(&tempo);

    ini=*localtime(&tempo);
    ini.tm_hour = HoraI;
    ini.tm_min = MinI;
    ini.tm_sec = SegI;
    ini.tm_mon = 0;
    ini.tm_mday = DiaI;

    fim=*localtime(&tempo);
    fim.tm_hour = HoraF;
    fim.tm_min = MinF;
    fim.tm_sec = SegI;
    fim.tm_mon = 0;
    fim.tm_mday = DiaF;

    seconds = -1*difftime(mktime(&ini),mktime(&fim));

    dia=seconds/86400;
    cout<<dia<<" dia(s)"<<endl;

    seconds-=(dia*86400);
    hora=seconds/3600;
    cout<<hora<<" hora(s)"<<endl;

    seconds-=(hora*3600);
    mint=(seconds/60);
    cout<<mint<<" minuto(s)"<<endl;

    seconds-=(mint*60);
    cout<<seconds<<" segundo(s)"<<endl;
}

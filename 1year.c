#include <stdio.h>
#include <Windows.h>
#include <time.h>

#define C4 261
#define D4 293
#define E4 329
#define F4 349
#define G4 391
#define A4 440
#define Beat 750

void main()
{
    char Enter[10];
    time_t ct;
    struct tm *now;
    ct = time(NULL);
    now = localtime(&ct);
    printf("%d年%d月%d日 %2d:%2d:%2d\n", (now->tm_year) + 1900, (now->tm_mon) + 1, now->tm_mday, now->tm_hour, now->tm_min, now->tm_sec);
    printf("ちゃみさんリスタート一周年おめでとうございます！！\n");

    Beep(C4, Beat);
    Beep(C4, Beat);
    Beep(G4, Beat);
    Beep(G4, Beat);
    Beep(A4, Beat);
    Beep(A4, Beat);
    Beep(G4, Beat * 1.25);
    Beep(F4, Beat);
    Beep(F4, Beat);
    Beep(E4, Beat);
    Beep(E4, Beat);
    Beep(D4, Beat);
    Beep(D4, Beat);
    Beep(C4, Beat * 1.25);

    Beep(G4, Beat);
    Beep(G4, Beat);
    Beep(F4, Beat);
    Beep(F4, Beat);
    Beep(E4, Beat);
    Beep(E4, Beat);
    Beep(D4, Beat*1.25);
    Beep(G4, Beat);
    Beep(G4, Beat);
    Beep(F4, Beat);
    Beep(F4, Beat);
    Beep(E4, Beat);
    Beep(E4, Beat);
    Beep(D4, Beat);
    
    Beep(C4, Beat);
    Beep(C4, Beat);
    Beep(G4, Beat);
    Beep(G4, Beat);
    Beep(A4, Beat);
    Beep(A4, Beat);
    Beep(G4, Beat * 1.25);
    Beep(F4, Beat);
    Beep(F4, Beat);
    Beep(E4, Beat);
    Beep(E4, Beat);
    Beep(D4, Beat);
    Beep(D4, Beat);
    Beep(C4, Beat * 1.5);
    gets(Enter);
}
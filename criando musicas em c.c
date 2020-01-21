#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){

char tecla;

printf("\n\n\tteclas a,s,j,k,l\t\n\n ");
label: tecla=getch();

switch(tecla){

    case 'a': Beep(5000, 50); break;
    case 's': Beep(7400, 50); break;
    case 'j': Beep(700, 50); break;
    case 'k': Beep(800, 50); break;
    case 'l': Beep(900, 50); break;

}

goto label;

return (0);
system("pause");
}

#include <stdio.h>
#include <stdlib.h>
void fire_dep(int f);
void info();
int main()
{
    int x,y;
    printf("PLEASE ENTER THE KEY NUMBER\n\n");
    scanf("%d",&y);
    fflush(stdin);
    if(y==999){
            printf("\n\nWELCOME TO **999** HELP SERVICE \n\n");
    printf("******what kind of emergency service do you need*********??\n\n");
    printf(" Press  1.   FIRE SERVICE\n\n");
    printf(" Press  2.   MEDCAL  SERVICE\n\n");
    printf(" Press 3.   POLICE SERVICE\n\n");
    printf("option choosen  ->");
    scanf("%d",&x);
    switch(x)
    case 1: fire_dep(x);
    //break;
    //printf("Hello world!\n");}
    }else{printf("\nWRONG KEY NUMBER\n");}
    return 0;
}
void fire_dep(int f){int x,y,z,p;
char a[30],b[30],c[30];//,d[30];
//char *p,*q,*z;
//char y[3000];
info();
printf("\n\n\n\n");
printf("what happened??\n\n");

printf("PRESS 1  FOR  FIRE ACCIDENT \n\n");
printf("PRESS 2  FOR    RESCUE      \n\n ");
printf("option choosen  ->");
scanf("%d",&x);
if(x=1){
    printf("what type of fire choose options below:\n\n");fflush(stdin);
    printf("1.building fire?\n2.car fires ??\n3.person on fire\n4.chemical godown fire\n");
    printf("option choosen  ->");
    scanf("%d",&y);
  //switch(y)
  //case 1 : printf("building fire  ?");
//    b[30]="car fires ??";
//    c[30]="person on fire";
//    d[30]="chemical godown fire";
//   // scanf("%c",&y);
//    puts(y);
//    //scanf("%d",&y);
//   // {
     if(y==1||y==2||y==3||y==4){
        printf("\nIs there any source of water supply ??\n");
          fflush(stdin);
         gets(a);
          fflush(stdin);
         //puts(a);
         fflush(stdin);
           printf("\nif any one inside it ??\n");
         gets(b);
         //puts(b);
          printf("\nDo you know if any one is hurt??\n");
          gets(c);
          //puts(c);
          printf("\n\nHow large is the fire??\n\n 1.SIZE OF A LIVING ROOM??\n 2.SIZE OF A FOOT BALL FILD??\n 3.SIZE OF A GROCERY STORE???\n\n");
                 printf("option choosen  ->");
                 scanf("%d",&z);

     }
    }else{
        printf("what type of rescue is needed ?? ");
          printf("1.industrial accident??\n 2.drowing rescue??\n3.stuck??\n4.Earth quake??");
          printf("option choosen  ->");
          scanf("%d",&p);}
          fflush(stdin);
          printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("*******THE FIRE RENGERS ARE ONE THEIR WAY********");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}


//}

void info(){
 char name[30],number[40],address[100];
 fflush(stdin);
 printf("\nPLEASE TELL US YOUR NAME\n");
 gets(name);

 printf("\nPLEASE TELL US YOUR PHONE NUMBER FOR FURTHER NEED\n");
 gets(number);
 printf("\nPLEASE TELL US THE ADDRESS OF EMERGENCY\n");
 gets(address);
 printf("\n");
 printf("####################\n\n");
puts(name);
puts(number);
puts(address);
return name , number, address;

}

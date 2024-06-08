#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void Time();
void Length();
void Temperature();
void Mass();
void Speed();
void areaConverter();
void volumeConverter();
void angleConverter();
void accelerationConverter();
void frequencyConverter();
void forceConverter();

int main(){
int cat;
char choice;

do{
 do{

printf("\t\t\t\tWelcome To Unit Converter ");
printf("\nFrom the given categories choose the quantity whose unit you want to convert (enter the number) \n");
printf("1)Time");
printf("\n2)Length");
printf("\n3)Temperature");
printf("\n4)Mass");
printf("\n5)Speed");
printf("\n6)Area");
printf("\n7)Volume");
printf("\n8)Angle");
printf("\n9)Acceleration");
printf("\n10)Frequency");
printf("\n11)Force\n");
scanf("%d",&cat);
system("cls");

switch(cat){
case 1:
    Time();
    break;

case 2:
    Length();
    break;

case 3:
    Temperature();
    break;

case 4:
    Mass();
    break;

case 5:
    Speed();
    break;

case 6:
    areaConverter();
    break;
case 7:
    volumeConverter();
    break;
case 8:
    angleConverter();
    break;
case 9:
    accelerationConverter();
    break;
case 10:
    frequencyConverter();
    break;
case 11:
    forceConverter();
    break;
default:
    printf("invalid input please select from given categories");
    break;
}
}while(cat<1||cat>11);

printf("\n\aDo you want to calculate more (y/n)=");
scanf("%s",&choice);
if(choice=='n'||choice=='N'){
break;
}

if(choice>='A'&&choice!='N'&&choice!='Y'&&choice<='Z'){
printf("\nPlease enter the answer in Y or N= ");
scanf("%s",&choice);
}

if(choice>='a'&&choice!='n'&&choice!='y'&&choice<='z'){
printf("\nPlease enter the answer in y or n= ");
scanf("%s",&choice);
}
system("cls");

}while(choice=='y'||choice=='Y');

return 0;
}

///function for area///
void areaConverter(){

int from_unit,to_unit;
double mag,to_mag;


printf("\t\t\t\tThe Area Units Converter\n");
printf("\nFrom which unit you want to convert your area from(enter the number)\n");
printf("\n");
do{

printf("1)square-kilometer\n");
printf("2)acre\n");
printf("3)are\n");
printf("4)square-meter\n");
printf("5)square-yards\n");
printf("6)yard\n");
printf("7)square-feet\n");
printf("8)square-decimeter\n");
printf("9)square-inch\n");
printf("10)square-centimeter\n");

scanf("%d",&from_unit);
if(from_unit>10){
printf("\nInvalid input select the given categories\n");
}
} while(from_unit < 1 || from_unit > 10);
system("cls");

switch(from_unit){
case 1:
    printf("\nIn which unit you want to convert your area from square-kilometer=\n");
    break;
case 2:
    printf("\nIn which unit you want to convert your area from acer=\n");
    break;
case 3:
    printf("\nIn which unit you want to convert your area from are=\n");
    break;
case 4:
    printf("\nIn which unit you want to convert your area from square-meter=\n");
    break;
case 5:
    printf("\nIn which unit you want to convert your area from square-yards=\n");
    break;
case 6:
    printf("\nIn which unit you want to convert your area yards\n");
    break;
case 7:
    printf("\nIn which unit you want to convert your area from square-feet=\n");
    break;
case 8:
    printf("\nIn which unit you want to convert your area from square-decimeter=\n");
    break;
case 9:
    printf("\nIn which unit you want to convert your area from square-inch=\n");
    break;
case 10:
    printf("\nIn which unit you want to convert your area from square-centimeter\n");
    break;
default:
    break;
}

printf("\n");
do{

printf("1)square-kilometer\n");
printf("2)acre\n");
printf("3)are\n");
printf("4)square-meter\n");
printf("5)square-yards\n");
printf("6)yard\n");
printf("7)square-feet\n");
printf("8)square-decimeter\n");
printf("9)square-inch\n");
printf("10)square-centimeter\n");



scanf("%d",&to_unit);
if(to_unit>10){
printf("\nInvalid input select the given categories\n");
}
}while(to_unit < 1 || to_unit > 10);
system("cls");

printf("\nEnter the magnitude in ");
switch(from_unit){
case 1:
    printf("square-kilometer= ");
    break;
case 2:
    printf("acre= ");
    break;
case 3:
    printf("are= ");
    break;
case 4:
    printf("square-meter= ");
    break;
case 5:
    printf("square-yard= ");
    break;
case 6:
    printf("yard= ");
    break;
case 7:
    printf("square-feet= ");
    break;
case 8:
    printf("square-decimeter= ");
    break;
case 9:
    printf("square-inch= ");
    break;
case 10:
    printf("square-centimeter= ");
    break;
default:
    break;
}
scanf("%lf",&mag);
double conArea[]={1,247.10538,10000,1000000,1195990.046,1307950.619,10763910.417,100000000,1550003100,10000000000};
to_mag=(conArea[to_unit-1]/conArea[from_unit-1])*mag;
printf("\nMagnitude in ");
switch(to_unit){

case 1:
    printf("square-kilometer= %lf",mag);
    break;
case 2:
    printf("acer= %lf",to_mag);
    break;
case 3:
    printf("are= %lf",to_mag);
    break;
case 4:
    printf("square-meter= %lf",to_mag);
    break;
case 5:
    printf("square-yard= %lf",to_mag);
    break;
case 6:
    printf("yard= %lf",to_mag);
    break;
case 7:
    printf("square-feet= %lf",to_mag);
    break;
case 8:
    printf("square-decimeter= %lf",to_mag);
    break;
case 9:
    printf("square-inch= %lf",to_mag);
    break;
case 10:
    printf("square-centimeter= %lf",to_mag);
    break;

}

}




///function for volume///
void volumeConverter(){

int from_unit,to_unit;
double mag,to_mag;

printf("\t\t\t\tThe Volume Units Converter\n");
printf("\nFrom which unit you want to convert your volume from (enter the number)\n");
printf("\n");
do{

printf("1)cubic-meter\n");
printf("2)US barrels\n");
printf("3)cubic-foot\n");
printf("4)US gallons\n");
printf("5)cubic-decimeter/liter\n");
printf("6)US quart\n");
printf("7)fluid ounces\n");
printf("8)cubic-inches\n");
printf("9)US tablespoon\n");
printf("10)cubic-centimeter\n");


scanf("%d",&from_unit);
if(from_unit>10){
printf("\nInvalid input select the given categories\n");
}
} while(from_unit < 1 || from_unit > 10);
system("cls");

switch(from_unit){
case 1:
    printf("\nIn which unit you want to convert your volume from cubic-meter=\n");
    break;
case 2:
    printf("\nIn which unit you want to convert your volume from US barrels=\n");
    break;
case 3:
    printf("\nIn which unit you want to convert your volume from cubic-foot=\n");
    break;
case 4:
    printf("\nIn which unit you want to convert your volume from US gallons=\n");
    break;
case 5:
    printf("\nIn which unit you want to convert your volume from cubic-decimeter=\n");
    break;
case 6:
    printf("\nIn which unit you want to convert your volume from US quart=\n");
    break;
case 7:
    printf("\nIn which unit you want to convert your volume from fluid ounces=\n");
    break;
case 8:
    printf("\nIn which unit you want to convert your volume from cubic-inches=\n");
    break;
case 9:
    printf("\nIn which unit you want to convert your volume from US tablespoon=\n");
    break;
case 10:
    printf("\nIn which unit you want to convert your volume from cubic-centimeter=\n");
    break;

default:
    break;
}

printf("\n");
do{

printf("1)cubic-meter\n");
printf("2)US barrels\n");
printf("3)cubic-foot\n");
printf("4)US gallons\n");
printf("5)cubic-decimeter/liter\n");
printf("6)US quart\n");
printf("7)fluid ounces\n");
printf("8)cubic-inches\n");
printf("9)US tablespoon\n");
printf("10)cubic-centimeter\n");

scanf("%d",&to_unit);
if(to_unit>10){
printf("\nInvalid input select the given categories\n");
}
} while(to_unit < 1 || to_unit > 10);
system("cls");

printf("\nEnter the magnitude in ");
switch(from_unit){
case 1:
    printf("cubic-meter= ");
    break;
case 2:
    printf("US barrels= ");
    break;
case 3:
    printf("cubic-foot= ");
    break;
case 4:
    printf("US gallons= ");
    break;
case 5:
    printf("cubic-decimeter= ");
    break;
case 6:
    printf("US quart= ");
    break;
case 7:
    printf("fluid ounces= ");
    break;
case 8:
    printf("cubic-inches= ");
    break;
case 9:
    printf("US tablespoon= ");
    break;
case 10:
    printf("cubic-centimeter= ");
    break;
default:
    break;
}
scanf("%lf",&mag);

double convol[]={1,8.3864,35.15,264.17,1000,1056.6882,33814.023,61023.744,67628.045,1000000};
to_mag=(convol[to_unit-1]/convol[from_unit-1])*mag;
printf("\nMagnitude in ");
switch(to_unit){

case 1:
    printf("cubic-meter= %lf",to_mag);
    break;
case 2:
    printf("US barrels= %lf",to_mag);
    break;
case 3:
    printf("cubic-foot= %lf",to_mag);
    break;
case 4:
    printf("US gallons= %lf",to_mag);
    break;
case 5:
    printf("cubic-decimeter= %lf",to_mag);
    break;
case 6:
    printf("US quart= %lf",to_mag);
    break;
case 7:
    printf("fluid ounces= %lf",to_mag);
    break;
case 8:
    printf("cubic-inches= %lf",to_mag);
    break;
case 9:
    printf("US tablespoon= %lf",to_mag);
    break;
case 10:
    printf("cubic-centimeter= %lf",to_mag);
    break;


}

}


///function for angle///
void angleConverter(){


int from_unit;
printf("\t\t\t\tThe Angle Units Converter\n");
printf("\nFrom which unit you want to convert your angle from(enter the number)\n");
printf("\n");
do{

printf("1)revolutions\n");
printf("2)quater\n");
printf("3)sextant\n");
printf("4)radians\n");
printf("5)sign\n");
printf("6)degrees\n");
printf("7)gradians\n");
printf("8)milli radians\n");
printf("9)mil\n");
printf("10)minute of arc\n");

scanf("%d",&from_unit);
if(from_unit>10){
printf("\nInvalid input select the given categories\n");
}
} while(from_unit < 1 || from_unit > 10);
system("cls");
int to_unit;
switch(from_unit){
case 1:
    printf("\nIn which unit you want to convert your angle from revolutions=\n");
    break;
case 2:
    printf("\nIn which unit you want to convert your angle from quater=\n");
    break;
case 3:
    printf("\nIn which unit you want to convert your angle from sextant=\n");
    break;
case 4:
    printf("\nIn which unit you want to convert your angle from radians=\n");
    break;
case 5:
    printf("\nIn which unit you want to convert your angle from sign=\n");
    break;
case 6:
    printf("\nIn which unit you want to convert your angle from degrees=\n");
    break;
case 7:
    printf("\nIn which unit you want to convert your angle from gradians=\n");
    break;
case 8:
    printf("\nIn which unit you want to convert your angle from mili radians=\n");
    break;
case 9:
    printf("\nIn which unit you want to convert your angle from mil=\n");
    break;
case 10:
    printf("\nIn which unit you want to convert your angle from minute of arc=\n");
    break;
default:
    break;
}

printf("\n");
do{

printf("1)revolutions\n");
printf("2)quater\n");
printf("3)sextant\n");
printf("4)radians\n");
printf("5)sign\n");
printf("6)degree\n");
printf("7)gradians\n");
printf("8)mili radians\n");
printf("9)mil\n");
printf("10)minute of arc\n");


scanf("%d",&to_unit);
if(to_unit>10){
printf("\nInvalid input select the given categories\n");
}
} while(to_unit < 1 || to_unit > 10);
system("cls");
double mag;
printf("\nEnter the magnitude in ");
switch(from_unit){
case 1:
    printf("revolutions= ");
    break;
case 2:
    printf("quater= ");
    break;
case 3:
    printf("sextant= ");
    break;
case 4:
    printf("radians= ");
    break;
case 5:
    printf("sign= ");
    break;
case 6:
    printf("degree= ");
    break;
case 7:
    printf("gradians= ");
    break;
case 8:
    printf("mili radians= ");
    break;
case 9:
    printf("mil= ");
    break;
case 10:
    printf("minute of arc= ");
    break;
default:
    break;
}
scanf("%lf",&mag);
double to_mag=0;
double conAng[]={1,4,6,6.28319,12,360,400,6283.19,6400,21600};
to_mag=(conAng[to_unit-1]/conAng[from_unit-1])*mag;
printf("\nMagnitude in ");
switch(to_unit){

case 1:
    printf("revolutions= %lf",to_mag);
    break;
case 2:
    printf("quater= %lf",to_mag);
    break;
case 3:
    printf("sextant= %lf",to_mag);
    break;
case 4:
    printf("radians= %lf",to_mag);
    break;
case 5:
    printf("sign= %lf",to_mag);
    break;
case 6:
    printf("degrees= %lf",to_mag);
    break;
case 7:
    printf("gradians= %lf",to_mag);
    break;
case 8:
    printf("mili radians= %lf",to_mag);
    break;
case 9:
    printf("mil= %lf",to_mag);
    break;
case 10:
    printf("minute of arc= %lf",to_mag);
    break;

}

}



///function for acceleration///

void accelerationConverter(){


int from_unit;
printf("\t\t\t\tThe Acceleration Units Converter\n");
printf("\nFrom which unit you want to convert your acceleration from(enter the number)\n");
printf("\n");
do{

printf("1)miles/hour^2\n");
printf("2)kilometer/hour^2\n");
printf("3)kilometer/second^2\n");
printf("4)meter/second^2\n");
printf("5)meter/hour^2\n");
printf("6)miles/hour^2\n");
printf("7)centimeter/second^2\n");
printf("8)centimeter/hour^2\n");
printf("9)feet/hour^2\n");
printf("10)meter/minute^2\n");

scanf("%d",&from_unit);
if(from_unit>10){
printf("\nInvalid input select the given categories\n");
}
}while(from_unit < 1 || from_unit > 10);
system("cls");
int to_unit;
switch(from_unit){
case 1:
    printf("\nIn which unit you want to convert your acc from miles/hour^2=\n");
    break;
case 2:
    printf("\nIn which unit you want to convert your acc from kilometer/hour^2=\n");
    break;
case 3:
    printf("\nIn which unit you want to convert your acc from kilometer/second^2=\n");
    break;
case 4:
    printf("\nIn which unit you want to convert your acc from meter/second^2=\n");
    break;
case 5:
    printf("\nIn which unit you want to convert your acc from meter/hour^2=\n");
    break;
case 6:
    printf("\nIn which unit you want to convert your acc from miles/hour^2=\n");
    break;
case 7:
    printf("\nIn which unit you want to convert your acc from centimeter/second^2=\n");
    break;
case 8:
    printf("\nIn which unit you want to convert your acc from centimeter/hour^2=\n");
    break;
case 9:
    printf("\nIn which unit you want to convert your acc from feet/hour^2=\n");
    break;
case 10:
    printf("\nIn which unit you want to convert your acc from meter/minute^2=\n");
    break;
default:
    break;
}

printf("\n");
do{

printf("1)miles/hour^2\n");
printf("2)kilometer/hour^2\n");
printf("3)kilometer/second^2\n");
printf("4)meter/second^2\n");
printf("5)meter/hour^2\n");
printf("6)miles/hour^2\n");
printf("7)centimeter/second^2\n");
printf("8)centimeter/hour^2\n");
printf("9)feet/hour^2\n");
printf("10)meter/minute^2\n");


scanf("%d",&to_unit);
if(to_unit>10){
printf("\nInvalid input select the given categories\n");
}
} while(to_unit < 1 || to_unit > 10);
system("cls");
double mag;
printf("\nEnter the magnitude in ");
switch(from_unit){
case 1:
    printf("miles/hour^2= ");
    break;
case 2:
    printf("kilometer/hour^2= ");
    break;
case 3:
    printf("kilometer/second^2= ");
    break;
case 4:
    printf("meter/second^2= ");
    break;
case 5:
    printf("meter/hour^2= ");
    break;
case 6:
    printf("miles/second^2= ");
    break;
case 7:
    printf("centimeter/second^2= ");
    break;
case 8:
    printf("centimeter/hour^2= ");
    break;
case 9:
    printf("feet/hour^2= ");
    break;
case 10:
    printf("meter/minute^2= ");
    break;
default:
    break;
}
scanf("%lf",&mag);
double to_mag=0;
double conacc[]={1,1.60934,0.00044704,0.44704,1609.344,0.0002778,44.704,160934.4,5280,26.8224};
to_mag=(conacc[to_unit-1]/conacc[from_unit-1])*mag;
printf("\nMagnitude in ");
switch(to_unit){

case 1:
    printf("miles/hour^2=%lf",to_mag);
    break;
case 2:
    printf("kilometer/hour^2= %lf",to_mag);
    break;
case 3:
    printf("kilometer/second^2= %lf",to_mag);
    break;
case 4:
    printf("meter/second^2= %lf",to_mag);
    break;
case 5:
    printf("meter/hour^2= %lf",to_mag);
    break;
case 6:
    printf("miles/second^2= %lf",to_mag);
    break;
case 7:
    printf("centimeter/second^2= %lf",to_mag);
    break;
case 8:
    printf("centimeter/hour^2= %lf",to_mag);
    break;
case 9:
    printf("feet/hour^2= %lf",to_mag);
    break;
case 10:
    printf("meter/minute^2= %lf",to_mag);
    break;

}

}



///function for frequency///

void frequencyConverter(){


int from_unit;
printf("\t\t\t\tThe frequency Units Converter\n");
printf("\nFrom which unit you want to convert your frequency from(enter the number)\n");
printf("\n");
do{

printf("1)kilohertz\n");
printf("2)gigahertz\n");
printf("3)megahertz\n");
printf("4)hectohertz\n");
printf("5)dekahertz\n");
printf("6)cycle per second\n");
printf("7)hertz\n");
printf("8)decihertz\n");
printf("9)centihertz\n");
printf("10)millihertz\n");

scanf("%d",&from_unit);
if(from_unit>10){
printf("\nInvalid input select the given categories\n");
}
} while(from_unit < 1 || from_unit > 10);
system("cls");
int to_unit;
switch(from_unit){
case 1:
    printf("\nIn which unit you want to convert your frequency from kilohertz=\n");
    break;
case 2:
    printf("\nIn which unit you want to convert your frequency from gigahertz=\n");
    break;
case 3:
    printf("\nIn which unit you want to convert your frequency from megahertz=\n");
    break;
case 4:
    printf("\nIn which unit you want to convert your frequency from hectohertz=\n");
    break;
case 5:
    printf("\nIn which unit you want to convert your frequency from dekahertz=\n");
    break;
case 6:
    printf("\nIn which unit you want to convert your frequency from cycle per second=\n");
    break;
case 7:
    printf("\nIn which unit you want to convert your frequency from hertz=\n");
    break;
case 8:
    printf("\nIn which unit you want to convert your frequency from decihertz=\n");
    break;
case 9:
    printf("\nIn which unit you want to convert your frequency from centihertz=\n");
    break;
case 10:
    printf("\nIn which unit you want to convert your frequency from millihertz=\n");
    break;
default:
    break;
}

printf("\n");
do{

printf("1)kilohertz\n");
printf("2)gigahertz\n");
printf("3)megahertz\n");
printf("4)hectohertz\n");
printf("5)dekahertz\n");
printf("6)cycle per second\n");
printf("7)hertz\n");
printf("8)decihertz\n");
printf("9)centihertz\n");
printf("10)millihertz\n");


scanf("%d",&to_unit);
if(to_unit>10){
printf("\nInvalid input select the given categories\n");
}
}while(to_unit < 1 || to_unit > 10);
system("cls");
double mag;
printf("\nEnter the magnitude in ");
switch(from_unit){
case 1:
    printf("kilohertz= ");
    break;
case 2:
    printf("gigahertz= ");
    break;
case 3:
    printf("megahertz= ");
    break;
case 4:
    printf("hectohertz= ");
    break;
case 5:
    printf("dekahertz= ");
    break;
case 6:
    printf("cycle per second= ");
    break;
case 7:
    printf("hertz= ");
    break;
case 8:
    printf("decihertz= ");
    break;
case 9:
    printf("centihertz= ");
    break;
case 10:
    printf("milihertz= ");
    break;
default:
    break;
}
scanf("%lf",&mag);
double to_mag=0;
double confre[]={1,0.000001,0.001,10,100,1000,1000,10000,100000,1000000};
to_mag=(confre[to_unit-1]/confre[from_unit-1])*mag;
printf("\nMagnitude in ");
switch(to_unit){

case 1:
    printf("kilohertz= %lf",to_mag);
    break;

case 2:
    printf("gigahertz= %lf",to_mag);
    break;
case 3:
    printf("megahertz= %lf",to_mag);
    break;
case 4:
    printf("hectohertz= %lf",to_mag);
    break;
case 5:
    printf("dekahertz= %lf",to_mag);
    break;
case 6:
    printf("cycle per second= %lf",to_mag);
    break;
case 7:
    printf("hertz= %lf",to_mag);
    break;
case 8:
    printf("decihertz= %lf",to_mag);
    break;
case 9:
    printf("centihertz= %lf",to_mag);
    break;
case 10:
    printf("milihertz= %lf",to_mag);
    break;

}

}




///function for force///

void forceConverter(){


int from_unit;
printf("\t\t\t\tThe force Units Converter\n");
printf("\nFrom which unit you want to convert your force from(enter the number)\n");
printf("\n");
do{

printf("1)kilonewton\n");
printf("2)newton\n");
printf("3)pound-force(lbf)\n");
printf("4)kilogram-force\n");
printf("5)poundal\n");
printf("6)gram-force\n");
printf("7)kip\n");
printf("8)ton-force\n");
printf("9)ounce force\n");
printf("10)dekanewton\n");

scanf("%d",&from_unit);
if(from_unit>10){
printf("\nInvalid input select the given categories\n");
}
} while(from_unit < 1 || from_unit > 10);
system("cls");
int to_unit;
switch(from_unit){
case 1:
    printf("\nIn which unit you want to convert your force from kilonewton=\n");
    break;
case 2:
    printf("\nIn which unit you want to convert your force from newton=\n");
    break;
case 3:
    printf("\nIn which unit you want to convert your force from pound-force(lbf)=\n");
    break;
case 4:
    printf("\nIn which unit you want to convert your force from kilogram-force=\n");
    break;
case 5:
    printf("\nIn which unit you want to convert your force from poundal=\n");
    break;
case 6:
    printf("\nIn which unit you want to convert your force from gram-force=\n");
    break;
case 7:
    printf("\nIn which unit you want to convert your force from kip=\n");
    break;
case 8:
    printf("\nIn which unit you want to convert your force from ton-force=\n");
    break;
case 9:
    printf("\nIn which unit you want to convert your force from ounce force=\n");
    break;
case 10:
    printf("\nIn which unit you want to convert your force from dekanewton=\n");
    break;
default:
    break;
}

printf("\n");
do{

printf("1)kilonewton\n");
printf("2)newton\n");
printf("3)pound-force(lbf)\n");
printf("4)kilogram-force\n");
printf("5)poundal\n");
printf("6)gram=force\n");
printf("7)kip\n");
printf("8)ton-force\n");
printf("9)ounce force\n");
printf("10)dekanewton\n");


scanf("%d",&to_unit);
if(to_unit>10){
printf("\nInvalid input select the given categories\n");
}
} while(to_unit < 1 || to_unit > 10);
system("cls");
double mag;
printf("\nEnter the magnitude in ");
switch(from_unit){
case 1:
    printf("kilonewton= ");
    break;
case 2:
    printf("newton= ");
    break;
case 3:
    printf("pound-force(lbf)= ");
    break;
case 4:
    printf("kilogram-force= ");
    break;
case 5:
    printf("poundal= ");
    break;
case 6:
    printf("gram=force= ");
    break;
case 7:
    printf("kip= ");
    break;
case 8:
    printf("ton-force= ");
    break;
case 9:
    printf("ounce force= ");
    break;
case 10:
    printf("dekanewton= ");
    break;
default:
    break;
}
scanf("%lf",&mag);
double to_mag=0;
double confor[]={1,1000,224.8089,101.9716213,7233.018512,101971.6213,0.2248089431,0.1003611353,3596.9430896,100};
to_mag=(confor[to_unit-1]/confor[from_unit-1])*mag;
printf("\nMagnitude in ");
switch(to_unit){

case 1:
    printf("kilonewton= %lf",to_mag);
    break;
case 2:
    printf("newton= %lf",to_mag);
    break;
case 3:
    printf("pound-force(lbf)= %lf",to_mag);
    break;
case 4:
    printf("kilogram-force= %lf",to_mag);
    break;
case 5:
    printf("poundal= %lf",to_mag);
    break;
case 6:
    printf("gram-force= %lf",to_mag);
    break;
case 7:
    printf("kip= %lf",to_mag);
    break;
case 8:
    printf("ton-force= %lf",to_mag);
    break;
case 9:
    printf("ounce force= %lf",to_mag);
    break;
case 10:
    printf("deka newton= %lf",to_mag);
    break;

}

}

void Time(){

	float answer, magnitude;
	int convertunit, convertedunit;

	printf("Select a unit to convert from : \n");
	printf("1. Hour\n");
	printf("2. Minute\n");
	printf("3. Second\n");
	fflush(stdin);
	printf("Option : ");
	scanf("%d",&convertunit);

	switch(convertunit){

		case 1 : printf("Select a unit to convert to : \n");
		printf("1. Hour\n");
		printf("2. Minute\n");
		printf("3. Second\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f hour(s) are equal to %.2f hours\n",magnitude, magnitude);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 60;
			printf("%.2f hour(s) are equal to %.2f minutes\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 3600;
			printf("%.2f hour(s) are equal to %.2f seconds\n",magnitude, answer);
			break;
		}
		break;

		case 2 : printf("Select a unit to convert to : \n");
		printf("1. Hour\n");
		printf("2. Minute\n");
		printf("3. Second\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f minute(s) are equal to %.2f minutes\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude / 60;
			printf("%.2f minute(s) are equal to %.2f hours\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 60;
			printf("%.2f minute(s) are equal to %.2f seconds\n",magnitude, answer);
			break;
		}
		break;


		case 3 : printf("Select a unit to convert to : \n");
		printf("1. Hour\n");
		printf("2. Minute\n");
		printf("3. Second\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f second(s) are equal to %.2f seconds\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude / 3600;
			printf("%.2f second(s) are equal to %.2f hours\n",magnitude, answer);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude / 60;
			printf("%.2f second(s) are equal to %.2f minutes\n",magnitude, answer);
			break;
		}
		break;
	}
}

void Length(){

	float answer, magnitude;
	int convertunit, convertedunit;

	printf("Select a unit to convert from : \n");
	printf("1. Kilometers\n");
	printf("2. Meters\n");
	printf("3. Centimeters\n");
	printf("4. Millimeters\n");
	printf("5. Yards\n");
	printf("6. Feet\n");
	printf("7. Inches\n");
	fflush(stdin);
	printf("Option : ");
	scanf("%d",&convertunit);

	switch(convertunit){

		case 1 : printf("Select a unit to convert to : \n");
		printf("1. Kilometers\n");
		printf("2. Meters\n");
		printf("3. Centimeters\n");
		printf("4. Millimeters\n");
		printf("5. Yards\n");
		printf("6. Feet\n");
		printf("7. Inches\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f Kilometers(s) are equal to %.2f Kilometers\n",magnitude, magnitude);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 1000;
			printf("%.2f Kilometers(s) are equal to %.2f meters\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*100000;
			printf("%.2f Kilometers(s) are equal to %.2f centimeters\n",magnitude, answer);
			break;

			case 4: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*1000000;
			printf("%.2f Kilometers(s) are equal to %.2f millimeters\n",magnitude, answer);
			break;

			case 5: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*1093.61;
			printf("%.2f Kilometers(s) are equal to %.2f yards\n",magnitude, answer);
			break;


			case 6: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*3280.84;
			printf("%.2f Kilometers(s) are equal to %.2f feet\n",magnitude, answer);
			break;

			case 7: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*39370.71;
			printf("%.2f Kilometers(s) are equal to %.2f inches\n",magnitude, answer);
			break;

		}
		break;

		case 2 : printf("Select a unit to convert to : \n");
		printf("1. Kilometers\n");
		printf("2. Meters\n");
		printf("3. Centimeters\n");
		printf("4. Millimeters\n");
		printf("5. Yards\n");
		printf("6. Feet\n");
		printf("7. Inches\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f meters(s) are equal to %.2f meters\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude / 1000;
			printf("%.2f meters(s) are equal to %.2f kilometers\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*100;
			printf("%.2f meters(s) are equal to %.2f centimeters\n",magnitude, answer);
			break;

			case 4: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*1000;
			printf("%.2f meters(s) are equal to %.2f millimeters\n",magnitude, answer);
			break;

			case 5: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*1.09361;
			printf("%.2f meters(s) are equal to %.2f yards\n",magnitude, answer);
			break;


			case 6: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*3.28084;
			printf("%.2f meters(s) are equal to %.2f feet\n",magnitude, answer);
			break;

			case 7: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*39.37071;
			printf("%.2f meters(s) are equal to %.2f inches\n",magnitude, answer);
			break;

		}
		break;

		case 3 : printf("Select a unit to convert to : \n");
		printf("1. Kilometers\n");
		printf("2. Meters\n");
		printf("3. Centimeters\n");
		printf("4. Millimeters\n");
		printf("5. Yards\n");
		printf("6. Feet\n");
		printf("7. Inches\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f centimeters(s) are equal to %.2f centimeters\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude / 100000;
			printf("%.2f centimeters(s) are equal to %.2f kilometers\n",magnitude, answer);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude/100;
			printf("%.2f centimeters(s) are equal to %.2f meters\n",magnitude, answer);
			break;

			case 4: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*10;
			printf("%.2f centimeters(s) are equal to %.2f millimeters\n",magnitude, answer);
			break;

			case 5: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.0109361;
			printf("%.2f centimeters(s) are equal to %.2f yards\n",magnitude, answer);
			break;


			case 6: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.0328084;
			printf("%.2f centimeters(s) are equal to %.2f feet\n",magnitude, answer);
			break;

			case 7: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.3937071;
			printf("%.2f centimeters(s) are equal to %.2f inches\n",magnitude, answer);
			break;

		}
		break;

		case 4 : printf("Select a unit to convert to : \n");
		printf("1. Kilometers\n");
		printf("2. Meters\n");
		printf("3. Centimeters\n");
		printf("4. Millimeters\n");
		printf("5. Yards\n");
		printf("6. Feet\n");
		printf("7. Inches\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 4: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f millimeters(s) are equal to %.2f millimeters\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude / 1000000;
			printf("%.2f millimeters(s) are equal to %.2f kilometers\n",magnitude, answer);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude/1000;
			printf("%.2f millimeters(s) are equal to %.2f meters\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude/10;
			printf("%.2f millimeters(s) are equal to %.2f centimeters\n",magnitude, answer);
			break;

			case 5: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.00109361;
			printf("%.2f millimeters(s) are equal to %.2f yards\n",magnitude, answer);
			break;


			case 6: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.00328084;
			printf("%.2f millimeters(s) are equal to %.2f feet\n",magnitude, answer);
			break;

			case 7: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.03937071;
			printf("%.2f millimeters(s) are equal to %.2f inches\n",magnitude, answer);
			break;

		}
		break;

		case 5 : printf("Select a unit to convert to : \n");
		printf("1. Kilometers\n");
		printf("2. Meters\n");
		printf("3. Centimeters\n");
		printf("4. Millimeters\n");
		printf("5. Yards\n");
		printf("6. Feet\n");
		printf("7. Inches\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 5: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f yards(s) are equal to %.2f yards\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 0.0009144;
			printf("%.2f yards(s) are equal to %.2f kilometers\n",magnitude, answer);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.9144;
			printf("%.2f yards(s) are equal to %.2f meters\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 91.44;
			printf("%.2f yards(s) are equal to %.2f centimeters\n",magnitude, answer);
			break;

			case 4: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude* 914.4;
			printf("%.2f yards(s) are equal to %.2f millimeters\n",magnitude, answer);
			break;


			case 6: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*3;
			printf("%.2f yards(s) are equal to %.2f feet\n",magnitude, answer);
			break;

			case 7: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*36;
			printf("%.2f yards(s) are equal to %.2f inches\n",magnitude, answer);
			break;

		}
		break;

		case 6 : printf("Select a unit to convert to : \n");
		printf("1. Kilometers\n");
		printf("2. Meters\n");
		printf("3. Centimeters\n");
		printf("4. Millimeters\n");
		printf("5. Yards\n");
		printf("6. Feet\n");
		printf("7. Inches\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 6: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f feet(s) are equal to %.2f feet\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 0.0003048;
			printf("%.2f feet(s) are equal to %.2f kilometers\n",magnitude, answer);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.3048;
			printf("%.2f feet(s) are equal to %.2f meters\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 30.48;
			printf("%.2f feet(s) are equal to %.2f centimeters\n",magnitude, answer);
			break;

			case 4: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude* 304.8;
			printf("%.2f feet(s) are equal to %.2f millimeters\n",magnitude, answer);
			break;

			case 5: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.333333;
			printf("%.2f feet(s) are equal to %.2f yards\n",magnitude, answer);
			break;

			case 7: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*12;
			printf("%.2f feet(s) are equal to %.2f inches\n",magnitude, answer);
			break;

		}
		break;

	case 7 : printf("Select a unit to convert to : \n");
		printf("1. Kilometers\n");
		printf("2. Meters\n");
		printf("3. Centimeters\n");
		printf("4. Millimeters\n");
		printf("5. Yards\n");
		printf("6. Feet\n");
		printf("7. Inches\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 7: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f inch(es) are equal to %.2f inches\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 0.000025;
			printf("%.2f inch(es) are equal to %.2f kilometers\n",magnitude, answer);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.0254;
			printf("%.2f inche(es) are equal to %.2f meters\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude * 2.54;
			printf("%.2f inch(es) are equal to %.2f centimeters\n",magnitude, answer);
			break;

			case 4: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude* 25.4;
			printf("%.2f inch(es) are equal to %.2f millimeters\n",magnitude, answer);
			break;

			case 5: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.0277778;
			printf("%.2f inch(es) are equal to %.2f yards\n",magnitude, answer);
			break;

			case 6: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude*0.0833333;
			printf("%.2f inch(es) are equal to %.2f feet\n",magnitude, answer);
			break;

		}
		break;

}
}

void Temperature(){

	float answer, magnitude;
	int convertunit, convertedunit;

	printf("Select a unit to convert from : \n");
	printf("1. Celsius\n");
	printf("2. Fahrenheit\n");
	printf("3. Kelvin\n");
	fflush(stdin);
	printf("Option : ");
	scanf("%d",&convertunit);

	switch(convertunit){

		case 1 : printf("Select a unit to convert to : \n");
		printf("1. Celsius\n");
		printf("2. Fahrenheit\n");
		printf("3. Kelvin\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f Celsius are equal to %.2f Celsius\n",magnitude, magnitude);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = (magnitude*9/5) + 32;
			printf("%.2f Celsius are equal to %.2f Fahrenheit\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude + 273.15;
			printf("%.2f Celsius are equal to %.2f Kelvin\n",magnitude, answer);
			break;
		}
		break;

		case 2 : printf("Select a unit to convert to : \n");
		printf("1. Celsius\n");
		printf("2. Fahrenheit\n");
		printf("3. Kelvin\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f Fahrenheit are equal to %.2f Fahrenheit\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = (magnitude-32)*5/9;
			printf("%.2f Fahrenheit are equal to %.2f Celsius\n",magnitude, answer);
			break;

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = ((magnitude-32)*5/9)+273.15;
			printf("%.2f Fahrenheit are equal to %.2f Kelvin\n",magnitude, answer);
			break;
		}
		break;


		case 3 : printf("Select a unit to convert to : \n");
		printf("1. Celsius\n");
		printf("2. Fahrenheit\n");
		printf("3. Kelvin\n");
		printf("Option : ");
		scanf("%d",&convertedunit);

		switch(convertedunit){

			case 3: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			printf("%.2f Kelvin are equal to %.2f Kelvin\n",magnitude, magnitude);
			break;

			case 1: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = magnitude-273.15;
			printf("%.2f Kelvin are equal to %.2f Celsius\n",magnitude, answer);
			break;

			case 2: printf("Enter the magnitude : ");
			scanf("%f",&magnitude);
			answer = ((magnitude-273.15)*9/5)+32;
			printf("%.2f Kelvin are equal to %.2f Fahrenheit\n",magnitude, answer);
			break;
		}
		break;
	}

}
void Mass() {
    char sub_choice;
    float mass;

    printf("Mass Converter Menu:\n");
    printf("Enter your choice:\n");
    printf("1. Kilograms to Grams\n");
    printf("2. Grams to Kilograms\n");
    printf("3. Kilograms to Tonnes\n");
    printf("4. Tonnes to Kilograms\n");
    printf("5. Kilograms to Ounces\n");
    printf("6. Ounces to Kilograms\n");
    printf("7. Kilograms to Pounds\n");
    printf("8. Pounds to Kilograms\n");
    fflush(stdin);
    sub_choice = getchar();

    switch (sub_choice) {
        case '1':
            printf("Enter mass in kilograms:\n");
            scanf("%f", &mass);

            mass = mass * 1000;
            printf("Converted mass to Grams: %.3f g\n", mass);
            break;
        case '2':
            printf("Enter mass in grams:\n");
            scanf("%f", &mass);

            mass = mass / 1000;

            printf("Converted mass to Kilograms: %.3f kg\n", mass);
            break;
        case '3':
            printf("Enter mass in kilograms:\n");
            scanf("%f", &mass);

            mass = mass / 1000;

            printf("Converted mass to Tonnes: %.3f t\n", mass);
            break;
        case '4':
            printf("Enter mass in Tonnes:\n");
            scanf("%f", &mass);

            mass = mass * 1000;

            printf("Converted mass to Kilograms: %.3f kg\n", mass);
            break;
        case '5':
            printf("Enter mass in Kilograms:\n");
            scanf("%f", &mass);

            mass = mass * 35.27396;

            printf("Converted mass to Ounces: %.3f oz\n", mass);
            break;
        case '6':
            printf("Enter mass in ounces:\n");
            scanf("%f", &mass);

            mass = mass / 35.27396;

            printf("Converted mass to Kilograms: %.3f kg\n", mass);
            break;
        case '7':
            printf("Enter mass in Kilograms:\n");
            scanf("%f", &mass);

            mass = mass * 2.20462;

            printf("Converted mass to Pounds: %.3f lb\n", mass);
            break;
        case '8':
            printf("Enter mass in Pounds:\n");
            scanf("%f", &mass);

            mass = mass / 2.20462;

            printf("Converted mass to Kilograms: %.3f lb\n", mass);
            break;
        default:
            printf("INVALID CHOICE\n");
            break;
    }
}

void Speed(){
    char sub_choice;
    float speed;

    printf("Speed Converter Menu:\n");
    printf("Enter your choice 1 to 4:\n");
    printf("1. m/s to km/h\n");
    printf("2. km/h to m/s\n");
    printf("3. miles/s to miles/h\n");
    printf("4. miles/h to miles/s\n");
    fflush(stdin);
    sub_choice=getchar();

    switch(sub_choice){
        case '1':
            printf("Conversion from m/s to km/h\n");
            printf("Enter speed in m/s:\n");
            scanf("%f", &speed);

            speed=speed*3.6;

            printf("Converted speed to Kilometers per hour: %.3f km/h\n", speed);
            break;
        case '2':
            printf("Conversion from km/h to m/s\n");
            printf("Enter speed in km/h:\n");
            scanf("%f", &speed);

            speed=speed/3.6;

            printf("Converted speed to Meters per second: %.3f m/s\n", speed);
            break;
        case '3':
            printf("Conversion from m/s to m/h\n");
            printf("Enter speed in m/s:\n");
            scanf("%f", &speed);

            speed=speed*3600/1609.344;

            printf("Converted speed to Miles per hour: %.3f mph\n", speed);
            break;
        case '4':
            printf("Conversion from miles/h to miles/s\n");
            printf("Enter speed in mph:\n");
            scanf("%f", &speed);

            speed=speed/3600*1609.344;

            printf("Converted speed to Meters per second: %.3f mps\n", speed);
            break;
        default:
            printf("INVALID CHOICE\n");
            break;
    }
}

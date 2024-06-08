#include<stdio.h>
#include<conio.h>
void massConverter();
void speedConverter();

void main(void){
    char choice;

    printf("----------Unit Converter Menu----------\n\n");
    printf("Enter your choice 1 or 2:\n");
    printf("1. Mass Conversions\n");
    printf("2. Speed Conversions\n");
    fflush(stdin);
    choice=getchar();

    switch(choice){
        case '1':
            massConverter();
            break;
        case '2':
            speedConverter();
            break;
        default:
            printf("INVALID CHOICE\n");
            break;
    }
}

void massConverter() {
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

void speedConverter(){
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

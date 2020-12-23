#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conver;
    char currency;
    float amount;
    float naira;
    char converter;
    float volume;
    float tope;
    float joel;
    char isaac;
    float length;
    char option;

    printf("\t\t\t\tWelcome to my C converter!! \n");
    printf("\t\t\t\tProduced by GROUP 2, COMPUTER ENGINEERING\n");
    printf("\t\t\t\tMatric numbers:\n");
    do{printf("\nWhat would you like to deal in? \n");
    printf("1. currency\n");
    printf("2. volume\n");
    printf("3. lenght\n");
    printf("4. weight and mass\n");
    printf("5. temperature\n");
    printf("6. energy\n");
    printf("7. area\n");
    printf("8. speed\n");
    printf("9. time\n");
    printf("10. power\n");
    printf("11. pressure\n");
    printf("12. angle\n\n\n");
    printf("\t\t Please enter a physical quantity{1,2,3......12}\n");
    scanf("%d", &conver);


    switch(conver){
        case 1 :
             printf(" Please select currency converter (a,b,c....e)\n\n");
             printf("a. Canadian_dollars to Naira\n");
             printf("b. United_States_dollars to Naira\n");
             printf("c. United_Kingdom_Pounds to Naira\n");
             printf("d. South_Africa_Rand to Naira\n");
             printf("e. Ghana_Cedi to Naira\n");
             scanf("%s",&currency);

             if(currency=='a')
                {
             printf("Input Canadian dollars\n");
             scanf("%f",&amount);
             naira= amount*270.15;
             printf("this is equal to ");
             printf("%f", naira);
             printf(" Naira");

             if(currency=='b')

               printf("Input United states dollars\n");
              scanf("%f",&amount);
                    naira= amount*360.50;
                    printf("this is equal to ");
                    printf("%f", naira);
                    printf(" Naira");

                 if(currency=='c')
                    printf("Input United Kingdom  Pounds\n");
                    scanf("%f",&amount);
                    naira= amount*480.09;
                    printf("this is equal to ");
                    printf("%f", naira);
                    printf(" Naira");

                 if(currency=='d')
                    printf("Input South Africa Rand\n");
                    scanf("%f",&amount);
                    naira= amount*25.02;
                    printf("this is equal to ");
                    printf("%f", naira);
                    printf(" Naira");

                 if(currency=='e')
                    printf("Input Ghana Cedi \n");
                    scanf("%f",&amount);
                    naira= amount*64.15;
                    printf("this is equal to ");
                    printf("%f", naira);
                    printf(" Naira");

                    else
                        printf("invalid entry");}
                break;


        case 2 :
            printf("Please select volume converter (a,b,c...e)\n\n");
                 printf("a. Cubic_Metres to Litres\n");
                 printf("b. Cubic_Centimetres to Cubic_Metres\n");
                 printf("c. Teaspoon(US) to Cubic_Metres\n");
                 printf("d. Cups to Cubic_Metres\n");
                 printf("e. Gallons(US) to Cubic_Metres\n");
                 scanf("%s", &converter);

                 if(converter=='a'){
                    printf("Input cubic Metres\n");
                    scanf("%f", &tope);
                    volume= tope*1000;
                    printf("This is equivalent to\n");
                    printf("%f", volume);
                    printf(" litres");
                 };
                   if(converter=='b'){
                    printf("Input cubic Centimetres \n");
                    scanf("%f", &tope);
                    volume= tope*0.000001;
                    printf("This is equivalent to\n");
                    printf("%f", volume);
                    printf(" Cubic metres");
                 };
                   if(converter=='c'){
                    printf("Input number of teaspoons\n");
                    scanf("%f", &tope);
                    volume= tope*0.000005;
                    printf("This is equivalent to\n");
                    printf("%f", volume);
                    printf(" Cubic metres");
                 };
                   if(converter=='d'){
                    printf("Input number of cups\n");
                    scanf("%f", &tope);
                    volume= tope*0.000237;
                    printf("This is equivalent to\n");
                    printf("%f", volume);
                    printf(" Cubic metres");
                 };
                 if(converter=='e'){
                    printf("Input number of gallons\n");
                    scanf("%f", &tope);
                    volume= tope*0.003785;
                    printf("This is equivalent to\n");
                    printf("%f", volume);
                    printf(" Cubic metres");
                 }

                 else{
                        printf("invalid entry");
                 }
                break;
        case 3 : printf("Please select lenght converter (a,b...c)\n\n");
                 printf("a. Inches to Metres\n");
                 printf("b. Millimeters to Metres\n");
                 printf("c. Centimetres to Metres\n");
                 printf("d. Feets to Metres\n");
                 scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input measurement in inches\n");
                    scanf("%f", &joel);
                    length= joel*0.0254;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" metres");
                 };
                  if(isaac=='b'){
                    printf("Input measurement in millimetres \n");
                    scanf("%f", &joel);
                    length= joel*0.001;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" metres");
                 };

                  if(isaac=='c'){
                    printf("Input measurement in Centimetres \n");
                    scanf("%f", &joel);
                    length= joel*0.01;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" metres");
                 };
                  if(isaac=='d'){
                    printf("Input measurement in feets\n");
                    scanf("%f", &joel);
                    length= joel*0.03048;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" metres");
                 }
                 else{
                        printf("invalid entry");
                    }

                break;
        case 4 : printf("Please select weight and mass converter (a,b...c)\n\n");
                 printf("a. Kilograms to grams\n");
                 printf("b. Pounds to grams\n");
                 printf("c. Milligrams to grams\n");
                 printf("d. Ounces to grams\n");
                 printf("e. Pounds to Kilograms\n");
                 scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input measurement in kilograms\n");
                    scanf("%f", &joel);
                    length= joel*0.001;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" grams");
                 };
                 if(isaac=='b'){
                    printf("Input measurement in pounds\n");
                    scanf("%f", &joel);
                    length= joel*493.5924;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" grams");
                 };
                 if(isaac=='c'){
                    printf("Input measurement in milligrams\n");
                    scanf("%f", &joel);
                    length= joel*0.001;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" grams");
                 };
                 if(isaac=='d'){
                    printf("Input measurement in ounces\n");
                    scanf("%f", &joel);
                    length= joel*28.34952;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" grams");
                 };
                 if(isaac=='e'){
                    printf("Input measurement in pounds\n");
                    scanf("%f", &joel);
                    length= joel*0.453592;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Killograms");
                 }
                 else{
                        printf("invalid entry");
                    }

                break;
        case 5 : printf("Please select temperature converter (a or b)\n\n");
                 printf("a. Celsius to Kelvin\n");
                 printf("b. kelvin to Celsius\n");
                 scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input measurement in Celsius\n");
                    scanf("%f", &joel);
                    length= joel+273.15;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" K");}

                 if(isaac=='b'){
                    printf("Input measurement in Kelvin\n");
                    scanf("%f", &joel);
                    length= joel-273.15;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Celsius"); }
                    else{
                        printf("invalid entry");
                    }
                break;
        case 6 : printf("Please select energy converter (a,b or c)\n\n");
                 printf("a. Kilo_Joules to Joules\n");
                 printf("b. Food_Calories to Joules\n");
                 printf("c. Thermal_Calories to Kilo_Joules\n");
                  scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input measurement in kilo Joules\n");
                    scanf("%f", &joel);
                    length= joel*0.001;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" joules");
                 };
                  if(isaac=='b'){
                    printf("Input measurement in Food Calories\n");
                    scanf("%f", &joel);
                    length= joel*4184;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" joules");
                 }if(isaac=='c'){
                    printf("Input measurement in Thermal calories\n");
                    scanf("%f", &joel);
                    length= joel*0.004184;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Kilojoules");
                 }else{
                        printf("invalid entry");
                    };
                break;
        case 7 : printf("Please select area converter (a,b...c)\n\n");
                 printf("a. Hectares to square_metres\n");
                 printf("b. Square_yards to square_metres\n");
                 printf("c. Sqaure_Kilometres to square_metres\n");
                 printf("d. Acres to Hectares\n");
                 scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input measurement in Hectares\n");
                    scanf("%f", &joel);
                    length= joel*10000;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" square metres");}
                if(isaac=='b'){
                    printf("Input measurement in square yards\n");
                    scanf("%f", &joel);
                    length= joel*0.836127;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" square metres");}
                if(isaac=='c'){
                    printf("Input measurement in square kilometres\n");
                    scanf("%f", &joel);
                    length= joel*1000000;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" square metres");}
                 if(isaac=='d'){
                    printf("Input measurement in Acres\n");
                    scanf("%f", &joel);
                    length= joel*0.404686;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Hectares");}
        else{
                        printf("invalid entry");
                    }



                break;
        case 8 : printf("Please select speed converter (a,b...d)\n\n");
                 printf("a. Kilometres_per_hour to Metres_per_second\n");
                 printf("b. Miles_per_hour to Kilometres_per_hour\n");
                 printf("c. Feet_per_second to _Centimetres_per_second\n");
                 printf("d. Feets_per_second to Metres_per_second\n");
                 scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input measurement in Kilometres per hour\n");
                    scanf("%f", &joel);
                    length= joel*0.277778;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Metres per second");}
                if(isaac=='b'){
                    printf("Input measurement in Miles per hour\n");
                    scanf("%f", &joel);
                    length= joel*1.6092;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Kilometres per hour");}
                if(isaac=='c'){
                    printf("Input measurement in Feets per second\n");
                    scanf("%f", &joel);
                    length= joel*30.48;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Centimetres per second");}
                if(isaac=='d'){
                    printf("Input measurement in Feets per second\n");
                    scanf("%f", &joel);
                    length= joel*30.48;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Centimetres per second");}
                    else{
                        printf("invalid entry");
                    }
                break;
        case 9: printf("Please select time converter (a,b...d)\n\n");
                printf("a. Years to days\n");
                printf("b. Hours to minute\n");
                printf("c. Days to hours\n");
                printf("d. Minutes to seconds\n");
                scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input time in Years\n");
                    scanf("%f", &joel);
                    length= joel*365;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" days");}
                if(isaac=='b'){
                    printf("Input time in hours\n");
                    scanf("%f", &joel);
                    length= joel*60;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" minute");}
                if(isaac=='c'){
                    printf("Input time in days\n");
                    scanf("%f", &joel);
                    length= joel*24;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" hours");}
                if(isaac=='d'){
                    printf("Input time in minutes\n");
                    scanf("%f", &joel);
                    length= joel*60;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" seconds");}
                    else{
                        printf("invalid entry");
                    }
                break;
        case 10: printf("Please select power converter (a,b or c)\n\n");
                 printf("a. Kilowatts to Watts\n");
                 printf("b. Horse_power(US) to watts\n");
                 printf("c. Horse_power(US) to Kilowatts\n");
                 scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input power in Killowatts\n");
                    scanf("%f", &joel);
                    length= joel*0.001;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Watts");}
                if(isaac=='b'){
                    printf("Input power in Horse power\n");
                    scanf("%f", &joel);
                    length= joel*745.699872;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" Watts");}
                if(isaac=='c'){
                    printf("Input poweer in Horse power\n");
                    scanf("%f", &joel);
                    length= joel*0.745699872;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" KW");}
                    else{
                        printf("invalid entry");
                    }
                break;
        case 11 : printf("Please select pressure converter (a,b or c)\n\n");
                  printf("a. Atmospheres to Millimetres_per_mercury\n");
                  printf("b. Atmposphere to bars\n");
                  printf("c. Atmosphere to pascals\n");
                  scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input pressure in Atmospheres\n");
                    scanf("%f", &joel);
                    length= joel*760;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" mm/hg");}
                if(isaac=='b'){
                    printf("Input pressure in Atmospheres\n");
                    scanf("%f", &joel);
                    length= joel*1.01325;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" bars");}
                if(isaac=='c'){
                    printf("Input pressure in Atmospheres\n");
                    scanf("%f", &joel);
                    length= joel*101325;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" pascals");}
                    else{
                    printf("invalid entry");
                    }


                  break;
        case 12 : printf("Please select angle converter (a or b)\n\n");
                  printf("a. Degrees to Radians\n");
                  printf("b. Radians to degrees\n");
                  scanf("%s", &isaac);

                 if(isaac=='a'){
                    printf("Input angle in degrees\n");
                    scanf("%f", &joel);
                    length= joel*0.0174532925;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" radians");}
                if(isaac=='b'){
                    printf("Input angle in radians\n");
                    scanf("%f", &joel);
                    length= joel*57.2957795;
                    printf("This is equivalent to\n");
                    printf("%f", length);
                    printf(" degrees");}
                    else{
                        printf("invalid entry");
                    }
                break;
        default: printf("Invalid data entry");

    }

    }
    printf("\ndo you want to use my C converter again(y_for_yes, n_for_no)\n");
    option=getche();
    while(option=='y');

    getche();

}

 }

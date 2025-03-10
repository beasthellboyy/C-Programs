#include <stdio.h>
#include <stdbool.h>
#include <string.h>


 // REAL LIFE EXAMPLE CONVERTING FAHRENHEIT TO CELSIUS
float farehToCels(float farhenheit) {
    return (5.0 / 9.0) * (farhenheit - 32.0);
}

 // MANIPULATING GLOBAL AND LOCAL VARIABLES
 int xew = 5;

 void myManFun() {
    printf("\nNew value of x: %d", ++xew);
 }


int main() {
    /* Multi Lines Comment
    you dumb*/
    // Single Line Comment
    int myNum = 15;
    float thisNum = 6.9;
    char myLett = 68;

    printf("This is a number: %d\n", myNum);
    printf("This is a decimal: %.2f\n", thisNum);
    printf("This is a letter: %c\n", myLett);
    printf("My number is %d and my letter is %c", myNum, myLett);

    int firstNum = 55, secondNum = 66;
    int totalSum = firstNum + secondNum;
    printf("\nThe total Sum: %d", totalSum);

    int firstNum2, secondNum2;
    firstNum2 = secondNum2 = 55;
    int totalSum2 = firstNum2 + secondNum2;
    printf("\nThe total Sum: %d", totalSum2);

    char myText[] = "\nIt's a string not a character";
    printf("%s", myText);


    // size of operator
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("\n%lu\t", sizeof(myInt));
    printf("%lu\t", sizeof(myFloat));
    printf("%lu\t", sizeof(myDouble));
    printf("%lu\t", sizeof(myChar));

    // Real Life Examples
    int items = 50;
    float costPerItem = 9.99;
    float totalCost = items * costPerItem;
    char currency = '$';

    printf("\nThe total cost is %c%.2f ", currency, totalCost);

    // Type Conversion
    float floatSum = (float) 5 / 2;
    printf("\n%.1f", floatSum);

    const int myMinutesPerHour = 60;
    printf("\nMinutes in an hour %d", myMinutesPerHour);


    // Comparison Operators

    int x = 30;
    int y = 60;
    printf("\n%d", x > y);
    printf("\n%d", !(x > 5 && y < 5));

    // && AND || OR ! NOT

    // BOOL OPERATORS
    const bool isProgrammingFun = true;
    bool isFishTasty = false;
    printf("\n%d", isProgrammingFun);
    printf("\n%d", isFishTasty);


    // IF ELSE CONDITIONS
    int myAge = 18;
    int votingAge = 18;

    if(myAge > votingAge) {
        printf("\nYou shouldn't vote maybe!!");
    } else if(myAge == votingAge) {
        printf("\nYeah you should vote cause it's your first vote!!!");
    } else {
        printf("\nYeah you shouldn't vote either!!!");
    }


    // TERNARY OPERATOR
    int myAge101 = 21;

    (myAge101 > 22) ? printf("\nYour age is: %d i.e. you're older now", myAge101) : printf("\nYou are still somewhat young: %d, enjoy", myAge101);


    // TO FIND IS A NUMBER IS EVEN OR ODD
    int myNum101 = 366;

    if(myNum101 % 2 == 0) {
        printf("\nThe number %d is even, it's not odd ", myNum101);
    } else {
        printf("\nThe number %d is odd", myNum101);
    }


    // SWITCH CASE
    int dayNum = 3;

    switch(dayNum) {
        case 1:
            printf("\nI'm the one yeah\n");
            break;
        case 2:
            printf("\nI'm the Number 2 though\n");
            break;
        case 3:
            printf("\nI'm the Number 3 on the list\n");
            break;
        default:
            printf("Looking forward to the Weekend\n");
    }

    //LOOPS
    int xyz = 0;

    while(xyz <= 5) {
        printf("%d ", xyz);

        if(xyz < 5) {
            printf("to the ");
        }
        xyz++;
    }

    int nzss = 101;
    do {
        printf("\n%d\n", nzss);
        nzss--;
    }
    while(nzss > 99);

    int i101;
    for ( i101 = 3; i101 < 4096; i101 *= 3 ) {
        printf("\t%d", i101);
    }

    // NESTED LOOPS
    int i, j;

    for(i = 1;i < 2;++i) {
        printf("\nOuter Loop: %d", i);

        // INNER LOOP
        for(j = 0;j < 5;++j) {
            printf("\n Inner Loop: %d", j);
        }
    }

    // MULTIPLICATION TABLE EXAMPLE WITH C
    int numbr = 19;
    int iss;

    for (iss = 1;iss <= 10;iss++) {
        printf( "\n%d x %d = %d", numbr, iss, numbr * iss );
    }

    //ARRAYS
    int myFirstArray[] = {12, 13, 14, 15};
    int isare;
    myFirstArray[3] = 99;

    printf("\nDoesn't print the actual size of my array %d", sizeof(myFirstArray));
    int actualSizeofArray = sizeof(myFirstArray) / sizeof(myFirstArray[0]);
    printf("\nThis is the actual size of my array %d", actualSizeofArray);
    for(isare = 0;isare < actualSizeofArray;isare++) { // Loop with an actual size of array limit
        printf("\n%d\n", myFirstArray[isare]);
    }


    // EVEN NUMBERS IN LOOP EXAMPLE AGAIN
    int illa;
    int rowCount;

    for(illa = 0; illa < 11; illa++) {
        if(illa % 2 == 0){
            printf("%d\t", illa);
            rowCount++;
            if(rowCount % 2 == 0){
                printf("\n");
            };
        };
    };

    // REAL LIFE EXAMPLES OF ARRAYS; CALCULATING AVERAGES AND LOWEST AGE AND STUFF

    int averageofanArray[] = {65, 56, 87, 35, 87, 99, 101};
    int sizeofmyArray = sizeof(averageofanArray) / sizeof(averageofanArray[0]);
    float averageNumber, averageArraySum;

    for(averageNumber = 0;averageNumber < sizeofmyArray; averageNumber++) {
        averageArraySum += averageofanArray[i];
    }

    float finalAverage = averageArraySum / sizeofmyArray;
    printf("\n%.2f", finalAverage);


    int ageArray[] = {21, 23, 45, 33, 19, 26, 29, 22, 24, 65};
    int sizeofageArray = sizeof(ageArray) / sizeof(ageArray[0]);
    int innm;
    int lowestAge = ageArray[0];

    for(innm = 0; innm < sizeofageArray; innm++) {
        if(lowestAge > ageArray[innm] ) {
            lowestAge = ageArray[innm];
        }
    }

    printf("\nLowest age among Array: %d", lowestAge);

    // MULTIDIMENSIONAL ARRAY
    int myMatrix[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };
    printf("\n%d", myMatrix[1][2]);

    int iii, jjj;
    for( iii = 0;iii < 2;iii++ ) {
        for( jjj = 0;jjj < 4;jjj++) {
            printf("\n%d", myMatrix[iii][jjj]);
        }
    }

    // STRINGS IN C
    char myString[] = "\nDis my String homie!!";
    char notMyString[] = "\tDis one's not mine though";
    printf("%s", myString);
    printf("%s, %s", myString, notMyString);
    printf("\n%d", strlen(myString));
    printf("\n%d", sizeof(myString));

    // CONCATENATE STRINGS
    char str1[20] = "Relay ";
    char str2[] = "Rambo!!";
    char strCompare[] = "Rambo!!";
    char str3[20];

    strcat(str1, str2); // Concatenate
    strcpy(str3, str2); // Copy String
    printf("\n%s", str3);
    printf("\n%s", str1);
    printf("\n%d", strcmp(strCompare, str2)); // Compare String
    printf("\n%d", strcmp(str3, str1));

    printf("\nMemory Address: %p", &strCompare);

    // USER INPUT
    int yourNum;

    //  printf("\nType your number here: ");
    // scanf("%d", &yourNum);
    // printf("Your number is: %d", yourNum);

    int firstInput;
    char secondInput;
    char thirdInput[20]; // single word input
    char fourthInput[30]; // two words input

    // printf("\nType a number, a character, and your name: ");
    // scanf("%d %c %s", &firstInput, &secondInput, thirdInput);
    // printf("\nYour number is %d, your character is %c and your name is %s", firstInput, secondInput, thirdInput);

    // Clear the newline character left by scanf
    //   while (getchar() != '\n');

   // printf("\nYou forgot to tell your full name though: ");
   // fgets(fourthInput, sizeof(fourthInput), stdin);

    // printf("\nOh, so your name is %s", fourthInput);

    // printf("Memory Address %p", &thirdInput);

    // POINTERS
    int ptrVar = 43;
    char ptrVar2 = 'c';
    int* ptr = &ptrVar2;

    printf("\n%p", &ptrVar);
    printf("\n%p", &ptrVar2);
    printf("\n%p", ptr);
    printf("\n%c", *ptr); // Another way to use pointers

    // POINTERS AND ARRAYS
    int myPtrArr[5] = {13, 15, 16, 18, 20};
    int ill;

    for(ill = 0; ill < 5; ill++) {
        printf("\n%p ", &myPtrArr[ill]);
    }
     printf("\nMy array memory address %p", myPtrArr);
     printf("\n%d", *(myPtrArr + 1));

     *myPtrArr = 66;
     *(myPtrArr + 1) = 99;

     printf("\n%d", *(myPtrArr + 1));




    myfirstFunct();
    myfirstFunct();
    myFuncwitParam("Tanish Sharma", 22);
    calculateSum(49, 65);

    int numbArr[5] = {10, 20, 30, 40, 50};
    arrParam(numbArr);

    int getValFunVal = getValFun(66);
    printf("\nReturn Value from Function: %d", getValFunVal);

    int reusVarArr[3];

    reusVarArr[0] = calReusFun(99, 98);
    reusVarArr[1] = calReusFun(9129, 213);
    reusVarArr[2] = calReusFun(99213, 91238);

    for (int innn = 0; innn < 3; innn++) {
       printf("\nResult is %d", reusVarArr[innn]);

    }

    float f_value = 101;

    float cel_value = farehToCels(f_value);

    printf("\nFahrenheit to Celsius: %.2f", cel_value);

    myManFun();
    printf("\nManipulated value of x: %d", xew);

    printf("\nHello World!\n\n");
    printf("How you doing today, son\t");
    printf("How you doing today, son huh?\t");



  return 0;
}
 // FUNCTIONSSSSSSS
     void myfirstFunct() {
        printf("\nStop calling me you dumb");

     }

     // FUNCTIONS WITH PARAMETERS
     void myFuncwitParam(char name[], int age) {
        printf("\nHis name is %s and his age is %d.", name, age);
     }

     void calculateSum(int xx, int yy) {
        int zz = xx + yy;
        printf("\nThe sum of %d and %d is: %d", xx, yy, zz);
     }

     // ARRAY AS FUNCTION PARAMETER
     void arrParam(int numbArr[5]) {
        for(int istt = 0; istt < 5; istt++) {
            printf("\n%d", numbArr[istt]);
        }
     }

     // FUNCTION WITH RETURN VALUES
     int getValFun( int getVal ) {
        return getVal / 22;
     }

     // CALCUALTE SUM OF NUMBERS REUSABLE FUNCTION
     int calReusFun(int xyza, int yxha) {
        return xyza + yxha;
     }





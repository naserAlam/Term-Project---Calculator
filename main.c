#include <stdio.h>
#include <stdlib.h>

void simpleArithmetic();
float addition(float firstNumber, float secondNumber);
float subtract(float firstNumber, float secondNumber);
float multiply(float firstNumber, float secondNumber);
float divide(float firstNumber, float secondNumber);

void matrixCalculation();
void matrixAddition();
void matrixSubraction();
void matrixMultiplication();

void factorial();
int multiplyFactorial(int input);

void exponention();
int multiplyBase(int base, int exp);

int main()
{
    int numberOfCalculations;
    printf("Hello, how many calculations would you like to do today?\n");
    scanf("%d",&numberOfCalculations);

    while(numberOfCalculations>0){
        int choice;
        printf("What would you like to calculate?\n");
        printf("1.Simple arithmetic calculations \n2.Matrix calculation \n3.Factorial \n4.Exponentiation \n");
        scanf("%d", &choice);
        switch(choice){
        case 1:
            simpleArithmetic();
            break;
        case 2:
            matrixCalculation();
            break;
        case 3:
            factorial();
            break;
        case 4:
            exponention();
            break;
        default :
            printf("Please enter valid operation.");
        }
        numberOfCalculations--;
    }

    return 0;
}

float addition(float firstNumber, float secondNumber){
    return (firstNumber + secondNumber);
}

float subtract(float firstNumber, float secondNumber){
    return (firstNumber - secondNumber);
}

float multiply(float firstNumber, float secondNumber){
    return (firstNumber * secondNumber);
}

float divide(float firstNumber, float secondNumber){
    return (firstNumber / secondNumber);
}

void simpleArithmetic(){
    int choice;
    float firstNumber = 0, secondNumber = 0, result = 0;
    printf("Which operation would you like to perform?\n");
    printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n");
    scanf("%d",&choice);
    printf("Please enter the first and second numbers \n");
    scanf("%f %f", &firstNumber, &secondNumber);
    switch(choice){
    case 1 :
        result = addition(firstNumber,secondNumber);
        break;
    case 2 :
        result = subtract(firstNumber,secondNumber);
        break;
    case 3 :
        result = multiply(firstNumber,secondNumber);
        break;
    case 4 :
        result = divide(firstNumber,secondNumber);
        break;
    default :
        printf("Please enter a valid operation.");
    }
    printf("Result: %.2f",result);
    printf("\n");
}

void matrixAddition(){
    int rowA,rowB,colA,colB;
    printf("\nNumber of rows for Matrix A :");
    scanf("%d",&rowA);
    printf("\nNumber of col for Matrix A :");
    scanf("%d",&colA);
    printf("\nNumber of rows for Matrix B :");
    scanf("%d",&rowB);
    printf("\nNumber of col for Matrix B :");
    scanf("%d",&colB);

    if(rowA == rowB && colA == colB){
        int matA[rowA][colA], matB[rowB][colB];
        //Populate matrix A
        printf("Please enter elements of matrix A\n");
        for(int i=0;i<rowA;i++){
            for(int j=0;j<colA;j++){
                scanf("%d",&matA[i][j]);
            }
        }
        //Populate matrix B
        printf("Please enter elements of matrix B\n");
        for(int i=0;i<rowB;i++){
            for(int j=0;j<colB;j++){
                scanf("%d",&matB[i][j]);
            }
        }
        //Sum of the matrix
        printf("Result: \n");
        for(int i=0;i<rowA;i++){
            for(int j=0;j<colA;j++){
                printf("%d ", matA[i][j] + matB[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("To perform matrix addition row and col have to be equal\n");
    }
}

void matrixSubraction(){
    int rowA,rowB,colA,colB;
    printf("\nNumber of rows for Matrix A :");
    scanf("%d",&rowA);
    printf("\nNumber of col for Matrix A :");
    scanf("%d",&colA);
    printf("\nNumber of rows for Matrix B :");
    scanf("%d",&rowB);
    printf("\nNumber of col for Matrix B :");
    scanf("%d",&colB);

    if(rowA == rowB && colA == colB){
        int matA[rowA][colA], matB[rowB][colB];
        //Populate matrix A
        printf("Please enter elements of matrix A\n");
        for(int i=0;i<rowA;i++){
            for(int j=0;j<colA;j++){
                scanf("%d",&matA[i][j]);
            }
        }
        //Populate matrix B
        printf("Please enter elements of matrix B\n");
        for(int i=0;i<rowB;i++){
            for(int j=0;j<colB;j++){
                scanf("%d",&matB[i][j]);
            }
        }
        //Result
        printf("Result: \n");
        for(int i=0;i<rowA;i++){
            for(int j=0;j<colA;j++){
                printf("%d ", matA[i][j] - matB[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("To perform matrix subtraction row and col have to be equal\n");
    }
}

void matrixMultiplication(){
    int rowA,rowB,colA,colB;
    printf("\nNumber of rows for Matrix A :");
    scanf("%d",&rowA);
    printf("\nNumber of col for Matrix A :");
    scanf("%d",&colA);
    printf("\nNumber of rows for Matrix B :");
    scanf("%d",&rowB);
    printf("\nNumber of col for Matrix B :");
    scanf("%d",&colB);

    if(colA == rowB){
        int matA[rowA][colA], matB[rowB][colB], mat[rowA][colB];
        //Populate matrix A
        printf("Please enter elements of matrix A\n");
        for(int i=0;i<rowA;i++){
            for(int j=0;j<colA;j++){
                scanf("%d",&matA[i][j]);
            }
        }
        //Populate matrix B
        printf("Please enter elements of matrix B\n");
        for(int i=0;i<rowB;i++){
            for(int j=0;j<colB;j++){
                scanf("%d",&matB[i][j]);
            }
        }
        //Result
        printf("Result: \n");
        for(int i=0;i<rowA;i++){
            for(int j=0;j<colB;j++){
                int temp = 0;
                for(int k=0;k<rowB;k++){
                    temp += matA[i][k] * matB[k][j];
                }
                mat[i][j] = temp;
            }
        }
        //Print result
        for(int i=0;i<rowA;i++){
            for(int j=0;j<colB;j++){
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("To perform matrix multiplication row of matrix A and col of matrix B have to be equal\n");
    }
}

void matrixCalculation(){
    int choice;
    printf("Which operation would you like to perform \n");
    printf("1.Matrix Addition \n2.Matrix Subtraction \n3.Matrix Multiplication \n");
    scanf("%d", &choice);
    switch(choice){
    case 1:
        matrixAddition();
        break;
    case 2:
        matrixSubraction();
        break;
    case 3:
        matrixMultiplication();
        break;
    default :
        printf("Please enter valid operation.\n");
    }
    printf("\n");
}

int multiplyFactorial(int input){
    if(input == 1)
        return 1;
    else
        return input * multiplyFactorial(input - 1);
}

void factorial(){
    int input, temp=0, fact=1;
    printf("Number you would like to find the factorials of : ");
    scanf("%d",&input);
    temp = input;
    fact = multiplyFactorial(temp);
    printf("Factorial of %d is : %d \n",input,fact);
}

int multiplyBase(int base, int exp){
    if(exp == 0)
        return 1;
    else
        return base * multiplyBase(base, exp - 1);
}

void exponention(){
    int base, exp, result;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    result = multiplyBase(base, exp);
    printf("Result: %d \n",result);
}

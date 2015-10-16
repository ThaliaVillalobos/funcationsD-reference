//Name: Thalia Villalobos
// 15 Oct. 2015

#include<iostream>
#include<string>
using namespace std;

// ********************************************************
// Precondition: Three integer values are been passed between 0 and 100, inclusive.
// Postcondition: Return the three ingeter number in increasing order. 
//
// ********************************************************
void sort(int& numA, int& numB, int& numC);


// ********************************************************
// Precondition: Determines the number of digits in a integer bewteen -10000 and 10000, inclusive. 
// Postcondition: Return number of digits that are in the value that was passed in. 
//
// ********************************************************
void numDigits(int  valA, int& n); 


// ********************************************************
// Precondition: Pass in a double value greater than 0 and less than 10000, inclusive.
// Postcondition:Return the calculation of the area and volume of a sphere.
//
// ********************************************************
void computeSphere(double& a, double& v, double r);
	

// ********************************************************
// Precondition: Swap positive interger values that are passed in.
// Postcondition: Return the swap values.
//
// ********************************************************
void swap(int& A, int& B);


int main()
{
    int x = 1; 
    int y = 34; 
    int z = 78;
    int xy = 50649;
    double a = 9;
    int num = 0;
    double numA,numB;
   
   //Test case 
    sort(z,y,x);
    cout << z << " " << y << " " << x << endl;
    
    numDigits(xy, num);
    cout << num << endl;
    
    computeSphere(numA, numB, a);
    cout << "Area: " << numA << " Volume: " << numB <<  endl;
    
    swap(x, y);
    cout << y << " " << x << endl;
    
    return 0;				
}

void sort(int& numA, int& numB, int& numC)
{
    if(numA > numB)
    {
        swap(numA,numB);
    }
    if(numA	 > numC)
    {
        swap(numA, numC);
    }
    if(numB > numC)
    {
        swap(numB, numC);
    }
}

void numDigits(int valA, int& n)
{
    if (valA < 0)
    {
        valA = valA * -1;
    }
    
    for (n = 0; 0 < valA; n++)
    {
        valA = valA / 10;
    }
}

void computeSphere(double& a, double& v, double r)
{
    const double pI = 3.1415;
    a = 4 * pI * r *r;
    v = (4 / 3) * pI * r * r * r; 
}


void swap(int& A, int& B)
{
   int temp;
   temp = A;
   
    A = B;
    B = temp;    
}

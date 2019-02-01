#include <stdio.h> 
//#pragma pack(1)  
struct s { 
   // int j; 
  //  char ch; 
    double d; 
	//int i;
};// __attribute__((packed));  
// Attribute informing compiler to pack all members 
  
int main() 
{ 
    struct s A; 
    printf("Size of A is: %ld", sizeof(A)); 
} 

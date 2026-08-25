#include <bits/stdc++.h>
using namespace std;
// 3. O que fazem as seguintes func¸oes: ˜

void func( ) {
int mat[ ] = {1, 10, 100};
for(int j=0; j<3; j++)
cout << *(mat+j) << endl;
}

void func( ){
int mat[ ] = {1, 10, 100};
for(int j=0; j<3; j++)
cout << (mat+j) << endl;
}

void func( ) {
int mat[ ] = {1, 10, 100}; int *p=mat;
for(int j=0; j<3; j++)
cout << (*p)++ << endl;
}
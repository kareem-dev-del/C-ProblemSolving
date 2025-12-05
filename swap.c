#include <stdio.h>

/* 
 * Pair Struct:
 *  - Holds two integers together as a single returned value.
 *  - Used here to return the two swapped numbers from the function.
 */

typedef struct 
{
    int first;
    int second;
   
} Pair;

Pair swap(int x ,int y){
    Pair p;
    x^=y;
    y^=x;
    x^=y;
    p.first=x;
    p.second=y;

    return p;
}
int main(){
    int n1=5,n2=7;
    printf("Befor: %d %d",n1,n2);
    printf("after: %d %d",swap(n1,n2));
    

}
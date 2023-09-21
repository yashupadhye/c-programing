/*static initial vale is zero
scope of a variable is local ti the block in whiich it is declared
lifetime is for the entire program.
*/
#include <stdio.h>
void dowork();
int main()
{
    dowork();
    dowork();
    dowork();
    dowork();
    dowork();

    return 0;
}
void dowork()
{

    static int age = 18;
    printf("%d\n", age++);
}
#include <stdio.h>

/* 

Base case: 
    -If n=1, just move it directly Recursive 
cases: 
    If n>1:
     - Move (n-1) disks from source to helper 
     - Move disk n from source to destination 
     - Move (n-1) disks from helper to destination
*/

void move(int n, char source, char destination)
{
    printf("moving %d from %c to %c\n", n, source, destination);
}

void TowersOfHanoi(int n, char source, char destination, char helper)
{
    if (n == 1)
    {
        move(n, source, destination);
        return;
    }
    TowersOfHanoi(n - 1, source, helper, destination);
    move(n, source, destination);
    TowersOfHanoi(n - 1, helper, destination, source);
}

int main()
{
    TowersOfHanoi(3, 'S', 'D', 'H');
    return 0;
}

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


// int ux2(int n)
// {
//     if (n == 0)
//         return 1;
//     else
//         return (2*(ux2(n - 1)+ 2/ux2(n-1)));
// } 

// int u(int n)
// {
//     int result = 1;
//     while (n > 0)
//     {
//         result = 2*(result + 2 / result);
//         n--;
//     }
//     return result;
// }

int main()
{
    TowersOfHanoi(3, 'S', 'D', 'H');
    // printf("iterative:%d\nrecursive: %d\n", u(10), ux2(10));
    return 0;
}




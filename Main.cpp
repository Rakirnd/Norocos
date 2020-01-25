
#include "norocos.h"
#include "k_norocos.h"

int main()
{
    
    ifstream f("norocos.in");

    int c, n, k;
    int N[1000] = { 0 };

    f >> c;
    f >> n >> k;

    for (int i = 0; i < n; i++)
        f >> N[i];

    switch (c)
    {

    case 1:
        norocos(n, N);
        break;
    case 2:
        k_norocos(n, k, N);
        break;
    default:
        break;
    }


    f.close();

    return 0;

}



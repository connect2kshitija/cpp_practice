#include <iostream>
using namespace std;
void fibseq(int old, int current)
{

    static int terms = 2;
    int newn;

    if (terms < 20)
    {

        newn = old + current;
        cout << newn<<endl;
        terms = terms + 1;
        fibseq(current, newn);
    }
}
int main()
{

    int i, t, old = 0, current = 1, newn;

    cout << old << current << endl;

    fibseq(old, current);

    return 0;
}
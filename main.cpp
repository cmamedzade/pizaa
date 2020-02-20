#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
vector <int> v;

void convert()
{
    int temp;
    for (int i = v.size()-1; i > 0; i--)
        {
            for (int a = i - 1; a > -1; a--)
                {
                    temp = v[i];
                    v[i] = v[a];
                    v[a] = temp;
                    break;

                }
        }

}

int main()
{
    int mx;
    int pz;
    cin >> mx >> pz;

    v.resize(pz);
    for (int i = 0; i < v.size(); i++)
        {
            cin >> v[i];
        }
    int res;
    vector<int> result;
    result.resize(v.size()*v.size()*v.size());
    int rr = 0;
    for (int s = 0; s< v.size(); s++)
        {
            for (int i = 0; i < v.size(); i++)
                {
                    res = v[i];
                    for (int a = i + 1; a < v.size(); a++)
                        {
                            res = res + v[a];
                            result[rr++] = res;
                        }

                }
            convert();

        }

    int tmp = result[0];

    for (int i = 1; i < result.size(); i++)
        {
            if ( tmp < result[i] && result[i] < mx )
                {
                    tmp = result[i];
                }
        }


    cout << tmp << endl;

}

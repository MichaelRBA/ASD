//Michael Raphael Ben Ariyanto (672021028)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> P;// menggunakan vektor karena mendeklarasikan sebuah vector yang digunakan untuk menyimpan data bertipe integer
    int minDist = 10000000;

    int maxNr = 0;
    int minNr = 10000000;

    int N;
    cin >> N; cin.ignore();
    for (int a = 0; a < N; a++) {
        int Pi;
        cin >> Pi; cin.ignore();

        if (Pi > maxNr)//penyeleksian dengan statement if, CPU akan memeriksa kebenaran dari conditional expression
        {
            int dist = Pi - maxNr;
            if (dist < minDist)
                minDist = dist;

            maxNr = Pi;
        }
        else if (Pi < minNr)
        {
            int dist = minNr - Pi;
            if (dist < minDist)
                minDist = dist;

            minNr = Pi;
        }
        else
        {
            for (int b = 0; b < a; ++b)
            {
                int dist = abs(P[b] - Pi);
                if (dist < minDist)
                    minDist = dist;
            }
        }

        P.push_back(Pi);
    }

    cout << minDist << endl;
}


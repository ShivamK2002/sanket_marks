#include <iostream>
using namespace std;

int sum(int a, int b, int c, int d, int e)
{
    int p = (a + b + c + d + e);
}
float percentage(int a, int b, int c, int d, int e)
{

    float x = (a + b + c + d + e) * 0.2;
    return x;
}
int sum2(int j, int k, int l, int m, int n, int o)
{
    int p2 = (j + k + l + m + n + o);
}
float percentage2(int j, int k, int l, int m, int n, int o)

{
    float x2 = (j + k + l + m + n + o) * 1 / 6 ;
    return x2;
}
int main()
{

    int r, n, s1, s2, s3, s4, s5, s6;

    cout << "Please Enter your marks" << endl;
    cout << "Marathi: " << endl;

    cin >> s1;
    if (s1 <= 80)
    {
        s1 = s1 + 20;
    }

    cout << "Hindi: " << endl;
    cin >> s2;
    if (s2 <= 80)
    {
        s2 = s2 + 20;
    }

    cout << "English: " << endl;
    cin >> s3;
    if (s3 <= 80)
    {
        s3 = s3 + 20;
    }

    cout << "Science: " << endl;
    cin >> s4;
    if (s4 <= 80)
    {
        s4 = s4 + 20;
    }
    
    cout << "Maths: " << endl;
    cin >> s5;
    if (s5 <= 80)
    {
        s5 = s5 + 20;
    }
    cout << "Social Science: " << endl;
    cin >> s6;
    if (s6 <= 80)
    {
        s6 = s6 + 20;
    }
    int z;
    cout << "If you want to calculate your marks out of 500 then press 1" << endl;
    cout << "If you want to calculate your marks out of 600 then press 2" << endl;
    cin >> z;
    if (z == 1)
    {
        int arr[6]= {s1,s2,s3,s4,s5,s6};
       

        {
            cout << "Which subject do you want remove from BEST OF 5 system?" << endl;
            cout << "Press 1 to remove Marathi" << endl;
            cout << "Press 2 to remove Hindi" << endl;
            cout << "Press 3 to remove English" << endl;
            cout << "Press 4 to remove Science" << endl;
            cout << "Press 5 to remove Maths" << endl;
            cout << "Press 6 to remove Social Science" << endl;
            cin >> r;
            if (r == 1)

            {
                cout << "Total= " << sum(s2, s3, s4, s5, s6) << " marks out of 500." << endl;
                cout << "Congrats Buddy! You got " << percentage(s2, s3, s4, s5, s6) << "%";
            }

            else if (r == 2)
            {
                cout << "Total= " << sum(s1, s3, s4, s5, s6) << " marks out of 500." << endl;
                cout << "Congrats Buddy! You got  " << percentage(s1, s3, s4, s5, s6) << "%";
            }

            else if (r == 3)
            {
                cout << "Total= " << sum(s1, s2, s4, s5, s6) << " marks out of 500." << endl;
                cout << "Congrats Buddy! You got  " << percentage(s1, s2, s4, s5, s6) << "%";
            }

            else if (r == 4)
            {
                cout << "Total= " << sum(s1, s2, s3, s5, s6) << " marks out of 500." << endl;
                cout << "Congrats Buddy! You got  " << percentage(s1, s2, s3, s5, s6) << "%";
            }

            else if (r == 5)
            {
                cout << "Total= " << sum(s1, s2, s3, s4, s6) << " marks out of 500." << endl;
                cout << "Congrats Buddy! You got  " << percentage(s1, s2, s3, s4, s6) << "%";
            }

            else if (r == 6)
            {
                cout << "Total= " << sum(s1, s2, s3, s4, s5) << " marks out of 500." << endl;
                cout << "Congrats Buddy! You got  " << percentage(s1, s2, s3, s4, s5) << "%";
            }

            else
            {
                cout << "Please select valid input!";
            }
        }
    }
    else if (z == 2)
    {
        {
            cout << "Total= " << sum2(s1, s2, s3, s4, s5, s6) << " marks out of 600." << endl;
            cout << "Congrats Buddy! You got  " << percentage2(s1, s2, s3, s4, s5, s6) << "%";
        }
    }
    else
    {
        cout << "Please select valid input!";
    }
    return 0;
}
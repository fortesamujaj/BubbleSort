#include <iostream>
#include <vector>
using namespace std;

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(vector<int>& vargu)
{
    cout << "Elementet ne varg: " << vargu.size() << endl;

    for (int i = 0; i < vargu.size(); i++)
    {
        for (int j = 0; j < vargu.size() - 1; j++)
        {
            if (vargu[j] > vargu[j + 1])
                Swap(&vargu[j], &vargu[j + 1]);
        }
    }
}

void PrintoVargun(vector<int> vargu)
{
    for (int i = 0; i < vargu.size(); i++)
        cout << vargu[i] << " ";
    cout << endl;
}

int main()
{
    cout << "Shtyp numrat (-1 per nderprerje):\n";

    vector<int> vargu;
    int num = 0;
    while (num != -1)
    {
        cin >> num;
        if (num != -1)
            vargu.push_back(num);
    }

    BubbleSort(vargu);
    cout << "Vargu i sortuar eshte:\n";
    PrintoVargun(vargu);

    return 0;
}
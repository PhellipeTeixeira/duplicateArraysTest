#include <iostream>

using namespace std;
int main() {
    int inSizeV1, inSizeV2, sizeV1, sizeV2, outSizeV3;

    cout << "Enter the amount of items you want to have in the first list: ";
    cin >> inSizeV1;
    string inVector1[inSizeV1];

    // Inserting the strings into the first array
    for (int i = 0; i < inSizeV1; i++)
    {
        cout << "Enter item " << i + 1 << " from the liste: ";
        cin >> inVector1[i];
    }
    for (int i = 0; i < inSizeV1; i++)
    {
        cout << inVector1[i] << " ";
    }
    cout << '\n' << '\n';
    
    cout << "Enter the amount of items you want to have in the second list: ";
    cin >> inSizeV2;
    string inVector2[inSizeV2];
    
    // Inserting the strings into the second array
    for (int i = 0; i < inSizeV2; i++)
    {
        cout << "Enter item " << i + 1 << " from the liste: ";
        cin >> inVector2[i];
    }
    for (int i = 0; i < inSizeV2; i++)
    {
        cout << inVector2[i] << " ";
    }
    cout << '\n' << '\n';

    // Total size of vectors
    outSizeV3 = inSizeV1 + inSizeV2;
    string outVector[outSizeV3];

    // Concatenating the vectors 
    for (int i = 0; i < inSizeV1; i++)
    {
        outVector[i] = inVector1[i];
    }

    for (int i = 0; i < inSizeV2; i++)
    {
        outVector[i + inSizeV1] = inVector2[i];
    }

    // Removing duplicate elements
    for(int i = 0; i < outSizeV3; i++)
    {
        for (int j = i + 1; j < outSizeV3; )
        {
            if (outVector[i] == outVector[j])
            {
                for (int k = j; k < outSizeV3; k++)
                {
                    outVector[k] = outVector[k + 1];
                }
                outSizeV3--;
            }
            j--;
        }        
    }
    cout << "\n---------------------------------\n";
    
    for (int i = 0; i < outSizeV3; i++)
    {
        cout << outVector[i] << " ";
    }
    return 0;
}

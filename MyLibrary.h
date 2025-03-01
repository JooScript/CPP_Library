#pragma once
#pragma warning(disable : 4996)

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib> // srand((unsigned)time(NULL));
#include <limits>  // Validation
#include <cstdio>  //printf
#include <iomanip> // this library stored the std::setw // setprecision(9)
#include <vector>
#include <bits/stdc++.h> //include all libraries
#include <cctype>
#include <fstream>
#include <ctime> // #pragma warning(disable : 4996)

using namespace std;

namespace MyLib
{
    float MyPower(float Number, int Pow)
    {
        if (Pow == 0)
        {
            return 1;
        }

        float Result = 1;

        for (int i = 1; i <= Pow; i++)
        {
            Result *= Number;
        }
        return Result;
    }

    bool CheckPrime(int Number)
    {
        int HalfNumber = round(Number / 2);

        for (int Counter = 2; Counter <= HalfNumber; Counter++)
        {
            if (Number % Counter == 0)
            {
                return 0;
            }
        }
        return 1;
    }

    int CheckFrequency(short DigitToCheck, long int Number)
    {
        int Remainder = 0;
        int FreqCount = 0;

        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = floor(Number / 10);

            if (DigitToCheck == Remainder)
            {
                FreqCount++;
            }
        }
        return FreqCount;
    }

    void ReadArray(int Arr[100], int &ArrLength)
    {
        cout << "\nEnter number of elements\n";
        cin >> ArrLength;
        cout << "\nEnter arrat elements: \n";
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            cout << "Element [" << i + 1 << "] : ";
            cin >> Arr[i];
        }
        cout << "\n";
    }

    void ReadArrayFrom1ToN(int Arr[100], int ArrLength)
    {
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            Arr[i] = i + 1;
        }
    }

    void PrintArray(int Arr[100], int ArrLength)
    {
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            cout << Arr[i];
        }
        cout << "\n";
    }

    int TimesRepeated(int NumberToCheck, int Arr[100], int ArrLength)
    {
        int Counter = 0;

        for (int i = 0; i <= ArrLength; i++)
        {
            if (NumberToCheck == Arr[i])
            {
                Counter++;
            }
        }
        return Counter;
    }

    int MaxNumberInArray(int Arr[100], int ArrLength)
    {
        int MaxNumber = -2147483647; // بفرض ان كل الارقام موجب
        // MaxNumber = Arr[0]; // Another solutin
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            if (Arr[i] > MaxNumber)
            {
                MaxNumber = Arr[i];
            }
        }
        return MaxNumber;
    }

    int MinNumberInArray(int Arr[100], int ArrLength)
    {
        int MinNumber = 2147483647;
        // MinNumber = Arr[0]; //Another slution
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            if (Arr[i] < MinNumber)
            {
                MinNumber = Arr[i];
            }
        }
        return MinNumber;
    }

    int SumArray(int Arr[100], int ArrLength)
    {
        int Sum = 0;
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            Sum += Arr[i];
        }
        return Sum;
    }

    float AvgArray(int Arr[100], int ArrLength)
    {
        return (float)SumArray(Arr, ArrLength) / ArrLength;
    }

    void CopyArray(int ArrSource[100], int CopyArr[100], int ArrLength)
    {
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            CopyArr[i] = ArrSource[i];
        }
    }

    void CopyOnlyPrimeNumbers(int ArrSource[100], int PrimeCopyArr[100], int ArrLength, int &PrimeCopyArrLength)
    {
        PrimeCopyArrLength = -1;
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            if (CheckPrime(ArrSource[i]))
            {
                PrimeCopyArrLength++;
                PrimeCopyArr[PrimeCopyArrLength] = ArrSource[i];
            }
        }
    }

    void SumOf2Arrrays(int SumOf2Arr[100], int Arr1[100], int Arr2[100], int ArrLength)
    {
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            SumOf2Arr[i] = Arr1[i] + Arr2[i];
        }
    }

    void CopyArrayInReversedOrder(short Arr[100], short ReversedArr[100], short ArrLength)
    {
        for (short i = 0; i <= ArrLength - 1; i++)
        {
            ReversedArr[i] = Arr[ArrLength - 1 - i];
        }
    }

    void PrintStringArray(string Arr[100], int ArrLength)
    {
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            cout << "Array [" << i + 1 << "] : ";
            cout << Arr[i] << "\n";
        }
    }

    void SearchNumInArray(int NumberToSearch, int Arr[100], int ArrLength)
    {
        cout << "Number you are looking for is: " << NumberToSearch << "\n";
        if (TimesRepeated(NumberToSearch, Arr, ArrLength) == 0)
        {
            cout << "The number is not found :-(\n";
        }
        else
        {
            for (int i = 0; i <= ArrLength - 1; i++)
            {
                if (NumberToSearch == Arr[i])
                {
                    cout << "The number found at position: " << i << "\n";
                    cout << "The number found its order: " << i + 1 << "\n";
                }
            }
        }
    }

    int FindFirstPositionInArray(int NumberToSearch, int Arr[100], int ArrLength)
    {
        for (int i = 0; i <= ArrLength; i++)
        {
            if (NumberToSearch == Arr[i])
            {
                return i;
            }
        }
        return -1;
    }

    bool IsNumberInArray(int NumberToSearch, int Arr[100], int ArrLength)
    {
        return FindFirstPositionInArray(NumberToSearch, Arr, ArrLength) != -1;
    }

    void AddArrayElement(int Number, int Arr[100], int &ArrLength)
    {
        ArrLength++;
        Arr[ArrLength - 1] = Number;
    }

    void InputUserNumbersInArray(int Arr[100], int &ArrLength)
    {
        bool AddMore = 1;

        do
        {
            AddArrayElement(ReadInt("\nPlease enter a number "), Arr, ArrLength);
            AddMore = ReadTrueOrFalse("\nDo you wany add more numbers ? \n[0]:No [1]:Yes ");
        } while (AddMore);

        cout << "\n";
    }

    void CopyOddNumbers(int ArrSource[100], int ArrDestination[100], int ArrSourceLength, int &ArrDestinationLength)
    {
        for (int i = 0; i <= ArrSourceLength - 1; i++)
        {
            if (ArrSource[i] % 2 != 0)
            {
                AddArrayElement(ArrSource[i], ArrDestination, ArrDestinationLength);
            }
        }
    }

    void CopyDistinictNumber(int ArrSource[100], int ArrDesitnation[100], int ArrSourceLength, int &ArrDestinationLength)
    {
        for (int i = 0; i <= ArrSourceLength - 1; i++)
        {
            if (!IsNumberInArray(ArrSource[i], ArrDesitnation, ArrDestinationLength))
            {
                AddArrayElement(ArrSource[i], ArrDesitnation, ArrDestinationLength);
            }
        }
    }

    bool CheckPalindromeArray(int Arr[100], int ArrLength)
    {
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            if (Arr[i] != Arr[ArrLength - 1 - i])
            {
                return 0;
            }
        }
        return 1;
    }

    short OddCounterInArray(int Arr[100], int ArrLength)
    {
        short Counter = 0;
        for (int i = 0; i <= ArrLength - 1; i++)
        {
            if (Arr[i] % 2 != 0)
            {
                Counter++;
            }
        }
        return Counter;
    }

    float GetFractionPart(float Number)
    {
        return Number - (int)Number;
    }

    bool CheckPositiveFloat(float Number)
    {
        return Number > 0;
    }

    void AddIntToVector(vector<int> &vNumbers)
    {
        char Again = 'Y';
        int Number = 0;
        do
        {
            Number = MyLib::ReadInt("\nEnter an number you want to add ");
            vNumbers.push_back(Number);
            cout << "\nDo you want to add more numbers (Y/n) ?  ";
            cin >> Again;
        } while (Again == 'Y' || Again == 'y');
    }

    void PrintVectorInts(vector<int> &vNumbers)
    {
        cout << "\nNumbers Vector:- \n";
        for (int &Number : vNumbers)
        {
            cout << Number << " ";
        }
        cout << "\n\n";
    }

    void PrintVectorStrings(vector<string> &vContent)
    {
        for (string &Content : vContent)
        {
            cout << Content << " ";
        }
    }

    void FileToVector(string FileName, vector<string> &vFileContent)
    {
        fstream MyFile;
        MyFile.open(FileName, ios::in); // read Mode
        if (MyFile.is_open())
        {
            string Line;
            while (getline(MyFile, Line))
            {
                vFileContent.push_back(Line);
            }
            MyFile.close();
        }
    }

    void VectorToFile(string FileName, vector<string> vFileContent)
    {
        fstream MyFile;
        MyFile.open(FileName, ios::out);

        if (MyFile.is_open())
        {
            for (string &Line : vFileContent)
            {
                if (Line != "")
                {
                    MyFile << Line << endl;
                }
            }

            MyFile.close();
        }
    }

    void UpdateLineInFile(string FileName, string Line, string UpdateTo)
    {
        vector<string> vFileContent;
        FileToVector(FileName, vFileContent);
        for (string &ContentLine : vFileContent)
        {
            if (ContentLine == Line)
            {
                ContentLine = UpdateTo;
            }
        }
        VectorToFile(FileName, vFileContent);
    }

    void DeleteLineFromFile(string FileName, string Line)
    {
        vector<string> vFileContent;
        FileToVector(FileName, vFileContent);
        for (string &ContentLine : vFileContent)
        {
            if (ContentLine == Line)
            {
                ContentLine = "";
            }
        }
        VectorToFile(FileName, vFileContent);
    }

    void PrintFileContent(string FileName)
    {
        fstream MyFile;
        MyFile.open(FileName, ios::in); // read Mode
        if (MyFile.is_open())
        {
            string Line;
            while (getline(MyFile, Line))
            {
                cout << Line << endl;
            }
            MyFile.close();
        }
    }

    void FillMatrixWithRandomNumbers(short Matrix[3][3])
    {
        for (short i = 0; i < 3; i++)
        {
            for (short j = 0; j < 3; j++)
            {
                Matrix[i][j] = RandomShort(0, 999);
            }
        }
    }

    void PrintMatrix(short Matrix[3][3])
    {
        for (short i = 0; i < 3; i++)
        {
            for (short j = 0; j < 3; j++)
            {
                cout << setw(3) << Matrix[i][j] << "  ";
            }
            cout << "\n";
        }
    }

    void AddDataLineToFile(string FileName, string stDataLine)
    {
        fstream MyFile;
        MyFile.open(FileName, ios::out | ios::app);
        if (MyFile.is_open())
        {
            MyFile << stDataLine << endl;
            MyFile.close();
        }
    }

}
#include"CSortAlgorithm.h"
#include"CSTUDENT.h"



int main()
{
    int choice;
    while (1) {
        cout << "\n---------------------------------MENU------------------------------\n";
        cout << "\n\t\t1 -  Float array increasingly sort  ";
        cout << "\n\t\t2 -  char array increasingly sort ";
        cout << "\n\t\t3 -  Student array increasingly sort";
        cout << "\n\t\t4 -  Exit !!!";
        cout << "\n------------------------------------------------------------------";
        cout << "\nYour choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            float a[] = { 1.4F,-5.2F,3.3F,0 };
            int n = sizeof(a) / sizeof(a[0]);
            SortAlgorithm<float>* alg = SortAlgorithm<float>::getObjet(SortAlgorithm<float>::SelectionSort);
            alg->Sort(a, n);
            cout << "Array increasingly sorted : ";
            for (int i = 0;i < n;i++)
                cout << a[i] << "\t";
            break;

        }
        case 2:
        {
            char a[]={'A','S','C','D','B'};
            int n = sizeof(a) / sizeof(a[0]);
            SortAlgorithm<char>* alg = SortAlgorithm<char>::getObjet(SortAlgorithm<char>::SelectionSort);
            alg->Sort(a, n);
            cout << "Array increasingly sorted : ";
            for (int i = 0;i < n;i++)
                cout << a[i] << "\t";
            break;

        }
        case 3:
        {
            STUDENT a[] = { new STUDENT("abc",8.5),new STUDENT("dgd",9.5) };
            int n = sizeof(a) / sizeof(a[0]);
            SortAlgorithm<STUDENT>* alg = SortAlgorithm<STUDENT>::getObjet(SortAlgorithm<STUDENT>::SelectionSort);
            alg->Sort(a, n);
            cout << "Array increasingly sorted : ";
            for (int i = 0;i < n;i++)
                cout << a[i] << "\t";
            break;

        }
        case 4:
        {
            exit(0);
            return 0;
        }
        }
    }
}

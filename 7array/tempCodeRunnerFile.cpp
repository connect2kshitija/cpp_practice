
    int i;
    static int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Orignal array is : " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
    modify(arr, 10);
    cout << 
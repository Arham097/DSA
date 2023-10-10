 int n =  10;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for (int i=1; i<=n; i++){
        int Nextnumber = a+b;
        cout<<Nextnumber<<" ";
        a = b;
        b = Nextnumber;     
    }
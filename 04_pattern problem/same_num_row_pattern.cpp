 #include<iostream>
    using namespace std;

    int main()
    {
   
         int num ,i,j;
         cout<<"Enter the number of rows: ";
         cin>>num;
         int n=1;
         for (i=1;i<=num;i++)
             {
                 for (j=1;j<=i;j++)
                         {
                              cout<<n<<" ";
                         }
                 n++;
                 cout<<endl;
            }
        return 0;

}
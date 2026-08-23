   #include<iostream>
    using namespace std;

    int main()
    {
   
         int num ,i,j;
         cout<<"Enter the number of rows: ";
         cin>>num;
         for (i=1;i<=num;i++)
             {
                 for (j=1;j<=num;j++)
                         {
                              cout<<"* ";
                         }
                 cout<<endl;
            }
        return 0;

}
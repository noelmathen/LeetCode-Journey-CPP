class Solution{
    public:
    void Print(int x, int N){
        if(x>N)
            return;
        cout<<x<<" ";
        Print(++x, N);
    }
    void printNos(int N)
    {
        Print(1, N);
    }
};
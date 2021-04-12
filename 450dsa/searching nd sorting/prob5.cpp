class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        int ma=max(A,max(B,C));
        int mi=min(A,min(B,C));
        if(A!=ma and A!=mi)
        {
            return A;
        }
        else if(B!=ma and B!=mi)
        {
            return B;
        }
        else
        {
            return C;
        }
    }
};
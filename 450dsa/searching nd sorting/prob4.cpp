class Solution {
  public:
    int countSquares(int N) {
        long long int i=1;
        int count=0;
        while(i*i<N)
        {
            count++;
            i++;
        }
        return count;
        // code here
    }
};
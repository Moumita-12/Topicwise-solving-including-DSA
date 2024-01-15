class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

      
       vector<int>a(m);
       vector<int>b(n);

       for (int i=0; i<m; i++)
        {
            a[i] = nums1[i];
        }
        for (int i=0; i<n; i++)
        {
            b[i] = nums2[i];
        }

       int i=0, j=0, k=0;
        while(i<m && j<n){
            if(a[i]<b[j]){
                nums1[k] = a[i];
                k++;
                i++;
            }
            else{
                nums1[k] = b[j];
                k++;
                j++;
            }
        }
        while(i<m){
            nums1[k] = a[i];
            i++;
            k++;
        }
        while(j<n){
            nums1[k] = b[j];
            j++;
            k++;
        }
    }
};

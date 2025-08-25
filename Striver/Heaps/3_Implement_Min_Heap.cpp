class Solution{
    private:
        vector<int> nums;
        int count;
    public:
        void heapifyUp(vector<int>& nums, int idx){
            int parent = (idx-1)/2;
            if(parent>=0 && nums[parent] > nums[idx]){
                swap(nums[parent], nums[idx]);
                heapifyUp(nums, parent);
            }
        }

        void heapifyDown(vector<int>& nums, int idx){
            int leftChild = 2*idx+1, rightChild = 2*idx+2, smallest = idx;
            
            if(leftChild<count && nums[leftChild]<nums[smallest])
                smallest = leftChild;
            if(rightChild<count && nums[rightChild]<nums[smallest])
                smallest = rightChild;
            
            if(smallest != idx){
                swap(nums[smallest], nums[idx]);
                heapifyDown(nums, smallest);
            }
        }

        void initializeHeap(){
            nums.clear();
            count=0;
        }

        void insert(int key){
            nums.push_back(key);
            count++;
            heapifyUp(nums, count-1);
            // for(int i=0; i<count; i++){
            //     cout<<nums[i]<<" ";
            // }
            // cout<<endl;
        }

        void changeKey(int index, int new_val){
            if(nums[index] == new_val)
                return;
            
            if(nums[index] < new_val){
                nums[index] = new_val;
                heapifyDown(nums, index);
            }
            else{
                nums[index] = new_val;
                heapifyUp(nums, index);
            }
        }

        void extractMin(){
            if(count==0)
                return;
            // cout<<nums[0]<<endl;
            if(count==1){
                count--;
                nums.pop_back();
                return;
            }
            
            swap(nums[0], nums[count-1]);
            nums.pop_back();
            count--;
            heapifyDown(nums, 0);
        }

        bool isEmpty(){
            return count==0;
        }

        int getMin(){
            return nums[0];
        }

        int heapSize(){
            return count;
        }
};
void minimumBribes(vector<int> q) {
    int n=q.size(), count=0;
    for(int i=0; i<n; i++){
        if(q[i]-i > 3){
            cout<<"Too chaotic"<<endl;
            return;
        }
    }
    for(int i=n-1; i>0; i--){
        if(q[i-1]>q[i]){
            swap(q[i-1], q[i]);
            count++;
            while(i<n-1 && q[i]>q[i+1]){
                swap(q[i], q[i+1]);
                count++;
                i++;
            }
        }
    }
    cout<<count<<endl;
    return;
}
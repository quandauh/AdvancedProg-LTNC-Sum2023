int main() {
    int n;
    int q;
    cin >> n >> q;
    
    vector<vector<int>> arr;
    vector<vector<int>> query;
    
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        vector<int> temp;
        for (int j = 0; j<k; j++){
            int val;
            cin >> val;
            temp.push_back(val);
        }
        arr.push_back(temp);
    }
    
    for(int i = 0; i < q; i++){

        vector<int> temp;
        for (int j = 0; j<2; j++){
            int val;
            cin >> val;
            temp.push_back(val);
        }
        query.push_back(temp);
    }

    for(int i=0;i<q;i++){
        cout << arr[i[0]][i[1]] << endl;
    }
    
    return 0;
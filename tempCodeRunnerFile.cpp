    int v[2][n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    ll sum=INT_MIN;
    for(int i=0;i<n;i++){
        ll currsum=0;
        for(int j=0;j<n;j++){
            if(i==j){
                currsum+=v[0][j]+v[1][j];
            }else{
                currsum+=max(v[0][j],v[1][j]);
            }
        }
        sum=max(currsum,sum);
    }
    cout<<sum<<endl;
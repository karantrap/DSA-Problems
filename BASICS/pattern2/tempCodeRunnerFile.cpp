 for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n-1);j++){
           if(i+j<n+1 || i+j>2*n) cout<<" ";
           else cout<<"*";
        }
        cout<<endl;
    }

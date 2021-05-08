if(i==0 || i==1 ){
        return 0;
    }
    ar[i] =  series(ar,i-1) + f(i);
    return ar[n];
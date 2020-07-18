char* strdup(const char* b){
    int j=0;
    while(b[j]!=0)
        j++;
    char r[j+1];
    for(int i=0; i<j+1; i++){
        r[i]=b[i];
    }
    return r;
}
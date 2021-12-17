int firstUniqChar(char * s){
    
    int arr[26];
    for(int iLoop=0;iLoop<26;iLoop++)
        arr[iLoop]=0;
    for(int iLoop=0;s[iLoop]!='\0';iLoop++){
        arr[(s[iLoop]-'a')]++;
    }
    for(int iLoop=0;s[iLoop]!='\0';iLoop++){
        if((arr[s[iLoop]-'a'])==1){
            return iLoop;
        }
    }
    return -1;
}
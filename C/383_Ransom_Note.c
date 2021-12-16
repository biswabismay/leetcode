bool canConstruct(char * ransomNote, char * magazine){
    int check[26];
    for(int iLoop=0;iLoop<26;iLoop++)
        check[iLoop]=0;
    
    for(int iLoop=0;magazine[iLoop]!='\0';iLoop++){
        check[(magazine[iLoop]-'a')]++;
    }
    for(int iLoop=0;ransomNote[iLoop]!='\0';iLoop++){
        check[(ransomNote[iLoop]-'a')]--;
    }
    for(int iLoop=0;iLoop<26;iLoop++){
        if((check[iLoop]<0) ){
            return false;
        }
    }
    return true;
}
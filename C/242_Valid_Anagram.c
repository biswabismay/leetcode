bool isAnagram(char * s, char * t){
    int arr[26];   //static allocation of an array where [0] is a and [24] is z
    int iLoop2;
    for(int iloop=0;iloop<26;iloop++){    //making each value of array 0
        arr[iloop]=0;
    }
    
    for(iLoop2=0;(s[iLoop2]!='\0') && (t[iLoop2]!='\0');iLoop2++){ //adding 1 to index if present in s, substracting 1 if present in t
        arr[(s[iLoop2]-'a')]++;
        arr[(t[iLoop2]-'a')]--;
        
    }
    if(s[iLoop2]==t[iLoop2]){ 
        for(int iloop=0;iloop<26;iloop++){ //checking if all the values are 0
            if(arr[iloop]!=0)
                return false;
        }
        return true;
    }
    return false;
}
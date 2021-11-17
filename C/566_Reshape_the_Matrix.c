

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    if(matSize*(*matColSize)!=(r*c)){
        r=matSize;
        c=(*matColSize);
    }
    
    //printf("%d %d\n", r, c);
    *returnColumnSizes=(int*)malloc(r*(sizeof(int)));
    for(int iLoop=0;iLoop<r;iLoop++){
        (*returnColumnSizes)[iLoop]=c;
    }
    
    
    
    int** returnarr=(int*)malloc(r*(sizeof(int*)));
    
    for(int iLoop=0;iLoop<r;iLoop++){
        returnarr[iLoop]=(int*)malloc(c*(sizeof(int)));
    }
    
    
    int inputrow=0,outrow=0,outcol=0,returncolalloc=0;
    for(int iLoop=0;iLoop<*matColSize;){
        
        
        returnarr[outrow][outcol]=mat[inputrow][iLoop];
        iLoop++;
        if(iLoop==(*matColSize)){
            iLoop=0;
            inputrow++;
        }
        
        outcol++;
        if(outcol==c){
            outcol=0;
            outrow++;
        }
        if(outrow==r){
            break;
        }
    }
    *returnSize=r;
    
    
    
    return returnarr;
}
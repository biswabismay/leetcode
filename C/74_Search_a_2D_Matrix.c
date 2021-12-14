bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int rowno=0;
    for(int iLoop=0;iLoop<(*matrixColSize);iLoop++){
        //printf("loop \n");
        //printf("iLoop BIG %d \n",iLoop);
        if(matrix[rowno][iLoop]==target){
            //printf("true result \n");
            return true;
        }
        if(iLoop==(*matrixColSize)-1){
            //printf("row increment \n");
            rowno++;
            iLoop=-1;
            //printf("iLoop= %d \n",iLoop);
        }
        if(rowno==matrixSize){
            //printf("false result \n");
            return false;
        }
        //printf("iloop end %d \n",iLoop);
    }
    //printf("out loop \n");
    return false;
}
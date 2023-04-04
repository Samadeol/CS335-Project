public class SumOfArray {  
    
    void not_main(String[] args)
    {
        int num = 5;
        int x = 0;
 
        // Outer loop for rows
        for (int i = 1; i <= num; i++) {//provide support for nested FOR blocks
            x = i - 1;
 
            for (int j = i; j <= num - 1; j++) {
                x = 2;
            }
 
     
            for (int j = 0; j <= x; j++){
                    //provided support for empty FOR  blocks
            }
 
            for (int j = 1; j <= x; j++){

                    if(j==2)
                        continue;//provided support for continue;                
            }
            return;
        }
    }

    public static void main(String[] args) {  // Provided support for multiple functions
        //Initialize array  
        int arr[] = new int [5];  //Provided support for array initialization
        arr[1] = 3;
        int sum = 0;  
    }  
}
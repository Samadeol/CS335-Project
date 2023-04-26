class PalindromeExample{  
	public static void main(String args[]){  
	 int r=0;
	 int sum=0;
	 int temp=0;   
	 int n=454;//It is the number variable to be checked for palindrome  
	 
	 temp=n;    
	 while(n>0){    // supporting while statements
	  r=n%10;  
	  sum=sum*10+r;    
	  n=n/10;    
	  if(n==10){
		break;  // supporting break statement
	  }
   }    
  System.out.println(n);
   }  
   } 
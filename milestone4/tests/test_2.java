class HelloWorld {

   int fib(int n){
      if(n<=1) return 1;
      else return fib(n-1)+fib(n-2);
   }
   public static void main(String[] args) {
         int x=1;
         int y=2;
         int z=10;
         for(int p=4;p<5;p++){
            p+=9;
            z--;
            if(p>4){
               break;
            }
            else{
               y=1;
               z++;
            }

            for(int w=2;w<9;w++){
               if(w>3)
               break;
            }
         }
         System.out.println(z);
         System.out.println(x);
         System.out.println(y);
         System.out.println(fib(5));
}
}
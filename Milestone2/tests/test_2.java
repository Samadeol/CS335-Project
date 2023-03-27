class HelloWorld {
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
}
}
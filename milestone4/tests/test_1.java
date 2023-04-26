class HelloWorld {
    public static void main() {
        int x=10;
        int y=11;
        
        // float z=1;
        // float d=z+x+y;// to show cast_to_float functionality
        x+=1;
        x=y;
        x=y+3;
        if(x<10){
            x=x-1;
        }
        else {
            x=x+1;
        }
        if(x<y || x>100 || x<5 || x>7){
            if(x!=3){
                x*=3;
            }
        }
        System.out.println(x);
    }
}
class HelloWorld {
    public static void main(String[] args) {
        int x=10;
        int y=11;
        x+=1;
        x=y;
        x=y+3;
        if(x<10){
            x--;
        }
        else {
            x++;
        }
        if(x<y || x>100 || x<5 || x>7){
            if(x==3){
                x*=3;
            }
        }
    }
}
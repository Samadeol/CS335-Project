class BreakLoopDemo {
    public static void main(String args[])
    {       
        int x=2;
        if(x<2){
            x=x+1;
        }
        else {
            x=x+3;
        }
        for (int i=0; i < 10;i++) {
            if(i==5)
                break;
        }
    
    }
}
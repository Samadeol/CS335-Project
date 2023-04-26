public class test_11 {

    public static void main(){
        int x=3;
        int y=6;
        if(x>2 || x<5 || x==y){
            x++;
            y--;
        }
        x*=3;
        x^=2;
        x=x<<2;
        for(int i=0;i<4;i++){
            y=2*y;
        }
}

}
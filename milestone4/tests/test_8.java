public class test_10 {
    public static void main(String[] args){
        int c=3;
    
        check boy=new check();
        int x=boy.add(10,20);
        System.out.println(x);
    }

}
class check {
    
    int add(int a, int b){
        int c=a+b;
        return c;
    }
}
public class test_11 {
    hero h;
    public static void main(){
        h = new hero();
        int c=h.add(h);
    }
}

 class hero{
    int name;
    int a;
    int b=7;
    int add(hero h){
        int c=h.a+h.b;
        return c;
    }
}

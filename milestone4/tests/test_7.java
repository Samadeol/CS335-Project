class HelloWorld {
    kit ob; 
    public static void main(String[] args) {
        ob=new kit();
        HelloWorld h=new HelloWorld();
        h.ob.name=1;
        h.ob.id=2;
        h.ob.roll=3;    
    }
}

class kit{
    int name;
    int id;
    int roll;
    public static void main(String[] args){
        kit k=new kit();
        k.name=1;
        k.id=2;
    }
}
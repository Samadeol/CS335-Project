class test_12 {
    public static void main(String[] args) {
        bob game=new bob();
        int answer=game.check_roll(200115);
        System.out.println(answer);

    }
}
class bob{
    int name=1;
    int roll=200886;
    int check_roll(int roll){
        if(roll==200886){
            return 1;
        }
        else return 0;
    }
}
import java.util.*;
public class Temp1
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        StuList set = new StuList();
        int ch = 0 ,chis = 1;
        while(chis == 1){
            System.out.print("enter 1 to enter a stu details\nenter 2 to see stu details\nenter 3 to exit\nenter : ");
            ch  = scan.nextInt();
            switch(ch)
            {
                case 1:
                    set.addstu();
                    break;
                case 2:
                    set.prin();
                    break;
                case 3:
                    chis = 0;
                    break;
                default:
                    System.out.println("enter right input");
            }
        }
    }
}
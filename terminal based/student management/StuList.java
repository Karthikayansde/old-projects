import java.util.ArrayList;
import java.util.Scanner;

public class StuList 
{
    Scanner scan = new Scanner(System.in);
    ArrayList<Student> stu = new ArrayList<Student>();
    int buf = 0;
    void addstu()
    {
        String name;
        int id;
        if(buf>=1)
        {
            scan.nextLine();
        }
        buf++;
        System.out.print("enter a name : ");
        name = scan.nextLine();
        System.out.print("enter a ID : ");
        id = scan.nextInt();
        Student d = new Student(name, id);
        stu.add(d);
    }
    void prin()
    {
        for (Student e : stu)
        {
            e.printd();
        }
    }
}
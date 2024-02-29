import java.util.Scanner;
class Student {
    String name;
    int roll;
    static String college;
    void setStudent(Scanner sc){
        System.out.print("Enter Student name : ");
        name = sc.nextLine();
        System.out.print("Enter Student's rollNumber : ");
        roll = sc.nextInt();
    }
    void display(){
        System.out.println("Student name is " + name + " and his/her rollnumber is : " + roll + " and college is " + college);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter College name : ");
        Student.college = sc.nextLine();
        Student s = new Student();
        s.setStudent(sc);
        s.display();
    }
}

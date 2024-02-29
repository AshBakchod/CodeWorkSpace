import java.util.Scanner;
class Student {
    String name;
    int roll;
    static String college;
    void setStudent(Scanner sc){
        System.out.print("Enter Student name : ");
        name = sc.next();
        System.out.print("Enter Student's rollNumber : ");
        roll = sc.nextInt();
    }
    void display(){
        System.out.println("Student name is " + name + " and his/her rollnumber is : " + roll + " and college is " + college);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter College name for all Students : ");
        Student.college = sc.nextLine();
        Student s1 = new Student();
        s1.setStudent(sc);
        s1.display();
        Student s2 = new Student();
        s2.setStudent(sc);
        s2.display();
        Student s3 = new Student();
        s3.setStudent(sc);
        s3.display();
    }
}

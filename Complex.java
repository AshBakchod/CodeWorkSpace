import java.util.Scanner;
class Complex{
    int real;
    int img;
    Complex(int r, int i){
        real=r;
        img=i;
    }
    void display(){
        System.out.println(real + " + " + img + "i");
    }
    Complex add(Complex c){
        return new Complex(this.real+c.real,this.img+c.img);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the real and imaginary part of the first Complex Number : ");
        int real = s.nextInt();
        int img = s.nextInt();
        Complex c1 = new Complex(real,img);
         System.out.print("Enter the real and imaginary part of the Second Complex Number : ");
        real = s.nextInt();
        img = s.nextInt();
        Complex c2 = new Complex(real,img);
        Complex c3 = c1.add(c2);
        System.out.print("The Sum of the above two Complex Nos is : ");
        c3.display();
    }
}

// Online Java Compiler
// Use this editor to write, compile and run your Java code online
class Employee{
    String name;
    double salary;
    
    Employee(String name,double salary)
    {
        this.name=name;
        this.salary=salary;
    }
    void display()
    {
        System.out.println("Employee name :"+ name);
        System.out.println("Employee salary :"+salary);
    }
}
class Manager extends Employee{
    int teamSize;
    Manager(String name,double salary,int teamSize){
        super(name,salary);
        this.teamSize=teamSize;
    }
    void display()
    {
        super.display();
        System.out.println("Team size : "+teamSize);
    }
}
class Developer extends Employee{
    String programl;
    Developer(String name,double salary,String programl){
        super(name,salary);
        this.programl=programl;
    }
    void display(){
        super.display();
        System.out.println("Program language :"+programl);
    }
}
class Main {
    public static void main(String[] args) {
        Employee emp1=new Manager("Alice",8000,5);
        Employee emp2=new Developer("Bobi",10000,"java");
        emp1.display();
        emp2.display();
        
    }
}

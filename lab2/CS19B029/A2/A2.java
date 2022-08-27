import syntaxtree.*;
import visitor.*;

public class A2 {
   public static void main(String [] args) {
      try {
         Node root = new MiniJavaParser(System.in).Goal();
         Object symbolTable = root.accept(new GJDepthFirstStore(), null); // Your assignment part is invoked here.
         root.accept(new GJDepthFirstCheck(), symbolTable); // Your assignment part is invoked here.
         System.out.println("Program type checked successfully");
      }
      catch (ParseException e) {
         System.out.println(e.toString());
      }
   }
} 


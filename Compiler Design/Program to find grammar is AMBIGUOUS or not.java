public class AmbigouosGrammar {
 public static void main(String[] args) {
 Scanner sc = new Scanner(System.in);
 String production[] = new String[3];
 production[0] = "E + id";
 production[1] = "id * E";
 production[2] = "id";
 System.out.println("********<< LMD >>*******");
 String modify_Prod1[] = new String[3];
 modify_Prod1 = production[0].split(" ");
 System.out.println("printing original split
"+modify_Prod1[0]);
 modify_Prod1[0] = production[1];
 System.out.println("printing modififed
"+modify_Prod1[0]);

 String FirstFinal="";
 for(int i=0;i<3;i++){
 FirstFinal=FirstFinal+" "+modify_Prod1[i];
 }
 System.out.println("firstFinal "+FirstFinal);
 System.out.println("********<< RMD >>*******");
 String modify_Prod2[] = new String[3];
 modify_Prod2 = production[1].split(" ");
 System.out.println("printing original split
"+modify_Prod1[0]);
 modify_Prod2[0] = production[0]; System.out.println("printing modififed
"+modify_Prod2[0]);

 String SecondFinal="";
 for(int i=2;i>=0;i--)
 SecondFinal=SecondFinal+" "+modify_Prod2[i];
 System.out.println("SecondFinal "+SecondFinal);
 System.out.println("\n\nSince LMD == RMD Give
Grammar is Ambiguous\n\n");
 }
}

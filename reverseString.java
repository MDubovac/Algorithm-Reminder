import java.lang.String;

class Main {
  public static void main(String[] args) {
    
    String word = "cat";
    String reversed = "";
    char temp;

    for (int i = 0; i < word.length(); i++) {
      temp = word.charAt(i);
      reversed = temp + reversed;
    }

    System.out.println(reversed);
  }

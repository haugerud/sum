class Sum {
    // Unix:  $ javac Sum.java
    //        $ time java Sum
   public static void main(String args[])
   {
    int TIMES = 20000;

    int maxC = 500000;
    int i,j;
    long sum = 0;
    int tall; 
    for(j=0;j < TIMES;j++)
       {
       sum = 0;
       for(i=0;i < maxC;i++)
	  {
	  tall = (i + 1)*(i + 1) - i*i;
	  sum = sum + tall;
	  }
       }
    System.out.println("Ferdig " + sum + "\n");
   }
}


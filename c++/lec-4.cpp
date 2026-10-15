#include<iostream>
using namespace std;

int main(){ 

   /* int n;
    cin>>n;

    int sum = 0;
    int i=1;

    while (i<=n) { 

        sum=sum+i;
        i=i+1;

        cout << sum << endl;
    } */



   int n;
   cin>>n; 

   int i = 2;
   int sum = 0;

   while (i<=n){ 

    i=i+2;
    sum=sum+i;

    cout << sum << " " ;
   }



    /*int n;
    cin>>n;

     int i = 1;

     while(i<n){ if (n%i==0){cout << "not prime for :"<< i << endl;}  

     else{cout << "prime for :"<< i << endl;} 

     i=i+1;}

     return 0;*/




      /*int n;
      cin>>n;

      int i = 1;

      while (i<=n){ 

              int j = 1;
              while(j<=n){cout << '#';
              
              
                     j=j+1;}


                     cout << endl;

                     i=i+1;

              

              
      } */





   //   int n;
   //   cin>>n;

   //   int i=1;


   //   while(i<=n){


   //      int j=1;
   //      while(j<=n){ cout <<i;
        
   //      j=j+1;}

   //      i=i+1;
   //      cout<<endl;
   //    } 






     // Q-2 of pattern



    /* int n;
     cin>>n;

     int i=1;

     while (i<=n){ 

        int j=1;
        while(j<=n){ cout << j;
        j=j+1 ;}


        i=i+1;
        cout <<endl;
     } */





    /*int n;
     cin>>n;

     int i=1;

     while (i<=n){ 

        int j=1;
        while(j<=n){ cout << n-j+1;
        j=j+1 ;}


        i=i+1;
        cout <<endl;
     } */



      
  /*int n;
     cin>>n;

     int i=1;

     while (i<=n){ 

        int j=1;
        while (j<=i){
            cout << i;
               j=j+1;  }

               i=i+1;
               cout << endl;


}*/


    /* int n;
     cin>>n;

     int i=1;

     while (i<=n){ 

        int j=1;
        while (j<=i){
            cout << "*";
               j=j+1;  }

               i=i+1;
               cout << endl;


}*/



    /* int n;
     cin>>n;

     int i=1;
     int count = 1;

     while (i<=n){ 

        int j=1;
        while (j<=n){
            cout << count;

          count = count + 1;
               j=j+1;  }

               i=i+1;
               cout << endl;


} */





/*int n;
cin>>n;

int i=1;
int count =1;

while(i<=n){ 

    int j=1;
    while(j<=i){

        cout<< count;
        count = count +1 ;

        j=j+1;
     }

     i=i+1;
     cout<<endl;
}*/



/*int n;
cin>>n;

int i=1;

while(i<=n){

   int j=1;
   int value = i;
   while(j<=i){ 
      
      cout<<value;
      value=value+1;
       
        j=j+1;}


        cout << endl;
        i=i+1;
} */



      /*int n;
      cin>>n;


      int i=1;


      while (i<=n){

         int j=1;
         while(j<=i){ cout << (i-j+1) ;
              j=j+1;}


              cout << endl;
              i=i+1;
      }*/




    /* int n;
     cin>>n;

     int i=1;

     while(i<=n) { 

           int j=1;
           while(j<=n){ 

            char ch= 'A'+ i - 1;
            cout << ch;
            j=j+1;

           }

           cout << endl;
           i=i+1;
     }*/


    /* int n;
     cin>>n;

     int i=1;

     while(i<=n) { 

           int j=1;
           while(j<=n){ 

            char ch= 'A'+ j - 1;
            cout << ch;
            j=j+1;

           }

           cout << endl;
           i=i+1;
     }*/



 // 29:49 q pending


/* int n;
 cin>>n;

 int i = 1 ;

 while (i<=n){

     int j=1;
     while(j<=n){

         char ch= 'A'+i+j-2;
         cout << ch<< " ";
         j=j+1;
     }
        cout << endl;
        i=i+1;}*/




     /* int n;
      cin>>n;

      int i=1;


      while (i<=n){ 
              
              int j=1;
              while (j<=i){  char ch= 'A'+i-1;
                  cout << ch;
                  j=j+1;
              }

              cout << endl;
              i=i+1;
      }*/


     /*int n;
     cin>>n;

     int i=1;

     while (i<=n){  
          
          int j=1;
          while (j<=i){char ch= 'A'+i+j-2;
          
                 cout << ch ;
                 j=j+1;}

                 cout << endl;
                 i=i+1;
     }*/




     /*int n;
     cin>>n;

     int i=1;

     while(i<=n){ 

          int space = n-i;
          while(space){
               cout << " ";
               space=space-1;
          }

          int j=1;
          while(j<=i){
             cout << '*';
             j=j+1;
          }

          cout << endl;
          i=i+1;
     }*/

 
            // homework


    /*int n;
     cin>>n;

     int i=1;

     while(i<=n){ 

         int j=1;
         while(j<=n-i+1){ cout << '*';
               
               j=j+1;}

               cout << endl;
               i=i+1;


     }*/

     
      
           // homework



  /* int n;
    cin >> n;

    int i = 1;

    while (i<=n){  

      int space = 1;
      while (space<=i-1){ cout << " ";
         space = space +1;
      }

      int j=1;
      while (j<=n-i+1){cout << '*';
             j=j+1;}

             cout << endl;
             i=i+1;
    }*/
        

          // homework


       /* int n;
    cin >> n;

    int i = 1;

    while (i<=n){  

      int space = 1;
      while (space<=i-1){ cout << " ";
         space = space +1;
      }

      int j=1;
      while (j<=n-i+1){ cout << i;
           j=j+1;}

           cout << endl;
           i=i+1;
}*/



         // Homework
    /* int n;
    cin >> n;

    int i = 1;

    while (i<=n){  

      int space = n-i;
      while (space){ cout << " ";
         space = space-1;
      }

      int j=1;
      while (j<=i){ cout << i;
      
              j=j+1;}

              cout << endl;
              i=i+1;

}*/

    /*int n;
    cin>>n;


    int i=1;

    while(i<=n){ 

         int space = n-i;
         while(space){ 
         cout << " ";
         space = space-1;}

          int j=1;
          while(j<=i){
               cout << j ;
               j=j+1;

          }

          int start = i-1;
          while(start){
            cout << start ;
            start = start -1;
          }

          cout << endl;
          i=i+1;
    }*/


    /*int n;
    cin>>n;


    int i=1;

    while(i<=n){

      int j=1;
      while(j<=n-i+1){

         cout << j  ;
         j=j+1;
      }

       j=1;
      while(j<=(i-1)*2){

         cout << '*';
         j=j+1;
      }

      j=n-i+1;
      while(j>=1){

         cout << j;
         j=j-1;
      }
    
    cout << endl;
    i++;}*/



}

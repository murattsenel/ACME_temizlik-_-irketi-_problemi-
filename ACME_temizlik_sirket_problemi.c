#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int count =0;
int count2 =0;
int count_tutucu =0;
int iteration_count =0;                  
int iteration =0;              
int isci_deger_tutucu=0;
int kidemli_deger_tutucu=0;

int i;
int j;

/*her bir sirket icin dizi olusturdum.*/
int random_kidemli[10];
int random_kidemli_tutucu[10];
int random_isci[47];
int random_isci_tutucu[47];
int a_sirketi[5];
int b_sirketi[5];
int c_sirketi[14];
int d_sirketi[8];
int e_sirketi[4];
int f_sirketi[5];
int g_sirketi[5];
int h_sirketi[5];
int j_sirketi[5];
// isci adlarini ekrana yazdirabilmek icin isimleri sayiya cevirdim.

enum isciler {W_1,W_2,W_3,W_4,W_5,W_6,W_7,W_8,W_9,W_10,W_11,W_12,W_13,W_14,W_15,W_16,W_17,W_18,W_19,W_20,W_21,W_22,W_23,W_24,W_25,W_26,W_27,W_28,
W_29,W_30,W_31,W_32,W_33,W_34,W_35,W_36,W_37,W_38,W_39,W_40,W_41,W_42,W_43,W_44,W_45,W_46,W_47};

enum isciler isci;

 


char *isciad[] = {"W_1","W_2","W_3","W_4","W_5","W_6","W_7","W_8","W_9","W_10","W_11","W_12","W_13","W_14","W_15","W_16","W_17","W_18","W_19","W_20","W_21","W_22","W_23",
"W_24","W_25","W_26","W_27","W_28","W_29","W_30","W_31","W_32","W_33","W_34","W_35","W_36","W_37","W_38","W_39","W_40","W_41","W_42","W_43","W_44","W_45","W_46","W_47"};


enum kidemli_isci {LW_1,LW_2,LW_3,LW_4,LW_5,LW_6,LW_7,LW_8,LW_9,LW_10};

enum kidemli_isci kidemli;

char *kidemliad[] = {"LW_1","LW_2","LW_3","LW_4","LW_5","LW_6","LW_7","LW_8","LW_9","LW_10"};



main() {
srand(time(NULL));



      kidemli=LW_1;    
      isci=W_1;
      kidemli_deger_tutucu=kidemli;    // fonksiyona ilk giris degeri tutuyor
      isci_deger_tutucu=isci;          // fonksiyona ilk giris degeri tutuyor
      
      printf(" \n                                             ACME TEMIZLIK SIRKETI ISCI OTOMASYONU\n\n");
      printf("lutfen istediginiz iterasyon adetini giriniz = ");
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   scanf("%d",&iteration);
    
    while(iteration_count<iteration) // istenilen iterasyon adeti kadar tablo Ã¼retiyor
    {    
    bas :
    printf("megri");
    	if(iteration_count%3==0||iteration_count==0) 
    	{
    		
	
    	for(count=0;count<10;count++)
	{   
	

	int random = 0;
    random=rand()%10;
   // printf("| %d  ", random);

if(count==0)
   {
     random_kidemli[count]=random;	
     
	}
      for(count2=0;count2<count;count2++)
      {
      	if(random_kidemli[count2]==random)
      	{
      		count--;
      		break;
		  }
		  else
		  {
		  	random_kidemli[count]=random;	
		  }
		  	
	  }
	 // printf("|   %d    ", random_kidemli[count]);
 }
  
}
if(iteration_count%3==0) 
{
////////////// a ve b şirketi bir sonraki kidemli işçi önceki çalışanla aynı mı diyekontrol ediyor.
  for(i=0;i<2;i++)
   {
  
  if(random_kidemli[i]==random_kidemli_tutucu[i])
  {
  	count_tutucu=i;
  	goto bas;
  }
   }
   
   
   
   //////////////////////////////////////////// c şirketi kıdemli işçi yerleştirme
   for(j=2;j<4;j++)
 {
    for(i=2;i<4;i++)
   {
       if(random_kidemli[i]==random_kidemli_tutucu[j])
       {
  	   goto bas;
  	
       }
   }  
}
 ////////////////////////////////////////////////////// d sirketi kontrol
 for(j=4;j<6;j++)
 {
    for(i=4;i<6;i++)
   {
       if(random_kidemli[i]==random_kidemli_tutucu[j])
       {
  	   goto bas;
  	
       }
   }  
}
///////////////////////////////////////////////////// e , f ve g sirketi kontol
 for(i=6;i<9;i++)
   {
  
  if(random_kidemli[i]==random_kidemli_tutucu[i])
  {
  	count_tutucu=i;
  	goto bas;
  }
   }

}

//////////////////////////////////////////////////////////////////////// iscileri rasgele dagıtma


for(count=0;count<47;count++)
	{   
	

	int random = 0;
    random=rand()%47;
   // printf("| %d  ", random);

if(count==0)
   {
     random_isci[count]=random;	
     
	}
      for(count2=0;count2<count;count2++)
      {
      	if(random_isci[count2]==random)
      	{
      		count--;
      		break;
		  }
		  else
		  {
		  	random_isci[count]=random;	
		  }
		  	
	  }	
 }
  





















  for(count=0;count<10;count++)
	 {
	
    random_kidemli_tutucu[count]=random_kidemli[count];
     }
     
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	  
    	iteration_count++;
    	kidemli=kidemli_deger_tutucu;
     	isci=isci_deger_tutucu;
     	
   	    
   //sirket A icin isci yerlestirme 
   
  // count kullanilmasinin nedeni iscilerin her zaman degisecek olmasi
   
   	a_sirketi[0]=random_kidemli[0];
   	kidemli++;
   	if(kidemli>8)
   	kidemli=0;
    for(count=1;count<5;count++)
  	{
   	
   	 	a_sirketi[count]=isci;
   	 	isci++;
   	 
   	// dizide 47 eleman oldugu iÃ§in dizi  boyutu asildiginda dizi ilk elemana geri donuyor.
   	 	if(isci>46)
   		 isci=0;

   	}
   

 //////////////////////////////////////////// B sirketi isci atamasi
   
   
   	b_sirketi[0]=random_kidemli[1];
   	kidemli++;
   	if(kidemli>8)
   	kidemli=0;
    for(count=1;count<5;count++)
    {
   	
   	    b_sirketi[count]=isci;
   	    isci++;
        if(isci>46)
   	    isci=0;
    }
   
   
   //////////////////////////////////////// C sirketi isci atamasi
    for(count=2;count<4;count++)
   {
   	    c_sirketi[count-2]=random_kidemli[count];
   	    kidemli++;
   	    if(kidemli>8)
   	    kidemli=0;
   	 }   
		
         for(count=2;count<14;count++)
  		 {
   	
   	    c_sirketi[count]=isci;
   	    isci++;
        if(isci>46)
   	     isci=0;
  	 }
   
   
   ///////////////////////////////////////////////////// D sirketi isci atamasi
    for(count=4;count<6;count++)
   {
   	    d_sirketi[count-4 ]=random_kidemli[count];
   	    kidemli++;
   	    if(kidemli>8)
   	    kidemli=0;
   }
     for(count=2;count<8;count++)
   {
   	
   	  	d_sirketi[count]=isci;
   	  	isci++;
      	if(isci>46)
   	    isci=0;
   }
   
   ///////////////////////////////////////// e sirketi isci atamasi
      
   
   	e_sirketi[0]=random_kidemli[6];
   	kidemli++;
   	if(kidemli>8)
   	kidemli=0;
     for(count=1;count<4;count++)
   {
   	
   	 	e_sirketi[count]=isci;
   	 	isci++;
      	if(isci>46)
   	   	isci=0;
   }
   
   
   ////////////////////////////////////////////////// f sirketi isci atamasi
      
   
   	f_sirketi[0]=random_kidemli[7];
   	kidemli++;
   	if(kidemli>8)
   	kidemli=0;
   	 
     for(count=1;count<3;count++)
   {
   	
   	 	f_sirketi[count]=isci;
   	 	isci++;
     	 if(isci>46)
   	    isci=0;
   }
   
   /////////////////////////////////////////////////////// G Sirketi isci atamasi
   
        
   
   	g_sirketi[0]=random_kidemli[8];
   	kidemli++;
   	if(kidemli>8)
   	kidemli=0;
   	 
     for(count=1;count<6;count++)
   {
   	
   	 	g_sirketi[count]=isci;
   	 	isci++;
     	if(isci>46)
   	 	isci=0;
   }
   
   ////////////////////////////// h sirketi isci atamasi
       
   
    h_sirketi[0]=isci;
   	isci++;
   	if(isci>46)
   	isci=0;
     
   
     //////////////////////////////////////////////////////////// j sirketi isci atamasi

   	 j_sirketi[0]=isci;
   	 
   	 
      isci_deger_tutucu+=12;  //iscilerin ayni firmada calismamasi icin minumum degismesi gereken sayi
      
      if(isci_deger_tutucu>46) // dizi boyutu asildigi zaman diziyi basa donduruyor
   	    isci_deger_tutucu-=47;
   	  
      if(iteration_count%3==0)        // her 3 iterasyonda kidemli iscilerin 2 birim kaydirilmasi gerekir
        kidemli_deger_tutucu+=2;
      
      if(kidemli_deger_tutucu>9) // dizi boyutu asildigi zaman diziyi basa donduruyor
   	    kidemli_deger_tutucu-=9;
      
	  
	                           //tablonun baslik olusturulmasi
	    printf("\n\n\n\n\n");
        printf("                                                          %d.ITERASYON                                                        \n\n",iteration_count);
        printf("FIRMALAR |     A     |     B     |     C     |     D     |     E     |     F     |     G     |     H     |     J     |\n");
        printf("         |___________|___________|___________|___________|___________|___________|___________|___________|___________|\n");
        
        
     for(count=0;count<14;count++)      // tablo olusturma dongusu
     {
     	 
     	 
     	////////////////////////////////////////////////// A sirketi
     	
     if(count<5)// sirkete dÃ¶nderilen eleman sayisi kadar tabloya yazdirilsin.
     {
		 
     	  if(count<1)    
		   {   //sirkete gonderilen kidemliler Ã¶nce yaziliyor.
		 
		     if(a_sirketi[count]>8)
		     printf("         |   %s   ", kidemliad[a_sirketi[count]]); 
		     else
     	     printf("         |   %s    ", kidemliad[a_sirketi[count]]); 
     	
           }
     	   else
     	  {
		     if(a_sirketi[count]>8)
		     printf("         |   %s    ", isciad[a_sirketi[count]]);
	         else
     	     printf("         |   %s     ", isciad[a_sirketi[count]]);
          }
        
     }
     else                   // yazilmayan isciler yerine tabloya bosluk konulmasi.
     printf("         |           ");
        
        
         ///////////////////////////////////////////////////// B sirketi
         
        if(count<5)// sirkete gonderilen eleman sayisi kadar tabloya yazdirilsin.
     {
		 
     	  if(count<1)    
		   {   //sirkete gonderilen kidemliler once yaziliyor.
		 
		     if(b_sirketi[count]>8)
		     printf("|   %s   ", kidemliad[b_sirketi[count]]); 
		     else
     	     printf("|   %s    ", kidemliad[b_sirketi[count]]); 
     	
           }
     	   else
     	  {
		     if(b_sirketi[count]>8)
		     printf("|   %s    ", isciad[b_sirketi[count]]);
	         else
     	     printf("|   %s     ", isciad[b_sirketi[count]]);
          }
        
     }
     else                   // yazilmayan isciler yerine tabloya bosluk konulmasi.
     printf("|           ");
        
        
          /////////////////////////////////////////////////////  C sirketi 
    if(count<14)
     {
		 
     	  if(count<2)    
		   {   
		 
		     if(c_sirketi[count]>8)
		     printf("|   %s   ", kidemliad[c_sirketi[count]]); 
		     else
     	     printf("|   %s    ", kidemliad[c_sirketi[count]]); 
     	
           }
     	   else
     	  {
		     if(c_sirketi[count]>8)
		     printf("|   %s    ", isciad[c_sirketi[count]]);
	         else
     	     printf("|   %s     ", isciad[c_sirketi[count]]);
          }
        
     }
     else                   
     printf("|           ");     
        
        
          /////////////////////////////////////////////////////  D sirketi
          
    if(count<8)
     {
		 
     	  if(count<2)    
		   {  
		 
		     if(d_sirketi[count]>8)
		     printf("|   %s   ", kidemliad[d_sirketi[count]]); 
		     else
     	     printf("|   %s    ", kidemliad[d_sirketi[count]]); 
     	
           }
     	   else
     	  {
		     if(d_sirketi[count]>8)
		     printf("|   %s    ", isciad[d_sirketi[count]]);
	         else
     	     printf("|   %s     ", isciad[d_sirketi[count]]);
          }
        
     }
     else                   
     printf("|           ");      
        
        
          //////////////////////////////////////////////////// E sirketi 
    if(count<4)
     {
		 
     	  if(count<1)    
		   {   
		 
		     if(e_sirketi[count]>8)
		     printf("|   %s   ", kidemliad[e_sirketi[count]]); 
		     else
     	     printf("|   %s    ", kidemliad[e_sirketi[count]]); 
     	
           }
     	   else
     	  {
		     if(e_sirketi[count]>8)
		     printf("|   %s    ", isciad[e_sirketi[count]]);
	         else
     	     printf("|   %s     ", isciad[e_sirketi[count]]);
          }
        
     }
     else                   
     printf("|           ");     
        
           //////////////////////////////////////////////// F sirketi
    if(count<3)
     {
		 
     	  if(count<1)    
		   {   
		 
		     if(f_sirketi[count]>8)
		     printf("|   %s   ", kidemliad[f_sirketi[count]]); 
		     else
     	     printf("|   %s    ", kidemliad[f_sirketi[count]]); 
     	
           }
     	   else
     	  {
		     if(f_sirketi[count]>8)
		     printf("|   %s    ", isciad[f_sirketi[count]]);
	         else
     	     printf("|   %s     ", isciad[f_sirketi[count]]);
          }
        
     }     
        else
        printf("|           ");
        
        
          /////////////////////////////////////////////// G sirketi
    if(count<6)
     {
		 
     	  if(count<1)    
		   {   
		 
		     if(g_sirketi[count]>8)
		     printf("|   %s   ", kidemliad[g_sirketi[count]]); 
		     else
     	     printf("|   %s    ", kidemliad[g_sirketi[count]]); 
     	
           }
     	   else
     	  {
		     if(g_sirketi[count]>8)
		     printf("|   %s    ", isciad[g_sirketi[count]]);
	         else
     	     printf("|   %s     ", isciad[g_sirketi[count]]);
          }
        
     }      
      	else
        printf("|           ");
        
   		   //////////////////////////////////////////////  H sirketi
   		   
   	 if(count<1)
   	 {
		  if(h_sirketi[count]>8)
		     printf("|   %s    ", isciad[h_sirketi[count]]);
	         else
     	     printf("|   %s     ", isciad[h_sirketi[count]]);
   	 }
   		  else
        printf("|           ");
        
   		     //////////////////////////////////////////////////// J sirketi
   		     
   	if(count<1)
   	 {
		  if(j_sirketi[count]>8)
		     printf("|   %s    |", isciad[j_sirketi[count]]);
	         else
     	     printf("|   %s     |", isciad[j_sirketi[count]]);
   	 }
   		  else
        printf("|           |");	 

     	printf("\n         |___________|___________|___________|___________|___________|___________|___________|___________|___________|\n");
	 }
  }  
}

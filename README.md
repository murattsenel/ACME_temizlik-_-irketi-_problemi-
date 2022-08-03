# ACME_temizlik-_-irketi-_problemi-
algoritma oluşturmadan önce bilinenler
47 işçi
10 kıdemli işçi var
c firması 12 işçi istiyor 3 iterasyon sonunda c firmasında farklı 36 işçi çalışmış olacaktır
geriye 11 işçi kalacağından iterasyon son bulur ve kidemlilerin yer değiştirmesi gerekir.

Çözmem gerekenler 
kıdemli işçiler nasıl bir basamak kaydırılacak*** ÇÖZÜLDÜ
Bu işçileri her biri bir kere çalışmak üzere nasıl dağıtılacak*** ÇÖZÜLDÜ
her işçinin çalışması için boşta kalan 11 işçi nasıl iş planına alınacak*** ÇÖZÜLDÜ
işçilerin isimleri uzun karakterler bunlar nasıl yazdıralacak *** ÇÖZÜLDÜ
işçileri doğru biçimde şirketlere yerleştirmek için her şirket adına dizi açılacak*** ÇÖZÜLDÜ
tablo oluşturulacak.




çözüm bulduklarım

kıdemli işçileri 9 firma arasında atama yapmak için 2lik sayı sistemi mantığı kullanılacak kıdemli işçiler bir basamak kaydıralacak
işçilerin adının ekrana yazdırılması enum tipi kullanılarak çözüldü
işçileri uygun biçimde tek bir şirket dizisine yerleştirebildim
kod çok uzun olmaya başladı kodları funcsiyon haline getirince geri dönüş değeri alamıyorum.



DENENECEKLER

İşçileri tablo yapmadan önce her şirket için bir dizi oluşturacak ve işçiler bu dizilere istenilen kurallarda yerleştirilecek. Çözüldü.




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
örnek kod
clude <stdio.h>
int count =0;
int count2 =0;              /* while içindeki count2 max isci iterasyonunu kontrol ediyor.*/
int isci_deger_tutucu=0;
int kidemli_deger_tutucu=0;

/*her bir şirket için dizi olusturdum.*/
int a_sirketi[5];
int b_sirketi[5];
int c_sirketi[14];
int d_sirketi[8];
int e_sirketi[4];
int f_sirketi[5];
int g_sirketi[5];
int h_sirketi[5];
int j_sirketi[5];

/*
enum isciler {W_1,W_2,W_3,W_4,W_5,W_6,W_7,W_8,W_9,W_10,W_11,W_12,W_13,W_14,W_15,W_16,W_17,W_18,W_19,W_20,W_21,W_22,W_23,W_24,W_25,W_26,W_27,W_28,
W_29,W_30,W_31,W_32,W_33,W_34,W_35,W_36,W_37,W_38,W_39,W_40,W_41,W_42,W_43,W_44,W_45,W_46,W_47};

enum isciler isci;

char *isciad[] = {"W_1","W_2","W_3","W_4","W_5","W_6","W_7","W_8","W_9","W_10","W_11","W_12","W_13","W_14","W_15","W_16","W_17","W_18","W_19","W_20","W_21","W_22","W_23",
"W_24","W_25","W_26","W_27","W_28","W_29","W_30","W_31","W_32","W_33","W_34","W_35","W_36","W_37","W_38","W_39","W_40","W_41","W_42","W_43","W_44","W_45","W_46","W_47"};



enum kidemli_isci {LW_1,LW_2,LW_3,LW_4,LW_5,LW_6,LW_7,LW_8,LW_9,LW_10};

enum kidemli_isci kidemli;
char *kidemliad[] = {"LW_1","LW_2","LW_3","LW_4","LW_5","LW_6","LW_7","LW_8","LW_9","LW_10"};

*/










main() {
	
	// isci adlarini ekrana yazdirabilmek icin isimleri sayiya cevirdim.
	
enum isciler {W_1,W_2,W_3,W_4,W_5,W_6,W_7,W_8,W_9,W_10,W_11,W_12,W_13,W_14,W_15,W_16,W_17,W_18,W_19,W_20,W_21,W_22,W_23,W_24,W_25,W_26,W_27,W_28,
W_29,W_30,W_31,W_32,W_33,W_34,W_35,W_36,W_37,W_38,W_39,W_40,W_41,W_42,W_43,W_44,W_45,W_46,W_47};

enum isciler isci;

   a_sirketi[0]=isci;
   printf("%d\n", a_sirketi[0] );


char *isciad[] = {"W_1","W_2","W_3","W_4","W_5","W_6","W_7","W_8","W_9","W_10","W_11","W_12","W_13","W_14","W_15","W_16","W_17","W_18","W_19","W_20","W_21","W_22","W_23",
"W_24","W_25","W_26","W_27","W_28","W_29","W_30","W_31","W_32","W_33","W_34","W_35","W_36","W_37","W_38","W_39","W_40","W_41","W_42","W_43","W_44","W_45","W_46","W_47"};


enum kidemli_isci {LW_1,LW_2,LW_3,LW_4,LW_5,LW_6,LW_7,LW_8,LW_9,LW_10};

enum kidemli_isci kidemli;

char *kidemliad[] = {"LW_1","LW_2","LW_3","LW_4","LW_5","LW_6","LW_7","LW_8","LW_9","LW_10"};

   
   
    
   kidemli=LW_1;
     isci=W_1;
      kidemli_deger_tutucu=kidemli;
      isci_deger_tutucu=isci;
   
  
    while(count2<1)
    {
    	count2++;
    	kidemli=kidemli_deger_tutucu;
     	isci=isci_deger_tutucu;
     	
   	    
   //sirket A için isci yerlestirme 
   
  for(count=0;count<1;count++)// count kullanılmasının nedeni isçilerin her zaman değişecek olması
   {
   	 a_sirketi[0]=kidemli;
   	  printf("%s\n", kidemliad[a_sirketi[0]]);
   	  kidemli++;
   	 
     for(count=1;count<5;count++)
   {
   	
   	 a_sirketi[count]=isci;
   	 printf("%s\n", isciad[a_sirketi[count]]);
   	 isci++;
   	 
   	// dizide 47 eleman olduğu için dizi  boyutu asildiginda dizi ilk elemana geri donuyor.
   	 if(isci>46)
   	 isci=0;

   }
   }

 //////////////////////////////////////////// B sirketi isci ataması
    for(count=0;count<1;count++)
   {
   	 b_sirketi[0]=kidemli;
   	  printf("%s\n", kidemliad[b_sirketi[0]]);
   	  kidemli++;
   	 
     for(count=1;count<5;count++)
   {
   	
   	 b_sirketi[count]=isci;
   	 printf("%s\n", isciad[b_sirketi[count]]);
   	 isci++;
     if(isci>46)
   	 isci=0;
   }
   }
   
   //////////////////////////////////////// C sirketi isci ataması
    for(count=0;count<2;count++)
   {
   	 c_sirketi[0]=kidemli;
   	  printf("%s\n", kidemliad[c_sirketi[0]]);
   	  kidemli++;
   }
     for(count=2;count<14;count++)
   {
   	
   	 c_sirketi[count]=isci;
   	 printf("%s\n", isciad[c_sirketi[count]]);
   	 isci++;
      if(isci>46)
   	  isci=0;
   }
   
   
   ///////////////////////////////////////////////////// D sirketi isci ataması
    for(count=0;count<2;count++)
   {
   	 d_sirketi[0]=kidemli;
   	  printf("%s\n", kidemliad[d_sirketi[0]]);
   	  kidemli++;
   }
     for(count=2;count<8;count++)
   {
   	
   	 d_sirketi[count]=isci;
   	 printf("%s\n", isciad[d_sirketi[count]]);
   	 isci++;
      if(isci>46)
   	    isci=0;
   }
   
   ///////////////////////////////////////// e sirketi isci ataması
      for(count=0;count<1;count++)
   {
   	 e_sirketi[0]=kidemli;
   	  printf("%s\n", kidemliad[e_sirketi[0]]);
   	  kidemli++;
   	 
     for(count=1;count<4;count++)
   {
   	
   	 e_sirketi[count]=isci;
   	 printf("%s\n", isciad[e_sirketi[count]]);
   	 isci++;
      if(isci>46)
   	   isci=0;
   }
   }
   
   ////////////////////////////////////////////////// f sirketi isci ataması
      for(count=0;count<1;count++)
   {
   	 f_sirketi[0]=kidemli;
   	  printf("%s\n", kidemliad[f_sirketi[0]]);
   	  kidemli++;
   	 
     for(count=1;count<3;count++)
   {
   	
   	 f_sirketi[count]=isci;
   	 printf("%s\n", isciad[f_sirketi[count]]);
   	 isci++;
      if(isci>46)
   	    isci=0;
   }
   }
   /////////////////////////////////////////////////////// G Sirketi isci ataması
   
        for(count=0;count<1;count++)
   {
   	 g_sirketi[0]=kidemli;
   	  printf("%s\n", kidemliad[g_sirketi[0]]);
   	  
   	 
     for(count=1;count<6;count++)
   {
   	
   	 g_sirketi[count]=isci;
   	 printf("%s\n", isciad[g_sirketi[count]]);
   	 isci++;
     if(isci>46)
   	 isci=0;
   }
   }
   ////////////////////////////// h sirketi isci ataması
        for(count=0;count<1;count++)
   {
   	 h_sirketi[count]=isci;
   	 printf("%s\n", isciad[h_sirketi[count]]);
   	 isci++;
   	  if(isci>46)
   	   isci=0;
     }
   
     //////////////////////////////////////////////////////////// j sirketi isci ataması

        for(count=0;count<1;count++)
   {
   	 j_sirketi[count]=isci;
   	 printf("%s\n", isciad[j_sirketi[count]]);
   	 
     }
     
     
      isci_deger_tutucu+=12;  //iscilerin ayni firmada calismamasi icin minumum degismesi gereken sayi
      
      if(isci_deger_tutucu>46)
   	  isci_deger_tutucu-=47;
   	  
      if(count2%3==0)        // her 3 iterasyonda kidemli iscilerin 2 birim kaydirilmasi gerekir
      kidemli_deger_tutucu+=2;
      
      if(kidemli_deger_tutucu>9)
   	    kidemli_deger_tutucu-=9;
      
      
      
      printf("\n\n\n\n\n");
  }  
  
  
  
  
  
  
     for(count=0;count<1;count++)
     {
     	 printf("|     A     |     B     |     C     |     D     |     E     |     F     |     G     |     H     |     J     |\n");
     	 printf("|___________|___________|___________|___________|___________|___________|___________|___________|___________|\n");
     	
     	////////////////////////////////////////////////// A sirketi iscileri tablo olusturma
     	
     	if(count<1)                                       //elemanlardan once isciler sonra kidemliler yaziliyor.
     	printf("|  %s     ", kidemliad[a_sirketi[count]]);
     	else
     	 printf("|  %s     ", isciad[a_sirketi[count]]);
         
         /////////////////////////////////////////////////////
         if(count<1)
     	printf("|  %s     ", kidemliad[b_sirketi[count]]);
     	else
          printf("%s      ", isciad[b_sirketi[count]]);
          
          /////////////////////////////////////////////////////
          if(count<2)
     	printf("|  %s     ", kidemliad[c_sirketi[count]]);
     	else
          printf("%s      ", isciad[c_sirketi[count]]);
          
          /////////////////////////////////////////////////////
          if(count<2)
     	printf("|  %s     ", kidemliad[d_sirketi[count]]);
     	else
          printf("%s      ", isciad[d_sirketi[count]]);
          
          ////////////////////////////////////////////////////
          
          if(count<1)
     	printf("|  %s     ", kidemliad[e_sirketi[count]]);
     	else
          printf("%s      ", isciad[e_sirketi[count]]);
          
           ////////////////////////////////////////////////
           
           if(count<1)
     	printf("|  %s     ", kidemliad[f_sirketi[count]]);
     	else
          printf("%s      ", isciad[f_sirketi[count]]);
          
          ///////////////////////////////////////////////
          if(count<1)
     	printf("|  %s     ", kidemliad[g_sirketi[count]]);
     	else
          printf("%s      ", isciad[g_sirketi[count]]);
   		   
   		   //////////////////////////////////////////////
   	
   		  printf("%s      ", isciad[h_sirketi[count]]);
   		  
   		  ////////////////////////////////////////////////////
   		 
     	
   		  printf("%s      ", isciad[j_sirketi[count]]);
     	
     	printf("\n|___________|___________|___________|___________|___________|___________|___________|___________|___________|\n");
	 }
	 

}

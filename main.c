#include <stdio.h>
int bisestile(int anno) {
  if (anno % 400 == 0) {
      return 1;
  }
    else if (anno % 100 == 0) {
        return 0;
}
    else if (anno % 4 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int giornidelmese(int anno,int mese) {
    switch (mese) {
        case 11:
            case 4 :
        case 6:
        case 9:
        return 30;
        case 1 :
            case 3:
            case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 2:
            if (bisestile(anno) == 1) {
                return 29;
            }
            else {
                return 28;
            }
        default:
            return -1;
    }

}
    int data(int anno,int mese,int giorni){
        if (giorni < 1 || giorni> giornidelmese(anno,mese)) {
            return 0;


        }
        else if(mese<1 || mese > 12){
            return 0;
        }
        else {
            return 1;
    }
    }
int diffgiorno(int anno,int mese,int giorni,int anno2,int mese2 , int giorni2) {
    if (data(anno,mese,giorni) && data(anno2,mese2,giorni2) == 1) {
        if (anno==anno2) {
            if(mese==mese2){
                if(giorni>=giorni2){
                    return giorni-giorni2;
                }
                     else if(giorni2>=giorni) {
                        return giorni2-giorni;
                    }



            }
            else {
                if( mese>=mese2){
                    return mese-mese2;
                    if(giorni>=giorni2){
                        return giorni-giorni2;
                    }
                    else if(giorni2>=giorni) {
                        return giorni2-giorni;
                    }

        }
                else if(mese2>=mese){
                    return mese2-mese;
        }
                if(giorni>=giorni2){
                    return giorni-giorni2;
                }
                else if(giorni2>=giorni) {
                    return giorni2-giorni;
                }
            }
        }
        else {
            if (anno>=anno2) {
                return anno-anno2;
                if( mese>=mese2){
                    return mese-mese2;

                }
                else if(mese2>=mese){
                    return mese2-mese;
                }
                if(giorni>=giorni2){
                    return giorni-giorni2;
                }
                else if(giorni2>=giorni) {
                    return giorni2-giorni;
                }
            }

    }
            else if(anno2>=anno){
                if( mese>=mese2){
                    return mese-mese2;

                }
                else if(mese2>=mese){
                    return mese2-mese;
                }
                if(giorni>=giorni2){
                    return giorni-giorni2;
                }
                else if(giorni2>=giorni) {
                    return giorni2-giorni;
                }
            }



    }



}






int main(void){
    printf("la differenza !\n");
    int anno,mese,giorni;
    int anno2,mese2,giorni2;
    printf("inserisci anno\n");
    scanf("%d",&anno);
    printf("inserisci mese\n");
    scanf("%d",&mese);
    printf("inserisci giorni\n");
    scanf("%d",&giorni);
    printf("inserisci anno2\n");
    scanf("%d",&anno2);
    printf("inserisci mese2\n");
    scanf("%d",&mese2);
    printf("inserisci giorni2\n");
    scanf("%d",&giorni2);

    printf("%d",diffgiorno( anno, mese,giorni,anno2, mese2 ,giorni2));

    return 0;
}

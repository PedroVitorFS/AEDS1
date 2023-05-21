int eh_primo(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 0;
}
int mdc(int x, int y){
     int divisorx = 0;
    int divisory = 0;
    int menornumero = 0;
    if(x-y >0){
        menornumero = x;
    }else{
        menornumero =y;
    }
    for(int i=menornumero; i>=1; i--){
        if(y%i == 0 && x%i == 0){
            return i;
        }
    }
}

int mmc(int x, int y){
    int count =1;
    while(1){
        if(count%x == 0 && count%y == 0){
            return count;
        }
        count++;
    }
}

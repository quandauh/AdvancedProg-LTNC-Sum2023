Box(int x,int y,int z){
    l=x;
    b=y;
    h=z;
}

Box(Box &temp){
    l=temp.l;
    b=temp.b;
    h=temp.h;
}

int getLength(){
    return l;
}

int getBreadth(){
    return b;
}

int getHeight(){
    return h;
}

long long CalculateVolume(){
    return (l*b*h);
}

bool operator<(Box& bx){
    if(l<bx.l){
        return true;
    }
    if(b<bx.b&&l==bx.l){
        return true;
    }
    if(h<bx.h&&b==bx.b&&l==bx.l){
        return true;
    }
    return false;   
}


//pointer

int i;

void b(){
    printf("%d\n", i);
    return;
}

void (*a(int n)) (){
    i = n;
    return b;
}

int main(){
    void (*(*f)(int n))();
    f = a;
    f(2)();
    return 0;
}

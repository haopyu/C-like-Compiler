//recursive

int fib(int n);
int i;
int main()
{
    fib(10);

    return 0;
}
int fib(int n)
{
    int i;
    if(n>1) {
        return fib(n-1)+fib(n-2);
    }
    else if(n==1) {
        return 1;
    }
    else {
        return 0;
    }
}

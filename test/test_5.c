//optimization

int main()
{
    int c = 1 + 2; //常量压缩
    if (3 * 3 - 9){
        //这个if语句经过常量压缩，死代码消除后，会被剪掉
    }

    if (1){
        c = 2;
        //这个复合语句会替换掉if语句
    }
    else{
        c = 3;
        //这个复合语句会被剪掉
    }

    if(c){
        return 0;
        c = c + 1;  //return后的语句被删除
    }
    return 1;
}

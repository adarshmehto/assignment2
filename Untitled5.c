int main()
{
    int x,s;
    scanf("%d",&x);
    s=(x%10)+(x/10%10)+(x/100%100);
    printf("Sum is %d",s);
}

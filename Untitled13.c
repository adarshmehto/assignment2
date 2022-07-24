int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    x=(x%10)*100+(x/10);
    printf("%d",x);
}

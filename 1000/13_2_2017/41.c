float phanso(int n)
{
    if(n==0) return 0;
    else return 1/(1+phanso(n-1));
}

// usage : gcc -S assembly.c -o assembly.s
// and comparae assembly.c and assembly.s
int main()
{
int i;
int sum = 0;

for (i = 1; i <= 100; i++){
    sum += i;
}

}


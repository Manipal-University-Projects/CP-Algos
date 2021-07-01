
1)
isdigit()

for (int i=0; i<strlen(str); i++)
    {
        if (isdigit(str[i]))
            cout << str[i] << " ";
    }


2)
stoi(): string to integer, ig the value provided  contains other characters then 
        it retains only the int part
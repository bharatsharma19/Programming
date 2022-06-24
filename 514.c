#include <stdio.h>

struct customer
{
    int accno;
    char name[30];
    float balance;
};
struct trans
{
    int accno;
    char trans_type;
    float amount;
};

int main()
{
    struct customer s;
    struct trans ss;
    FILE *fs, *ft;
    int slen = sizeof(struct customer);
    fs = fopen("TRANSACTION.DAT", "rb");
    if (fs == NULL)
    {
        puts("Cannot open file: TRANSACTION.DAT\n");
        exit(1);
    }
    ft = fopen("CUSTOMER.DAT", "rb+");
    if (ft == NULL)
    {
        puts("Cannot open file: CUSTOMER.DAT\n");
        fclose(fs);
        exit(2);
    }
    while (fread(&ss, sizeof(ss), 1, fs) == 1)
    {
        fseek(ft, 0, SEEK_SET);
        while (fread(&s, slen, 1, ft) == 1)
        {
            if (s.accno == ss.accno)
            {
                if (ss.trans_type == 'D')
                    s.balance += ss.amount;
                else
                {
                    if ((ss.trans_type == 'W') &&
                        (s.balance - ss.amount > 100))
                        s.balance -= ss.amount;
                    else
                        s.balance = 100;
                }
                fseek(ft, -slen, SEEK_CUR);
                fwrite(&s, slen, 1, ft);
                break;
            }
        }
    }
    fclose(fs);
    fclose(ft);

    return 0;
}

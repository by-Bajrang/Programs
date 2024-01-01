int space = (2 * n - 2 * i);
if (i > n)
{
    space = 4; // simplified to directly set space to 4
}
for (int j = 1; j <= space; j++)
{
    cout << " ";
}

// No need to recalculate star here, it can be removed
// if (i > n)
// {
//     star = (2 * n - i);
// }

// star
for (int j = 1; j <= star; j++)
{
    cout << "*";
}


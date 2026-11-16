void change_system_clock(int system_clock);

//CTE: undefined reference to `change_system_clock'
// bcs this above method is now static

//This is function definition
void file1_myFun1(void)
{
    change_system_clock(23);
}
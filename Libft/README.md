
# Printf Project

I achieved **125%** with this version of **Printf (Printf_With_Bonus)**! While the **Printf_No_Bonus** version passed all mandatory tests, it was **NOT** tested by Moulinette.

## Acknowledgments

This project was inspired by [IanToujou's Printf](https://github.com/IanToujou/School-42/tree/master/Core/PrintF). I adapted some concepts from his work to enhance my implementation. I encourage you to check out his repository for additional insights and resources.

## Testing Instructions

For testing, I used [SLDDL's Normino](https://github.com/SLDDL/Normino), a convenient, no-installation-required tester. Follow these steps to set up and run the tests:

1. **Run Normino**
   
   In your **libft** directory, execute the following command, then follow the on-screen instructions to download the tester (press: `5 -> Enter -> 1 -> Enter`).

   ```bash
   curl smasse.xyz | bash
   ```

2. **Add Dynamic Library Compilation Rule to Your Makefile**

   Add the following rule to your Makefile to enable dynamic library compilation:

   ```makefile
   so:
       $(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
       $(CC) -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)
   ```

3. **Clean Up Before Running Tests**

   Run `make fclean` and delete any existing `libft.so` file before each test run to avoid conflicts.

4. **Run Testers**

   Navigate to the test folder you want to use, and run `make` to start testing. Remember to perform **Step 3** before each test run.

5. **Cleanup After Testing**

   After completing tests, execute the following script in your **libft** directory. This will remove the tester files and run `fclean`:

   ```bash
   bash removetests.sh
   ```

   Additionally, delete any `a.out` file generated by the testers. Verify there are no extra files in your repository before submitting your project to maintain a clean workspace.

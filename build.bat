:: CLI_IN_C BUILD.BAT FILE
:: By WiiTeo

:: Require MinGW GCC to work.

echo Build.
mkdir build
cd source
gcc cli.c -o cli.exe

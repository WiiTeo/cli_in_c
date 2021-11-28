# CLI_IN_C BUILD.SH FILE
# By WiiTeo

clear
echo Build.

mkdir build

cd source
gcc source.c -o source.elf

cp source.elf ../build/

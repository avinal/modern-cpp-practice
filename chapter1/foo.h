/*
 * /mnt/z/my_git/modern-cpp-practice/chapter1/foo.h
 * @author Avinal Kumar
 * @since December 04, 2020
 *
 * C header file
*/

#ifdef __cplusplus
// define C code
extern "C"
{
#endif
    int add(int x, int y);
#ifdef __cplusplus
}
#endif
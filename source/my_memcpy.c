/*
 * my_memcpy.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>

/*
 * This function copies n bytes from src to dest,
 * and returns dest.
 *
 */

/* Note: optimizations are more than welcome! */
void *my_memcpy(void *dest, const void *src, const size_t n)
{
  size_t count;

  count = 0;
  while (count < n)
  {
    *(((char *)dest) + count) = *(((char *)src) + count);
    ++count;
  }
  return (dest);
}

/* Part of Scheme 48 1.9.  See file COPYING for notices and license.
 *
 * Authors: Mike Sperber
 */

#include "scheme48.h"
#include "sysdep.h"

void
s48_init_sysexits(void)
{
  /* For SRFI 22 */
  s48_define_exported_binding("EX_SOFTWARE", s48_enter_integer(EX_SOFTWARE));
}

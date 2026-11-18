# **************************************************************************** #
#                                                                              #
#                                                            +#                #
#    test_link.py                                           +##                #
#                                                         +###+                #
#    By: lucas <lucas@tsiaraso.com>                     +########+             #
#                                                           +###+              #
#    Created: 2026/11/18 07:25:00 by lucas                   ##+               #
#    Updated: 2026/11/18 07:25:00 by lucas                  #+                 #
#                                                                              #
# **************************************************************************** #

import subprocess
import tempfile
import unittest


class TestLibftE2E(unittest.TestCase):
    """End-to-end consumer link test for libft.a."""

    def test_consumer_links_and_runs(self) -> None:
        code = (
            '#include "libft.h"\n'
            'int main(void) { ft_putendl_fd("OK_LIBFT", 1); return 0; }\n'
        )
        with tempfile.TemporaryDirectory() as tmp:
            src = f"{tmp}/app.c"
            exe = f"{tmp}/app"
            with open(src, "w", encoding="utf-8") as fh:
                fh.write(code)
            subprocess.run(
                ["cc", "-Wall", "-Wextra", "-Werror", "-I.", src, "libft.a", "-o", exe],
                check=True,
            )
            res = subprocess.run([exe], capture_output=True, text=True, check=True)
            self.assertEqual(res.stdout, "OK_LIBFT\n")

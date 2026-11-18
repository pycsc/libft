# **************************************************************************** #
#                                                                              #
#                                                            +#                #
#    test_build.py                                          +##                #
#                                                         +###+                #
#    By: lucas <lucas@tsiaraso.com>                     +########+             #
#                                                           +###+              #
#    Created: 2026/11/18 07:25:00 by lucas                   ##+               #
#    Updated: 2026/11/18 07:25:00 by lucas                  #+                 #
#                                                                              #
# **************************************************************************** #

import os
import subprocess
import unittest


class TestLibftBuild(unittest.TestCase):
    """Integration test for libft Makefile build."""

    def test_make_re_and_bonus_produces_archive(self) -> None:
        subprocess.run(["make", "re"], check=True, capture_output=True)
        subprocess.run(["make", "bonus"], check=True, capture_output=True)
        self.assertTrue(os.path.isfile("libft.a"))

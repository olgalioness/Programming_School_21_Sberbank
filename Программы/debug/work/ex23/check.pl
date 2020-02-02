#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex23/main';
						my $output;
						my $expected;
						die "ex23/main failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = 
'00000000: 6173 6466 6173 6466 7177 6572 7479 7479 asdfasdfqwertyty
00000010: 7a78 6376 7a78 6376 0000 ff7f 01        zxcvzxcv.....
';

						


						if ($output eq $expected) {
							say 'work/ex23/main good!';
						} else {
							say "!!!! ERROR in work/ex23/main: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					
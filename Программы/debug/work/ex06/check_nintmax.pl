#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex06/main_nintmax';
						my $output;
						my $expected;
						die "ex06/main_nintmax failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = -2147483648;

						


						if ($output eq $expected) {
							say 'work/ex06/main_nintmax good!';
						} else {
							say "!!!! ERROR in work/ex06/main_nintmax: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					
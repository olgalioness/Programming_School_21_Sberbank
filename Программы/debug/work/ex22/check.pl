#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex22/main';
						my $output;
						my $expected;
						die "ex22/main failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = 'asdf\\7f\\1fhi\\01\\fflol';

						


						if ($output eq $expected) {
							say 'work/ex22/main good!';
						} else {
							say "!!!! ERROR in work/ex22/main: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					
#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex06/main_zero';
						my $output;
						my $expected;
						die "ex06/main_zero failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = '0';

						


						if ($output eq $expected) {
							say 'work/ex06/main_zero good!';
						} else {
							say "!!!! ERROR in work/ex06/main_zero: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					
#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex07/main_comb1';
						my $output;
						my $expected;
						die "ex07/main_comb1 failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = join ', ', '0' .. '9';

						


						if ($output eq $expected) {
							say 'work/ex07/main_comb1 good!';
						} else {
							say "!!!! ERROR in work/ex07/main_comb1: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					
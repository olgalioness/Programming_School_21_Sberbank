#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex01/main';
						my $output;
						my $expected;
						die "ex01/main failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = join '', reverse 'a' .. 'z';

						


						if ($output eq $expected) {
							say 'work/ex01/main good!';
						} else {
							say "!!!! ERROR in work/ex01/main: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					
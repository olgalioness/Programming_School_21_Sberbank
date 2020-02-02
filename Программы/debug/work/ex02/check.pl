#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex02/main';
						my $output;
						my $expected;
						die "ex02/main failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = join '', '0' .. '9';

						


						if ($output eq $expected) {
							say 'work/ex02/main good!';
						} else {
							say "!!!! ERROR in work/ex02/main: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					
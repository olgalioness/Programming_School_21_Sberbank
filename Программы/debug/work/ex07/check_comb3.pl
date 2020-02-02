#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex07/main_comb3';
						my $output;
						my $expected;
						die "ex07/main_comb3 failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = join ', ',
	grep {
		my ($a, $b, $c) = split '', $_;
		$a < $b and $b < $c
	}
	'000' .. '999';

						


						if ($output eq $expected) {
							say 'work/ex07/main_comb3 good!';
						} else {
							say "!!!! ERROR in work/ex07/main_comb3: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					
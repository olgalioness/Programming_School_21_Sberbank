#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex07/main_comb2';
						my $output;
						my $expected;
						die "ex07/main_comb2 failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = join ', ',
	grep {
		my ($a, $b) = split '', $_;
		$a < $b
	}
	'00' .. '99';

						


						if ($output eq $expected) {
							say 'work/ex07/main_comb2 good!';
						} else {
							say "!!!! ERROR in work/ex07/main_comb2: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					